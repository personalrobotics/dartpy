#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math3sqrEd()
{
boost::python::def("sqr", static_cast<double (*)(double)>(&dart::math::sqr), (::boost::python::arg("_x")))
;}

/* footer */
