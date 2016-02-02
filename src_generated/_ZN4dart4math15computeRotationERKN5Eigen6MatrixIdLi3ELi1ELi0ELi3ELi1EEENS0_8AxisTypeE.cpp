#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math15computeRotationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEENS0_8AxisTypeE()
{
boost::python::def("computeRotation", static_cast<Eigen::Matrix3d (*)(const Eigen::Vector3d &, dart::math::AxisType)>(&dart::math::computeRotation), (::boost::python::arg("axis"), ::boost::python::arg("axisType") = 0))
;}

/* footer */
