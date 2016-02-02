#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math6isZeroEd()
{
boost::python::def("isZero", static_cast<bool (*)(double)>(&dart::math::isZero), (::boost::python::arg("_theta")))
;}

/* footer */
