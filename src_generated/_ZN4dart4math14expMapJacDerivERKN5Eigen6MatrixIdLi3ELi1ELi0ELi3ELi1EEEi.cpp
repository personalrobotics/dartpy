#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math14expMapJacDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEi()
{
boost::python::def("expMapJacDeriv", static_cast<Eigen::Matrix3d (*)(const Eigen::Vector3d &, int)>(&dart::math::expMapJacDeriv), (::boost::python::arg("_expmap"), ::boost::python::arg("_qi")))
;}

/* footer */
