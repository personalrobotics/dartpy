#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math6AdInvTERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE()
{
boost::python::def("AdInvT", static_cast<Eigen::Vector6d (*)(const Eigen::Isometry3d &, const Eigen::Vector6d &)>(&dart::math::AdInvT), (::boost::python::arg("_T"), ::boost::python::arg("_V")))
;}

/* footer */
