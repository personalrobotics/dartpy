#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils20getAttributeVectorXdEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getAttributeVectorXd", static_cast<Eigen::VectorXd (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getAttributeVectorXd), (::boost::python::arg("element"), ::boost::python::arg("attributeName")))
;}

/* footer */
