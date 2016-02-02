#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils13getValueFloatEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueFloat", static_cast<float (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueFloat), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
