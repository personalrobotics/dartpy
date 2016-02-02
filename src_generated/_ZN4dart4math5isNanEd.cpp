#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math5isNanEd()
{
boost::python::def("isNan", static_cast<bool (*)(double)>(&dart::math::isNan), (::boost::python::arg("_v")))
;}

/* footer */
