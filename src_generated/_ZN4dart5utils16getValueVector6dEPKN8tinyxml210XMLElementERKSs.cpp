#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils16getValueVector6dEPKN8tinyxml210XMLElementERKSs()
{
boost::python::def("getValueVector6d", static_cast<Eigen::Vector6d (*)(const tinyxml2::XMLElement *, const std::string &)>(&dart::utils::getValueVector6d), (::boost::python::arg("parentElement"), ::boost::python::arg("name")))
;}

/* footer */