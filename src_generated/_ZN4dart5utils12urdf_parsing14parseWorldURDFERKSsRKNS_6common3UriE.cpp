#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils12urdf_parsing14parseWorldURDFERKSsRKNS_6common3UriE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils").attr("urdf_parsing"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("parseWorldURDF", static_cast<std::shared_ptr<dart::utils::urdf_parsing::World> (*)(const std::string &, const dart::common::Uri &)>(&dart::utils::urdf_parsing::parseWorldURDF), (::boost::python::arg("xml_string"), ::boost::python::arg("_baseUri")))
;}

/* footer */
