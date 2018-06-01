#!/bin/sh
set -ex

mkdir build
cd build
if [ "$TRAVIS_OS_NAME" = "linux" ]; then
  cmake .. -DDARTPY_PYTHON_VERSION=$PYTHON_VERSION
fi

if [ "$TRAVIS_BRANCH" != "*-binding" ]; then
  make binding
fi

# Don't actually build dartpy because the build time exceeds Travis CI time limit.
# make -j4
# $SUDO make install

# Run pytest for Python tests of dartpy
which pytest
pytest --version
make pytest

cd $TRAVIS_BUILD_DIR

# Install dartpy as package name "dart"
$SUDO pip3 install -e .
