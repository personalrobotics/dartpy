#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9lcpsolver12ODELCPSolverE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9lcpsolver12ODELCPSolver5SolveERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS3_IdLin1ELi1ELi0ELin1ELi1EEEPS7_idib_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart9lcpsolver12ODELCPSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("lcpsolver"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::lcpsolver::ODELCPSolver, ::boost::noncopyable >("ODELCPSolver", _ZN4dart9lcpsolver12ODELCPSolverE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::lcpsolver::ODELCPSolver * { return new dart::lcpsolver::ODELCPSolver(); }, ::boost::python::default_call_policies()))
.def("Solve", [](dart::lcpsolver::ODELCPSolver *self, const Eigen::MatrixXd & _A, const Eigen::VectorXd & _b, Eigen::VectorXd * _x, int numContacts) -> bool { return self->Solve(_A, _b, _x, numContacts); }, _ZN4dart9lcpsolver12ODELCPSolver5SolveERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS3_IdLin1ELi1ELi0ELin1ELi1EEEPS7_idib_docstring, (::boost::python::arg("_A"), ::boost::python::arg("_b"), ::boost::python::arg("_x"), ::boost::python::arg("numContacts")))
.def("Solve", [](dart::lcpsolver::ODELCPSolver *self, const Eigen::MatrixXd & _A, const Eigen::VectorXd & _b, Eigen::VectorXd * _x, int numContacts, double mu) -> bool { return self->Solve(_A, _b, _x, numContacts, mu); }, _ZN4dart9lcpsolver12ODELCPSolver5SolveERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS3_IdLin1ELi1ELi0ELin1ELi1EEEPS7_idib_docstring, (::boost::python::arg("_A"), ::boost::python::arg("_b"), ::boost::python::arg("_x"), ::boost::python::arg("numContacts"), ::boost::python::arg("mu")))
.def("Solve", [](dart::lcpsolver::ODELCPSolver *self, const Eigen::MatrixXd & _A, const Eigen::VectorXd & _b, Eigen::VectorXd * _x, int numContacts, double mu, int numDir) -> bool { return self->Solve(_A, _b, _x, numContacts, mu, numDir); }, _ZN4dart9lcpsolver12ODELCPSolver5SolveERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS3_IdLin1ELi1ELi0ELin1ELi1EEEPS7_idib_docstring, (::boost::python::arg("_A"), ::boost::python::arg("_b"), ::boost::python::arg("_x"), ::boost::python::arg("numContacts"), ::boost::python::arg("mu"), ::boost::python::arg("numDir")))
.def("Solve", [](dart::lcpsolver::ODELCPSolver *self, const Eigen::MatrixXd & _A, const Eigen::VectorXd & _b, Eigen::VectorXd * _x, int numContacts, double mu, int numDir, bool bUseODESolver) -> bool { return self->Solve(_A, _b, _x, numContacts, mu, numDir, bUseODESolver); }, _ZN4dart9lcpsolver12ODELCPSolver5SolveERKN5Eigen6MatrixIdLin1ELin1ELi0ELin1ELin1EEERKNS3_IdLin1ELi1ELi0ELin1ELi1EEEPS7_idib_docstring, (::boost::python::arg("_A"), ::boost::python::arg("_b"), ::boost::python::arg("_x"), ::boost::python::arg("numContacts"), ::boost::python::arg("mu"), ::boost::python::arg("numDir"), ::boost::python::arg("bUseODESolver")))
;
}

/* footer */
