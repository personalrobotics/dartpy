#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils17getAttributeFloatEPKN8tinyxml210XMLElementERKSs()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("getAttributeFloat", static_cast<float (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeFloat), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
