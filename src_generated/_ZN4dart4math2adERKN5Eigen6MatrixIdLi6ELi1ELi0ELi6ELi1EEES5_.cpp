#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math2adERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES5_()
{
boost::python::def("ad", static_cast<Eigen::Vector6d (*)(const Eigen::Vector6d &, const Eigen::Vector6d &)>(&dart::math::ad), (::boost::python::arg("_X"), ::boost::python::arg("_Y")))
;}

/* footer */
