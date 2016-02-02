#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math7acotanhEd()
{
boost::python::def("acotanh", static_cast<double (*)(double)>(&dart::math::acotanh), (::boost::python::arg("_X")))
;}

/* footer */
