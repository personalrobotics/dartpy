#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math7isEqualEdd()
{
boost::python::def("isEqual", static_cast<bool (*)(double, double)>(&dart::math::isEqual), (::boost::python::arg("_x"), ::boost::python::arg("_y")))
;}

/* footer */
