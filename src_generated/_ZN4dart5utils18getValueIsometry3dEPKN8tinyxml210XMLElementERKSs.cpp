#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils18getValueIsometry3dEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueIsometry3d", static_cast<Eigen::Isometry3d (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueIsometry3d), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
