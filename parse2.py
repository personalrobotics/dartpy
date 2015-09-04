#!/usr/bin/env python
from __future__ import print_function
from collections import namedtuple
import argparse
import clang.cindex as ci
import os.path
import yaml
import sys

def parse_usr(usr):
    """ Return (is_const, is_restrict, is_volatile) from a usr string.

    Source: http://stackoverflow.com/a/12131083/111426
    """

    index = usr.find('#')
    if 0 <= index < len(usr) - 1:
        byte = ord(usr[index + 1])
        return bool(byte & 0x01), bool(byte & 0x02), bool(byte & 0x04)
    else:
        return False, False, False


class Declaration(object):
    Properties = namedtuple('Properties', ['return_value_policy'])

    def __init__(self, cursor, parent=None):
        self.cursor = cursor
        self.parent = parent
        self.children = []

    def __repr__(self):
        return '{:s}({:s})'.format(
            self.__class__.__name__,
            self.name or '<none>',
        )

    @property
    def name(self):
        return self.cursor.spelling

    @property
    def qualified_name(self):
        if self.parent is None:
            return self.name
        else:
            return self.parent.qualified_name + '::' + self.name

    @property
    def is_const(self):
        return parse_usr(self.cursor.get_usr())[0]

    @property
    def is_restrict(self):
        return parse_usr(self.cursor.get_usr())[0]

    @property
    def is_volatile(self):
        return parse_usr(self.cursor.get_usr())[0]


class Class(Declaration):
    Properties = namedtuple('Properties', ['name', 'held_type', 'bases', 'noncopyable'])

    def __init__(self, cursor, parent):
        super(Class, self).__init__(cursor, parent)
        self.base_classes = []

    def emit(self, file):
        class_args = [self.qualified_name]
        if self.properties.held_type:
            class_args.append(self.properties.held_type)
        if self.properties.noncopyable:
            class_args.append('boost::noncopyable')
        if self.properties.bases:
            class_args.append('boost::python::bases<{:s}>'.format(
                ', '.join(self.properties.bases)))

        file.write('boost::python::class_<{:s}>({:s}, no_init)'.format(
                   ', '.join(class_args), self.name))

        for child in self.children:
            child.emit(file)

        file.write(';')


class Enum(Declaration):
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
        # TODO: Implement this.
        file.write('// Enum.emit() is not implemented.\n')


class Function(Declaration):
    def __init__(self, cursor, parent):
        super(Function, self).__init__(cursor, parent)

    @property
    def is_static(self):
        return self.cursor.is_static_method()

    @property
    def argument_names(self):
        return [x.spelling for x in self.cursor.get_arguments()]

    @property
    def signature(self):
        return '{result:s} {name:s}({arguments:s}){attributes:s}'.format(
            result=self.cursor.type.get_result().spelling,
            name=self.name,
            arguments=', '.join(
                argument.type.spelling
                for argument in self.cursor.get_arguments()
            ),
            attributes=' const' if self.is_const else ''
        )

    @property
    def pointer_signature(self):
        if self.parent is not None and isinstance(self.parent, Class):
            pointer_name = '({:s}::*)'.format(self.parent.qualified_name)
        else:
            pointer_name = '(*)'

        return '{result:s} {name:s}({arguments:s}){attributes:s}'.format(
            result=self.cursor.type.get_result().spelling,
            name=pointer_name,
            arguments=', '.join(
                argument.type.spelling
                for argument in self.cursor.get_arguments()
            ),
            attributes=' const' if self.is_const else ''
        )

    def emit(self, file):
        # TODO: Implement this.
        file.write('// Function.emit() is not implemented.\n')


class Variable(Declaration):
    def emit(self, file):
        # TODO: Implement this.
        file.write('// Variable.emit() is not implemented.\n')


class RootNamespace(Declaration):
    @property
    def name(self):
        return ''


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

        file.write('}}\n')


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

        parent.base_classes.append(cursor.spelling)
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

def attach_default_properties(declaration, properties):
    filtered_children = []

    for child in declaration.children:
        child.properties = properties.get(child.qualified_name, dict())
        if child.properties is not None:
            filtered_children.append(child)

    declaration.children = filtered_children

def attach_variable_properties(declaration, properties):
    # There are currently no properties supported for variables.
    declaration.properties = object()

def attach_function_properties(declaration, properties):
    o = Function.Properties(
        return_value_policy = properties.get('return_value_policy', None),
    )

    # TODO: Check for extraneous keys.

def attach_class_properties(declaration, properties):
    declaration.properties = Class.Properties(
        name = properties.get('name', declaration.name),
        held_type = properties.get('held_type', None),
        bases = properties.get('bases', []),
        noncopyable = properties.get('noncopyable', False),
    )

    # TODO: Check for extraneous keys.

    method_properties = properties.get('methods', dict())
    field_properties = properties.get('fields', dict())
    filtered_children = []

    for child in declaration.children:
        if isinstance(child, (Class, Enum)):
            filtered_children.append(child)
            pass # TODO: Handle inner classes and enums.
        elif isinstance(child, Function):
            child.properties = method_properties.get(child.signature, dict())
            if child.properties is not None:
                attach_function_properties(child, child.properties)
                filtered_children.append(child)
        elif isinstance(child, Variable):
            child.properties = field_properties.get(child.name, dict())
            if child.properties is not None:
                attach_variable_properties(child, child.properties)
                filtered_children.append(child)
        else:
            raise ValueError(
                'Unknown child "{:s}" of type "{:s}" on a Class.'.format(
                    child, child.__class__.__name__))

    declaration.children = filtered_children


def attach_properties(declaration, properties):
    attach_default_properties(declaration, properties)

    for child in declaration.children:
        if isinstance(child, Class):
            attach_class_properties(child, child.properties)
        else:
            attach_properties(child, properties)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--base-path', type=str)
    parser.add_argument('input_file', type=str)
    args = parser.parse_args()

    with open(args.input_file, 'r') as input_file:
        metadata = yaml.load(input_file)

    if 'compiler' in metadata:
        llvm_flags = metadata['compiler'].get('llvm_flags', ['-x', 'c++'])

        if 'llvm_path' in metadata['compiler']:
            ci.Config.set_library_path(metadata['compiler']['llvm_path'])

    if args.base_path is not None:
        header_path = os.path.join(args.base_path, metadata['header'])
    else:
        header_path = metadata['header']

    try:
        index = ci.Index.create()
        translation_unit = index.parse(header_path, llvm_flags)
    except ci.LibclangError as e:
        print('Failed loading libclang. Use the "compiler.llvm_flags" option'
              'to specify the path to the directory containing libclang.')
        return 1

    root_declaration = get_root_declaration(translation_unit.cursor)

    # Only emit the specified namespace.
    root_namespace = None
    for child in root_declaration.children:
        if isinstance(child, Namespace) and child.name == metadata['namespace']:
            root_namespace = child
            break

    if root_namespace is None:
        print('Unable to find root namespace "{:s}".'.format(
            metadata['namespace']))
        return 1

    # Attach user properties to the tree.
    attach_properties(root_namespace, metadata['properties'])

    # Generate Boost.Python bindings.
    root_namespace.emit(sys.stdout)

    import IPython; IPython.embed()

    """
    # Parse the source code into an in-memory data structure.
    parser = Parser()
    try:
        parser.parse(translation_unit.cursor)
    except ParserError as e:
        for i, cursor in enumerate(e.lexical_trace):
            print '{:d}: [{:s}] {:s}'.format(
                i, cursor.kind.name, cursor.displayname)

        raise

    # Load the metadata.
    with open(METADATA_PATH, 'r') as metadata_file:
        metadata = yaml.load(metadata_file)

    # Generate the Boost.Python bindings.
    for class_metadata in metadata['classes']:
        print 'Processing class "{:s}".'.format(class_metadata['name'])
        try:
            class_obj = parser.get_class(class_metadata['name'])
        except KeyError as e:
            candidates = list(set(x.qualified_name for x in parser.classes))
            candidates.sort()
            print 'error:', e.message
            print 'candidates:', candidates
            raise

        # Build the Boost.Python wrapper for the class.
        class_args = [class_obj.qualified_name]
        if class_metadata.get('held_type'):
            class_args.append(class_metadata['held_type'])
        if class_metadata.get('noncopyable', False):
            class_args.append('boost::noncopyable')
        if class_obj.base_classes:
            class_args.append('boost::python::bases<{:s}>'.format(
                ', '.join(class_obj.base_classes)))

        class_output = 'boost::python::class_<{:s}>({:s}, no_init)'.format(
            ', '.join(class_args), class_obj.name)
        print class_output

        # Generate Boost.Python bindings for methods in the class.
        for function_metadata in class_metadata['functions']:
            try:
                signature = function_metadata['signature']
            except KeyError as e:
                print 'error: function is missing "{:s}".'.format(signature)

            try:
                function_obj = parser.get_function(class_obj, signature)
            except KeyError as e:
                print 'error:', e.message
                print 'candidates:', '\n'.join(
                    x.signature for x in parser.get_functions(class_obj))
                raise

            def_args = [
                '"{:s}"'.format(function_obj.name),
                'static_cast<{:s}>(&{:s})'.format(
                    function_obj.pointer_signature,
                    function_obj.qualified_name)
            ]

            try:
                def_args.append(
                    'boost::python::return_value_policy<{:s}>()'.format(
                        function_metadata['return_value_policy']))
            except KeyError:
                pass

            argument_names = function_obj.argument_names
            if argument_names:
                def_args.append(
                    '({:s})'.format(', '.join(
                        'boost::python::arg("{:s}")'.format(x)
                        for x in argument_names)))

            def_output = '.def({:s})'.format(', '.join(def_args))
            print def_output
    """

if __name__ == '__main__':
    main()
