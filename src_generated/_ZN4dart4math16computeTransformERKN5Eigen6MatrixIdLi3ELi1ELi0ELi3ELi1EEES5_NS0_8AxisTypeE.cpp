#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math16computeTransformERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_NS0_8AxisTypeE()
{
boost::python::def("computeTransform", static_cast<Eigen::Isometry3d (*)(const Eigen::Vector3d &, const Eigen::Vector3d &, dart::math::AxisType)>(&dart::math::computeTransform), (::boost::python::arg("axis"), ::boost::python::arg("translation"), ::boost::python::arg("axisType") = 0))
;}

/* footer */
