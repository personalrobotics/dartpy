#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils16getAttributeUIntEPKN8tinyxml210XMLElementERKSs()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("getAttributeUInt", static_cast<unsigned int (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeUInt), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
