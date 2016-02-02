#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math16matrixToEulerZYXERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE()
{
boost::python::def("matrixToEulerZYX", static_cast<Eigen::Vector3d (*)(const Eigen::Matrix3d &)>(&dart::math::matrixToEulerZYX), (::boost::python::arg("_R")))
;}

/* footer */
