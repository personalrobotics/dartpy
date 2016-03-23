cmake_minimum_required(VERSION 2.8)
project(dartpy)

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
  SOURCE_DIR "${chimera_GENERATED_DIR}"
)
add_custom_target("${PROJECT_NAME}_bindings" ALL
  DEPENDS "${PROJECT_NAME}_external"
)

find_package(chimera QUIET)
if(${chimera_FOUND})
  message(STATUS "Found Chimera. Re-generating Boost.Python bindings.")

  set(chimera_CONFIGURATION "${PROJECT_SOURCE_DIR}/chimera.yml")
  set(chimera_GENERATED_DIR "${PROJECT_SOURCE_DIR}/src_generated")
  set(chimera_COMPILE_DATABASE
    "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json")
  set(chimera_SOURCE "${PROJECT_SOURCE_DIR}/src_placeholder/placeholder.cpp")

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

  include_directories(
    "include"
    "src_placeholder"
    # Clang ignores docstrings in SYSTEM includes, so we put them here.
    ${DART_INCLUDE_DIRS}
  )

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

  # Use Chimera to re-generate Boost.Python bindings.
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
else()
  message(WARNING "Unable to find Chimera. Unable to re-generate Boost.Python"
                  " bindings.")
endif()
