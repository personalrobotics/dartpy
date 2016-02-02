#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math12getAdTMatrixERKN5Eigen9TransformIdLi3ELi1ELi0EEE()
{
boost::python::def("getAdTMatrix", static_cast<Eigen::Matrix6d (*)(const Eigen::Isometry3d &)>(&dart::math::getAdTMatrix), (::boost::python::arg("T")))
;}

/* footer */