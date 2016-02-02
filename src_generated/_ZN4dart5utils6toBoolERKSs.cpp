#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils6toBoolERKSs()
{
boost::python::def("toBool", static_cast<bool (*)(const std::string &)>(&dart::utils::toBool), (::boost::python::arg("str")))
;}

/* footer */
