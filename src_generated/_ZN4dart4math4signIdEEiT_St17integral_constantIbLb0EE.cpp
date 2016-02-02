#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math4signIdEEiT_St17integral_constantIbLb0EE()
{
boost::python::def("sign", static_cast<int (*)(double, std::false_type)>(&dart::math::sign), (::boost::python::arg("x"), ::boost::python::arg("")))
;}

/* footer */
