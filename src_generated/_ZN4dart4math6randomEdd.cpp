#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math6randomEdd()
{
boost::python::def("random", static_cast<double (*)(double, double)>(&dart::math::random), (::boost::python::arg("_min"), ::boost::python::arg("_max")))
;}

/* footer */
