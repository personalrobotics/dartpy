#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils12hasAttributeEPKN8tinyxml210XMLElementEPKc()
{
boost::python::def("hasAttribute", static_cast<bool (*)(const tinyxml2::XMLElement *, const char *const)>(&dart::utils::hasAttribute), (::boost::python::arg("element"), ::boost::python::arg("name")))
;}

/* footer */
