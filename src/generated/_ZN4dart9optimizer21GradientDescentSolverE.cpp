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

void _ZN4dart9optimizer21GradientDescentSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::GradientDescentSolver, ::boost::noncopyable, ::boost::python::bases<dart::optimizer::Solver > >("GradientDescentSolver", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::GradientDescentSolver * { return new dart::optimizer::GradientDescentSolver(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::optimizer::GradientDescentSolver::Properties & _properties) -> dart::optimizer::GradientDescentSolver * { return new dart::optimizer::GradientDescentSolver(_properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem) -> dart::optimizer::GradientDescentSolver * { return new dart::optimizer::GradientDescentSolver(_problem); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"))))
.def("solve", [](dart::optimizer::GradientDescentSolver *self) -> bool { return self->solve(); })
.def("getLastConfiguration", [](const dart::optimizer::GradientDescentSolver *self) -> Eigen::VectorXd { return self->getLastConfiguration(); })
.def("getType", [](const dart::optimizer::GradientDescentSolver *self) -> std::string { return self->getType(); })
.def("clone", [](const dart::optimizer::GradientDescentSolver *self) -> std::shared_ptr<dart::optimizer::Solver> { return self->clone(); })
.def("setProperties", [](dart::optimizer::GradientDescentSolver *self, const dart::optimizer::GradientDescentSolver::Properties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::optimizer::GradientDescentSolver *self, const dart::optimizer::GradientDescentSolver::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("getGradientDescentProperties", [](const dart::optimizer::GradientDescentSolver *self) -> dart::optimizer::GradientDescentSolver::Properties { return self->getGradientDescentProperties(); })
.def("copy", [](dart::optimizer::GradientDescentSolver *self, const dart::optimizer::GradientDescentSolver & _other) -> void { return self->copy(_other); }, (::boost::python::arg("_other")))
.def("setStepSize", [](dart::optimizer::GradientDescentSolver *self, double _newMultiplier) -> void { return self->setStepSize(_newMultiplier); }, (::boost::python::arg("_newMultiplier")))
.def("getStepSize", [](const dart::optimizer::GradientDescentSolver *self) -> double { return self->getStepSize(); })
.def("setMaxAttempts", [](dart::optimizer::GradientDescentSolver *self, std::size_t _maxAttempts) -> void { return self->setMaxAttempts(_maxAttempts); }, (::boost::python::arg("_maxAttempts")))
.def("getMaxAttempts", [](const dart::optimizer::GradientDescentSolver *self) -> std::size_t { return self->getMaxAttempts(); })
.def("setPerturbationStep", [](dart::optimizer::GradientDescentSolver *self, std::size_t _step) -> void { return self->setPerturbationStep(_step); }, (::boost::python::arg("_step")))
.def("getPerturbationStep", [](const dart::optimizer::GradientDescentSolver *self) -> std::size_t { return self->getPerturbationStep(); })
.def("setMaxPerturbationFactor", [](dart::optimizer::GradientDescentSolver *self, double _factor) -> void { return self->setMaxPerturbationFactor(_factor); }, (::boost::python::arg("_factor")))
.def("getMaxPerturbationFactor", [](const dart::optimizer::GradientDescentSolver *self) -> double { return self->getMaxPerturbationFactor(); })
.def("setDefaultConstraintWeight", [](dart::optimizer::GradientDescentSolver *self, double _newDefault) -> void { return self->setDefaultConstraintWeight(_newDefault); }, (::boost::python::arg("_newDefault")))
.def("getDefaultConstraintWeight", [](const dart::optimizer::GradientDescentSolver *self) -> double { return self->getDefaultConstraintWeight(); })
.def("getEqConstraintWeights", [](dart::optimizer::GradientDescentSolver *self) -> Eigen::VectorXd & { return self->getEqConstraintWeights(); }, ::boost::python::return_value_policy<boost::python::copy_non_const_reference >())
.def("getEqConstraintWeights", [](const dart::optimizer::GradientDescentSolver *self) -> const Eigen::VectorXd & { return self->getEqConstraintWeights(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getIneqConstraintWeights", [](dart::optimizer::GradientDescentSolver *self) -> Eigen::VectorXd & { return self->getIneqConstraintWeights(); }, ::boost::python::return_value_policy<boost::python::copy_non_const_reference >())
.def("getIneqConstraintWeights", [](const dart::optimizer::GradientDescentSolver *self) -> const Eigen::VectorXd & { return self->getIneqConstraintWeights(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("randomizeConfiguration", [](dart::optimizer::GradientDescentSolver *self, Eigen::VectorXd & _x) -> void { return self->randomizeConfiguration(_x); }, (::boost::python::arg("_x")))
.def("clampToBoundary", [](dart::optimizer::GradientDescentSolver *self, Eigen::VectorXd & _x) -> void { return self->clampToBoundary(_x); }, (::boost::python::arg("_x")))
.def("getLastNumIterations", [](const dart::optimizer::GradientDescentSolver *self) -> std::size_t { return self->getLastNumIterations(); })
.add_static_property("Type", ::boost::python::make_getter(dart::optimizer::GradientDescentSolver::Type))
;
}

/* footer */
