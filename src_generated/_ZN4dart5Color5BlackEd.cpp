#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5Color5BlackEd()
{
boost::python::def("Black", static_cast<Eigen::Vector4d (*)(double)>(&dart::Color::Black), (::boost::python::arg("alpha")))
;}

/* footer */
