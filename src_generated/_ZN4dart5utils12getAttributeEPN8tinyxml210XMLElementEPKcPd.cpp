#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils12getAttributeEPN8tinyxml210XMLElementEPKcPd()
{
boost::python::def("getAttribute", static_cast<void (*)(tinyxml2::XMLElement *, const char *const, double *)>(&dart::utils::getAttribute), (::boost::python::arg("element"), ::boost::python::arg("name"), ::boost::python::arg("d")))
;}

/* footer */
