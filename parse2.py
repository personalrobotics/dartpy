#!/usr/bin/env python
import clang.cindex as ci


class Declaration(object):
    def __init__(self, cursor, namespaces, outer_classes):
        self.cursor = cursor
        self.namespaces = list(namespaces)
        self.outer_classes = list(outer_classes)

    def __repr__(self):
        return '{:s}({:s})'.format(self.__class__.__name__, self.name)

    @property
    def name(self):
        return self.cursor.spelling

    @property
    def qualified_name(self):
        return '::'.join(
              self.namespaces
            + [c.name for c in self.outer_classes]
            + [self.cursor.spelling]
        )


class Class(Declaration):
    def __init__(self, cursor, namespaces, outer_classes):
        super(Class, self).__init__(cursor, namespaces, outer_classes)
        self.base_classes = []


class Function(Declaration):
    @property
    def is_static(self):
        return self.cursor.is_static_method()


class Variable(Declaration):
    pass


class Enum(Declaration):
    def __init__(self, cursor, namespaces, outer_classes):
        super(Enum, self).__init__(cursor, namespaces, outer_classes)
        self.values = []

    def __repr__(self):
        return '{:s}({:s}, {:s})'.format(
            self.__class__.__name__,
            self.name or '<none>',
            list(self.values)
        )


class ParserError(Exception):
    def __init__(self, cursor, message=None):
        self.cursor = cursor
        self.message = message
        super(ParserError, self).__init__(repr(self))

    def __repr__(self):
        return 'Error in file "{:s}" on line {:d}: {:s}'.format(
            self.cursor.location.file.name,
            self.cursor.location.line,
            self.message or 'An unknown error has occurred.'
        )


class Parser(object):
    def __init__(self):
        self.classes = []
        self.enums = []
        self.functions = []
        self.variables = []

    def parse(self, cursor):
        self._parse_impl(cursor, [], [], None)

    def _parse_impl(self, cursor, namespaces, outer_classes, enum):
        # Copy the lists so we can safely modify them.
        namespaces = list(namespaces)
        outer_classes = list(outer_classes)

        if cursor.kind == ci.CursorKind.CLASS_DECL:
            class_obj = Class(cursor, namespaces, outer_classes)
            self.classes.append(class_obj)
            outer_classes.append(class_obj)
        elif cursor.kind == ci.CursorKind.CLASS_TEMPLATE:
            class_obj = Class(cursor, namespaces, outer_classes)
            self.classes.append(class_obj)
            outer_classes.append(class_obj)
        elif cursor.kind == ci.CursorKind.CONST_ATTR:
            pass
        elif cursor.kind == ci.CursorKind.CXX_BASE_SPECIFIER:
            if not outer_classes:
                raise ParserError(cursor,
                    'Found CXX_BASE_SPECIFIER outside of a CLASS_DECL.')

            outer_classes[-1].base_classes.append(cursor.spelling)
        elif cursor.kind == ci.CursorKind.CXX_METHOD:
            pass
        elif cursor.kind == ci.CursorKind.ENUM_DECL:
            if enum is not None:
                raise ParserError(cursor,
                    'Found ENUM_DECL inside another ENUM_DECL.')

            enum = Enum(cursor, namespaces, outer_classes)
            self.enums.append(enum)
        elif cursor.kind == ci.CursorKind.ENUM_CONSTANT_DECL:
            if enum is None:
                raise ParserError(cursor,
                    'Found ENUM_CONSTANT_DECL outside of an ENUM_DECL.')

            enum.values.append(cursor.spelling)
        elif cursor.kind == ci.CursorKind.FUNCTION_DECL:
            pass
        elif cursor.kind == ci.CursorKind.FUNCTION_TEMPLATE:
            pass
        elif cursor.kind == ci.CursorKind.NAMESPACE:
            namespaces.append(cursor.spelling)
        elif cursor.kind == ci.CursorKind.PARM_DECL:
            pass
        elif cursor.kind == ci.CursorKind.STRUCT_DECL:
            pass
        elif cursor.kind == ci.CursorKind.TYPEDEF_DECL:
            pass
        elif cursor.kind == ci.CursorKind.TYPE_ALIAS_DECL:
            pass
        elif cursor.kind == ci.CursorKind.UNION_DECL:
            pass
        elif cursor.kind == ci.CursorKind.USING_DECLARATION:
            pass

        # Recursively process the rest of the parse tree.
        for child_cursor in cursor.get_children():
            self._parse_impl(child_cursor, namespaces, outer_classes, enum)


def main():
    INPUT_PATH = '/Users/mkoval/ros-dart/devel/include/dart/dynamics/Shape.h'
    LLVM_PATH = '/usr/local/opt/llvm/lib'
    LLVM_FLAGS = '-DBOOST_TEST_DYN_LINK -DBT_USE_DOUBLE_PRECISION -Ddart_EXPORTS -msse2 -fPIC -std=c++11 -stdlib=libc++ -O3 -DNDEBUG -g -fno-omit-frame-pointer -fno-inline-functions -fno-optimize-sibling-calls -fPIC -I/Users/mkoval/ros-dart/src/dart -isystem /usr/local/include/eigen3 -isystem /usr/local/Cellar/libccd/2.0/include -isystem /usr/local/Cellar/fcl/0.3.2/include -isystem /usr/local/include -isystem /System/Library/Frameworks/GLUT.framework/Headers -isystem /usr/local/Cellar/bullet/2.83.4/include/bullet -isystem /usr/local/Cellar/bullet/2.83.4/include -isystem /usr/local/Cellar/flann/1.8.4_1/include -isystem /usr/local/Cellar/urdfdom/0.2.10/include -isystem /usr/local/Cellar/urdfdom_headers/0.2.3/include -isystem /usr/local/Cellar/console_bridge/0.2.5/include -isystem /usr/local/opt/tinyxml/include -isystem /usr/local/Cellar/tinyxml2/3.0.0/include -isystem /usr/local/Cellar/nlopt/2.4.2/include -I/Users/mkoval/ros-dart/build/dart    -I/usr/local/Cellar/bullet/2.83.4/include/bullet -I/usr/local/Cellar/bullet/2.83.4/include'.split()

    ci.Config.set_library_path(LLVM_PATH)

    index = ci.Index.create()
    translation_unit = index.parse(INPUT_PATH, ['-x', 'c++'] + LLVM_FLAGS)

    parser = Parser()
    parser.parse(translation_unit.cursor)
    print 'CLASSES'
    print '\n'.join(repr(x) for x in parser.classes)
    print
    print 'ENUMS'
    print '\n'.join(repr(x) for x in parser.enums)

if __name__ == '__main__':
    import sys

    sys.exit(main())
