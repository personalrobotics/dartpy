#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5Color4BlueEv()
{
boost::python::def("Blue", static_cast<Eigen::Vector3d (*)()>(&dart::Color::Blue))
;}

/* footer */