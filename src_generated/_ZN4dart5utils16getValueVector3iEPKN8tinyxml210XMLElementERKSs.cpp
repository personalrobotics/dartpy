#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils16getValueVector3iEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueVector3i", static_cast<Eigen::Vector3i (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueVector3i), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
