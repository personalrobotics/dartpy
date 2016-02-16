#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils16getValueVectorXdEPKN8tinyxml210XMLElementERKSs()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("getValueVectorXd", static_cast<Eigen::VectorXd (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueVectorXd), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
