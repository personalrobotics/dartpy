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

void _ZN4dart9optimizer21GradientDescentSolver16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer").attr("GradientDescentSolver"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::GradientDescentSolver::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::GradientDescentSolver::UniqueProperties * { return new dart::optimizer::GradientDescentSolver::UniqueProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](double _stepMultiplier) -> dart::optimizer::GradientDescentSolver::UniqueProperties * { return new dart::optimizer::GradientDescentSolver::UniqueProperties(_stepMultiplier); }, ::boost::python::default_call_policies(), (::boost::python::arg("_stepMultiplier"))))
.def("__init__", ::boost::python::make_constructor([](double _stepMultiplier, std::size_t _maxAttempts) -> dart::optimizer::GradientDescentSolver::UniqueProperties * { return new dart::optimizer::GradientDescentSolver::UniqueProperties(_stepMultiplier, _maxAttempts); }, ::boost::python::default_call_policies(), (::boost::python::arg("_stepMultiplier"), ::boost::python::arg("_maxAttempts"))))
.def("__init__", ::boost::python::make_constructor([](double _stepMultiplier, std::size_t _maxAttempts, std::size_t _perturbationStep) -> dart::optimizer::GradientDescentSolver::UniqueProperties * { return new dart::optimizer::GradientDescentSolver::UniqueProperties(_stepMultiplier, _maxAttempts, _perturbationStep); }, ::boost::python::default_call_policies(), (::boost::python::arg("_stepMultiplier"), ::boost::python::arg("_maxAttempts"), ::boost::python::arg("_perturbationStep"))))
.def("__init__", ::boost::python::make_constructor([](double _stepMultiplier, std::size_t _maxAttempts, std::size_t _perturbationStep, double _maxPerturbationFactor) -> dart::optimizer::GradientDescentSolver::UniqueProperties * { return new dart::optimizer::GradientDescentSolver::UniqueProperties(_stepMultiplier, _maxAttempts, _perturbationStep, _maxPerturbationFactor); }, ::boost::python::default_call_policies(), (::boost::python::arg("_stepMultiplier"), ::boost::python::arg("_maxAttempts"), ::boost::python::arg("_perturbationStep"), ::boost::python::arg("_maxPerturbationFactor"))))
.def("__init__", ::boost::python::make_constructor([](double _stepMultiplier, std::size_t _maxAttempts, std::size_t _perturbationStep, double _maxPerturbationFactor, double _maxRandomizationStep) -> dart::optimizer::GradientDescentSolver::UniqueProperties * { return new dart::optimizer::GradientDescentSolver::UniqueProperties(_stepMultiplier, _maxAttempts, _perturbationStep, _maxPerturbationFactor, _maxRandomizationStep); }, ::boost::python::default_call_policies(), (::boost::python::arg("_stepMultiplier"), ::boost::python::arg("_maxAttempts"), ::boost::python::arg("_perturbationStep"), ::boost::python::arg("_maxPerturbationFactor"), ::boost::python::arg("_maxRandomizationStep"))))
.def("__init__", ::boost::python::make_constructor([](double _stepMultiplier, std::size_t _maxAttempts, std::size_t _perturbationStep, double _maxPerturbationFactor, double _maxRandomizationStep, double _defaultConstraintWeight) -> dart::optimizer::GradientDescentSolver::UniqueProperties * { return new dart::optimizer::GradientDescentSolver::UniqueProperties(_stepMultiplier, _maxAttempts, _perturbationStep, _maxPerturbationFactor, _maxRandomizationStep, _defaultConstraintWeight); }, ::boost::python::default_call_policies(), (::boost::python::arg("_stepMultiplier"), ::boost::python::arg("_maxAttempts"), ::boost::python::arg("_perturbationStep"), ::boost::python::arg("_maxPerturbationFactor"), ::boost::python::arg("_maxRandomizationStep"), ::boost::python::arg("_defaultConstraintWeight"))))
.def("__init__", ::boost::python::make_constructor([](double _stepMultiplier, std::size_t _maxAttempts, std::size_t _perturbationStep, double _maxPerturbationFactor, double _maxRandomizationStep, double _defaultConstraintWeight, Eigen::VectorXd _eqConstraintWeights) -> dart::optimizer::GradientDescentSolver::UniqueProperties * { return new dart::optimizer::GradientDescentSolver::UniqueProperties(_stepMultiplier, _maxAttempts, _perturbationStep, _maxPerturbationFactor, _maxRandomizationStep, _defaultConstraintWeight, _eqConstraintWeights); }, ::boost::python::default_call_policies(), (::boost::python::arg("_stepMultiplier"), ::boost::python::arg("_maxAttempts"), ::boost::python::arg("_perturbationStep"), ::boost::python::arg("_maxPerturbationFactor"), ::boost::python::arg("_maxRandomizationStep"), ::boost::python::arg("_defaultConstraintWeight"), ::boost::python::arg("_eqConstraintWeights"))))
.def("__init__", ::boost::python::make_constructor([](double _stepMultiplier, std::size_t _maxAttempts, std::size_t _perturbationStep, double _maxPerturbationFactor, double _maxRandomizationStep, double _defaultConstraintWeight, Eigen::VectorXd _eqConstraintWeights, Eigen::VectorXd _ineqConstraintWeights) -> dart::optimizer::GradientDescentSolver::UniqueProperties * { return new dart::optimizer::GradientDescentSolver::UniqueProperties(_stepMultiplier, _maxAttempts, _perturbationStep, _maxPerturbationFactor, _maxRandomizationStep, _defaultConstraintWeight, _eqConstraintWeights, _ineqConstraintWeights); }, ::boost::python::default_call_policies(), (::boost::python::arg("_stepMultiplier"), ::boost::python::arg("_maxAttempts"), ::boost::python::arg("_perturbationStep"), ::boost::python::arg("_maxPerturbationFactor"), ::boost::python::arg("_maxRandomizationStep"), ::boost::python::arg("_defaultConstraintWeight"), ::boost::python::arg("_eqConstraintWeights"), ::boost::python::arg("_ineqConstraintWeights"))))
.def_readwrite("mStepSize", &dart::optimizer::GradientDescentSolver::UniqueProperties::mStepSize)
.def_readwrite("mMaxAttempts", &dart::optimizer::GradientDescentSolver::UniqueProperties::mMaxAttempts)
.def_readwrite("mPerturbationStep", &dart::optimizer::GradientDescentSolver::UniqueProperties::mPerturbationStep)
.def_readwrite("mMaxPerturbationFactor", &dart::optimizer::GradientDescentSolver::UniqueProperties::mMaxPerturbationFactor)
.def_readwrite("mMaxRandomizationStep", &dart::optimizer::GradientDescentSolver::UniqueProperties::mMaxRandomizationStep)
.def_readwrite("mDefaultConstraintWeight", &dart::optimizer::GradientDescentSolver::UniqueProperties::mDefaultConstraintWeight)
.def_readwrite("mEqConstraintWeights", &dart::optimizer::GradientDescentSolver::UniqueProperties::mEqConstraintWeights)
.def_readwrite("mIneqConstraintWeights", &dart::optimizer::GradientDescentSolver::UniqueProperties::mIneqConstraintWeights)
;
}

/* footer */
