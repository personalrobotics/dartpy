#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils16getValueVector2dEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueVector2d", static_cast<Eigen::Vector2d (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueVector2d), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
