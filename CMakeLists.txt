cmake_minimum_required(VERSION 2.8)
project(dartpy)

# TODO: This should be set by DART.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wno-deprecated -Wno-deprecated-declarations")

find_package(PythonInterp REQUIRED)
execute_process(COMMAND ${PYTHON_EXECUTABLE} -c
  "from distutils.sysconfig import get_python_lib;\
  print(get_python_lib(plat_specific=True, prefix=''))"
  OUTPUT_VARIABLE PYTHON_SITE_PACKAGES
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

find_package(Boost REQUIRED COMPONENTS python thread)
find_package(DART 6.3.0 REQUIRED
  COMPONENTS
    collision-bullet
    optimizer-nlopt
    planning
    utils-urdf
    gui-osg
  CONFIG
)
find_package(PythonLibs REQUIRED)
find_package(chimera REQUIRED)

include_directories(SYSTEM
  ${Boost_INCLUDE_DIRS}
  ${DART_INCLUDE_DIRS}
  ${PYTHON_INCLUDE_DIRS}
  "/opt/ros/indigo/include" # TODO: This should not be necessary.
)

# Check whether the CXX compiler and boost::python support get_pointer for
# std::shared_ptr<T> references.
include(CheckCXXSourceCompiles)
set(CMAKE_REQUIRED_INCLUDES
  ${Boost_INCLUDE_DIRS}
  ${PYTHON_INCLUDE_DIRS}
)
set(CMAKE_REQUIRED_LIBRARIES
  ${Boost_LIBRARIES}
  ${PYTHON_LIBRARIES}
)
check_cxx_source_compiles(
  "
  #include <memory>
  #include <boost/python.hpp>
  int main() { std::shared_ptr<int> ptr; int *p = boost::get_pointer(ptr); }
  "
  DARTPY_HAS_STD_SHARED_GET_POINTER
)

unset(CMAKE_REQUIRED_INCLUDES)
unset(CMAKE_REQUIRED_LIBRARIES)

# Generate a header file for the DARTPY_HAS_STD_SHARED_GET_POINTER flag.
configure_file("cmake/config.h.in"
  "include/dartpy/config.h"
)

include_directories(
  "include"
  "${CMAKE_CURRENT_BINARY_DIR}/include"
)

add_chimera_binding(TARGET "${PROJECT_NAME}"
  MODULE "${PROJECT_NAME}"
  CONFIGURATION "${CMAKE_CURRENT_SOURCE_DIR}/chimera/chimera.yml"
  NAMESPACES "dart"
  SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/chimera/chimera.cpp"
  EXTRA_SOURCES
    src/BodyNode.cpp
    src/Skeleton.cpp
    src/template_registry.cpp
  LINK_LIBRARIES ${DART_LIBRARIES}
  DEBUG
)
target_link_libraries("${PROJECT_NAME}"
  ${Boost_PYTHON_LIBRARIES}
  ${DART_LIBRARIES}
  ${PYTHON_LIBRARIES}
)
set_target_properties("${PROJECT_NAME}" PROPERTIES
  PREFIX ""
)

install(TARGETS "${PROJECT_NAME}"
  LIBRARY DESTINATION "${PYTHON_SITE_PACKAGES}"
)
install(DIRECTORY "include/" "${CMAKE_CURRENT_BINARY_DIR}/include/"
  DESTINATION "include"
)
