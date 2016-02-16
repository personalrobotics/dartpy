#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils16getValueVector3dEPKN8tinyxml210XMLElementERKSs()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("getValueVector3d", static_cast<Eigen::Vector3d (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueVector3d), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
