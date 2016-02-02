#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math9quatDerivERKN5Eigen10QuaternionIdLi0EEEi()
{
boost::python::def("quatDeriv", static_cast<Eigen::Matrix3d (*)(const Eigen::Quaterniond &, int)>(&dart::math::quatDeriv), (::boost::python::arg("_q"), ::boost::python::arg("_el")))
;}

/* footer */
