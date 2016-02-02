#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils16getAttributeUIntEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getAttributeUInt", static_cast<unsigned int (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeUInt), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
