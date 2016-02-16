#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils16getAttributeBoolEPKN8tinyxml210XMLElementERKSs()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("getAttributeBool", static_cast<bool (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeBool), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
