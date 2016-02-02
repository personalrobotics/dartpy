#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils17convertDecToFloatEPc()
{
boost::python::def("convertDecToFloat", static_cast<float (*)(char *)>(&dart::utils::convertDecToFloat), (::boost::python::arg("_bytes")))
;}

/* footer */
