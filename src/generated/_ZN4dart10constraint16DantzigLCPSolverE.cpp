#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint16DantzigLCPSolverE_docstring[] = R"CHIMERA_STRING( DantzigLCPSolver is a LCP solver that uses ODE's implementation of Dantzig
 algorithm
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16DantzigLCPSolver5solveEPNS0_16ConstrainedGroupE_docstring[] = R"CHIMERA_STRING( Solve constriant impulses for a constrained group
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint16DantzigLCPSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::DantzigLCPSolver, ::boost::noncopyable, ::boost::python::bases<dart::constraint::LCPSolver > >("DantzigLCPSolver", _ZN4dart10constraint16DantzigLCPSolverE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](double _timestep) -> dart::constraint::DantzigLCPSolver * { return new dart::constraint::DantzigLCPSolver(_timestep); }, ::boost::python::default_call_policies(), (::boost::python::arg("_timestep"))))
.def("solve", [](dart::constraint::DantzigLCPSolver *self, dart::constraint::ConstrainedGroup * _group) -> void { return self->solve(_group); }, _ZN4dart10constraint16DantzigLCPSolver5solveEPNS0_16ConstrainedGroupE_docstring, (::boost::python::arg("_group")))
;
}

/* footer */
