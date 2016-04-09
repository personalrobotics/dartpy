#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer11IpoptSolverE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer11IpoptSolver5solveEv_docstring[] = R"CHIMERA_STRING( Solve optimization problem
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer11IpoptSolver7getTypeEv_docstring[] = R"CHIMERA_STRING( Get the type (implementation) of this Solver
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer11IpoptSolver5cloneEv_docstring[] = R"CHIMERA_STRING( Create an identical clone of this Solver
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer11IpoptSolver14getApplicationEv_docstring[] = R"CHIMERA_STRING( Get a const application interface for this IpoptSolver
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer11IpoptSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::IpoptSolver, ::boost::python::bases<dart::optimizer::Solver > >("IpoptSolver", _ZN4dart9optimizer11IpoptSolverE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::IpoptSolver * { return new dart::optimizer::IpoptSolver(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::optimizer::Solver::Properties & _properties) -> dart::optimizer::IpoptSolver * { return new dart::optimizer::IpoptSolver(_properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem) -> dart::optimizer::IpoptSolver * { return new dart::optimizer::IpoptSolver(_problem); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"))))
.def("solve", [](dart::optimizer::IpoptSolver *self) -> bool { return self->solve(); }, _ZN4dart9optimizer11IpoptSolver5solveEv_docstring)
.def("getType", [](const dart::optimizer::IpoptSolver *self) -> std::string { return self->getType(); }, _ZNK4dart9optimizer11IpoptSolver7getTypeEv_docstring)
.def("clone", [](const dart::optimizer::IpoptSolver *self) -> std::shared_ptr<dart::optimizer::Solver> { return self->clone(); }, _ZNK4dart9optimizer11IpoptSolver5cloneEv_docstring)
.def("getApplication", [](const dart::optimizer::IpoptSolver *self) -> Ipopt::SmartPtr<const Ipopt::IpoptApplication> { return self->getApplication(); }, _ZNK4dart9optimizer11IpoptSolver14getApplicationEv_docstring)
;
}

/* footer */
