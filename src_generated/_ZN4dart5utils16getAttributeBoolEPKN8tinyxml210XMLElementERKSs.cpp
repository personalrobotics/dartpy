#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils16getAttributeBoolEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getAttributeBool", static_cast<bool (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeBool), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
