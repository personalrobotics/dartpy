cmake_minimum_required(VERSION 2.8)
project(dartpy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "RELWITHDEBINFO")
endif()

add_definitions(-DPROJECT_NAME=${PROJECT_NAME})

find_package(Boost REQUIRED COMPONENTS python thread)
find_package(DART REQUIRED)
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
  ${PROJECT_NAME}
  ${Boost_LIBRARIES}
  ${DART_LIBRARIES}
  ${PYTHON_LIBRARIES}
  boost_numpy
  boost_numpy_eigen
)
set_target_properties(${PROJECT_NAME} PROPERTIES
  PREFIX ""
  SUFFIX ".so"
)

# Install the python extension using setuputils.
install(CODE
  "
  execute_process(COMMAND python setup.py
                          build_ext
                          --build-temp=${PROJECT_BINARY_DIR}
                          install
                          --force
                          --prefix=${CMAKE_INSTALL_PREFIX}
                  WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
  )
  "
)
