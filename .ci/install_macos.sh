#!/bin/sh
set -ex

brew update > /dev/null

# TODO: the list isn't complete
brew install dartsim
brew install boost
brew install boost-python3
