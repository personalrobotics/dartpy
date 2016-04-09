#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer21GradientDescentSolverE_docstring[] = R"CHIMERA_STRING( DefaultSolver is a Solver extension which is native to DART (rather than
 relying on third-party libraries). It uses randomized gradient descent and
 softened constraints (i.e. constraint functions are added into the
 objective function and assigned weights) to solve nonlinear problems. Note
 that this is not a good option for Problems with difficult constraint
 functions that need to be solved exactly.
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver5solveEv_docstring[] = R"CHIMERA_STRING( Solve optimization problem
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver20getLastConfigurationEv_docstring[] = R"CHIMERA_STRING( Get the last configuration that was used by the Solver
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver7getTypeEv_docstring[] = R"CHIMERA_STRING( Get the type (implementation) of this Solver
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver5cloneEv_docstring[] = R"CHIMERA_STRING( Create an identical clone of this Solver
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver13setPropertiesERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this GradientDescentSolver
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver13setPropertiesERKNS1_16UniquePropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this GradientDescentSolver
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver28getGradientDescentPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this GradientDescentSolver
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another GradientDescentSolver
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver11setStepSizeEd_docstring[] = R"CHIMERA_STRING( Set the multiplier for the step size
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver11getStepSizeEv_docstring[] = R"CHIMERA_STRING( Get the multiplier for the step size
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver14setMaxAttemptsEm_docstring[] = R"CHIMERA_STRING( Set the maximum number of solving attempts before quitting. Each attempt
 will use getNumMaxIterations() steps. When a new attempt is started, it
 will use the next seed in the list of seeds. If we've reached the end of
 the list of seeds, the attempt will start from a randomized configuration.
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver14getMaxAttemptsEv_docstring[] = R"CHIMERA_STRING( Get the maximum number of solving attempts.
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver19setPerturbationStepEm_docstring[] = R"CHIMERA_STRING( Set the number of steps that will be taken before applying a randomized
 perturbation.
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver19getPerturbationStepEv_docstring[] = R"CHIMERA_STRING( Get UniqueProperties::mPerturbationStep
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver24setMaxPerturbationFactorEd_docstring[] = R"CHIMERA_STRING( Set UniqueProperties::mPerturbationFactor
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver24getMaxPerturbationFactorEv_docstring[] = R"CHIMERA_STRING( Get UniqueProperties::mPerturbationFactor
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver26setDefaultConstraintWeightEd_docstring[] = R"CHIMERA_STRING( Set UniqueProperties::mDefaultConstraintWeight
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver26getDefaultConstraintWeightEv_docstring[] = R"CHIMERA_STRING( Get UniqueProperties::mDefaultConstraintWeight
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver22getEqConstraintWeightsEv_docstring[] = R"CHIMERA_STRING( Set UniqueProperties::mEqConstraintWeights
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver22getEqConstraintWeightsEv_docstring[] = R"CHIMERA_STRING( Get UniqueProperties::mEqConstraintWeights
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver24getIneqConstraintWeightsEv_docstring[] = R"CHIMERA_STRING( Set UniqueProperties::mIneqConstraintWeights
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver24getIneqConstraintWeightsEv_docstring[] = R"CHIMERA_STRING( Get UniqueProperties::mIneqConstraintWeights
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver22randomizeConfigurationERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Randomize the configuration based on this Solver's settings
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer21GradientDescentSolver15clampToBoundaryERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Clamp the configuration to the limits of the Problem
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer21GradientDescentSolver20getLastNumIterationsEv_docstring[] = R"CHIMERA_STRING( Get the number of iterations used in the last attempt to solve the problem
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer21GradientDescentSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::GradientDescentSolver, ::boost::noncopyable, ::boost::python::bases<dart::optimizer::Solver > >("GradientDescentSolver", _ZN4dart9optimizer21GradientDescentSolverE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::GradientDescentSolver * { return new dart::optimizer::GradientDescentSolver(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::optimizer::GradientDescentSolver::Properties & _properties) -> dart::optimizer::GradientDescentSolver * { return new dart::optimizer::GradientDescentSolver(_properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_properties"))))
.def("__init__", ::boost::python::make_constructor([](std::shared_ptr<dart::optimizer::Problem> _problem) -> dart::optimizer::GradientDescentSolver * { return new dart::optimizer::GradientDescentSolver(_problem); }, ::boost::python::default_call_policies(), (::boost::python::arg("_problem"))))
.def("solve", [](dart::optimizer::GradientDescentSolver *self) -> bool { return self->solve(); }, _ZN4dart9optimizer21GradientDescentSolver5solveEv_docstring)
.def("getLastConfiguration", [](const dart::optimizer::GradientDescentSolver *self) -> Eigen::VectorXd { return self->getLastConfiguration(); }, _ZNK4dart9optimizer21GradientDescentSolver20getLastConfigurationEv_docstring)
.def("getType", [](const dart::optimizer::GradientDescentSolver *self) -> std::string { return self->getType(); }, _ZNK4dart9optimizer21GradientDescentSolver7getTypeEv_docstring)
.def("clone", [](const dart::optimizer::GradientDescentSolver *self) -> std::shared_ptr<dart::optimizer::Solver> { return self->clone(); }, _ZNK4dart9optimizer21GradientDescentSolver5cloneEv_docstring)
.def("setProperties", [](dart::optimizer::GradientDescentSolver *self, const dart::optimizer::GradientDescentSolver::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart9optimizer21GradientDescentSolver13setPropertiesERKNS1_10PropertiesE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::optimizer::GradientDescentSolver *self, const dart::optimizer::GradientDescentSolver::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart9optimizer21GradientDescentSolver13setPropertiesERKNS1_16UniquePropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getGradientDescentProperties", [](const dart::optimizer::GradientDescentSolver *self) -> dart::optimizer::GradientDescentSolver::Properties { return self->getGradientDescentProperties(); }, _ZNK4dart9optimizer21GradientDescentSolver28getGradientDescentPropertiesEv_docstring)
.def("copy", [](dart::optimizer::GradientDescentSolver *self, const dart::optimizer::GradientDescentSolver & _other) -> void { return self->copy(_other); }, _ZN4dart9optimizer21GradientDescentSolver4copyERKS1__docstring, (::boost::python::arg("_other")))
.def("setStepSize", [](dart::optimizer::GradientDescentSolver *self, double _newMultiplier) -> void { return self->setStepSize(_newMultiplier); }, _ZN4dart9optimizer21GradientDescentSolver11setStepSizeEd_docstring, (::boost::python::arg("_newMultiplier")))
.def("getStepSize", [](const dart::optimizer::GradientDescentSolver *self) -> double { return self->getStepSize(); }, _ZNK4dart9optimizer21GradientDescentSolver11getStepSizeEv_docstring)
.def("setMaxAttempts", [](dart::optimizer::GradientDescentSolver *self, std::size_t _maxAttempts) -> void { return self->setMaxAttempts(_maxAttempts); }, _ZN4dart9optimizer21GradientDescentSolver14setMaxAttemptsEm_docstring, (::boost::python::arg("_maxAttempts")))
.def("getMaxAttempts", [](const dart::optimizer::GradientDescentSolver *self) -> std::size_t { return self->getMaxAttempts(); }, _ZNK4dart9optimizer21GradientDescentSolver14getMaxAttemptsEv_docstring)
.def("setPerturbationStep", [](dart::optimizer::GradientDescentSolver *self, std::size_t _step) -> void { return self->setPerturbationStep(_step); }, _ZN4dart9optimizer21GradientDescentSolver19setPerturbationStepEm_docstring, (::boost::python::arg("_step")))
.def("getPerturbationStep", [](const dart::optimizer::GradientDescentSolver *self) -> std::size_t { return self->getPerturbationStep(); }, _ZNK4dart9optimizer21GradientDescentSolver19getPerturbationStepEv_docstring)
.def("setMaxPerturbationFactor", [](dart::optimizer::GradientDescentSolver *self, double _factor) -> void { return self->setMaxPerturbationFactor(_factor); }, _ZN4dart9optimizer21GradientDescentSolver24setMaxPerturbationFactorEd_docstring, (::boost::python::arg("_factor")))
.def("getMaxPerturbationFactor", [](const dart::optimizer::GradientDescentSolver *self) -> double { return self->getMaxPerturbationFactor(); }, _ZNK4dart9optimizer21GradientDescentSolver24getMaxPerturbationFactorEv_docstring)
.def("setDefaultConstraintWeight", [](dart::optimizer::GradientDescentSolver *self, double _newDefault) -> void { return self->setDefaultConstraintWeight(_newDefault); }, _ZN4dart9optimizer21GradientDescentSolver26setDefaultConstraintWeightEd_docstring, (::boost::python::arg("_newDefault")))
.def("getDefaultConstraintWeight", [](const dart::optimizer::GradientDescentSolver *self) -> double { return self->getDefaultConstraintWeight(); }, _ZNK4dart9optimizer21GradientDescentSolver26getDefaultConstraintWeightEv_docstring)
.def("getEqConstraintWeights", [](dart::optimizer::GradientDescentSolver *self) -> Eigen::VectorXd & { return self->getEqConstraintWeights(); }, ::boost::python::return_value_policy<boost::python::copy_non_const_reference >(), _ZN4dart9optimizer21GradientDescentSolver22getEqConstraintWeightsEv_docstring)
.def("getEqConstraintWeights", [](const dart::optimizer::GradientDescentSolver *self) -> const Eigen::VectorXd & { return self->getEqConstraintWeights(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9optimizer21GradientDescentSolver22getEqConstraintWeightsEv_docstring)
.def("getIneqConstraintWeights", [](dart::optimizer::GradientDescentSolver *self) -> Eigen::VectorXd & { return self->getIneqConstraintWeights(); }, ::boost::python::return_value_policy<boost::python::copy_non_const_reference >(), _ZN4dart9optimizer21GradientDescentSolver24getIneqConstraintWeightsEv_docstring)
.def("getIneqConstraintWeights", [](const dart::optimizer::GradientDescentSolver *self) -> const Eigen::VectorXd & { return self->getIneqConstraintWeights(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9optimizer21GradientDescentSolver24getIneqConstraintWeightsEv_docstring)
.def("randomizeConfiguration", [](dart::optimizer::GradientDescentSolver *self, Eigen::VectorXd & _x) -> void { return self->randomizeConfiguration(_x); }, _ZN4dart9optimizer21GradientDescentSolver22randomizeConfigurationERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_x")))
.def("clampToBoundary", [](dart::optimizer::GradientDescentSolver *self, Eigen::VectorXd & _x) -> void { return self->clampToBoundary(_x); }, _ZN4dart9optimizer21GradientDescentSolver15clampToBoundaryERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_x")))
.def("getLastNumIterations", [](const dart::optimizer::GradientDescentSolver *self) -> std::size_t { return self->getLastNumIterations(); }, _ZNK4dart9optimizer21GradientDescentSolver20getLastNumIterationsEv_docstring)
.add_static_property("Type", ::boost::python::make_getter(dart::optimizer::GradientDescentSolver::Type))
;
}

/* footer */
