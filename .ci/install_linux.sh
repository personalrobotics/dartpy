#!/bin/sh
set -ex

# Install DART
sudo apt-add-repository ppa:libccd-debs -y
sudo apt-add-repository ppa:fcl-debs -y
sudo apt-add-repository ppa:dartsim -y
sudo apt-get update -q
sudo apt-get install libdart6-all-dev -y

# Install Chimera
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
