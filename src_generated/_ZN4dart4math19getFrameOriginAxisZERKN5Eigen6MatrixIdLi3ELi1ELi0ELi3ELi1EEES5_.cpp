#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math19getFrameOriginAxisZERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES5_()
{
boost::python::def("getFrameOriginAxisZ", static_cast<Eigen::Isometry3d (*)(const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::math::getFrameOriginAxisZ), (::boost::python::arg("_origin"), ::boost::python::arg("_axisZ")))
;}

/* footer */
