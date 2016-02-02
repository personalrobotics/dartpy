#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils12getValueCharEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueChar", static_cast<char (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueChar), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
