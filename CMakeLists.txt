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
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "-Wno-deprecated-declarations ${CMAKE_CXX_FLAGS}")

find_package(DART REQUIRED COMPONENTS core)
find_package(chimera QUIET)

include_directories(SYSTEM
  ${Boost_INCLUDE_DIRS}
  ${DART_INCLUDE_DIRS}
  ${PYTHON_INCLUDE_DIRS}
  "/opt/ros/indigo/include"
)
include_directories(
  "include"
  "src_placeholder"
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

  # Use Chimera to generate the Boost.Python bindings.
  find_path(DART_HEADER_BASE_PATH "dart.h"
    PATH_SUFFIXES "dart"
    HINTS ${DART_INCLUDE_DIRS}
    DOC "DART header file"
    NO_DEFAULT_PATH
  )
  set(DART_HEADER_PATH "${DART_HEADER_BASE_PATH}/dart.h")

  add_custom_command(OUTPUT "${chimera_GENERATED_DIR}/manifest.txt"
    COMMAND "${chimera_EXECUTABLE}"
      -m "${PROJECT_NAME}"
      -c "${chimera_CONFIGURATION}"
      -o "${chimera_GENERATED_DIR}"
      -p "${chimera_COMPILE_DATABASE}"
      "${chimera_SOURCE}"
      > "${chimera_GENERATED_DIR}/manifest.txt"
    MAIN_DEPENDENCY "${chimera_CONFIGURATION}"
    DEPENDS "${chimera_SOURCE}"
    COMMENT "Generating bindings"
    VERBATIM
  )
  add_custom_command(OUTPUT "${chimera_GENERATED_DIR}/manifest.cmake"
    COMMAND
    bash -c "echo set\\(chimera_GENERATED_SOURCES\
       $(cat ${chimera_GENERATED_DIR}/manifest.txt) \\)"
      > "${chimera_GENERATED_DIR}/manifest.cmake"
    MAIN_DEPENDENCY "${chimera_GENERATED_DIR}/manifest.txt"
    COMMENT "Generating bindings manifest file"
    VERBATIM
  )
  add_custom_target(bind
    DEPENDS "${chimera_GENERATED_DIR}/manifest.cmake"
    COMMENT "Checking if re-generation is required"
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

# Actually build the bindings.
add_subdirectory(src_generated)
