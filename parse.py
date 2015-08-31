#!/usr/bin/env python
import argparse
import clang.cindex as ci
import json
import IPython

COMPILATION_FLAGS = '-DBOOST_TEST_DYN_LINK -DBT_USE_DOUBLE_PRECISION -Ddart_EXPORTS -msse2 -fPIC -std=c++11 -stdlib=libc++ -O3 -DNDEBUG -g -fno-omit-frame-pointer -fno-inline-functions -fno-optimize-sibling-calls -fPIC -I/Users/mkoval/ros-dart/src/dart -isystem /usr/local/include/eigen3 -isystem /usr/local/Cellar/libccd/2.0/include -isystem /usr/local/Cellar/fcl/0.3.2/include -isystem /usr/local/include -isystem /System/Library/Frameworks/GLUT.framework/Headers -isystem /usr/local/Cellar/bullet/2.83.4/include/bullet -isystem /usr/local/Cellar/bullet/2.83.4/include -isystem /usr/local/Cellar/flann/1.8.4_1/include -isystem /usr/local/Cellar/urdfdom/0.2.10/include -isystem /usr/local/Cellar/urdfdom_headers/0.2.3/include -isystem /usr/local/Cellar/console_bridge/0.2.5/include -isystem /usr/local/opt/tinyxml/include -isystem /usr/local/Cellar/tinyxml2/3.0.0/include -isystem /usr/local/Cellar/nlopt/2.4.2/include -I/Users/mkoval/ros-dart/build/dart    -I/usr/local/Cellar/bullet/2.83.4/include/bullet -I/usr/local/Cellar/bullet/2.83.4/include'.split()


class Method(object):
    unique_id_seq = 0

    def __init__(self, class_object, method_node):
        self.parent_class = class_object
        self.method_node = method_node

        # Compute the minimum and maximum number of arguments.
        arguments = list(self.method_node.get_arguments())
        self.num_arguments = len(arguments)
        self.num_required_arguments = self.num_arguments

        for argument in arguments:
            tokens = [token.spelling for token in argument.get_tokens()]

            if '=' in tokens:
                self.num_required_arguments -= 1
            elif self.num_required_arguments < self.num_arguments: 
                raise ValueError('Detected a required argument after one or'
                                 ' more optional arguments.')

        # Generate a unique ID to disambiguate headers.
        if self.has_defaults:
            cls = self.__class__
            self.unique_id = cls.unique_id_seq
            cls.unique_id_seq += 1
        else:
            self.unique_id = None

    def __repr__(self):
        return '{:s}({:s}, method={:s})'.format(
            self.__class__.__name__, self.field_name, self.is_static)

    @property
    def is_static(self):
        return self.method_node.is_static_method()

    @property
    def has_defaults(self):
        return self.num_required_arguments < self.num_arguments

    @property
    def method_name(self):
        return self.method_node.spelling

    def export(self, fully_qualified):
        arguments = list(self.method_node.get_arguments())

        # Check if we need a return_value_policy.
        return_kind = self.method_node.type.get_result().kind
        if return_kind == ci.TypeKind.LVALUEREFERENCE:
            print 'Warning: Returns lvalue reference'
        elif return_kind == ci.TypeKind.RVALUEREFERENCE:
            print 'Warning: Returns rvalue reference'
        elif return_kind == ci.TypeKind.POINTER:
            print 'Warning: Returns pointer'

        # Generate the pointer-to-member type for this method.
        # TODO: This does not include const-qualification.
        # TODO: Why does self.method_node.type.is_const_qualified() return False?
        method_type = (
              self.method_node.type.get_result().spelling
            + ' (' + self.parent_class.qualified_class_name + '::*)('
            + ', '.join(argument.type.spelling for argument in arguments)
            + ')'
        )

        output = []
        params = dict(
            unique_id=self.unique_id,
            class_name=self.parent_class.class_name,
            class_name_fq=self.parent_class.qualified_class_name,
            method_name=self.method_name,
            method_type=method_type,
        )

        def_params = ['"{method_name:s}"'.format(**params)]

        # Use a static_cast to disambiguate overloaded methods. Otherwise,
        # we'll omit the static_cast for brevity.
        if fully_qualified:
            def_params.append(
                'static_cast<{method_type:s}>('
                '&{class_name_fq:s}::{method_name:s})'.format(**params))
        else:
            def_params.append(
                '&{class_name_fq:s}::{method_name:s}'.format(**params))

        # Use export_header() to generate a wrapper for for default args.
        if self.has_defaults:
            def_params.append(
                '{method_name:s}_overloads{unique_id:d}()'.format(**params))

        # Annotate argument names.
        # TODO: How does this play with BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS?
        # TODO: Should we specify default values here?
        if arguments:
            argument_params = [
                'boost::python::arg("{:s}")'.format(argument.spelling)
                for argument in arguments
            ]

            def_params.append('(' + ', '.join(argument_params) + ')')

        # TODO: Serialize the docstring.

        output.append('.def(' + ', '.join(def_params) + ')')

        # Mark this as a static method.
        if self.is_static:
            output.append('.staticmethod("{method_name:s}")'.format(**params))

        return output

    def export_header(self):
        params = dict(
            unique_id=self.unique_id,
            class_name_fq=self.parent_class.qualified_class_name,
            method_name=self.method_name,
            min_arguments=self.num_required_arguments,
            max_arguments=self.num_arguments,
        )

        if self.num_required_arguments < self.num_arguments:
            return [
                'BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS('
                '{method_name:s}_overloads{unique_id:d}, '
                '{class_name_fq:s}::{method_name:s}, '
                '{min_arguments:d}, {max_arguments:d});'.format(**params)
            ]
        else:
            return []


class Constructor(object):
    unique_id_seq = 0

    def __init__(self, class_object, constructor_node):
        self.parent_class = class_object
        self.constructor_node = constructor_node
        
        # Generate a unique ID to disambiguate headers.
        cls = self.__class__
        self.unique_id = cls.unique_id_seq
        cls.unique_id_seq += 1

    def __repr__(self):
        return '{:s}({:s})'.format(
            self.__class__.__name__,
            self.parent_class.class_name
        )

    def export(self):
        params = dict(
            unique_id=self.unique_id,
            class_name=self.parent_class.class_name,
        )

        return [
            '.def("__init__", boost::python::make_constructor('
            '&{class_name:s}_constructor{unique_id:d}))'.format(**params)
        ]

    def export_header(self):
        # TODO: This doesn't support default arguments.
        # TODO: Type names in argument_types are not fully qualified.
        # TODO: Add support for pointer holders.

        argument_types = ', '.join(
            '{:s} {:s}'.format(argument.type.spelling, argument.spelling)
            for argument in self.constructor_node.get_arguments()
        )
        argument_names = ', '.join(
            argument.spelling
            for argument in self.constructor_node.get_arguments()
        )

        params = dict(
            unique_id=self.unique_id,
            argument_types=argument_types,
            argument_names=argument_names,
            class_name=self.parent_class.class_name,
            class_name_fq=self.parent_class.qualified_class_name,
        )


        return [
            '{class_name:s}* {class_name:s}_constructor{unique_id:d}'
            '({argument_types:s})'
            ' {{'
            ' return new {class_name_fq:s}({argument_names:s});'
            ' }}'.format(**params)
        ]


class Field(object):
    def __init__(self, class_object, field_node):
        self.parent_class = class_object
        self.field_node = field_node

    def __repr__(self):
        return '{:s}({:s})'.format(self.__class__.__name__, self.field_name)

    @property
    def class_name(self):
        return self.parent_class.class_name

    @property
    def field_name(self):
        return self.field_node.spelling

    def export(self):
        params = dict(
            class_name=self.parent_class.class_name,
            class_name_fq=self.parent_class.qualified_class_name,
            field_name=self.field_name,
        )

        return [
            '.def_readwrite("{field_name:s}", '
            '&{class_name_fq:s}::{field_name:s})'.format(**params)
        ]

    def export_header(self):
        return []

class Class(object):
    def __init__(self, class_node, outer_classes, namespaces):
        self.class_node = class_node
        self.constructors = []
        self.methods = []
        self.fields = []
        self.base_classes = []
        self.outer_classes = outer_classes
        self.namespaces = namespaces

    def __repr__(self):
        return '{:s}({:s}, constructors={:s}, methods={:s}, fields={:s})'.format(
            self.__class__.__name__,
            self.class_name,
            self.constructors,
            self.methods,
            self.fields
        )

    @property
    def class_name(self):
        return self.class_node.spelling

    @property
    def qualified_class_name(self):
        return '::'.join(
            self.namespaces
            + [c.class_name for c in self.outer_classes]
            + [self.class_name]
        )

    def export(self):
        from collections import Counter

        output = []
        params = dict(
            class_name=self.class_name,
            class_name_fq=self.qualified_class_name,
        )

        # Class declaration
        # TODO: Add support for pointer holders.
        class_def  = 'boost::python::class_<{class_name_fq:s}'.format(**params)

        # TODO: Add support for noncopyable.
        #class_def += ', boost::noncopyable'

        if self.base_classes:
            class_def += ', boost::python::bases<{:s} > '.format(
                ', '.join(self.base_classes))

        class_def += '>("{class_name:s}", no_init)'.format(**params)
        output.append(class_def)

        # Fields
        for field in self.fields:
            output += field.export()

        # Methods
        method_counter = Counter()
        for m in self.methods:
            method_counter[m.method_name] += 1

        for m in self.methods:
            is_overloaded = (method_counter[m.method_name] > 1)
            output += m.export(fully_qualified=is_overloaded)

        output.append(';')

        return output

    def export_header(self):
        return (
              sum((c.export_header() for c in self.constructors), [])
            + sum((m.export_header() for m in self.methods), [])
            + sum((f.export_header() for f in self.fields), [])
        )


def find_classes(node, source_files, classes=None, namespaces=None):
    output = []
    classes = list(classes or [])
    namespaces = list(namespaces or [])

    if node.kind == ci.CursorKind.NAMESPACE:
        namespaces.append(node.spelling)
    elif node.kind in [ci.CursorKind.CLASS_DECL, ci.CursorKind.STRUCT_DECL]:
        class_object = Class(node, list(classes), list(namespaces))

        for child_node in node.get_children():
            if child_node.access_specifier != ci.AccessSpecifier.PUBLIC:
                continue

            if child_node.kind == ci.CursorKind.CXX_BASE_SPECIFIER:
                class_object.base_classes.append(child_node.type.spelling)
            elif child_node.kind == ci.CursorKind.CONSTRUCTOR:
                class_object.constructors.append(
                    Constructor(class_object, child_node))
            elif child_node.kind == ci.CursorKind.CXX_METHOD:
                if not child_node.spelling.startswith('operator'):
                    class_object.methods.append(
                        Method(class_object, child_node))
                else:
                    print 'Warning: Ignoring', child_node.spelling
            elif child_node.kind == ci.CursorKind.FIELD_DECL:
                class_object.fields.append(
                    Field(class_object, child_node))

        output.append(class_object)
        classes.append(class_object)

    for child_node in node.get_children():
        if child_node.access_specifier not in [ci.AccessSpecifier.INVALID,
                                               ci.AccessSpecifier.PUBLIC]:
            continue

        if child_node.location.file is not None:
            if child_node.location.file.name in source_files:
                output += find_classes(
                    child_node, source_files, classes, namespaces)

    return output

#input_path = 'test.cpp'
input_path = '/Users/mkoval/ros-dart/devel/include/dart/dynamics/Shape.h'

ci.Config.set_library_path('/usr/local/opt/llvm/lib')

index = ci.Index.create()
translation_unit = index.parse(input_path, ['-x', 'c++'] + COMPILATION_FLAGS)
classes = find_classes(translation_unit.cursor, [input_path])

print 'namespace'
print '{'
print '\n'.join(sum((c.export_header() for c in classes), []))
print '} // namespace'
print
print 'void f()'
print '{'
print '\n'.join(sum((c.export() for c in classes), []))
print '}'
