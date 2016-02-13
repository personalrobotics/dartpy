#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils12getAttributeEPN8tinyxml210XMLElementEPKc()
{
boost::python::def("getAttribute", static_cast<std::string (*)(tinyxml2::XMLElement *, const char *const)>(&dart::utils::getAttribute), (::boost::python::arg("element"), ::boost::python::arg("name")))
;}

/* footer */
