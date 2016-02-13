#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils16getValueVector3iEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueVector3i", static_cast<Eigen::Vector3i (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueVector3i), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
