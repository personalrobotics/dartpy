#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math11rotatePointERKN5Eigen10QuaternionIdLi0EEERKNS1_6MatrixIdLi3ELi1ELi0ELi3ELi1EEE()
{
boost::python::def("rotatePoint", static_cast<Eigen::Vector3d (*)(const Eigen::Quaterniond &, const Eigen::Vector3d &)>(&dart::math::rotatePoint), (::boost::python::arg("_q"), ::boost::python::arg("_pt")))
;}

/* footer */
