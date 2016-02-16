#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils20getAttributeVector2dEPKN8tinyxml210XMLElementERKSs()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("getAttributeVector2d", static_cast<Eigen::Vector2d (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeVector2d), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
