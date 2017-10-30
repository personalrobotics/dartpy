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

void _ZN4dart9optimizer21GradientDescentSolver10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer").attr("GradientDescentSolver"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::GradientDescentSolver::Properties, ::boost::python::bases<dart::optimizer::GradientDescentSolver::UniqueProperties, dart::optimizer::Solver::Properties > >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::GradientDescentSolver::Properties * { return new dart::optimizer::GradientDescentSolver::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::optimizer::Solver::Properties & _solverProperties) -> dart::optimizer::GradientDescentSolver::Properties * { return new dart::optimizer::GradientDescentSolver::Properties(_solverProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_solverProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::optimizer::Solver::Properties & _solverProperties, const dart::optimizer::GradientDescentSolver::UniqueProperties & _descentProperties) -> dart::optimizer::GradientDescentSolver::Properties * { return new dart::optimizer::GradientDescentSolver::Properties(_solverProperties, _descentProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_solverProperties"), ::boost::python::arg("_descentProperties"))))
;
}

/* footer */
