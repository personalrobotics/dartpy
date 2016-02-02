#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math8wrapToPiEd()
{
boost::python::def("wrapToPi", static_cast<double (*)(double)>(&dart::math::wrapToPi), (::boost::python::arg("angle")))
;}

/* footer */
