#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math3sgnEd()
{
boost::python::def("sgn", static_cast<int (*)(double)>(&dart::math::sgn), (::boost::python::arg("_a")))
;}

/* footer */
