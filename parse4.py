#!/usr/bin/env python
from __future__ import print_function
import argparse
import cindex as ci
import logging
import os.path
import re
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


def indent(line, depth):
    return (' ' * depth) + line


class Entity(object):
    def __init__(self, cursor):
        self.cursor = cursor
        self.lexical_parent = None
        self._lexical_children = set()

    def __repr__(self):
        return '{:s}({:s})'.format(
            self.__class__.__name__, self.cursor.spelling)

    @property
    def name(self):
        return self.cursor.spelling

    @property
    def qualified_name(self):
        if self.lexical_parent is None:
            return self.name
        else:
            return self.lexical_parent.qualified_name + '::' + self.name

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
    def name(self):
        return ''

    @property
    def qualified_name(self):
        return ''

    @property
    def key(self):
        return ''

    def emit(self, file, depth=0):
        # TODO: Don't hard-code the name root_namespace.
        # TODO: Don't hard-code the header path.
        file.write(
            '#include <boost/python.hpp>\n'
            '#include <dart/config.h>\n'
            '#include <dart/common/common.h>\n'
            '#include <dart/dynamics/dynamics.h>\n'
            '#include <dart/math/math.h>\n'
            '#include <dart/optimizer/optimizer.h>\n'
            '\n'
            'BOOST_PYTHON_MODULE(module)\n'
            '{\n')

        for child in self.lexical_children:
            child.emit(file, depth + 1)

        file.write('}\n')


class Namespace(Entity):
    KINDS = [ci.CursorKind.NAMESPACE]

    @property
    def key(self):
        if self.lexical_parent:
            return self.lexical_parent.key + '::' + self.cursor.spelling
        else:
            return self.cursor.spelling

    def emit(self, file, depth=0):
        file.write(
            '{{\n'
            'const ::std::string nested_name = ::boost::python::extract<'
                '::std::string>(boost::python::scope().attr("__name__")'
                    ' + ".{name:s}");\n'
            '::boost::python::object nested_module(boost::python::handle<>('
                'boost::python::borrowed(::PyImport_AddModule('
                    'nested_name.c_str()))));\n'
            '::boost::python::scope().attr("{name:s}") = nested_module;\n'
            '::boost::python::scope nested_scope = nested_module;\n'
            .format(name=self.cursor.spelling)
        )

        for child in self.lexical_children:
            child.emit(file, depth + 1)

        file.write('}\n')


class Class(Entity):
    KINDS = [
        ci.CursorKind.CLASS_DECL,
        ci.CursorKind.STRUCT_DECL,
        ci.CursorKind.UNION_DECL,
    ]

    @property
    def key(self):
        return self.qualified_name

    @property
    def name(self):
        if self.is_template:
            return '{class_name:s}<{template_arguments:s}>'.format(
                class_name=self.cursor.spelling,
                template_arguments=', '.join(
                    x.spelling for x in self.template_arguments))
        else:
            return self.cursor.spelling

    @property
    def is_template(self):
        return self.num_template_arguments is not None

    @property
    def num_template_arguments(self):
        n = ci.conf.lib.clang_Type_getNumTemplateArguments(self.cursor.type)
        return (n if n != -1 else None)

    @property
    def template_type(self):
        return ci.conf.lib.clang_getSpecializedCursorTemplate(self.cursor)

    @property
    def template_arguments(self):
        if not self.is_template:
            return None

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
            logger.warning(
                'Found %d values for non-type template arguments, but there'
                ' are only % non-type arguments.',
                len(template_values), num_nontype_arguments)
            return []

        return [
            (template_values.pop(0)
             if template_type.kind == ci.TypeKind.INVALID else
             template_type)
            for template_type in template_types ]

    def emit(self, file, depth=0):
        class_args = [self.key]

        # TODO: Use properties associated with this class.
        """
        if self.properties.held_type:
            class_args.append(self.properties.held_type)
        if self.properties.noncopyable:
            class_args.append('::boost::noncopyable')

        # Default to the C++ classes base classes.
        if self.properties.bases is not None:
            bases = self.properties.bases
        else:
            bases = self.base_classes
        """
        # TODO: Get base classes.
        bases = []

        if bases:
            class_args.append('::boost::python::bases<{:s}>'.format(
                ', '.join(bases)))

        file.write(
            '{{\n'
            '::boost::python::scope class_scope'
            ' = boost::python::class_<{args:s}>("{name:s}",'
            ' ::boost::python::no_init)\n'.format(
                args=', '.join(class_args),
                name=self.cursor.spelling))

        for child in self.lexical_children:
            if isinstance(child, (Function, Variable)):
                child.emit(file, depth=depth + 1)

        file.write(';\n')

        for child in self.lexical_children:
            if not isinstance(child, (Function, Variable)):
                child.emit(file, depth=depth + 1)

        file.write('}\n')


class Enum(Entity):
    pass


class Function(Entity):
    KINDS = [ci.CursorKind.CXX_METHOD, ci.CursorKind.FUNCTION_DECL]

    @property
    def is_member(self):
        return (self.lexical_parent is not None
                and isinstance(self.lexical_parent, Class))

    @property
    def is_operator(self):
        return re.match(
            '^operator[^a-zA-Z0-9_]', self.cursor.spelling) is not None

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
    def argument_names(self):
        return [x.spelling for x in self.cursor.get_arguments()]

    @property
    def argument_defaults(self):
        defaults = []

        # TODO: Share this code with template argument values.
        for argument_cursor in self.cursor.get_arguments():
            default_value = None

            for child_cursor in argument_cursor.get_children():
                if child_cursor.kind == ci.CursorKind.INTEGER_LITERAL:
                    default_value = list(child_cursor.get_tokens())[0].spelling
                    break

            defaults.append(default_value)

        return defaults

    @property
    def name(self):
        def to_str(arg):
            if isinstance(arg, ci.Type):
                return arg.spelling
            else:
                return str(arg)

        if self.is_template:
            return '{name:s}<{args:s}>'.format(
                name=self.cursor.spelling,
                args=', '.join(to_str(x) for x in self.template_arguments))
        else:
            return self.cursor.spelling

    @property
    def key(self):
        arguments = [
            ('{:s} {:s}'.format(arg.type.spelling, arg.spelling)
             if arg.spelling else arg.type.spelling)
            for arg in self.cursor.get_arguments()
        ]

        return '{return_type:s} {name:s}({arguments:s}){const:s}'.format(
            return_type=self.cursor.result_type.spelling,
            name=self.name,
            arguments=', '.join(arguments),
            const=' const' if self.is_const else '')

    @property
    def pointer_signature(self):
        if self.is_member and not self.is_static:
            return self.get_signature(
                '({qualified_name:s}::*)'.format(
                    qualified_name=self.lexical_parent.qualified_name),
                False)
        else:
            return self.get_signature('(*)', False)

    def get_signature(self, name, include_argument_names):
        # Function arguments.
        if include_argument_names:
            arguments = [
                ('{type:s} {name:s}'.format(
                    type=arg.type.get_canonical().spelling,
                    name=arg.spelling)
                 if arg.spelling else arg.type.get_canonical().spelling)
                for arg in self.cursor.get_arguments() ]
        else:
            arguments = [ arg.type.get_canonical().spelling
                for arg in self.cursor.get_arguments() ]

        return '{return_type:s} {name:s}({arguments:s}){const:s}'.format(
            return_type=self.cursor.result_type.get_canonical().spelling,
            name=name,
            arguments=', '.join(arguments),
            const=' const' if self.is_const else '')

    def emit(self, file, depth=0):
        returns_reference = (self.cursor.result_type.kind in [
            ci.TypeKind.LVALUEREFERENCE, ci.TypeKind.RVALUEREFERENCE])

        def_args = [
            '"{name:s}"'.format(name=self.name),
            'static_cast<{type:s}>(&{qualified_name:s})'.format(
                type=self.pointer_signature,
                qualified_name=self.qualified_name)
        ]

        # TODO: Read this from properties.
        """
        if self.properties.return_value_policy is not None:
            def_args.append(
                'boost::python::return_value_policy<{:s}>()'.format(
                    self.properties.return_value_policy))
        elif returns_reference:
            logger.warning(
                'Function "%s" requires a "return_value_policy" to be'
                ' specified because it returns a' ' reference.',
                self.key)
        """

        # TODO: Add support for default arguments.
        argument_names = self.argument_names
        if self.is_member:
            argument_names.insert(0, 'self')

        if argument_names:
            arguments = []

            for name, default_value in zip(self.argument_names,
                                           self.argument_defaults):
                if default_value is None:
                    arg = '::boost::python::arg("{name:s}")'.format(
                        name=name)
                else:
                    arg = '::boost::python::arg("{name:s}") = {value:s}'.format(
                        name=name,
                        value=default_value)

                arguments.append(arg)

            if arguments:
                def_args.append('({:s})'.format(', '.join(arguments)))

        def_statement = 'def({:s})'.format(', '.join(def_args))

        if self.is_member:
            file.write('.' + def_statement + '\n')
        else:
            file.write('::boost::python::' + def_statement + ';\n')


class Variable(Entity):
    KINDS = [ci.CursorKind.FIELD_DECL, ci.CursorKind.VAR_DECL]

    @property
    def key(self):
        if self.lexical_parent:
            return self.lexical_parent.key + '::' + self.cursor.spelling
        else:
            return self.cursor.spelling

    def emit(self, file, depth=0):
        pass # TODO: not implemented


def convert(cursor):
    if cursor.kind in Root.KINDS:
        return Root(cursor)
    elif cursor.kind in Namespace.KINDS:
        return Namespace(cursor)
    elif cursor.kind in Class.KINDS:
        # Ignore forward declarations.
        definition = cursor.get_definition()
        if definition is None or definition != cursor:
            return None

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


def parse(cursor, accept_fn=None):
    PUBLIC_LEVELS = [
        ci.AccessSpecifier.INVALID,
        ci.AccessSpecifier.NONE,
        ci.AccessSpecifier.PUBLIC
    ]

    def parse_impl(cursor, lexical_parent):
        # Ignore cursors that fail the acceptance criteria.
        if accept_fn is not None and not accept_fn(cursor):
            return None

        entity = convert(cursor)

        if entity is not None:
            for child_cursor in cursor.get_children():
                child_entity = parse_impl(child_cursor, entity)
                if child_entity is not None:
                    entity.add_child(child_entity)

        return entity

    root_entity = parse_impl(cursor, None)
    coalesce_namespaces(root_entity)

    # Remove private and protected members.
    remove_predicate(root_entity,
        lambda entity: entity.cursor.access_specifier not in PUBLIC_LEVELS)

    # Remove operators.
    # TODO: Create bindings for some operators (e.g. addition).
    remove_predicate(root_entity,
        lambda entity: isinstance(entity, Function) and entity.is_operator)


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


def remove_predicate(entity, predicate_fn):
    """ Remove protected and private entities. """

    for child_entity in list(entity.lexical_children):
        if predicate_fn(child_entity):
            entity.remove_child(child_entity)
        else:
            remove_predicate(child_entity, predicate_fn)


def print_entities(entity, depth=0):
    print((' ' * depth) + repr(entity) + ' ' + entity.key)
    for child_entity in entity.lexical_children:
        print_entities(child_entity, depth + 1)


def print_ast(cursor, depth=0):
    print((' ' * depth) + cursor.kind.name, cursor.spelling)
    for child_cursor in cursor.get_children():
        print_ast(child_cursor, depth + 1)


def is_parent_directory(parent_path, child_path):
    parent_canonical_path = os.path.abspath(parent_path)
    child_canonical_path = os.path.abspath(child_path)
    return child_canonical_path.startswith(parent_canonical_path)


def is_cursor_in_directory(cursor, parent_path):
    return (cursor.location.file is None
        or is_parent_directory(parent_path, cursor.location.file.name))


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


    #print('---')
    #print_ast(tu.cursor)
    #print('---')
    root_entity = parse(tu.cursor,
        accept_fn=lambda cursor: is_cursor_in_directory(
            cursor, args.base_path))

    #print_entities(root_entity)
    #print('---')
    print(root_entity.emit(sys.stdout))

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
