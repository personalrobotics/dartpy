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
install(${PROJECT_NAME}
  execute_process(COMMAND python setup.py install -f
                          --prefix=${CMAKE_INSTALL_PREFIX}
                  WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
  )
)
