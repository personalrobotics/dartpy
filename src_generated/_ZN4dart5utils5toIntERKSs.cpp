#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils5toIntERKSs()
{
boost::python::def("toInt", static_cast<int (*)(const std::string &)>(&dart::utils::toInt), (::boost::python::arg("str")))
;}

/* footer */
