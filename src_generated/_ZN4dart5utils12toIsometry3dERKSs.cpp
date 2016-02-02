#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart5utils12toIsometry3dERKSs()
{
boost::python::def("toIsometry3d", static_cast<Eigen::Isometry3d (*)(const std::string &)>(&dart::utils::toIsometry3d), (::boost::python::arg("str")))
;}

/* footer */
