cmake_minimum_required(VERSION 2.8)
project(dartpy_chimera)

set(chimera_MODULE_NAME "dartpy")
set(chimera_CONFIGURATION "${CMAKE_CURRENT_SOURCE_DIR}/chimera.yml")
set(chimera_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../src")
set(chimera_GENERATED_DIR "${chimera_SOURCE_DIR}/generated")
set(chimera_PLACEHOLDER_FILE "${CMAKE_CURRENT_SOURCE_DIR}/placeholder.cpp")
set(chimera_COMPILE_DATABASE
  "${CMAKE_CURRENT_BINARY_DIR}/compile_commands.json")

# Use MACOSX_RPATH by default on OS X. This was added in CMake 2.8.12 and
# became default in CMake 3.0. Explicitly setting this policy is necessary to
# suppress a warning in CMake 3.0 and above.
if(POLICY CMP0042)
  cmake_policy(SET CMP0042 NEW)
endif()

find_package(chimera REQUIRED)

# Generate a CMake compilation database for use by Chimera.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Use the same Clang installation that Chimera was built against. This
# guarantees that the flags stored in the CMake compilation database will be
# supported by Chimera.
set(CMAKE_C_COMPILER "${chimera_C_COMPILER}")
set(CMAKE_CXX_COMPILER "${chimera_CXX_COMPILER}")

# Create a placeholder library to generate the compilation database.
find_package(DART REQUIRED)

# Disable deprecation warnings since we may generate bindings for deprecated
# functions and variables.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated-declarations")

# TODO: These should be set by DART.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(SYSTEM "/opt/ros/indigo/include")

# Clang ignores docstrings in SYSTEM includes, so we omit that flag.
include_directories(${DART_INCLUDE_DIRS})

add_library("${PROJECT_NAME}_placeholder" SHARED EXCLUDE_FROM_ALL
  "${chimera_PLACEHOLDER_FILE}"
)
target_link_libraries("${PROJECT_NAME}_placeholder"
  ${DART_LIBRARIES}
)

# Use Chimera to re-generate Boost.Python bindings.
add_custom_target("${PROJECT_NAME}_bindings"
  COMMAND "${chimera_EXECUTABLE}"
    -m "${chimera_MODULE_NAME}"
    -c "${chimera_CONFIGURATION}"
    -o "${chimera_GENERATED_DIR}"
    -p "${chimera_COMPILE_DATABASE}"
    "${chimera_PLACEHOLDER_FILE}"
    > "${chimera_GENERATED_DIR}/manifest.txt"
  SOURCES
    "${chimera_CONFIGURATION}"
    "${chimera_COMPILE_DATABASE}"
    "${chimera_PLACEHOLDER_FILE}"
  COMMENT "Generating bindings"
  VERBATIM
)

# Touch the parent CMakeLists.txt file to force a re-configure, which loads the
# new manifest.txt file generated above.
add_custom_target("${PROJECT_NAME}_refresh" ALL
  COMMAND "touch" "${CMAKE_CURRENT_SOURCE_DIR}/../CMakeLists.txt"
  DEPENDS "${PROJECT_NAME}_bindings"
  COMMENT "Notifying parent project of new bindings."
)
