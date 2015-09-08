#!/usr/bin/env python
from __future__ import print_function
import argparse
import cindex as ci
import logging
import os.path
import sys
import yaml


# LIMITATIONS
# - Template specializations are ignored.
# - Only literals are supported for non-type template arguments.
# - Function signatures are compared by strict string equality.
# - Explicit instantiation of template functions are ignored.


ERROR_SEVERITIES = [ci.Diagnostic.Error, ci.Diagnostic.Fatal]
LOG_SEVERITY_MAP = {
    ci.Diagnostic.Ignored: logging.INFO,
    ci.Diagnostic.Note: logging.INFO,
    ci.Diagnostic.Warning: logging.WARNING,
    ci.Diagnostic.Error: logging.ERROR,
    ci.Diagnostic.Fatal: logging.FATAL,
}
logger = logging.getLogger()


class Entity(object):
    def __init__(self, cursor):
        self.cursor = cursor
        self.lexical_parent = None
        self._lexical_children = set()

    def __repr__(self):
        return '{:s}({:s})'.format(
            self.__class__.__name__, self.cursor.spelling)

    @property
    def lexical_children(self):
        return list(self._lexical_children)

    def add_child(self, entity):
        assert entity.lexical_parent is None
        self._lexical_children.add(entity)
        entity.lexical_parent = self

    def remove_child(self, entity):
        assert entity.lexical_parent is self
        self._lexical_children.remove(entity)
        entity.lexical_parent = None


class Root(Entity):
    KINDS = [ci.CursorKind.TRANSLATION_UNIT]

    @property
    def key(self):
        return ''


class Namespace(Entity):
    KINDS = [ci.CursorKind.NAMESPACE]

    @property
    def key(self):
        if self.lexical_parent:
            return self.lexical_parent.key + '::' + self.cursor.spelling
        else:
            return self.cursor.spelling


class Class(Entity):
    KINDS = [
        ci.CursorKind.CLASS_DECL,
        ci.CursorKind.STRUCT_DECL,
        ci.CursorKind.UNION_DECL,
    ]

    @property
    def is_template(self):
        return self.num_template_arguments is not None

    @property
    def num_template_arguments(self):
        n = ci.conf.lib.clang_Type_getNumTemplateArguments(self.cursor.type)
        return (n if n != -1 else None)

    @property
    def template_type(self):
        # TODO: This doesn't return the parent specialization.
        return ci.conf.lib.clang_getSpecializedCursorTemplate(self.cursor)

    @property
    def template_arguments(self):
        # Get template type arguments. Non-type template arguments return an
        # INVALID placeholder, which we fill in below.
        template_types = [
            ci.conf.lib.clang_Type_getTemplateArgumentAsType(
                self.cursor.type, i)
            for i in xrange(self.num_template_arguments)
        ]

        # Get non-type template arguments. There isn't a libclang function for
        # querying these, so we have to process the AST. We assume that any
        # literal-like values that are a direct child of the CLASS_DECL node
        # are non-type template arguments.
        template_values = []
        for child_cursor in self.cursor.get_children():
            if child_cursor.kind == ci.CursorKind.INTEGER_LITERAL:
                value = list(child_cursor.get_tokens())[0]
                template_values.append(value)

            #raise ValueError(
            #    'Found non-type template argument of type "{type:s}" in'
            #    ' instantiation of template class "{class_type:s}". Only'
            #    ' integer literals are supported.'.format(
            #        type=child_cursor.kind.name,
            #        class_type=self.cursor.spelling))

        # Replace INVALID types with the non-type template argument values.
        num_nontype_arguments = len([
            x for x in template_types if x.kind == ci.TypeKind.INVALID])

        if len(template_values) != num_nontype_arguments:
            raise ValueError(
                'Found {actual:d} values for non-type template arguments, but'
                ' there are only {expected} non-type arguments.'.format(
                    actual=len(template_values),
                    expected=num_nontype_arguments))

        return [
            (template_values.pop(0)
             if template_type.kind == ci.TypeKind.INVALID else
             template_type)
            for template_type in template_types ]

    @property
    def key(self):
        if self.is_template:
            name = '{class_name:s}<{template_arguments:s}>'.format(
                class_name=self.cursor.spelling,
                template_arguments=', '.join(
                    x.spelling for x in self.template_arguments))
        else:
            name = self.cursor.spelling

        if self.cursor.lexical_parent is None:
            return name
        else:
            return self.lexical_parent.key + '::' + name

    def instantiate(self):
        pass # TODO: Copy methods from self.template_class.


class Function(Entity):
    KINDS = [ci.CursorKind.CXX_METHOD, ci.CursorKind.FUNCTION_DECL]

    @property
    def is_const(self):
        return ci.conf.lib.clang_CXXMethod_isConst(self.cursor)

    @property
    def is_static(self):
        return ci.conf.lib.clang_CXXMethod_isStatic(self.cursor)

    @property
    def is_template(self):
        return self.template_class is not None

    @property
    def template_class(self):
        return ci.conf.lib.clang_getSpecializedCursorTemplate(self.cursor)

    @property
    def template_arguments(self):
        arguments = []

        for i in xrange(self.cursor.get_num_template_arguments()):
            kind = self.cursor.get_template_argument_kind(i)

            if kind == ci.TemplateArgumentKind.TYPE:
                argument = self.cursor.get_template_argument_type(i)
            elif kind == ci.TemplateArgumentKind.INTEGRAL:
                argument = self.cursor.get_template_argument_value(i)
            elif kind == ci.TemplateArgumentKind.NULLPTR:
                argument = 'nullptr'
            elif kind == ci.TemplateArgumentKind.NULL:
                raise ValueError(
                    'Unable to deduce type of template argument {index:d}'
                    ' on function "{function_name:s}".'.format(
                        index=i, function_name=self.displayname))

            arguments.append(argument)

        return arguments

    @property
    def key(self):
        def to_str(arg):
            if isinstance(arg, ci.Type):
                return arg.spelling
            else:
                return str(arg)

        # Fully-qualified name.
        if self.cursor.lexical_parent is None:
            base_name = self.cursor.spelling
        else:
            base_name = self.lexical_parent.key + '::' + self.cursor.spelling

        # Template arguments.
        if self.is_template:
            name = '{name:s}<{args:s}>'.format(
                name=base_name,
                args=', '.join(to_str(x) for x in self.template_arguments))
        else:
            name = base_name

        # Function arguments.
        arguments = [
            ('{:s} {:s}'.format(arg.type.spelling, arg.spelling)
             if arg.spelling else arg.type.spelling)
            for arg in self.cursor.get_arguments()
        ]

        return '{return_type:s} {name:s}({arguments:s}){const:s}'.format(
            return_type=self.cursor.result_type.spelling,
            name=name,
            arguments=', '.join(arguments),
            const=' const' if self.is_const else '')


class Variable(Entity):
    KINDS = [ci.CursorKind.FIELD_DECL, ci.CursorKind.VAR_DECL]

    @property
    def key(self):
        if self.lexical_parent:
            return self.lexical_parent.key + '::' + self.cursor.spelling
        else:
            return self.cursor.spelling


def convert(cursor):
    if cursor.kind in Root.KINDS:
        return Root(cursor)
    elif cursor.kind in Namespace.KINDS:
        return Namespace(cursor)
    elif cursor.kind in Class.KINDS:
        #if ci.conf.lib.clang_Type_getNumTemplateArguments(cursor.type) == -1:
        return Class(cursor)
    elif cursor.kind in Function.KINDS:
        entity = Function(cursor)

        # Ignore out-of-line definitions of member functions. An out-of-line
        # will not be a lexical child of the class declaration.
        if cursor.semantic_parent != cursor.lexical_parent:
            # Output all template member function instantiations, since we'll
            # coalesce them later.
            if not entity.is_template:
                return None

        return entity
    elif cursor.kind in Variable.KINDS:
        return Variable(cursor)
    else:
        return None


def parse(cursor):
    def parse_impl(cursor, lexical_parent):
        entity = convert(cursor)

        if entity is not None:
            for child_cursor in cursor.get_children():
                child_entity = parse_impl(child_cursor, entity)
                if child_entity is not None:
                    entity.add_child(child_entity)

        return entity

    root_entity = parse_impl(cursor, None)
    coalesce_namespaces(root_entity)
    remove_inaccessible(root_entity)
    return root_entity


def coalesce_namespaces(entity):
    """ Coalesce duplicate namespace to one canonical instance. """
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
        coalesce_namespaces(canonical_namespace)

        entity.add_child(canonical_namespace)


def remove_inaccessible(entity):
    """ Remove protected and private entities. """
    PUBLIC_LEVELS = [
        ci.AccessSpecifier.INVALID,
        ci.AccessSpecifier.NONE,
        ci.AccessSpecifier.PUBLIC
    ]

    for child_entity in list(entity.lexical_children):
        if child_entity.cursor.access_specifier in PUBLIC_LEVELS:
            remove_inaccessible(child_entity)
        else:
            entity.remove_child(child_entity)


def print_entities(entity, depth=0):
    print((' ' * depth) + repr(entity) + ' ' + entity.key)
    for child_entity in entity.lexical_children:
        print_entities(child_entity, depth + 1)


def print_ast(cursor, depth=0):
    print((' ' * depth) + cursor.kind.name, cursor.spelling)
    for child_cursor in cursor.get_children():
        print_ast(child_cursor, depth + 1)


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

    is_error = False
    for diag in tu.diagnostics:
        level = LOG_SEVERITY_MAP.get(diag.severity, logging.WARNING)
        is_error = is_error or diag.severity in ERROR_SEVERITIES

        if diag.location.file is not None:
            logger.log(level, '%s:%d:%d: %s',
                os.path.basename(diag.location.file.name),
                diag.location.line, diag.location.column,
                diag.spelling)
        else:
            logger.log(level, '<unknown>: %s', diag.spelling)

    if is_error:
        return 1

    print('---')
    print_ast(tu.cursor)
    print('---')

    root_entity = parse(tu.cursor)
    print_entities(root_entity)

    #parser = Parser()
    #root_entity = parser.parse(tu.cursor)
    #import IPython; IPython.embed()

    return 0


if __name__ == '__main__':
    try:
        import colorlog
        colorlog.basicConfig()
    except ImportError:
        logging.basicConfig()
        logger.warning('Install "colorlog" to colorize log messages.')

    sys.exit(main())
