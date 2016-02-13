#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils18getValueIsometry3dEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueIsometry3d", static_cast<Eigen::Isometry3d (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueIsometry3d), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
