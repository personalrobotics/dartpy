#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics17InverseKinematicsE_docstring[] = R"CHIMERA_STRING( The InverseKinematics class provides a convenient way of setting up an IK
 optimization problem. It generates constraint functions based on the
 specified InverseKinematics::ErrorMethod and
 InverseKinematics::GradientMethod.
 It also provides a convenient way of specifying a configuration space
 objective and a null space objective. It is also possible to fully customize
 the optimizer::Problem that the module creates, and the IK module can be
 safely cloned  over to another JacobianNode, as long as every
 optimizer::Function that depends on the JacobianNode inherits the
 InverseKinematics::Function class and correctly overloads the clone function
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics6createEPNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Create an InverseKinematics module for a specified node
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics5solveEb_docstring[] = R"CHIMERA_STRING( Solve the IK Problem. By default, the Skeleton itself will retain the
 solved joint positions. If you pass in false for _applySolution, then the
 joint positions will be returned to their original positions after the
 problem is solved.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics5solveERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEb_docstring[] = R"CHIMERA_STRING( Same as solve(bool), but the positions vector will be filled with the
 solved positions.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics5cloneEPNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Clone this IK module, but targeted at a new Node. Any Functions in the
 Problem that inherit InverseKinematics::Function will be adapted to the
 new IK module. Any generic optimizer::Function will just be copied over
 by pointer instead of being cloned.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics9setActiveEb_docstring[] = R"CHIMERA_STRING( If this IK module is set to active, then it will be utilized by any
 HierarchicalIK that has it in its list. If it is set to inactive, then it
 will be ignored by any HierarchicalIK holding onto it, but you can still
 use the solve() function with this.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11setInactiveEv_docstring[] = R"CHIMERA_STRING( Equivalent to setActive(false)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics8isActiveEv_docstring[] = R"CHIMERA_STRING( Returns true if this IK module is allowed to be active in a HierarchicalIK
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics17setHierarchyLevelEm_docstring[] = R"CHIMERA_STRING( Set the hierarchy level of this module. Modules with a larger hierarchy
 value will be projected through the null spaces of all modules with a
 smaller hierarchy value. In other words, IK modules with a hierarchy level
 closer to 0 are given higher priority.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics17getHierarchyLevelEv_docstring[] = R"CHIMERA_STRING( Get the hierarchy level of this modle.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics8useChainEv_docstring[] = R"CHIMERA_STRING( When solving the IK for this module's Node, use the longest available
 dynamics::Chain that goes from this module's Node towards the root of the
 Skeleton. Using this will prevent any other branches in the Skeleton from
 being affected by this IK module.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics12useWholeBodyEv_docstring[] = R"CHIMERA_STRING( Use all relevant joints on the Skeleton to solve the IK.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics7setDofsERKSt6vectorImSaImEE_docstring[] = R"CHIMERA_STRING( Explicitly set which degrees of freedom should be used to solve the IK for
 this module. The values in the vector should correspond to the Skeleton
 indices of each DOF.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics7getDofsEv_docstring[] = R"CHIMERA_STRING( Get the indices of the DOFs that this IK module will use when solving.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics9getDofMapEv_docstring[] = R"CHIMERA_STRING( When a Jacobian is computed for a JacobianNode, it will include a column
 for every DegreeOfFreedom that the node depends on. Given the column index
 of one of those dependent coordinates, this map will return its location
 in the mDofs vector. A value of -1 means that it is not present in the
 mDofs vector and therefore should not be used when performing inverse
 kinematics.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics12setObjectiveERKSt10shared_ptrINS_9optimizer8FunctionEE_docstring[] = R"CHIMERA_STRING( Set an objective function that should be minimized while satisfying the
 inverse kinematics constraint. Pass in a nullptr to remove the objective
 and make it a constant-zero function.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics12getObjectiveEv_docstring[] = R"CHIMERA_STRING( Get the objective function for this IK module
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics12getObjectiveEv_docstring[] = R"CHIMERA_STRING( Get the objective function for this IK module
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics21setNullSpaceObjectiveERKSt10shared_ptrINS_9optimizer8FunctionEE_docstring[] = R"CHIMERA_STRING( Set an objective function that should be minimized within the null space
 of the inverse kinematics constraint. The gradient of this function will
 always be projected through the null space of this IK module's Jacobian.
 Pass in a nullptr to remove the null space objective.
 Note: The objectives given to setObjective() and setNullSpaceObjective()
 will always be superimposed (added together) via the evalObjective()
 function.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics21getNullSpaceObjectiveEv_docstring[] = R"CHIMERA_STRING( Get the null space objective for this IK module
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics21getNullSpaceObjectiveEv_docstring[] = R"CHIMERA_STRING( Get the null space objective for this IK module
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics21hasNullSpaceObjectiveEv_docstring[] = R"CHIMERA_STRING( Returns false if the null space objective does nothing
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics14getErrorMethodEv_docstring[] = R"CHIMERA_STRING( Get the ErrorMethod for this IK module. Every IK module always has an
 ErrorMethod available, so this is passed by reference.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics17getGradientMethodEv_docstring[] = R"CHIMERA_STRING( Get the GradientMethod for this IK module. Every IK module always has a
 GradientMethod available, so this is passed by reference.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics13getAnalyticalEv_docstring[] = R"CHIMERA_STRING( Get the Analytical IK method for this module, if one is available.
 Analytical methods are not provided by default. If this IK module does not
 have an analytical method, then this will return a nullptr.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics10getProblemEv_docstring[] = R"CHIMERA_STRING( Get the Problem that is being maintained by this IK module.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics10getProblemEv_docstring[] = R"CHIMERA_STRING( Get the Problem that is being maintained by this IK module.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics12resetProblemEb_docstring[] = R"CHIMERA_STRING( Reset the Problem that is being maintained by this IK module. This will
 clear out all Functions from the Problem and then configure the Problem to
 use this IK module's Objective and Constraint functions.
 Setting _clearSeeds to true will clear out any seeds that have been loaded
 into the Problem.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics9setSolverERKSt10shared_ptrINS_9optimizer6SolverEE_docstring[] = R"CHIMERA_STRING( Set the Solver that should be used by this IK module, and set it up with
 the Problem that is configured by this IK module
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics9getSolverEv_docstring[] = R"CHIMERA_STRING( Get the Solver that is being used by this IK module.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics9getSolverEv_docstring[] = R"CHIMERA_STRING( Get the Solver that is being used by this IK module.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics9setOffsetERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Inverse kinematics can be performed on any point within the body frame.
 The default point is the origin of the body frame. Use this function to
 change the point that will be used. _offset must represent the offset of
 the desired point from the body origin, expressed in coordinates of the
 body frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics9getOffsetEv_docstring[] = R"CHIMERA_STRING( Get the offset from the origin of the body frame that will be used when
 performing inverse kinematics. The offset will be expressed in the
 coordinates of the body frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics9hasOffsetEv_docstring[] = R"CHIMERA_STRING( This returns false if the offset for the inverse kinematics is a zero
 vector. Otherwise, it returns true. Use setOffset() to set the offset and
 getOffset() to get the offset.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics9setTargetESt10shared_ptrINS0_11SimpleFrameEE_docstring[] = R"CHIMERA_STRING( Set the target for this IK module.
 Note that a target will automatically be created for the IK module upon
 instantiation, so you typically do not need to use this function. If you
 want to attach the target to an arbitrary (non-SimpleFrame) reference
 frame, you can do getTarget()->setParentFrame(arbitraryFrame)
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics9getTargetEv_docstring[] = R"CHIMERA_STRING( Get the target that is being used by this IK module. You never have to
 check whether this is a nullptr, because it cannot ever be set to nullptr.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics9getTargetEv_docstring[] = R"CHIMERA_STRING( Get the target that is being used by this IK module. You never have to
 check whether this is a nullptr, because it cannot ever be set to nullptr.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics7getNodeEv_docstring[] = R"CHIMERA_STRING( Get the JacobianNode that this IK module operates on.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics14getAffiliationEv_docstring[] = R"CHIMERA_STRING( This is the same as getNode(). It is used by the InverseKinematicsPtr to
 provide a common interface for the various IK smart pointer types.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics15computeJacobianEv_docstring[] = R"CHIMERA_STRING( Compute the Jacobian for this IK module's node, using the Skeleton's
 current joint positions and the DOFs that have been assigned to the
 module.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics12getPositionsEv_docstring[] = R"CHIMERA_STRING( Get the current joint positions of the Skeleton. This will only include
 the DOFs that have been assigned to this IK module, and the components of
 the vector will correspond to the components of getDofs().
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the current joint positions of the Skeleton. This must only include
 the DOFs that have been assigned to this IK module, and the components of
 the vector must correspond to the components of getDofs().
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11clearCachesEv_docstring[] = R"CHIMERA_STRING( Clear the caches of this IK module. It should generally not be necessary
 to call this function. However, if you have some non-standard external
 dependency for your error and/or gradient method computations, then you
 will need to tie this function to something that tracks changes in that
 dependency.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics17InverseKinematicsE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics, ::boost::noncopyable, std::shared_ptr<dart::dynamics::InverseKinematics>, ::boost::python::bases<dart::common::Subject > >("InverseKinematics", _ZN4dart8dynamics17InverseKinematicsE_docstring, boost::python::no_init)
.def("solve", [](dart::dynamics::InverseKinematics *self) -> bool { return self->solve(); }, _ZN4dart8dynamics17InverseKinematics5solveEb_docstring)
.def("solve", [](dart::dynamics::InverseKinematics *self, bool _applySolution) -> bool { return self->solve(_applySolution); }, _ZN4dart8dynamics17InverseKinematics5solveEb_docstring, (::boost::python::arg("_applySolution")))
.def("solve", [](dart::dynamics::InverseKinematics *self, Eigen::VectorXd & positions) -> bool { return self->solve(positions); }, _ZN4dart8dynamics17InverseKinematics5solveERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEb_docstring, (::boost::python::arg("positions")))
.def("solve", [](dart::dynamics::InverseKinematics *self, Eigen::VectorXd & positions, bool _applySolution) -> bool { return self->solve(positions, _applySolution); }, _ZN4dart8dynamics17InverseKinematics5solveERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEb_docstring, (::boost::python::arg("positions"), ::boost::python::arg("_applySolution")))
.def("clone", [](const dart::dynamics::InverseKinematics *self, dart::dynamics::JacobianNode * _newNode) -> dart::dynamics::InverseKinematicsPtr { return self->clone(_newNode); }, _ZNK4dart8dynamics17InverseKinematics5cloneEPNS0_12JacobianNodeE_docstring, (::boost::python::arg("_newNode")))
.def("setActive", [](dart::dynamics::InverseKinematics *self) -> void { return self->setActive(); }, _ZN4dart8dynamics17InverseKinematics9setActiveEb_docstring)
.def("setActive", [](dart::dynamics::InverseKinematics *self, bool _active) -> void { return self->setActive(_active); }, _ZN4dart8dynamics17InverseKinematics9setActiveEb_docstring, (::boost::python::arg("_active")))
.def("setInactive", [](dart::dynamics::InverseKinematics *self) -> void { return self->setInactive(); }, _ZN4dart8dynamics17InverseKinematics11setInactiveEv_docstring)
.def("isActive", [](const dart::dynamics::InverseKinematics *self) -> bool { return self->isActive(); }, _ZNK4dart8dynamics17InverseKinematics8isActiveEv_docstring)
.def("setHierarchyLevel", [](dart::dynamics::InverseKinematics *self, std::size_t _level) -> void { return self->setHierarchyLevel(_level); }, _ZN4dart8dynamics17InverseKinematics17setHierarchyLevelEm_docstring, (::boost::python::arg("_level")))
.def("getHierarchyLevel", [](const dart::dynamics::InverseKinematics *self) -> std::size_t { return self->getHierarchyLevel(); }, _ZNK4dart8dynamics17InverseKinematics17getHierarchyLevelEv_docstring)
.def("useChain", [](dart::dynamics::InverseKinematics *self) -> void { return self->useChain(); }, _ZN4dart8dynamics17InverseKinematics8useChainEv_docstring)
.def("useWholeBody", [](dart::dynamics::InverseKinematics *self) -> void { return self->useWholeBody(); }, _ZN4dart8dynamics17InverseKinematics12useWholeBodyEv_docstring)
.def("setDofs", [](dart::dynamics::InverseKinematics *self, const std::vector<std::size_t> & _dofs) -> void { return self->setDofs(_dofs); }, _ZN4dart8dynamics17InverseKinematics7setDofsERKSt6vectorImSaImEE_docstring, (::boost::python::arg("_dofs")))
.def("getDofs", [](const dart::dynamics::InverseKinematics *self) -> const std::vector<std::size_t> & { return self->getDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics17InverseKinematics7getDofsEv_docstring)
.def("getDofMap", [](const dart::dynamics::InverseKinematics *self) -> const std::vector<int> & { return self->getDofMap(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics17InverseKinematics9getDofMapEv_docstring)
.def("setObjective", [](dart::dynamics::InverseKinematics *self, const std::shared_ptr<dart::optimizer::Function> & _objective) -> void { return self->setObjective(_objective); }, _ZN4dart8dynamics17InverseKinematics12setObjectiveERKSt10shared_ptrINS_9optimizer8FunctionEE_docstring, (::boost::python::arg("_objective")))
.def("getObjective", [](dart::dynamics::InverseKinematics *self) -> const std::shared_ptr<dart::optimizer::Function> & { return self->getObjective(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics17InverseKinematics12getObjectiveEv_docstring)
.def("getObjective", [](const dart::dynamics::InverseKinematics *self) -> std::shared_ptr<const dart::optimizer::Function> { return self->getObjective(); }, _ZNK4dart8dynamics17InverseKinematics12getObjectiveEv_docstring)
.def("setNullSpaceObjective", [](dart::dynamics::InverseKinematics *self, const std::shared_ptr<dart::optimizer::Function> & _nsObjective) -> void { return self->setNullSpaceObjective(_nsObjective); }, _ZN4dart8dynamics17InverseKinematics21setNullSpaceObjectiveERKSt10shared_ptrINS_9optimizer8FunctionEE_docstring, (::boost::python::arg("_nsObjective")))
.def("getNullSpaceObjective", [](dart::dynamics::InverseKinematics *self) -> const std::shared_ptr<dart::optimizer::Function> & { return self->getNullSpaceObjective(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics17InverseKinematics21getNullSpaceObjectiveEv_docstring)
.def("getNullSpaceObjective", [](const dart::dynamics::InverseKinematics *self) -> std::shared_ptr<const dart::optimizer::Function> { return self->getNullSpaceObjective(); }, _ZNK4dart8dynamics17InverseKinematics21getNullSpaceObjectiveEv_docstring)
.def("hasNullSpaceObjective", [](const dart::dynamics::InverseKinematics *self) -> bool { return self->hasNullSpaceObjective(); }, _ZNK4dart8dynamics17InverseKinematics21hasNullSpaceObjectiveEv_docstring)
.def("getErrorMethod", [](dart::dynamics::InverseKinematics *self) -> dart::dynamics::InverseKinematics::ErrorMethod & { return self->getErrorMethod(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics17InverseKinematics14getErrorMethodEv_docstring)
.def("getGradientMethod", [](dart::dynamics::InverseKinematics *self) -> dart::dynamics::InverseKinematics::GradientMethod & { return self->getGradientMethod(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics17InverseKinematics17getGradientMethodEv_docstring)
.def("getAnalytical", [](dart::dynamics::InverseKinematics *self) -> dart::dynamics::InverseKinematics::Analytical * { return self->getAnalytical(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics17InverseKinematics13getAnalyticalEv_docstring)
.def("getProblem", [](dart::dynamics::InverseKinematics *self) -> const std::shared_ptr<dart::optimizer::Problem> & { return self->getProblem(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics17InverseKinematics10getProblemEv_docstring)
.def("getProblem", [](const dart::dynamics::InverseKinematics *self) -> std::shared_ptr<const dart::optimizer::Problem> { return self->getProblem(); }, _ZNK4dart8dynamics17InverseKinematics10getProblemEv_docstring)
.def("resetProblem", [](dart::dynamics::InverseKinematics *self) -> void { return self->resetProblem(); }, _ZN4dart8dynamics17InverseKinematics12resetProblemEb_docstring)
.def("resetProblem", [](dart::dynamics::InverseKinematics *self, bool _clearSeeds) -> void { return self->resetProblem(_clearSeeds); }, _ZN4dart8dynamics17InverseKinematics12resetProblemEb_docstring, (::boost::python::arg("_clearSeeds")))
.def("setSolver", [](dart::dynamics::InverseKinematics *self, const std::shared_ptr<dart::optimizer::Solver> & _newSolver) -> void { return self->setSolver(_newSolver); }, _ZN4dart8dynamics17InverseKinematics9setSolverERKSt10shared_ptrINS_9optimizer6SolverEE_docstring, (::boost::python::arg("_newSolver")))
.def("getSolver", [](dart::dynamics::InverseKinematics *self) -> const std::shared_ptr<dart::optimizer::Solver> & { return self->getSolver(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics17InverseKinematics9getSolverEv_docstring)
.def("getSolver", [](const dart::dynamics::InverseKinematics *self) -> std::shared_ptr<const dart::optimizer::Solver> { return self->getSolver(); }, _ZNK4dart8dynamics17InverseKinematics9getSolverEv_docstring)
.def("setOffset", [](dart::dynamics::InverseKinematics *self) -> void { return self->setOffset(); }, _ZN4dart8dynamics17InverseKinematics9setOffsetERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring)
.def("setOffset", [](dart::dynamics::InverseKinematics *self, const Eigen::Vector3d & _offset) -> void { return self->setOffset(_offset); }, _ZN4dart8dynamics17InverseKinematics9setOffsetERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_offset")))
.def("getOffset", [](const dart::dynamics::InverseKinematics *self) -> const Eigen::Vector3d & { return self->getOffset(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics17InverseKinematics9getOffsetEv_docstring)
.def("hasOffset", [](const dart::dynamics::InverseKinematics *self) -> bool { return self->hasOffset(); }, _ZNK4dart8dynamics17InverseKinematics9hasOffsetEv_docstring)
.def("setTarget", [](dart::dynamics::InverseKinematics *self, std::shared_ptr<dart::dynamics::SimpleFrame> _newTarget) -> void { return self->setTarget(_newTarget); }, _ZN4dart8dynamics17InverseKinematics9setTargetESt10shared_ptrINS0_11SimpleFrameEE_docstring, (::boost::python::arg("_newTarget")))
.def("getTarget", [](dart::dynamics::InverseKinematics *self) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->getTarget(); }, _ZN4dart8dynamics17InverseKinematics9getTargetEv_docstring)
.def("getTarget", [](const dart::dynamics::InverseKinematics *self) -> std::shared_ptr<const dart::dynamics::SimpleFrame> { return self->getTarget(); }, _ZNK4dart8dynamics17InverseKinematics9getTargetEv_docstring)
.def("getNode", [](dart::dynamics::InverseKinematics *self) -> dart::dynamics::JacobianNode * { return self->getNode(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics17InverseKinematics7getNodeEv_docstring)
.def("getAffiliation", [](dart::dynamics::InverseKinematics *self) -> dart::dynamics::JacobianNode * { return self->getAffiliation(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics17InverseKinematics14getAffiliationEv_docstring)
.def("computeJacobian", [](const dart::dynamics::InverseKinematics *self) -> const dart::math::Jacobian & { return self->computeJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics17InverseKinematics15computeJacobianEv_docstring)
.def("getPositions", [](const dart::dynamics::InverseKinematics *self) -> Eigen::VectorXd { return self->getPositions(); }, _ZNK4dart8dynamics17InverseKinematics12getPositionsEv_docstring)
.def("setPositions", [](dart::dynamics::InverseKinematics *self, const Eigen::VectorXd & _q) -> void { return self->setPositions(_q); }, _ZN4dart8dynamics17InverseKinematics12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_q")))
.def("clearCaches", [](dart::dynamics::InverseKinematics *self) -> void { return self->clearCaches(); }, _ZN4dart8dynamics17InverseKinematics11clearCachesEv_docstring)
.def("create", [](dart::dynamics::JacobianNode * _node) -> dart::dynamics::InverseKinematicsPtr { return dart::dynamics::InverseKinematics::create(_node); }, (::boost::python::arg("_node")))
.staticmethod("create")
;
}

/* footer */
