#!/bin/sh
set -ex

mkdir build
cd build
if [ "$TRAVIS_OS_NAME" = "linux" ]; then
  cmake .. -DDARTPY_PYTHON_VERSION=$PYTHON_VERSION
fi

if [ "$TRAVIS_OS_NAME" = "linux" ] && [ "$TRAVIS_BRANCH" != "*-binding" ]; then
  make binding
fi

if [ "$TRAVIS_OS_NAME" = "linux" ]; then
  make -j4
  $SUDO make install
fi

# Install dartpy for running Python tests without building dartpy
# sudo apt-get install python3-dartpy

if [ "$TRAVIS_OS_NAME" = "linux" ]; then
  # Run pytest for Python tests of dartpy
  which pytest
  pytest --version
  make pytest

  cd $TRAVIS_BUILD_DIR

  # Install dartpy as package name "dart"
  $SUDO pip3 install -e .
fi
