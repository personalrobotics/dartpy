#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils8toStringEc()
{
boost::python::def("toString", static_cast<std::string (*)(char)>(&dart::utils::toString), (::boost::python::arg("v")))
;}

/* footer */