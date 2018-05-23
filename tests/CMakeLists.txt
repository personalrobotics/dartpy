# Make sure pytest is installed
execute_process(
  COMMAND ${PYTHON_EXECUTABLE} -c "import pytest; print(pytest.__version__)"
  RESULT_VARIABLE pytest_not_found
  OUTPUT_VARIABLE pytest_version
  ERROR_QUIET
)
if(pytest_not_found)
  message(STATUS "Running the tests requires pytest. Please install it manually"
    " (try: ${PYTHON_EXECUTABLE} -m pip install pytest)"
  )
  set(DARTPY_PYTEST_FOUND FALSE)
elseif(pytest_version VERSION_LESS 3.0)
  message(STATUS "Running the tests requires pytest >= 3.0. Found: ${pytest_version}"
    "Please update it (try: ${PYTHON_EXECUTABLE} -m pip install -U pytest)"
  )
  set(DARTPY_PYTEST_FOUND FALSE)
else()
  set(DARTPY_PYTEST_FOUND TRUE)
endif()

# Check if dartpy is installed
execute_process(
  COMMAND ${PYTHON_EXECUTABLE} -c "import sys; sys.path.insert(0,\"${CMAKE_BINARY_DIR}\"); import dartpy"
  RESULT_VARIABLE dartpy_not_found
  ERROR_QUIET
)
if(dartpy_not_found)
  message(STATUS "Running the tests requires dartpy. Please install it manually"
    " (try: sudo apt install python3-dartpy)"
  )
  set(DARTPY_DARTPY_FOUND FALSE)
else()
  set(DARTPY_DARTPY_FOUND TRUE)
endif()

# For debug
execute_process(
  COMMAND ${PYTHON_EXECUTABLE} -c "import dartpy"
  RESULT_VARIABLE dartpy_not_found2
  ERROR_QUIET
)
message(STATUS "PYTHON_EXECUTABLE: ${PYTHON_EXECUTABLE}")
message(STATUS "dartpy_not_found: ${dartpy_not_found}")
message(STATUS "dartpy_not_found2: ${dartpy_not_found2}")

set(DARTPY_TEST_FILES
  test_dart_loader.py
)

# Add custom target to run the tests
if(DARTPY_PYTEST_FOUND AND DARTPY_DARTPY_FOUND)
  add_custom_target(pytest
    COMMAND ${PYTHON_EXECUTABLE} -m pytest ${DARTPY_TEST_FILES}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  )
else()
  add_custom_target(pytest
    COMMAND echo "Testing is disabled."
  )
endif()
