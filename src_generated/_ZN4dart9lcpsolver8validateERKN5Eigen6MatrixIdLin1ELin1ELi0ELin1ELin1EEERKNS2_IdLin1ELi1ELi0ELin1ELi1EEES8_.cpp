#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart9lcpsolver8validateERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS2_IdLin1ELi1ELi0ELin1ELi1EEES8_()
{
boost::python::def("validate", static_cast<bool (*)(const Eigen::MatrixXd &, const Eigen::VectorXd &, const Eigen::VectorXd &)>(&dart::lcpsolver::validate), (::boost::python::arg("_M"), ::boost::python::arg("_z"), ::boost::python::arg("_q")))
;}

/* footer */
