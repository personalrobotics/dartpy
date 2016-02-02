#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9lcpsolver5LemkeERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS2_IdLin1ELi1ELi0ELin1ELi1EEEPS6_()
{
boost::python::def("Lemke", static_cast<int (*)(const Eigen::MatrixXd &, const Eigen::VectorXd &, Eigen::VectorXd *)>(&dart::lcpsolver::Lemke), (::boost::python::arg("_M"), ::boost::python::arg("_q"), ::boost::python::arg("_z")))
;}

/* footer */
