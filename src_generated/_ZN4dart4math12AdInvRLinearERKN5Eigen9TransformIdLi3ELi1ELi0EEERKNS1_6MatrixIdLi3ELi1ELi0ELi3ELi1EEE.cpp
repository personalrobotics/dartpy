#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math12AdInvRLinearERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi3ELi1ELi0ELi3ELi1EEE()
{
boost::python::def("AdInvRLinear", static_cast<Eigen::Vector6d (*)(const Eigen::Isometry3d &, const Eigen::Vector3d &)>(&dart::math::AdInvRLinear), (::boost::python::arg("_T"), ::boost::python::arg("_v")))
;}

/* footer */
