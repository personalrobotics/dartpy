cmake_minimum_required(VERSION 2.8)
project(dartpy)

set(CHIMERA_EXECUTABLE "/home/mkoval/chimera/build/chimera")
set(CHIMERA_CONFIGURATION "${PROJECT_SOURCE_DIR}/chimera.yml")
set(CHIMERA_GENERATED_DIR "${PROJECT_SOURCE_DIR}/src_generated")
set(CHIMERA_COMPILE_DATABASE "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Enable C++11. This is necessary to use DART.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "-Wno-deprecated-declarations ${CMAKE_CXX_FLAGS}")

# Use MACOSX_RPATH by default on OS X. This was added in CMake 2.8.12 and
# became default in CMake 3.0. Explicitly setting this policy is necessary to
# suppress a warning in CMake 3.0 and above.
if(POLICY CMP0042)
  cmake_policy(SET CMP0042 NEW)
endif()

find_package(PythonInterp REQUIRED)
execute_process(COMMAND ${PYTHON_EXECUTABLE} -c
  "from distutils.sysconfig import get_python_lib;\
  print(get_python_lib(plat_specific=True, prefix=''))"
  OUTPUT_VARIABLE PYTHON_SITE_PACKAGES
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

find_package(Boost REQUIRED COMPONENTS python thread)
find_package(DART REQUIRED COMPONENTS core)
#find_package(FCL REQUIRED)
find_package(PythonLibs REQUIRED)

include_directories(SYSTEM
  ${Boost_INCLUDE_DIRS}
  ${DART_INCLUDE_DIRS}
  ${PYTHON_INCLUDE_DIRS}
  "/opt/ros/indigo/include"
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
  HAS_STD_SHARED_GET_POINTER
)
if(HAS_STD_SHARED_GET_POINTER)
  add_definitions(-DHAS_STD_SHARED_GET_POINTER)
endif(HAS_STD_SHARED_GET_POINTER)

# Build a placeholder library to generate the compile_commands.json database.
set(CHIMERA_SOURCE "${PROJECT_SOURCE_DIR}/src/placeholder.cpp")
add_library("${PROJECT_NAME}_placeholder" SHARED EXCLUDE_FROM_ALL
  "${CHIMERA_SOURCE}"
)
target_link_libraries("${PROJECT_NAME}_placeholder"
  ${DART_LIBRARIES}
)

# Use Chimera to generate the Boost.Python bindings.
find_path(DART_HEADER_BASE_PATH "dart.h"
  PATH_SUFFIXES "dart"
  HINTS ${DART_INCLUDE_DIRS}
  DOC "DART header file"
  NO_DEFAULT_PATH
)
set(DART_HEADER_PATH "${DART_HEADER_BASE_PATH}/dart.h")

add_custom_target(bind
  COMMAND "${CHIMERA_EXECUTABLE}"
    -m "${PROJECT_NAME}"
    -c "${CHIMERA_CONFIGURATION}"
    -o "${CHIMERA_GENERATED_DIR}"
    -p "${CHIMERA_COMPILE_DATABASE}"
    "${CHIMERA_SOURCE}"
    > "${CHIMERA_GENERATED_DIR}/manifest.txt"
  VERBATIM
  COMMENT "Generating bindings"
  SOURCES
    "${CHIMERA_CONFIGURATION}"
    "${CHIMERA_SOURCE}"
)

file(STRINGS "${CHIMERA_GENERATED_DIR}/manifest.txt" DARTPY_SOURCES
  NO_HEX_CONVERSION
)

add_library("${PROJECT_NAME}" SHARED ${DARTPY_SOURCES})
target_link_libraries("${PROJECT_NAME}"
  ${DART_LIBRARIES}
  ${Boost_PYTHON_LIBRARIES}
  ${PYTHON_LIBRARIES}
)
set_target_properties("${PROJECT_NAME}" PROPERTIES
  PREFIX ""
  SUFFIX ".so"
  LINKER_LANGUAGE CXX
)
install(TARGETS "${PROJECT_NAME}"
  LIBRARY DESTINATION "${PYTHON_SITE_PACKAGES}"
)
