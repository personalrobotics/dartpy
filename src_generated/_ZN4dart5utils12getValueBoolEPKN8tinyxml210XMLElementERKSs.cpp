#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils12getValueBoolEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueBool", static_cast<bool (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueBool), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
