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

# Install dependencies for unittests
sudo apt-get install python3-pip -y
sudo pip3 install pytest -U

# Install dartpy for running Python tests without building dartpy
sudo apt-get install python3-dartpy

# Install Chimera
sudo apt-get install chimera -y
