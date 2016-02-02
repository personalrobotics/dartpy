#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils20getAttributeVectorXdEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getAttributeVectorXd", static_cast<Eigen::VectorXd (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeVectorXd), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
