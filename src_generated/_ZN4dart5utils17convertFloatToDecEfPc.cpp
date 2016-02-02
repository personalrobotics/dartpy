#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils17convertFloatToDecEfPc()
{
boost::python::def("convertFloatToDec", static_cast<void (*)(float, char *)>(&dart::utils::convertFloatToDec), (::boost::python::arg("_f"), ::boost::python::arg("_bytes")))
;}

/* footer */
