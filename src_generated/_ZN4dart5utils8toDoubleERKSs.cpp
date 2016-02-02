#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils8toDoubleERKSs()
{
boost::python::def("toDouble", static_cast<double (*)(const std::string &)>(&dart::utils::toDouble), (::boost::python::arg("str")))
;}

/* footer */
