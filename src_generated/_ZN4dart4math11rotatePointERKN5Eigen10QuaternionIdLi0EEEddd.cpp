#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math11rotatePointERKN5Eigen10QuaternionIdLi0EEEddd()
{
boost::python::def("rotatePoint", static_cast<Eigen::Vector3d (*)(const Eigen::Quaterniond &, double, double, double)>(&dart::math::rotatePoint), (::boost::python::arg("_q"), ::boost::python::arg("_x"), ::boost::python::arg("_y"), ::boost::python::arg("_z")))
;}

/* footer */
