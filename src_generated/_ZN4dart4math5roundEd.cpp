#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math5roundEd()
{
boost::python::def("round", static_cast<double (*)(double)>(&dart::math::round), (::boost::python::arg("_x")))
;}

/* footer */
