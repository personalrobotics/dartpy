#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils20getAttributeVector2dEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getAttributeVector2d", static_cast<Eigen::Vector2d (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeVector2d), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
