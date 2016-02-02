#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils6toCharERKSs()
{
boost::python::def("toChar", static_cast<char (*)(const std::string &)>(&dart::utils::toChar), (::boost::python::arg("str")))
;}

/* footer */
