#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9lcpsolver8validateERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS2_IdLin1ELi1ELi0ELin1ELi1EEES8_()
{
::boost::python::object parent_object(::boost::python::scope().attr("lcpsolver"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("validate", static_cast<bool (*)(const Eigen::MatrixXd &, const Eigen::VectorXd &, const Eigen::VectorXd &)>(&dart::lcpsolver::validate), (::boost::python::arg("_M"), ::boost::python::arg("_z"), ::boost::python::arg("_q")))
;}

/* footer */
