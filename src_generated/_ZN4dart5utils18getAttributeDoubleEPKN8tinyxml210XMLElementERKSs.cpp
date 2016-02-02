#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils18getAttributeDoubleEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getAttributeDouble", static_cast<double (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeDouble), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
