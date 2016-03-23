cmake_minimum_required(VERSION 2.8)
project(dartpy_generator)

set(chimera_CONFIGURATION "${CMAKE_CURRENT_SOURCE_DIR}/chimera.yml")
set(chimera_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(chimera_GENERATED_DIR "${chimera_SOURCE_DIR}/generated")
set(chimera_PLACEHOLDER_FILE "${chimera_SOURCE_DIR}/placeholder.cpp")
set(chimera_COMPILE_DATABASE
  "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json")

# Use MACOSX_RPATH by default on OS X. This was added in CMake 2.8.12 and
# became default in CMake 3.0. Explicitly setting this policy is necessary to
# suppress a warning in CMake 3.0 and above.
if(POLICY CMP0042)
  cmake_policy(SET CMP0042 NEW)
endif()

# Use a separate CMake process to build the auto-generated bindings.
include(ExternalProject)
ExternalProject_Add("${PROJECT_NAME}_external"
  DOWNLOAD_COMMAND ""
  SOURCE_DIR "${chimera_SOURCE_DIR}"
)
add_custom_target("${PROJECT_NAME}_bindings" ALL
  DEPENDS "${PROJECT_NAME}_external"
)

find_package(chimera QUIET)
if(${chimera_FOUND})
  message(STATUS "Found Chimera. Re-generating Boost.Python bindings.")

  # Generate a CMake compilation database for use by Chimera.
  set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

  # Use the same Clang installation that Chimera was built against. This
  # guarantees that the flags stored in the CMake compilation database will be
  # supported by Chimera.
  set(CMAKE_C_COMPILER "${chimera_C_COMPILER}")
  set(CMAKE_CXX_COMPILER "${chimera_CXX_COMPILER}")

  # Create a placeholder library to generate the compilation database.
  find_package(DART REQUIRED COMPONENTS core)

  # Disable deprecation warnings since we may generate bindings for deprecated
  # functions and variables.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated-declarations")

  # TODO: This should be set by DART.
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

  # Clang ignores docstrings in SYSTEM includes, so we omit that flag.
  include_directories(${DART_INCLUDE_DIRS})

  add_library("${PROJECT_NAME}_placeholder" SHARED EXCLUDE_FROM_ALL
    "${chimera_PLACEHOLDER_FILE}"
  )
  target_link_libraries("${PROJECT_NAME}_placeholder"
    ${DART_LIBRARIES}
  )

  # Use Chimera to re-generate Boost.Python bindings.
  ExternalProject_Add_Step("${PROJECT_NAME}_external" "chimera_bind"
    COMMAND "${chimera_EXECUTABLE}"
      -m "${PROJECT_NAME}"
      -c "${chimera_CONFIGURATION}"
      -o "${chimera_GENERATED_DIR}"
      -p "${chimera_COMPILE_DATABASE}"
      "${chimera_PLACEHOLDER_FILE}"
      > "${chimera_GENERATED_DIR}/manifest.txt"
    DEPENDS
      "${chimera_CONFIGURATION}"
      "${chimera_COMPILE_DATABASE}"
      "${chimera_PLACEHOLDER_FILE}"
    DEPENDERS
      "configure"
    COMMENT "Generating bindings"
  )
else()
  message(WARNING "Unable to find Chimera. Unable to re-generate Boost.Python"
                  " bindings.")
endif()
