#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9lcpsolver12ODELCPSolverE()
{
::boost::python::class_<dart::lcpsolver::ODELCPSolver, ::boost::noncopyable >("ODELCPSolver", boost::python::no_init)
.def(::boost::python::init<>())
.def("Solve", static_cast<bool (dart::lcpsolver::ODELCPSolver::*)(const Eigen::MatrixXd &, const Eigen::VectorXd &, Eigen::VectorXd *, int, double, int, bool)>(&dart::lcpsolver::ODELCPSolver::Solve), (::boost::python::arg("_A"), ::boost::python::arg("_b"), ::boost::python::arg("_x"), ::boost::python::arg("numContacts"), ::boost::python::arg("mu") = 0.000000e+00, ::boost::python::arg("numDir") = 0, ::boost::python::arg("bUseODESolver") = false))
;
}

/* footer */
