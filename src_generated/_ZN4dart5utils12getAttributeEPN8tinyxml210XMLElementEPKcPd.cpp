#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils12getAttributeEPN8tinyxml210XMLElementEPKcPd()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("getAttribute", static_cast<void (*)(tinyxml2::XMLElement *, const char *const, double *)>(&dart::utils::getAttribute), (::boost::python::arg("element"), ::boost::python::arg("name"), ::boost::python::arg("d")))
;}

/* footer */
