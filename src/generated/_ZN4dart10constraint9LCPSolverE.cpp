#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart10constraint9LCPSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::LCPSolver, ::boost::noncopyable >("LCPSolver", boost::python::no_init)
.def("solve", [](dart::constraint::LCPSolver *self, dart::constraint::ConstrainedGroup * _group) -> void { return self->solve(_group); }, (::boost::python::arg("_group")))
.def("setTimeStep", [](dart::constraint::LCPSolver *self, double _timeStep) -> void { return self->setTimeStep(_timeStep); }, (::boost::python::arg("_timeStep")))
.def("getTimeStep", [](const dart::constraint::LCPSolver *self) -> double { return self->getTimeStep(); })
;
}

/* footer */
