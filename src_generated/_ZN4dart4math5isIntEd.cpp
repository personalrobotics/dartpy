#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math5isIntEd()
{
boost::python::def("isInt", static_cast<bool (*)(double)>(&dart::math::isInt), (::boost::python::arg("_x")))
;}

/* footer */
