#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils16getValueVectorXdEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueVectorXd", static_cast<Eigen::VectorXd (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueVectorXd), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */
