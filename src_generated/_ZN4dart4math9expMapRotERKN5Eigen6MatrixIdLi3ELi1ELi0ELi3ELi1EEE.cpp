#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math9expMapRotERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE()
{
boost::python::def("expMapRot", static_cast<Eigen::Matrix3d (*)(const Eigen::Vector3d &)>(&dart::math::expMapRot), (::boost::python::arg("_expmap")))
;}

/* footer */
