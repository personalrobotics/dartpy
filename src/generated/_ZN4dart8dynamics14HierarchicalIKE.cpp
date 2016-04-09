#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics14HierarchicalIKE_docstring[] = R"CHIMERA_STRING( The HierarchicalIK class provides a convenient way of setting up a
 hierarchical inverse kinematics optimization problem which combines several
 InverseKinematics problems into one. InverseKinematics problems with a
 larger hierarchy level will be projected into null spaces of the problems
 that have a smaller hierarchy number.
 Note that the HierarchicalIK will only account for the
 InverseKinematics::ErrorMethod and InverseKinematics::GradientMethod that
 the IK modules specify; it will ignore any other constraints or objectives
 put into the IK modules' Problems. Any additional constraints or objectives
 that you want the HierarchicalIK to solve should be put directly into the
 HierarchicalIK's Problem.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK5solveEb_docstring[] = R"CHIMERA_STRING( Solve the IK Problem. By default, the Skeleton itself will retain the
 solved joint positions. If you pass in false for _applySolution, then the
 joint positions will be return to their original positions after the
 problem is solved.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK5solveERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEb_docstring[] = R"CHIMERA_STRING( Same as solve(bool), but the positions vector will be filled with the
 solved positions.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14HierarchicalIK5cloneERKSt10shared_ptrINS0_8SkeletonEE_docstring[] = R"CHIMERA_STRING( Clone this HierarchicalIK module
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK12setObjectiveERKSt10shared_ptrINS_9optimizer8FunctionEE_docstring[] = R"CHIMERA_STRING( Set the objective function for this HierarchicalIK.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK12getObjectiveEv_docstring[] = R"CHIMERA_STRING( Get the objective function for this HierarchicalIK.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14HierarchicalIK12getObjectiveEv_docstring[] = R"CHIMERA_STRING( Get the objective function for this HierarchicalIK.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK21setNullSpaceObjectiveERKSt10shared_ptrINS_9optimizer8FunctionEE_docstring[] = R"CHIMERA_STRING( Set the null space objective for this HierarchicalIK.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK21getNullSpaceObjectiveEv_docstring[] = R"CHIMERA_STRING( Get the null space objective for this HierarchicalIK.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14HierarchicalIK21getNullSpaceObjectiveEv_docstring[] = R"CHIMERA_STRING( Get the null space objective for this HierarchicalIK.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14HierarchicalIK21hasNullSpaceObjectiveEv_docstring[] = R"CHIMERA_STRING( Returns true if this HierarchicalIK has a null space objective.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK10getProblemEv_docstring[] = R"CHIMERA_STRING( Get the Problem that is being maintained by this HierarchicalIK module
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14HierarchicalIK10getProblemEv_docstring[] = R"CHIMERA_STRING( Get the Problem that is being maintained by this HierarchicalIK module
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK12resetProblemEb_docstring[] = R"CHIMERA_STRING( Reset the Problem that is being maintained by this HierarchicalIK module.
 This will clear out all Functions from the Problem and then configure the
 Problem to use this IK module's Objective and Constraint functions.
 Setting _clearSeeds to true will clear out any seeds that have been loaded
 into the Problem.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK9setSolverERKSt10shared_ptrINS_9optimizer6SolverEE_docstring[] = R"CHIMERA_STRING( Set the Solver that should be used by this IK module, and set it up with
 the Problem that is configured by this IK module
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK9getSolverEv_docstring[] = R"CHIMERA_STRING( Get the Solver that is being used by this IK module.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14HierarchicalIK9getSolverEv_docstring[] = R"CHIMERA_STRING( Get the Solver that is being used by this IK module.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK18refreshIKHierarchyEv_docstring[] = R"CHIMERA_STRING( Refresh the IK hierarchy of this IK module
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14HierarchicalIK14getIKHierarchyEv_docstring[] = R"CHIMERA_STRING( Get the IK hierarchy of this IK module
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14HierarchicalIK17computeNullSpacesEv_docstring[] = R"CHIMERA_STRING( Compute the null spaces of each level of the hierarchy
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14HierarchicalIK12getPositionsEv_docstring[] = R"CHIMERA_STRING( Get the current joint positions of the Skeleton associated with this
 IK module.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the current joint positions of the Skeleton associated with this
 IK module. The vector must include all DOFs in the Skeleton.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK11getSkeletonEv_docstring[] = R"CHIMERA_STRING( Get the Skeleton that this IK module is associated with
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK14getAffiliationEv_docstring[] = R"CHIMERA_STRING( This is the same as getSkeleton(). It is used by the HierarchicalIKPtr to
 provide a common interface for the various IK smart pointer types.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14HierarchicalIK11clearCachesEv_docstring[] = R"CHIMERA_STRING( Clear the caches of this IK module. It should generally not be necessary
 to call this function.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics14HierarchicalIKE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::HierarchicalIK, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("HierarchicalIK", _ZN4dart8dynamics14HierarchicalIKE_docstring, boost::python::no_init)
.def("solve", [](dart::dynamics::HierarchicalIK *self) -> bool { return self->solve(); }, _ZN4dart8dynamics14HierarchicalIK5solveEb_docstring)
.def("solve", [](dart::dynamics::HierarchicalIK *self, bool _applySolution) -> bool { return self->solve(_applySolution); }, _ZN4dart8dynamics14HierarchicalIK5solveEb_docstring, (::boost::python::arg("_applySolution")))
.def("solve", [](dart::dynamics::HierarchicalIK *self, Eigen::VectorXd & positions) -> bool { return self->solve(positions); }, _ZN4dart8dynamics14HierarchicalIK5solveERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEb_docstring, (::boost::python::arg("positions")))
.def("solve", [](dart::dynamics::HierarchicalIK *self, Eigen::VectorXd & positions, bool _applySolution) -> bool { return self->solve(positions, _applySolution); }, _ZN4dart8dynamics14HierarchicalIK5solveERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEb_docstring, (::boost::python::arg("positions"), ::boost::python::arg("_applySolution")))
.def("clone", [](const dart::dynamics::HierarchicalIK *self, const dart::dynamics::SkeletonPtr & _newSkel) -> std::shared_ptr<dart::dynamics::HierarchicalIK> { return self->clone(_newSkel); }, _ZNK4dart8dynamics14HierarchicalIK5cloneERKSt10shared_ptrINS0_8SkeletonEE_docstring, (::boost::python::arg("_newSkel")))
.def("setObjective", [](dart::dynamics::HierarchicalIK *self, const std::shared_ptr<dart::optimizer::Function> & _objective) -> void { return self->setObjective(_objective); }, _ZN4dart8dynamics14HierarchicalIK12setObjectiveERKSt10shared_ptrINS_9optimizer8FunctionEE_docstring, (::boost::python::arg("_objective")))
.def("getObjective", [](dart::dynamics::HierarchicalIK *self) -> const std::shared_ptr<dart::optimizer::Function> & { return self->getObjective(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics14HierarchicalIK12getObjectiveEv_docstring)
.def("getObjective", [](const dart::dynamics::HierarchicalIK *self) -> std::shared_ptr<const dart::optimizer::Function> { return self->getObjective(); }, _ZNK4dart8dynamics14HierarchicalIK12getObjectiveEv_docstring)
.def("setNullSpaceObjective", [](dart::dynamics::HierarchicalIK *self, const std::shared_ptr<dart::optimizer::Function> & _nsObjective) -> void { return self->setNullSpaceObjective(_nsObjective); }, _ZN4dart8dynamics14HierarchicalIK21setNullSpaceObjectiveERKSt10shared_ptrINS_9optimizer8FunctionEE_docstring, (::boost::python::arg("_nsObjective")))
.def("getNullSpaceObjective", [](dart::dynamics::HierarchicalIK *self) -> const std::shared_ptr<dart::optimizer::Function> & { return self->getNullSpaceObjective(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics14HierarchicalIK21getNullSpaceObjectiveEv_docstring)
.def("getNullSpaceObjective", [](const dart::dynamics::HierarchicalIK *self) -> std::shared_ptr<const dart::optimizer::Function> { return self->getNullSpaceObjective(); }, _ZNK4dart8dynamics14HierarchicalIK21getNullSpaceObjectiveEv_docstring)
.def("hasNullSpaceObjective", [](const dart::dynamics::HierarchicalIK *self) -> bool { return self->hasNullSpaceObjective(); }, _ZNK4dart8dynamics14HierarchicalIK21hasNullSpaceObjectiveEv_docstring)
.def("getProblem", [](dart::dynamics::HierarchicalIK *self) -> const std::shared_ptr<dart::optimizer::Problem> & { return self->getProblem(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics14HierarchicalIK10getProblemEv_docstring)
.def("getProblem", [](const dart::dynamics::HierarchicalIK *self) -> std::shared_ptr<const dart::optimizer::Problem> { return self->getProblem(); }, _ZNK4dart8dynamics14HierarchicalIK10getProblemEv_docstring)
.def("resetProblem", [](dart::dynamics::HierarchicalIK *self) -> void { return self->resetProblem(); }, _ZN4dart8dynamics14HierarchicalIK12resetProblemEb_docstring)
.def("resetProblem", [](dart::dynamics::HierarchicalIK *self, bool _clearSeeds) -> void { return self->resetProblem(_clearSeeds); }, _ZN4dart8dynamics14HierarchicalIK12resetProblemEb_docstring, (::boost::python::arg("_clearSeeds")))
.def("setSolver", [](dart::dynamics::HierarchicalIK *self, const std::shared_ptr<dart::optimizer::Solver> & _newSolver) -> void { return self->setSolver(_newSolver); }, _ZN4dart8dynamics14HierarchicalIK9setSolverERKSt10shared_ptrINS_9optimizer6SolverEE_docstring, (::boost::python::arg("_newSolver")))
.def("getSolver", [](dart::dynamics::HierarchicalIK *self) -> const std::shared_ptr<dart::optimizer::Solver> & { return self->getSolver(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics14HierarchicalIK9getSolverEv_docstring)
.def("getSolver", [](const dart::dynamics::HierarchicalIK *self) -> std::shared_ptr<const dart::optimizer::Solver> { return self->getSolver(); }, _ZNK4dart8dynamics14HierarchicalIK9getSolverEv_docstring)
.def("refreshIKHierarchy", [](dart::dynamics::HierarchicalIK *self) -> void { return self->refreshIKHierarchy(); }, _ZN4dart8dynamics14HierarchicalIK18refreshIKHierarchyEv_docstring)
.def("getIKHierarchy", [](const dart::dynamics::HierarchicalIK *self) -> const dart::dynamics::IKHierarchy & { return self->getIKHierarchy(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics14HierarchicalIK14getIKHierarchyEv_docstring)
.def("computeNullSpaces", [](const dart::dynamics::HierarchicalIK *self) -> const std::vector<Eigen::MatrixXd> & { return self->computeNullSpaces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics14HierarchicalIK17computeNullSpacesEv_docstring)
.def("getPositions", [](const dart::dynamics::HierarchicalIK *self) -> Eigen::VectorXd { return self->getPositions(); }, _ZNK4dart8dynamics14HierarchicalIK12getPositionsEv_docstring)
.def("setPositions", [](dart::dynamics::HierarchicalIK *self, const Eigen::VectorXd & _q) -> void { return self->setPositions(_q); }, _ZN4dart8dynamics14HierarchicalIK12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_q")))
.def("getSkeleton", [](dart::dynamics::HierarchicalIK *self) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(); }, _ZN4dart8dynamics14HierarchicalIK11getSkeletonEv_docstring)
.def("getAffiliation", [](dart::dynamics::HierarchicalIK *self) -> dart::dynamics::SkeletonPtr { return self->getAffiliation(); }, _ZN4dart8dynamics14HierarchicalIK14getAffiliationEv_docstring)
.def("clearCaches", [](dart::dynamics::HierarchicalIK *self) -> void { return self->clearCaches(); }, _ZN4dart8dynamics14HierarchicalIK11clearCachesEv_docstring)
;
}

/* footer */
