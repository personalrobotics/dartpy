#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils14getValueStringEPKN8tinyxml210XMLElementERKSs()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("getValueString", static_cast<std::string (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueString), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
