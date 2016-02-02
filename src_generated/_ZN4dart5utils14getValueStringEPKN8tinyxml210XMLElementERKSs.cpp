#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils14getValueStringEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueString", static_cast<std::string (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueString), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
