#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9lcpsolver5LemkeERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS2_IdLin1ELi1ELi0ELin1ELi1EEEPS6_()
{
boost::python::def("Lemke", static_cast<int (*)(const Eigen::MatrixXd &, const Eigen::VectorXd &, Eigen::VectorXd *)>(&dart::lcpsolver::Lemke), (::boost::python::arg("_M"), ::boost::python::arg("_q"), ::boost::python::arg("_z")))
;}

/* footer */
