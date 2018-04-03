#!/bin/sh
set -ex

mkdir build
cd build
if [ "$TRAVIS_OS_NAME" = "linux" ]; then cmake .. -DDARTPY_PYTHON_VERSION=$TRAVIS_PYTHON_VERSION; fi
if [ "$TRAVIS_BRANCH" != "*-binding" ]; then make binding; fi
make -j4
$SUDO make install
