#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math11isSymmetricERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEEd()
{
boost::python::def("isSymmetric", static_cast<bool (*)(const Eigen::MatrixXd &, double)>(&dart::math::isSymmetric), (::boost::python::arg("_m"), ::boost::python::arg("_tol") = 1.000000e-06))
;}

/* footer */
