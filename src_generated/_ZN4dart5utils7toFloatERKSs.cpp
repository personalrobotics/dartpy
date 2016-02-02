#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils7toFloatERKSs()
{
boost::python::def("toFloat", static_cast<float (*)(const std::string &)>(&dart::utils::toFloat), (::boost::python::arg("str")))
;}

/* footer */
