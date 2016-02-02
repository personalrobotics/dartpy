#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils10toVector6dERKSs()
{
boost::python::def("toVector6d", static_cast<Eigen::Vector6d (*)(const std::string &)>(&dart::utils::toVector6d), (::boost::python::arg("str")))
;}

/* footer */
