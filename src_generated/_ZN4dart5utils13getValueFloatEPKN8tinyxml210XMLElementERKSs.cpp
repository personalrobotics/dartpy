#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils13getValueFloatEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueFloat", static_cast<float (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueFloat), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
