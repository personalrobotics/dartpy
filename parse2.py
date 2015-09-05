#!/usr/bin/env python
from __future__ import print_function
from collections import namedtuple
from tempfile import NamedTemporaryFile
import argparse
import logging
import clang.cindex as ci
import os.path
import tempfile
import yaml
import sys

# TODO: constructors
# TODO: default arguments
# TODO: docstrings

# c++ -fPIC -rdynamic -shared $(pkg-config --cflags --libs dart python) -I/Users/mkoval/ros-dart/devel/include -I/usr/local/include/eigen3 -lboost_python -ldart -ldart-core -lassimp -o module.so module.cpp

logger = logging.getLogger()
logging.basicConfig()

Qualifiers = namedtuple('Qualifiers',
    ['is_const', 'is_restrict', 'is_volatile'])


def get_qualifiers(usr):
    """ Return (is_const, is_restrict, is_volatile) from a usr string.

    Source: http://stackoverflow.com/a/12131083/111426
    """

    index = usr.rfind('#')

    if 0 <= index < len(usr) - 1:
        byte = ord(usr[index + 1]) - ord('0')
        return Qualifiers(
            is_const=bool(byte & 0x01),
            is_restrict=bool(byte & 0x02),
            is_volatile=bool(byte & 0x04)
        )
    else:
        return Qualifiers(False, False, False)


class Declaration(object):
    def __init__(self, cursor, parent=None):
        self.cursor = cursor
        self.parent = parent
        self.children = []
        self.suppressed = False

    def __repr__(self):
        return '{declaration_name:s}({name:s})'.format(
            declaration_name=self.__class__.__name__,
            name=(self.name or '<none>'))

    @property
    def name(self):
        return self.cursor.spelling

    @property
    def key(self):
        return self.qualified_name

    @property
    def qualified_name(self):
        if self.parent is None:
            return self.name
        else:
            return self.parent.qualified_name + '::' + self.name

    @property
    def is_const(self):
        return get_qualifiers(self.cursor.get_usr()).is_const

    @property
    def is_restrict(self):
        return get_qualifiers(self.cursor.get_usr()).is_restrict

    @property
    def is_volatile(self):
        return get_qualifiers(self.cursor.get_usr()).is_volatile

    @classmethod
    def validate_properties(cls, properties):
        extra_keys = set(properties.keys()) - set(cls.PROPERTIES)
        if extra_keys:
            raise KeyError(
                '{:s} has unknown keys: {:s}'.format(
                    cls.__name__, sorted(extra_keys)))


class Class(Declaration):
    PROPERTIES = ['name', 'held_type', 'bases', 'noncopyable']
    Properties = namedtuple('Properties', PROPERTIES)
        
    def __init__(self, cursor, parent):
        super(Class, self).__init__(cursor, parent)
        self.base_classes = []

    def emit(self, file):
        class_args = [self.qualified_name]
        if self.properties.held_type:
            class_args.append(self.properties.held_type)
        if self.properties.noncopyable:
            class_args.append('::boost::noncopyable')

        # Default to the C++ classes base classes.
        if self.properties.bases is not None:
            bases = self.properties.bases
        else:
            bases = self.base_classes

        if bases:
            class_args.append('::boost::python::bases<{:s}>'.format(
                ', '.join(bases)))

        file.write(
            '{{\n'
            '::boost::python::scope class_scope'
            ' = boost::python::class_<{args:s}>("{name:s}",'
            ' ::boost::python::no_init)\n'.format(
                args=', '.join(class_args),
                name=self.name))

        for child in self.children:
            if isinstance(child, (Function, Variable)):
                child.emit(file)

        file.write(';\n')

        for child in self.children:
            if isinstance(child, (Class, Enum)):
                child.emit(file)

        file.write('}\n')

    def get_properties(self, properties):
        self.validate_properties(properties)

        return self.Properties(
            name=properties.get('name', self.name),
            held_type=properties.get('held_type', None),
            bases=properties.get('bases', self.base_classes),
            noncopyable=properties.get('noncopyable', False),
        )


class Enum(Declaration):
    PROPERTIES = []
    Properties = namedtuple('Properties', [])

    def __init__(self, cursor, parent):
        super(Enum, self).__init__(cursor, parent)
        self.values = []

    def __repr__(self):
        return '{:s}({:s}, {:s})'.format(
            self.__class__.__name__,
            self.name or '<none>',
            list(self.values)
        )

    def emit(self, file):
        # TODO: This will not work on C++-style Enum classes.
        file.write(
            '{{\n'
            '::boost::python::scope enum_scope = '
            '::boost::python::enum_<{qualified_name:s}>("{name:s}")\n'.format(
                name=self.name,
                qualified_name=self.qualified_name))

        for value in self.values:
            file.write('.value("{name:s}", {qualified_name:s})\n'.format(
                name=value,
                qualified_name=self.parent.qualified_name + '::' + value))

        file.write(
            ';\n'
            '}\n')


class Function(Declaration):
    PROPERTIES = ['return_value_policy']
    Properties = namedtuple('Properties', PROPERTIES)

    def __init__(self, cursor, parent):
        super(Function, self).__init__(cursor, parent)

    @property
    def is_static(self):
        return self.cursor.is_static_method()

    @property
    def is_member(self):
        return self.parent is not None and isinstance(self.parent, Class)

    @property
    def is_public(self):
        return self.cursor.access_specifier == ci.AccessSpecifier.PUBLIC

    @property
    def argument_names(self):
        return [x.spelling for x in self.cursor.get_arguments()]

    @property
    def key(self):
        return '{result:s} {name:s}({arguments:s}){attributes:s}'.format(
            result=self.cursor.type.get_result().spelling,
            name=self.qualified_name,
            arguments=', '.join(
                argument.type.spelling
                for argument in self.cursor.get_arguments()
            ),
            attributes=' const' if self.is_const else '')

    @property
    def signature(self):
        return '{result:s} {name:s}({arguments:s}){attributes:s}'.format(
            result=self.cursor.type.get_result().get_canonical().spelling,
            name=self.name,
            arguments=', '.join(
                argument.type.get_canonical().spelling
                for argument in self.cursor.get_arguments()
            ),
            attributes=' const' if self.is_const else '')

    @property
    def pointer_signature(self):
        if self.is_member:
            pointer_name = '({:s}::*)'.format(self.parent.qualified_name)
        else:
            pointer_name = '(*)'

        return '{result:s} {name:s}({arguments:s}){attributes:s}'.format(
            result=self.cursor.type.get_result().get_canonical().spelling,
            name=pointer_name,
            arguments=', '.join(
                argument.type.get_canonical().spelling
                for argument in self.cursor.get_arguments()
            ),
            attributes=' const' if self.is_const else ''
        )

    def emit(self, file):
        # Optionally suppress the output of this instance.
        if self.properties is None:
            return

        # TODO: Why does get_ref_qualifier always return False?
        # TODO: Why does get_pointee() not return INVALID on references?
        returns_reference = (self.cursor.result_type.kind in [
            ci.TypeKind.LVALUEREFERENCE, ci.TypeKind.RVALUEREFERENCE])

        def_args = [
            '"{:s}"'.format(self.name),
            'static_cast<{:s}>(&{:s})'.format(
                self.pointer_signature, self.qualified_name)]

        if self.properties.return_value_policy is not None:
            def_args.append(
                'boost::python::return_value_policy<{:s}>()'.format(
                    self.properties.return_value_policy))
        elif returns_reference:
            logger.warning(
                'Function "%s" requires a "return_value_policy" to be'
                ' specified because it returns a' ' reference.',
                self.key)

        # TODO: Add support for default arguments.
        argument_names = self.argument_names
        if self.is_member:
            argument_names.insert(0, 'self')

        if argument_names:
            def_args.append(
                '({:s})'.format(', '.join(
                    'boost::python::arg("{:s}")'.format(x)
                    for x in argument_names)))

        def_statement = 'def({:s})'.format(', '.join(def_args))

        if self.is_member:
            file.write('.' + def_statement + '\n')
        else:
            file.write('::boost::python::' + def_statement + ';\n')

    def get_properties(self, properties):
        self.validate_properties(properties)
        return self.Properties(
            return_value_policy=properties.get('return_value_policy', None))


class Variable(Declaration):
    PROPERTIES = []
    Properties = namedtuple('Properties', PROPERTIES)

    def emit(self, file):
        # TODO: Implement this.
        file.write('// Variable.emit() is not implemented.\n')


class RootNamespace(Declaration):
    @property
    def name(self):
        return ''

    def emit(self, file):
        # TODO: Don't hard-code the name root_namespace.
        # TODO: Don't hard-code the header path.
        file.write(
            '#include <boost/python.hpp>\n'
            '#include <dart/dynamics/dynamics.h>\n'
            '#include <dart/renderer/renderer.h>\n'
            'BOOST_PYTHON_MODULE(module)\n'
            '{\n')

        for child in self.children:
            child.emit(file)

        file.write('}\n')


class Namespace(Declaration):
    def emit(self, file):
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
            .format(name=self.name)
        )

        for child in self.children:
            child.emit(file)

        file.write('}\n')


class ParserError(Exception):
    def __init__(self, cursor, message=None):
        self.cursor = cursor
        self.message = message
        super(ParserError, self).__init__(repr(self))

    def __repr__(self):
        return 'Error in file "{:s}" on line {:d}: {:s}.'.format(
            self.cursor.location.file.name,
            self.cursor.location.line,
            self.message or 'An unknown error has occurred.'
        )

    @property
    def lexical_trace(self):
        cursor = self.cursor
        trace = []

        while cursor is not None:
            trace.append(cursor)
            cursor = cursor.lexical_parent

        return trace


def coalesce(declaration):
    from collections import defaultdict

    # Group namespaces by name.
    namespace_groups = defaultdict(list)
    non_namespaces = []

    for child in declaration.children:
        if isinstance(child, Namespace):
            namespace_groups[child.name].append(child)
        else:
            non_namespaces.append(child)

    # Merge namespaces that have the same name.
    declaration.children = non_namespaces
    for namespaces in namespace_groups.itervalues():
        canonical_namespace = namespaces.pop(0)

        for namespace in namespaces:
            canonical_namespace.children += namespace.children

        # Recursively coalesce child namespaces.
        coalesce(canonical_namespace)

        declaration.children.append(canonical_namespace)


def remove_hidden(declaration):
    declaration.children = [
        child for child in declaration.children 
        if child.cursor.access_specifier in [ ci.AccessSpecifier.INVALID,
                                              ci.AccessSpecifier.PUBLIC]
    ]

    for child in declaration.children:
        remove_hidden(child)

def remove_operators(declaration):
    declaration.children = [
        child for child in declaration.children
        # TODO: This may match a function that starts with "operator", even if
        # it is not an overloaded operator
        if not (isinstance(child, Function)
                and child.name.startswith('operator'))
    ]

    for child in declaration.children:
        remove_operators(child)


def get_root_declaration(cursor):
    root_declaration = RootNamespace(cursor, parent=None)
    get_declarations_impl(cursor, root_declaration, 0)
    coalesce(root_declaration)
    return root_declaration


def get_declarations_impl(cursor, parent, depth):
    def recurse(child):
        if child is not parent:
            parent.children.append(child)

        for child_cursor in cursor.get_children():
            get_declarations_impl(child_cursor, parent=child, depth=depth + 1)

    if cursor.kind == ci.CursorKind.TRANSLATION_UNIT:
        recurse(parent)
    elif cursor.kind == ci.CursorKind.NAMESPACE:
        recurse(Namespace(cursor, parent=parent))
    elif cursor.kind in [ci.CursorKind.CLASS_DECL,
                         ci.CursorKind.UNION_DECL,
                         ci.CursorKind.STRUCT_DECL]:
        recurse(Class(cursor, parent=parent))
    elif cursor.kind == ci.CursorKind.CXX_BASE_SPECIFIER:
        if not isinstance(parent, Class):
            raise ParserError(cursor,
                'Found CXX_BASE_SPECIFIER outside of a CLASS_DECL.')

        parent.base_classes.append(cursor.type.get_canonical().spelling)
    elif cursor.kind in [ci.CursorKind.CXX_METHOD,
                         ci.CursorKind.FUNCTION_DECL]:
        recurse(Function(cursor, parent))
    elif cursor.kind == ci.CursorKind.ENUM_DECL:
        recurse(Enum(cursor, parent=parent))
    elif cursor.kind == ci.CursorKind.ENUM_CONSTANT_DECL:
        if not isinstance(parent, Enum):
            raise ParserError(cursor,
                'Found ENUM_CONSTANT_DECL outside of an ENUM_DECL.')

        parent.values.append(cursor.spelling)
    elif cursor.kind in [ci.CursorKind.FIELD_DECL,
                         ci.CursorKind.VAR_DECL]:
        recurse(Variable(cursor, parent=parent))
    elif cursor.kind == ci.CursorKind.CLASS_TEMPLATE:
        return # TODO: Support template class.
    elif cursor.kind == ci.CursorKind.CLASS_TEMPLATE_PARTIAL_SPECIALIZATION:
        return # TODO: Support template functions.
    elif cursor.kind == ci.CursorKind.FUNCTION_TEMPLATE:
        return # TODO: Support function templates.

def attach_properties(declaration, properties):
    this_properties= properties.get(declaration.key, dict())
    declaration.suppressed = (this_properties is None)

    if hasattr(declaration, 'get_properties'):
        if this_properties is not None:
            declaration.properties = declaration.get_properties(this_properties)
        else:
            declaration.properties = None

    for child in declaration.children:
        attach_properties(child, properties)


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
        index = ci.Index.create()
        translation_unit = index.parse(header_path, llvm_flags)
    except ci.LibclangError as e:
        logger.fatal(
            'Failed loading libclang. Use the "compiler.llvm_flags" option'
            'to specify the path to the directory containing libclang.')
        return 1
    except ci.TranslationUnitLoadError as e:
        logger.fatal('Failed loading file "%s" using Clang: %s',
            header_path, e.message)
        return 1

    root_declaration = get_root_declaration(translation_unit.cursor)

    # Remove private members, protected members, and overloaded operators.
    remove_hidden(root_declaration)
    remove_operators(root_declaration)

    # Only emit the specified namespace.
    # TODO: This is a bit of a hack. How should we handle this?
    root_namespace = None
    for child in root_declaration.children:
        if isinstance(child, Namespace):
            if child.name == metadata['namespace']:
                root_namespace = child
                break

    if root_namespace is None:
        logger.fatal('Unable to find root namespace "%s".',
            metadata['namespace'])
        return 1

    root_declaration.children = [root_namespace]

    # Attach user properties to the tree.
    attach_properties(root_declaration, metadata['properties'])

    # Generate Boost.Python bindings.
    root_declaration.emit(sys.stdout)

if __name__ == '__main__':
    main()
