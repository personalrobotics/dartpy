#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math5deltaEii()
{
boost::python::def("delta", static_cast<int (*)(int, int)>(&dart::math::delta), (::boost::python::arg("_i"), ::boost::python::arg("_j")))
;}

/* footer */
