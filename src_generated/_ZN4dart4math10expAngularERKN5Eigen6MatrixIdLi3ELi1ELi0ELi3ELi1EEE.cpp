#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math10expAngularERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE()
{
boost::python::def("expAngular", static_cast<Eigen::Isometry3d (*)(const Eigen::Vector3d &)>(&dart::math::expAngular), (::boost::python::arg("_s")))
;}

/* footer */
