#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5Color6RandomEd()
{
boost::python::def("Random", static_cast<Eigen::Vector4d (*)(double)>(&dart::Color::Random), (::boost::python::arg("alpha")))
;}

/* footer */
