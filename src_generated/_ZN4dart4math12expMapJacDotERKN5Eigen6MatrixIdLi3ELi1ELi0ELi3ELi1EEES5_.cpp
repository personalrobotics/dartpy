#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math12expMapJacDotERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_()
{
boost::python::def("expMapJacDot", static_cast<Eigen::Matrix3d (*)(const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::math::expMapJacDot), (::boost::python::arg("_expmap"), ::boost::python::arg("_qdot")))
;}

/* footer */
