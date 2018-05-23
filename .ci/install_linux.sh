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
sudo apt-get install cmake libboost-dev libboost-python-dev libboost-python-numpy-dev libdart6-all-dev
sudo apt-get install python-dev python-numpy python-boost-numpy-eigen    # for Python 2
sudo apt-get install python3-dev python3-numpy python3-boost-numpy-eigen # for Python 3
sudo apt-get install python3-pytest

# Install dartpy for running Python tests without building dartpy
if [ ! $(lsb_release -sc) = "trusty" ]; then
  sudo apt-get install python3-dartpy
fi

# Install Chimera
if [ $(lsb_release -sc) = "trusty" ]; then
  sudo add-apt-repository 'deb http://llvm.org/apt/trusty/ llvm-toolchain-trusty-3.6 main' -y
  wget -O - http://llvm.org/apt/llvm-snapshot.gpg.key | sudo apt-key add -
  sudo apt-get update -q
  sudo apt-get install llvm-3.6-dev llvm-3.6-tools libclang-3.6-dev libedit-dev libyaml-cpp-dev libboost-dev -y

  cd ..
  git clone https://github.com/personalrobotics/chimera.git
  cd chimera
  mkdir build
  cd build
  cmake -DLLVM_DIR="/usr/share/llvm-3.6/cmake/" ..
  make -j4
  sudo make install
  cd ../../dartpy
else
  sudo apt-get install chimera -y
fi
