#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math6round2Ed()
{
boost::python::def("round2", static_cast<double (*)(double)>(&dart::math::round2), (::boost::python::arg("_x")))
;}

/* footer */
