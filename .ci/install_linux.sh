#!/bin/sh
set -ex

# Install DART
if [ $(lsb_release -sc) = "trusty" ]; then
  sudo apt-add-repository ppa:libccd-debs -y
  sudo apt-add-repository ppa:fcl-debs -y
fi
sudo apt-add-repository ppa:dartsim -y
sudo apt-add-repository ppa:personalrobotics -y
sudo apt-get update -q
sudo apt-get install cmake libboost-dev libdart6-all-dev -y
sudo apt-get install python-dev python-numpy -y   # for Python 2
sudo apt-get install python3-dev python3-numpy -y # for Python 3

# Install Chimera
if [ $(lsb_release -sc) = "trusty" ]; then
  # For installing chimera dependencies: llvm-3.7, llvm-3.7-tools, and libclang-3.7-dev
  sudo add-apt-repository ppa:renemilk/llvm -y
  sudo apt-get update -q
fi
sudo apt-get install chimera -y

# Install pybind11 from source (we need pybind11 (>=2.2.0))
git clone https://github.com/pybind/pybind11.git
cd pybind11
git checkout tags/v2.2.3
mkdir build
cd build
cmake .. -DPYBIND11_TEST=OFF -DPYBIND11_PYTHON_VERSION=$PYTHON_VERSION
make -j4
sudo make install
cd ../..

# Install dependencies for unittests
if [ $PYTHON_VERSION = 3.* ]; then
  sudo apt-get install python3-pip -y
  sudo pip3 install pytest -U
else
  sudo apt-get install python-pip -y
  sudo pip install pytest -U
fi
