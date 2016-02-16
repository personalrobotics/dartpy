#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils16getValueVector6dEPKN8tinyxml210XMLElementERKSs()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("getValueVector6d", static_cast<Eigen::Vector6d (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueVector6d), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
