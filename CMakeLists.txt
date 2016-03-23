cmake_minimum_required(VERSION 2.8)
project(dartpy)

# Use MACOSX_RPATH by default on OS X. This was added in CMake 2.8.12 and
# became default in CMake 3.0. Explicitly setting this policy is necessary to
# suppress a warning in CMake 3.0 and above.
if(POLICY CMP0042)
  cmake_policy(SET CMP0042 NEW)
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(chimera_CONFIGURATION "${PROJECT_SOURCE_DIR}/chimera.yml")
set(chimera_GENERATED_DIR "${PROJECT_SOURCE_DIR}/src_generated")
set(chimera_COMPILE_DATABASE "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json")

# Enable C++11. This is necessary to use DART.
# Enable documentation parsing.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wdocumentation")
set(CMAKE_CXX_FLAGS "-Wno-deprecated-declarations ${CMAKE_CXX_FLAGS}")

find_package(DART REQUIRED COMPONENTS core)
find_package(chimera QUIET)

include_directories(SYSTEM
  ${Boost_INCLUDE_DIRS}
  ${PYTHON_INCLUDE_DIRS}
  "/opt/ros/indigo/include"
)
include_directories(
  "include"
  "src_placeholder"
  # This can't go in the SYSTEM includes because Clang ignores comments there.
  ${DART_INCLUDE_DIRS}
)

if(${chimera_FOUND})
  message(STATUS "Found Chimera. You can use Chimera to re-generate"
                 " Boost.Python bindings by building the 'bind' target.")

  # Build a placeholder library to generate the compile_commands.json database.
  set(chimera_SOURCE "${PROJECT_SOURCE_DIR}/src_placeholder/placeholder.cpp")
  add_library("${PROJECT_NAME}_placeholder" SHARED EXCLUDE_FROM_ALL
    "${chimera_SOURCE}"
  )
  target_link_libraries("${PROJECT_NAME}_placeholder"
    ${DART_LIBRARIES}
  )

  # TODO: This should be done as a build step.
  configure_file("${PROJECT_SOURCE_DIR}/cmake/CMakeLists_bindings.txt.in"
    "${PROJECT_SOURCE_DIR}/src_generated/CMakeLists.txt"
    @ONLY
  )
else()
  message(WARNING "Unable to find Chimera. You cannot re-generate Boost.Python"
                  " bindings.")
endif()

include(ExternalProject)
ExternalProject_Add("${PROJECT_NAME}_external"
  DOWNLOAD_COMMAND ""
  SOURCE_DIR "${chimera_GENERATED_DIR}"
)
ExternalProject_Add_Step("${PROJECT_NAME}_external" "chimera_bind"
  COMMAND "${chimera_EXECUTABLE}"
    -m "${PROJECT_NAME}"
    -c "${chimera_CONFIGURATION}"
    -o "${chimera_GENERATED_DIR}"
    -p "${chimera_COMPILE_DATABASE}"
    "${chimera_SOURCE}"
    > "${chimera_GENERATED_DIR}/manifest.txt"
  DEPENDS
    "${chimera_CONFIGURATION}"
    "${chimera_COMPILE_DATABASE}"
    "${chimera_SOURCE}"
  DEPENDERS
    "configure"
  COMMENT "Generating bindings"
)

add_custom_target("${PROJECT_NAME}_bindings"
  DEPENDS "${PROJECT_NAME}_external"
)
