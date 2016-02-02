#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math15quatSecondDerivERKN5Eigen10QuaternionIdLi0EEEii()
{
boost::python::def("quatSecondDeriv", static_cast<Eigen::Matrix3d (*)(const Eigen::Quaterniond &, int, int)>(&dart::math::quatSecondDeriv), (::boost::python::arg("_q"), ::boost::python::arg("_el1"), ::boost::python::arg("_el2")))
;}

/* footer */
