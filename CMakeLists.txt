cmake_minimum_required(VERSION 2.8)
project(dartpy)

# Use MACOSX_RPATH by default on OS X. This was added in CMake 2.8.12 and
# became default in CMake 3.0. Explicitly setting this policy is necessary to
# suppress a warning in CMake 3.0 and above.
if(POLICY CMP0042)
  cmake_policy(SET CMP0042 NEW)
endif()

# Enable C++11. This is necessary to use DART.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_definitions(-DPROJECT_NAME=${PROJECT_NAME})

find_package(PythonInterp REQUIRED)
execute_process(COMMAND ${PYTHON_EXECUTABLE} -c
  "from distutils.sysconfig import get_python_lib;\
  print(get_python_lib(plat_specific=True, prefix=''))"
  OUTPUT_VARIABLE PYTHON_SITE_PACKAGES
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

find_package(Boost REQUIRED COMPONENTS python thread)
find_package(DART REQUIRED COMPONENTS core)
find_package(PythonLibs REQUIRED)

include_directories(
  ${Boost_INCLUDE_DIRS}
  ${DART_INCLUDE_DIRS}
  ${PYTHON_INCLUDE_DIRS}
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

add_library(${PROJECT_NAME} SHARED
  src/python.cpp
  src/python_BodyNode.cpp
  src/python_Constraint.cpp
  src/python_CollisionDetector.cpp
  src/python_ConstraintSolver.cpp
  src/python_DartLoader.cpp
  src/python_DegreeOfFreedom.cpp
  src/python_SimWindow.cpp
  src/python_Skeleton.cpp
  src/python_MetaSkeleton.cpp
  src/python_Subject.cpp
  src/python_World.cpp
  src/python_Frame.cpp
  # Joints
  src/python_BallJoint.cpp
  src/python_EulerJoint.cpp
  src/python_FreeJoint.cpp
  src/python_Joint.cpp
  src/python_MultiDofJoint.cpp
  src/python_PlanarJoint.cpp
  src/python_PrismaticJoint.cpp
  src/python_RevoluteJoint.cpp
  src/python_ScrewJoint.cpp
  src/python_SingleDofJoint.cpp
  src/python_TranslationalJoint.cpp
  src/python_UniversalJoint.cpp
  src/python_WeldJoint.cpp
  src/python_ZeroDofJoint.cpp
)
target_link_libraries(${PROJECT_NAME}
  ${Boost_LIBRARIES}
  ${DART_LIBRARIES}
  ${PYTHON_LIBRARIES}
)
set_target_properties(${PROJECT_NAME} PROPERTIES
  PREFIX ""
  SUFFIX ".so"
)

install(TARGETS ${PROJECT_NAME}
  LIBRARY DESTINATION "${PYTHON_SITE_PACKAGES}"
)
