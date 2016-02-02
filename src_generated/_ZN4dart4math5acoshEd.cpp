#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math5acoshEd()
{
boost::python::def("acosh", static_cast<double (*)(double)>(&dart::math::acosh), (::boost::python::arg("_X")))
;}

/* footer */
