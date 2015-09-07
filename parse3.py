#!/usr/bin/env python
from __future__ import print_function
import argparse
import logging
import clang.cindex as ci
import os.path
import yaml
import sys
import IPython

LOG_SEVERITY_MAP = {
    ci.Diagnostic.Ignored: logging.INFO,
    ci.Diagnostic.Note: logging.INFO,
    ci.Diagnostic.Warning: logging.WARNING,
    ci.Diagnostic.Error: logging.ERROR,
    ci.Diagnostic.Fatal: logging.FATAL,
}

logger = logging.getLogger()
logging.basicConfig()


class Entity(object):
    def __init__(self, cursor):
        self.cursor = cursor
        self.lexical_parent = None
        self.lexical_children = set()

    def __repr__(self):
        return '{:s}({:s})'.format(
            self.__class__.__name__, self.cursor.spelling)

    def add_child(self, entity):
        assert entity.lexical_parent is None
        self.lexical_children.add(entity)
        entity.lexical_parent = self

    def remove_child(self, entity):
        assert entity.lexical_parent is self
        self.lexical_children.remove(entity)
        entity.lexical_parent = None

    @property
    def key(self):
        return self.cursor.spelling

    @property
    def qualified_key(self):
        if self.lexical_parent is not None:
            return self.lexical_parent.qualified_key + '::' + self.key
        else:
            return self.key


class Root(Entity):
    @property
    def key(self):
        return ''


class Namespace(Entity):
    pass


class Class(Entity):
    @property
    def key(self):
        return self.cursor.type.spelling


class ClassTemplate(Entity):
    def __init__(self, cursor):
        super(ClassTemplate, self).__init__(cursor)
        self.specializations = set()

    @property
    def key(self):
        return self.get_key(self.cursor)

    @classmethod
    def get_key(cls, cursor):
        assert cursor.kind == ci.CursorKind.CLASS_TEMPLATE
        return cursor.displayname

    def add_specialization(self, specialization):
        self.specializations.add(specialization)
        specialization.generic_template = self


class ClassTemplateSpecialization(Entity):
    def __init__(self, cursor):
        super(ClassTemplateSpecialization, self).__init__(cursor)
        self.generic_template = None

    @property
    def template_type(self):
        return ci.conf.lib.clang_getSpecializedCursorTemplate(self.cursor)

    pass


class Function(Entity):
    # TODO: Key should include the function signature.

    @property
    def is_member(self):
        return self.parent is not None and isinstance(self.parent, Class)

    # TODO: Key needs to include the signature.


class FunctionTemplate(Entity):
    # TODO: Key should include the function signature.

    def __init__(self, cursor):
        super(FunctionTemplate, self).__init__(cursor)
        self.specializations = set()

    @property
    def key(self):
        return self.get_key(self.cursor)

    @classmethod
    def get_key(cls, cursor):
        assert cursor.kind == ci.CursorKind.FUNCTION_TEMPLATE
        return cursor.displayname

    def add_specialization(self, specialization):
        self.specializations.add(specialization)
        specialization.generic_template = self


class FunctionTemplateSpecialization(Entity):
    # TODO: Key should include the value of the template parameters.
    # TODO: Key should include the function signature.

    def __init__(self, cursor):
        super(FunctionTemplateSpecialization, self).__init__(cursor)
        self.generic_template = None

    @property
    def template_type(self):
        return ci.conf.lib.clang_getSpecializedCursorTemplate(self.cursor)


class Variable(Entity):
    pass


def convert(cursor):
    CONVERSION_MAP = {
        ci.CursorKind.FIELD_DECL: Variable,
        ci.CursorKind.VAR_DECL: Variable,
    }

    if cursor.kind == ci.CursorKind.TRANSLATION_UNIT:
        return Root(cursor)
    elif cursor.kind == ci.CursorKind.NAMESPACE:
        return Namespace(cursor)
    elif cursor.kind in [ci.CursorKind.CLASS_DECL,
                         ci.CursorKind.STRUCT_DECL,
                         ci.CursorKind.UNION_DECL]:
        # Differentiate between declarations of classes and the instantiation
        # of a template class.
        if ci.conf.lib.clang_Type_getNumTemplateArguments(cursor.type) == -1:
            return Class(cursor)
        else:
            return ClassTemplateSpecialization(cursor)
    elif cursor.kind == ci.CursorKind.CLASS_TEMPLATE:
        return ClassTemplate(cursor)
    elif cursor.kind in [ci.CursorKind.CXX_METHOD,
                         ci.CursorKind.FUNCTION_DECL]:
        # Ignore out-of-line definitions of member functions. An out-of-line
        # will not be a lexical child of the class declaration.
        if cursor.semantic_parent != cursor.lexical_parent:
            return None

        # Differentiate between function declarations and the instantiation of
        # a template function.
        if ci.conf.lib.clang_Cursor_getNumTemplateArguments(cursor) == -1:
            return Function(cursor)
        else:
            return FunctionTemplateSpecialization(cursor)
    elif cursor.kind == ci.CursorKind.FUNCTION_TEMPLATE:
        return FunctionTemplate(cursor)
    elif cursor.kind in [ci.CursorKind.FIELD_DECL,
                         ci.CursorKind.VAR_DECL]:
        return Variable(cursor)
    else:
        return None


def dump_ast(cursor, depth=0):
    print((' ' * depth) + cursor.kind.name + ' ' + cursor.displayname)

    for child in cursor.get_children():
        dump_ast(child, depth + 1)


class Parser(object):
    def __init__(self):
        self.root_entity = None
        self.class_templates = dict()
        self.function_templates = dict()

    def parse(self, cursor):
        self.root_entity = self._parse_impl(cursor, None)

        self._coalesce_namespaces(self.root_entity)
        self._filter_access(self.root_entity, [
            ci.AccessSpecifier.INVALID,
            ci.AccessSpecifier.NONE,
            ci.AccessSpecifier.PUBLIC
        ])
        self._collate_specializations(self.root_entity,
            ClassTemplate, ClassTemplateSpecialization)
        self._collate_specializations(self.root_entity,
            FunctionTemplate, FunctionTemplateSpecialization)

    def _parse_impl(self, cursor, lexical_parent):
        entity = convert(cursor)

        if entity is not None:
            for child_cursor in cursor.get_children():
                child_entity = self._parse_impl(child_cursor, entity)
                if child_entity is not None:
                    entity.add_child(child_entity)

        return entity

    def print_tree(self):
        self._print_tree_impl(self.root_entity, 0)

    def _print_tree_impl(self, entity, depth):
        print('{indent:s}+ {entity:s} <- {key:s}'.format(
            indent=' ' * depth,
            entity=repr(entity),
            key=entity.key))

        for specialization in getattr(entity, 'specializations', []):
            print('{indent:s}~ {specialization:s}'.format(
                indent=' ' * (depth + 1),
                specialization=repr(specialization)))

        for child_entity in entity.lexical_children:
            self._print_tree_impl(child_entity, depth + 1)

    def _coalesce_namespaces(self, entity):
        """ Coalesce namespace reference to one canonical instance. """
        from collections import defaultdict

        # Group namespaces by name.
        namespace_groups = defaultdict(list)
        non_namespaces = set()

        for child_entity in entity.lexical_children:
            if isinstance(child_entity, Namespace):
                namespace_groups[child_entity.key].append(child_entity)
            else:
                non_namespaces.add(child_entity)

        # Temporarily remove all namespace children.
        for child_entity in list(entity.lexical_children):
            if child_entity not in non_namespaces:
                entity.remove_child(child_entity)

        for namespaces in namespace_groups.itervalues():
            canonical_namespace = namespaces.pop(0)

            # Move the children of the other namespaces to the new parent.
            for namespace in namespaces:
                for child_entity in list(namespace.lexical_children):
                    namespace.remove_child(child_entity)
                    canonical_namespace.add_child(child_entity)

            # Recursively coalesce child namespaces.
            self._coalesce_namespaces(canonical_namespace)

            entity.add_child(canonical_namespace)

    def _get_by_type(self, entity, type):
        results = []

        if isinstance(entity, type):
            results.append(entity)

        for child_entity in entity.lexical_children:
            results += self._get_by_type(child_entity, type)

        return results

    def _collate_specializations(self, entity, template_type, specialization_type):
        """ Collate template specializations into ther template entity. """
        templates = {
            e.key: e for e in self._get_by_type(entity, template_type) }
        specializations = self._get_by_type(entity, specialization_type)

        for specialization in specializations:
            key = template_type.get_key(specialization.template_type)
            templates[key].add_specialization(specialization)

            if specialization.lexical_parent is not None:
                specialization.lexical_parent.remove_child(specialization)

    def _filter_access(self, entity, access_levels):
        for child_entity in list(entity.lexical_children):
            if child_entity.cursor.access_specifier in access_levels:
                self._filter_access(child_entity, access_levels)
            else:
                entity.remove_child(child_entity)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--base-path', type=str)
    parser.add_argument('input_file', type=str)
    args = parser.parse_args()

    # Load metadata from disk.
    try:
        with open(args.input_file, 'r') as input_file:
            metadata = yaml.load(input_file)
    except IOError as e:
        logger.fatal('Failed loading configuration file "%s": %s.',
            args.input_file, e.message)
        return 1

    if 'compiler' in metadata:
        llvm_flags = metadata['compiler'].get('llvm_flags', ['-x', 'c++'])
        if not isinstance(llvm_flags, list):
            logger.fatal('Configuration option "compiler.flags" is not a list;'
                         ' got "%s" instead.', type(llvm_flags).__name__)
            return 1

        if 'llvm_path' in metadata['compiler']:
            ci.Config.set_library_path(metadata['compiler']['llvm_path'])

    if args.base_path is not None:
        header_path = os.path.join(args.base_path, metadata['header'])
    else:
        header_path = metadata['header']

    if not os.path.exists(header_path):
        logger.warning('Header file "%s" does not exist.', header_path)

    # Parse the header file.
    try:
        tu = ci.TranslationUnit.from_source(header_path, llvm_flags)
    except ci.LibclangError as e:
        logger.fatal(
            'Failed loading libclang. Use the "compiler.llvm_flags" option'
            'to specify the path to the directory containing libclang.')
        return 1
    except ci.TranslationUnitLoadError as e:
        logger.fatal('Failed loading file "%s" using Clang: %s',
            header_path, e.message)
        return 1

    for diag in tu.diagnostics:
        level = LOG_SEVERITY_MAP.get(diag.severity, logging.WARNING)
        if diag.location.file is not None:
            logger.log(level, '%s:%d:%d: %s',
                os.path.basename(diag.location.file.name),
                diag.location.line, diag.location.column,
                diag.spelling)
        else:
            logger.log(level, '<unknown>: %s', diag.spelling)

    parser = Parser()
    parser.parse(tu.cursor)
    parser.print_tree()


if __name__ == '__main__':
    main()

