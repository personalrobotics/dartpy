#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils6toUIntERKSs()
{
boost::python::def("toUInt", static_cast<unsigned int (*)(const std::string &)>(&dart::utils::toUInt), (::boost::python::arg("str")))
;}

/* footer */
