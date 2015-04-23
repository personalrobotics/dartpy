cmake_minimum_required(VERSION 2.8)
project(dartpy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

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
  #src/python_DartLoader.cpp
  src/python_DegreeOfFreedom.cpp
  #src/python_SimWindow.cpp
  src/python_Skeleton.cpp
  #src/python_World.cpp
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
