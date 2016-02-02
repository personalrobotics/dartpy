#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils10toVector3iERKSs()
{
boost::python::def("toVector3i", static_cast<Eigen::Vector3i (*)(const std::string &)>(&dart::utils::toVector3i), (::boost::python::arg("str")))
;}

/* footer */
