#!/bin/sh
set -ex

mkdir build
cd build
if [ "$TRAVIS_OS_NAME" = "linux" ]; then
  cmake .. -DDARTPY_PYTHON_VERSION=$TRAVIS_PYTHON_VERSION
fi

if [ "$TRAVIS_BRANCH" != "*-binding" ]; then
  make binding
fi

# Don't actually build dartpy because the build time exceeds Travis CI time limit.
# make -j4
# $SUDO make install

# Run pytest for Python tests of dartpy
if [ ! $(lsb_release -sc) = "trusty" ]; then
  make pytest
fi
