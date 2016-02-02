#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5Color5BlackEv()
{
boost::python::def("Black", static_cast<Eigen::Vector3d (*)()>(&dart::Color::Black))
;}

/* footer */
