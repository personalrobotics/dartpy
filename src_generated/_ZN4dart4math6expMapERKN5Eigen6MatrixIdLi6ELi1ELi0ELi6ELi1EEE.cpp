#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math6expMapERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE()
{
boost::python::def("expMap", static_cast<Eigen::Isometry3d (*)(const Eigen::Vector6d &)>(&dart::math::expMap), (::boost::python::arg("_S")))
;}

/* footer */
