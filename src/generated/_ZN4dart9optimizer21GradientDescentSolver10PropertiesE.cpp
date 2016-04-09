#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer21GradientDescentSolver10PropertiesE_docstring[] = R"CHIMERA_STRING( The Solver::Properties class contains Solver parameters that are common
 to all Solver types. Most (but not necessarily all) Solvers will make use
 of these parameters, and these parameters can be directly copied or
 transferred between all Solver types.
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer21GradientDescentSolver10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer").attr("GradientDescentSolver"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::GradientDescentSolver::Properties, ::boost::python::bases<dart::optimizer::Solver::Properties, dart::optimizer::GradientDescentSolver::UniqueProperties > >("Properties", _ZN4dart9optimizer21GradientDescentSolver10PropertiesE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::GradientDescentSolver::Properties * { return new dart::optimizer::GradientDescentSolver::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::optimizer::Solver::Properties & _solverProperties) -> dart::optimizer::GradientDescentSolver::Properties * { return new dart::optimizer::GradientDescentSolver::Properties(_solverProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_solverProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::optimizer::Solver::Properties & _solverProperties, const dart::optimizer::GradientDescentSolver::UniqueProperties & _descentProperties) -> dart::optimizer::GradientDescentSolver::Properties * { return new dart::optimizer::GradientDescentSolver::Properties(_solverProperties, _descentProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_solverProperties"), ::boost::python::arg("_descentProperties"))))
;
}

/* footer */
