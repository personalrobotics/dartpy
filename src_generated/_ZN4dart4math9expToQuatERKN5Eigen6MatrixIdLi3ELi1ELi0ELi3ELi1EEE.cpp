#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math9expToQuatERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE()
{
boost::python::def("expToQuat", static_cast<Eigen::Quaterniond (*)(const Eigen::Vector3d &)>(&dart::math::expToQuat), (::boost::python::arg("_v")))
;}

/* footer */
