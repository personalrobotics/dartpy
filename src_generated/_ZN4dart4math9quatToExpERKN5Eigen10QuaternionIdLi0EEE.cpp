#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math9quatToExpERKN5Eigen10QuaternionIdLi0EEE()
{
boost::python::def("quatToExp", static_cast<Eigen::Vector3d (*)(const Eigen::Quaterniond &)>(&dart::math::quatToExp), (::boost::python::arg("_q")))
;}

/* footer */
