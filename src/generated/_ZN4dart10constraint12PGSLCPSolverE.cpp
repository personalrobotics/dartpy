#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint12PGSLCPSolverE_docstring[] = R"CHIMERA_STRING( PGSLCPSolver
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint12PGSLCPSolver5solveEPNS0_16ConstrainedGroupE_docstring[] = R"CHIMERA_STRING( Solve constriant impulses for a constrained group
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint12PGSLCPSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::PGSLCPSolver, ::boost::noncopyable, ::boost::python::bases<dart::constraint::LCPSolver > >("PGSLCPSolver", _ZN4dart10constraint12PGSLCPSolverE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](double _timestep) -> dart::constraint::PGSLCPSolver * { return new dart::constraint::PGSLCPSolver(_timestep); }, ::boost::python::default_call_policies(), (::boost::python::arg("_timestep"))))
.def("solve", [](dart::constraint::PGSLCPSolver *self, dart::constraint::ConstrainedGroup * _group) -> void { return self->solve(_group); }, _ZN4dart10constraint12PGSLCPSolver5solveEPNS0_16ConstrainedGroupE_docstring, (::boost::python::arg("_group")))
;
}

/* footer */
