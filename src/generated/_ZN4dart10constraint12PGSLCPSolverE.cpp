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

void _ZN4dart10constraint12PGSLCPSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::PGSLCPSolver, ::boost::python::bases<dart::constraint::LCPSolver > >("PGSLCPSolver", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](double _timestep) -> dart::constraint::PGSLCPSolver * { return new dart::constraint::PGSLCPSolver(_timestep); }, ::boost::python::default_call_policies(), (::boost::python::arg("_timestep"))))
.def("solve", [](dart::constraint::PGSLCPSolver *self, dart::constraint::ConstrainedGroup * _group) -> void { return self->solve(_group); }, (::boost::python::arg("_group")))
;
}

/* footer */
