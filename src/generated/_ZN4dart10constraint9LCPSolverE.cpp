#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint9LCPSolverE_docstring[] = R"CHIMERA_STRING( LCPSolver
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint9LCPSolver5solveEPNS0_16ConstrainedGroupE_docstring[] = R"CHIMERA_STRING( Solve constriant impulses for a constrained group
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint9LCPSolver11setTimeStepEd_docstring[] = R"CHIMERA_STRING( Set time step
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint9LCPSolver11getTimeStepEv_docstring[] = R"CHIMERA_STRING( Return time step
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint9LCPSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::LCPSolver, ::boost::noncopyable >("LCPSolver", _ZN4dart10constraint9LCPSolverE_docstring, boost::python::no_init)
.def("solve", [](dart::constraint::LCPSolver *self, dart::constraint::ConstrainedGroup * _group) -> void { return self->solve(_group); }, _ZN4dart10constraint9LCPSolver5solveEPNS0_16ConstrainedGroupE_docstring, (::boost::python::arg("_group")))
.def("setTimeStep", [](dart::constraint::LCPSolver *self, double _timeStep) -> void { return self->setTimeStep(_timeStep); }, _ZN4dart10constraint9LCPSolver11setTimeStepEd_docstring, (::boost::python::arg("_timeStep")))
.def("getTimeStep", [](const dart::constraint::LCPSolver *self) -> double { return self->getTimeStep(); }, _ZNK4dart10constraint9LCPSolver11getTimeStepEv_docstring)
;
}

/* footer */
