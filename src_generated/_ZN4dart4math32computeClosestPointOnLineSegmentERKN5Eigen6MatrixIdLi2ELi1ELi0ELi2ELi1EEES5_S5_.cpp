#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math32computeClosestPointOnLineSegmentERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES5_S5_()
{
boost::python::def("computeClosestPointOnLineSegment", static_cast<Eigen::Vector2d (*)(const Eigen::Vector2d &, const Eigen::Vector2d &, const Eigen::Vector2d &)>(&dart::math::computeClosestPointOnLineSegment), (::boost::python::arg("_p"), ::boost::python::arg("_s1"), ::boost::python::arg("_s2")))
;}

/* footer */
