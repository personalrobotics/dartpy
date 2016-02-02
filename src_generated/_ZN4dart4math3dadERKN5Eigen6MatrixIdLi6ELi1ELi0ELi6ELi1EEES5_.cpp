#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math3dadERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES5_()
{
boost::python::def("dad", static_cast<Eigen::Vector6d (*)(const Eigen::Vector6d &, const Eigen::Vector6d &)>(&dart::math::dad), (::boost::python::arg("_s"), ::boost::python::arg("_t")))
;}

/* footer */
