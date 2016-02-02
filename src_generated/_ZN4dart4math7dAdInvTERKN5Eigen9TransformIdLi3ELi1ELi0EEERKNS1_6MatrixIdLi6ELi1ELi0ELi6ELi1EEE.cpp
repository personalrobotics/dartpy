#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math7dAdInvTERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE()
{
boost::python::def("dAdInvT", static_cast<Eigen::Vector6d (*)(const Eigen::Isometry3d &, const Eigen::Vector6d &)>(&dart::math::dAdInvT), (::boost::python::arg("_T"), ::boost::python::arg("_F")))
;}

/* footer */
