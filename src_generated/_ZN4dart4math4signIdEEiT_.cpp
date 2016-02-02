#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math4signIdEEiT_()
{
boost::python::def("sign", static_cast<int (*)(double)>(&dart::math::sign), (::boost::python::arg("x")))
;}

/* footer */
