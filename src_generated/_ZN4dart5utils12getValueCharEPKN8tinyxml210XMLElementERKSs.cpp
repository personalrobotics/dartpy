#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils12getValueCharEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueChar", static_cast<char (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueChar), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
