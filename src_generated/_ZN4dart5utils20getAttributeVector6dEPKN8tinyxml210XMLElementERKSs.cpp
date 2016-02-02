#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils20getAttributeVector6dEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getAttributeVector6d", static_cast<Eigen::Vector6d (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeVector6d), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
