#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils11getValueIntEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueInt", static_cast<int (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueInt), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
