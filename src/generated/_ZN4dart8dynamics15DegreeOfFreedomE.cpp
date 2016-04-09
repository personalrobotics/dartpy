#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics15DegreeOfFreedomE_docstring[] = R"CHIMERA_STRING( DegreeOfFreedom class is a proxy class for accessing single degrees of
 freedom (aka generalized coordinates) of the Skeleton.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom7setNameERKSsb_docstring[] = R"CHIMERA_STRING( Change the name of this DegreeOfFreedom
 The _preserveName argument will be passed to the preserveName(bool)
 function. Set _preserveName to true when customizing the name of the
 DegreeOfFreedom; that way the name will not be overwritten if the Joint
 name changes.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom7getNameEv_docstring[] = R"CHIMERA_STRING( 
 DegreeOfFreedom's name will be automatically given by the joint it belongs
 to. Below is the naming policy:
   - SingleDofJoint 
       Same name as the joint it belongs to.
   - MultiDofJoint 
       "[Joint_name]+[affix]" is used. The affix is determined according
       to the role they play in the joint. For example, suppose there's a
       TranslationalJoint named "trans_joint". Then the each dof to be
       named "trans_joint_x", "trans_joint_y", and "trans_joint_z".
   - ZeroDofJoint 
       ZeroDofJoint doesn't have dof.
 The default name can be renamed by setName() as well.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom12preserveNameEb_docstring[] = R"CHIMERA_STRING( Prevent Joint::updateDegreeOfFreedomNames() from changing the name of this
 degree of freedom. This is useful if you (the user) have customized the
 name for this DegreeOfFreedom and want to prevent DART from automatically
 updating its name if its parent Joint properties ever change.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom15isNamePreservedEv_docstring[] = R"CHIMERA_STRING( Check whether DegreeOfFreedom::lockName(bool) is activate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom18getIndexInSkeletonEv_docstring[] = R"CHIMERA_STRING( Get this DegreeOfFreedom's index within its Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom14getIndexInTreeEv_docstring[] = R"CHIMERA_STRING( Get this DegreeOfFreedom's index within its tree
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom15getIndexInJointEv_docstring[] = R"CHIMERA_STRING( Get this DegreeOfFreedom's index within its Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom12getTreeIndexEv_docstring[] = R"CHIMERA_STRING( Get the index of the tree that this DegreeOfFreedom belongs to
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom10setCommandEd_docstring[] = R"CHIMERA_STRING( Set the command of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom10getCommandEv_docstring[] = R"CHIMERA_STRING( Get the command of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom12resetCommandEv_docstring[] = R"CHIMERA_STRING( Set the command of this DegreeOfFreedom to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom11setPositionEd_docstring[] = R"CHIMERA_STRING( Set the position of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom11getPositionEv_docstring[] = R"CHIMERA_STRING( Get the position of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom17setPositionLimitsEdd_docstring[] = R"CHIMERA_STRING( Set the position limits of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom17setPositionLimitsERKSt4pairIddE_docstring[] = R"CHIMERA_STRING( Set the position limits of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom17getPositionLimitsEv_docstring[] = R"CHIMERA_STRING( Get the position limits of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom21setPositionLowerLimitEd_docstring[] = R"CHIMERA_STRING( Set the lower position limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom21getPositionLowerLimitEv_docstring[] = R"CHIMERA_STRING( Get the lower position limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom21setPositionUpperLimitEd_docstring[] = R"CHIMERA_STRING( Set the upper position limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom21getPositionUpperLimitEv_docstring[] = R"CHIMERA_STRING( Get the upper position limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom8isCyclicEv_docstring[] = R"CHIMERA_STRING( Get whether this DOF is cyclic. Return true if and only if an infinite
 number of DOF positions produce the same local transform. If this DOF is
 part of a multi-DOF joint, then producing a cycle may require altering
 the position of the Joint's other DOFs.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom16hasPositionLimitEv_docstring[] = R"CHIMERA_STRING( Get whether the position of this DegreeOfFreedom has limits.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom13resetPositionEv_docstring[] = R"CHIMERA_STRING( Set the position of this DegreeOfFreedom to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom18setInitialPositionEd_docstring[] = R"CHIMERA_STRING( Change the position that resetPosition() will give to this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom18getInitialPositionEv_docstring[] = R"CHIMERA_STRING( Get the position that resetPosition() will give to this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom11setVelocityEd_docstring[] = R"CHIMERA_STRING( Set the velocity of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom11getVelocityEv_docstring[] = R"CHIMERA_STRING( Get the velocity of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom17setVelocityLimitsEdd_docstring[] = R"CHIMERA_STRING( Set the velocity limits of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom17setVelocityLimitsERKSt4pairIddE_docstring[] = R"CHIMERA_STRING( Set the velocity limtis of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom17getVelocityLimitsEv_docstring[] = R"CHIMERA_STRING( Get the velocity limits of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom21setVelocityLowerLimitEd_docstring[] = R"CHIMERA_STRING( Set the lower velocity limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom21getVelocityLowerLimitEv_docstring[] = R"CHIMERA_STRING( Get the lower velocity limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom21setVelocityUpperLimitEd_docstring[] = R"CHIMERA_STRING( Set the upper velocity limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom21getVelocityUpperLimitEv_docstring[] = R"CHIMERA_STRING( Get the upper Velocity limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom13resetVelocityEv_docstring[] = R"CHIMERA_STRING( Set the velocity of this DegreeOfFreedom to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom18setInitialVelocityEd_docstring[] = R"CHIMERA_STRING( Change the velocity that resetVelocity() will give to this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom18getInitialVelocityEv_docstring[] = R"CHIMERA_STRING( Get the velocity that resetVelocity() will give to this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom15setAccelerationEd_docstring[] = R"CHIMERA_STRING( Set the acceleration of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom15getAccelerationEv_docstring[] = R"CHIMERA_STRING( Get the acceleration of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom17resetAccelerationEv_docstring[] = R"CHIMERA_STRING( Set the acceleration of this DegreeOfFreedom to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom21setAccelerationLimitsEdd_docstring[] = R"CHIMERA_STRING( Set the acceleration limits of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom21setAccelerationLimitsERKSt4pairIddE_docstring[] = R"CHIMERA_STRING( Set the acceleartion limits of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom21getAccelerationLimitsEv_docstring[] = R"CHIMERA_STRING( Get the acceleration limits of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom25setAccelerationLowerLimitEd_docstring[] = R"CHIMERA_STRING( Set the lower acceleration limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom25getAccelerationLowerLimitEv_docstring[] = R"CHIMERA_STRING( Get the lower acceleration limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom25setAccelerationUpperLimitEd_docstring[] = R"CHIMERA_STRING( Set the upper acceleration limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom25getAccelerationUpperLimitEv_docstring[] = R"CHIMERA_STRING( Get the upper acceleration limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom8setForceEd_docstring[] = R"CHIMERA_STRING( Set the generalized force of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom8getForceEv_docstring[] = R"CHIMERA_STRING( Get the generalized force of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom10resetForceEv_docstring[] = R"CHIMERA_STRING( Set the generalized force of this DegreeOfFreedom to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom14setForceLimitsEdd_docstring[] = R"CHIMERA_STRING( Set the generalized force limits of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom14setForceLimitsERKSt4pairIddE_docstring[] = R"CHIMERA_STRING( Set the generalized force limits of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom14getForceLimitsEv_docstring[] = R"CHIMERA_STRING( Get the generalized force limits of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom18setForceLowerLimitEd_docstring[] = R"CHIMERA_STRING( Set the lower generalized force limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom18getForceLowerLimitEv_docstring[] = R"CHIMERA_STRING( Get the lower generalized force limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom18setForceUpperLimitEd_docstring[] = R"CHIMERA_STRING( Set the upper generalized force limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom18getForceUpperLimitEv_docstring[] = R"CHIMERA_STRING( Get the upper generalized force limit of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom17setVelocityChangeEd_docstring[] = R"CHIMERA_STRING( Set the velocity change of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom17getVelocityChangeEv_docstring[] = R"CHIMERA_STRING( Get the velocity change of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom19resetVelocityChangeEv_docstring[] = R"CHIMERA_STRING( Set the velocity change of this DegreeOfFreedom to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom20setConstraintImpulseEd_docstring[] = R"CHIMERA_STRING( Set the constraint impulse of this generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom20getConstraintImpulseEv_docstring[] = R"CHIMERA_STRING( Get the constraint impulse of this generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom22resetConstraintImpulseEv_docstring[] = R"CHIMERA_STRING( Set the constraint impulse of this generalized coordinate to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom18setSpringStiffnessEd_docstring[] = R"CHIMERA_STRING( Set stiffness of the spring force for this generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom18getSpringStiffnessEv_docstring[] = R"CHIMERA_STRING( Get stiffness of the spring force for this generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom15setRestPositionEd_docstring[] = R"CHIMERA_STRING( Set rest position for the spring force of this generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom15getRestPositionEv_docstring[] = R"CHIMERA_STRING( Get rest position for the spring force of this generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom21setDampingCoefficientEd_docstring[] = R"CHIMERA_STRING( Set coefficient of damping (viscous friction) force for this generalized
 coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom21getDampingCoefficientEv_docstring[] = R"CHIMERA_STRING( Get coefficient of damping (viscous friction) force for this generalized
 coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom18setCoulombFrictionEd_docstring[] = R"CHIMERA_STRING( Set Coulomb friction force for this generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics15DegreeOfFreedom18getCoulombFrictionEv_docstring[] = R"CHIMERA_STRING( Get Coulomb friction force for this generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom8getJointEv_docstring[] = R"CHIMERA_STRING( Get the Joint that this DegreeOfFreedom belongs to
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom11getSkeletonEv_docstring[] = R"CHIMERA_STRING( Get the Skeleton that this DegreeOfFreedom is inside of
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom16getChildBodyNodeEv_docstring[] = R"CHIMERA_STRING( Get the BodyNode downstream of this DegreeOfFreedom
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics15DegreeOfFreedom17getParentBodyNodeEv_docstring[] = R"CHIMERA_STRING( Get the BodyNode upstream of this DegreeOfFreedom
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics15DegreeOfFreedomE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::DegreeOfFreedom, ::boost::noncopyable, dart::dynamics::DegreeOfFreedomPtr, ::boost::python::bases<dart::common::Subject > >("DegreeOfFreedom", _ZN4dart8dynamics15DegreeOfFreedomE_docstring, boost::python::no_init)
.def("setName", [](dart::dynamics::DegreeOfFreedom *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics15DegreeOfFreedom7setNameERKSsb_docstring, (::boost::python::arg("_name")))
.def("setName", [](dart::dynamics::DegreeOfFreedom *self, const std::string & _name, bool _preserveName) -> const std::string & { return self->setName(_name, _preserveName); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics15DegreeOfFreedom7setNameERKSsb_docstring, (::boost::python::arg("_name"), ::boost::python::arg("_preserveName")))
.def("getName", [](const dart::dynamics::DegreeOfFreedom *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics15DegreeOfFreedom7getNameEv_docstring)
.def("preserveName", [](dart::dynamics::DegreeOfFreedom *self, bool _preserve) -> void { return self->preserveName(_preserve); }, _ZN4dart8dynamics15DegreeOfFreedom12preserveNameEb_docstring, (::boost::python::arg("_preserve")))
.def("isNamePreserved", [](const dart::dynamics::DegreeOfFreedom *self) -> bool { return self->isNamePreserved(); }, _ZNK4dart8dynamics15DegreeOfFreedom15isNamePreservedEv_docstring)
.def("getIndexInSkeleton", [](const dart::dynamics::DegreeOfFreedom *self) -> std::size_t { return self->getIndexInSkeleton(); }, _ZNK4dart8dynamics15DegreeOfFreedom18getIndexInSkeletonEv_docstring)
.def("getIndexInTree", [](const dart::dynamics::DegreeOfFreedom *self) -> std::size_t { return self->getIndexInTree(); }, _ZNK4dart8dynamics15DegreeOfFreedom14getIndexInTreeEv_docstring)
.def("getIndexInJoint", [](const dart::dynamics::DegreeOfFreedom *self) -> std::size_t { return self->getIndexInJoint(); }, _ZNK4dart8dynamics15DegreeOfFreedom15getIndexInJointEv_docstring)
.def("getTreeIndex", [](const dart::dynamics::DegreeOfFreedom *self) -> std::size_t { return self->getTreeIndex(); }, _ZNK4dart8dynamics15DegreeOfFreedom12getTreeIndexEv_docstring)
.def("setCommand", [](dart::dynamics::DegreeOfFreedom *self, double _command) -> void { return self->setCommand(_command); }, _ZN4dart8dynamics15DegreeOfFreedom10setCommandEd_docstring, (::boost::python::arg("_command")))
.def("getCommand", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getCommand(); }, _ZNK4dart8dynamics15DegreeOfFreedom10getCommandEv_docstring)
.def("resetCommand", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetCommand(); }, _ZN4dart8dynamics15DegreeOfFreedom12resetCommandEv_docstring)
.def("setPosition", [](dart::dynamics::DegreeOfFreedom *self, double _position) -> void { return self->setPosition(_position); }, _ZN4dart8dynamics15DegreeOfFreedom11setPositionEd_docstring, (::boost::python::arg("_position")))
.def("getPosition", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getPosition(); }, _ZNK4dart8dynamics15DegreeOfFreedom11getPositionEv_docstring)
.def("setPositionLimits", [](dart::dynamics::DegreeOfFreedom *self, double _lowerLimit, double _upperLimit) -> void { return self->setPositionLimits(_lowerLimit, _upperLimit); }, _ZN4dart8dynamics15DegreeOfFreedom17setPositionLimitsEdd_docstring, (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("setPositionLimits", [](dart::dynamics::DegreeOfFreedom *self, const std::pair<double, double> & _limits) -> void { return self->setPositionLimits(_limits); }, _ZN4dart8dynamics15DegreeOfFreedom17setPositionLimitsERKSt4pairIddE_docstring, (::boost::python::arg("_limits")))
.def("getPositionLimits", [](const dart::dynamics::DegreeOfFreedom *self) -> std::pair<double, double> { return self->getPositionLimits(); }, _ZNK4dart8dynamics15DegreeOfFreedom17getPositionLimitsEv_docstring)
.def("setPositionLowerLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setPositionLowerLimit(_limit); }, _ZN4dart8dynamics15DegreeOfFreedom21setPositionLowerLimitEd_docstring, (::boost::python::arg("_limit")))
.def("getPositionLowerLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getPositionLowerLimit(); }, _ZNK4dart8dynamics15DegreeOfFreedom21getPositionLowerLimitEv_docstring)
.def("setPositionUpperLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setPositionUpperLimit(_limit); }, _ZN4dart8dynamics15DegreeOfFreedom21setPositionUpperLimitEd_docstring, (::boost::python::arg("_limit")))
.def("getPositionUpperLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getPositionUpperLimit(); }, _ZNK4dart8dynamics15DegreeOfFreedom21getPositionUpperLimitEv_docstring)
.def("isCyclic", [](const dart::dynamics::DegreeOfFreedom *self) -> bool { return self->isCyclic(); }, _ZNK4dart8dynamics15DegreeOfFreedom8isCyclicEv_docstring)
.def("hasPositionLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> bool { return self->hasPositionLimit(); }, _ZNK4dart8dynamics15DegreeOfFreedom16hasPositionLimitEv_docstring)
.def("resetPosition", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetPosition(); }, _ZN4dart8dynamics15DegreeOfFreedom13resetPositionEv_docstring)
.def("setInitialPosition", [](dart::dynamics::DegreeOfFreedom *self, double _initial) -> void { return self->setInitialPosition(_initial); }, _ZN4dart8dynamics15DegreeOfFreedom18setInitialPositionEd_docstring, (::boost::python::arg("_initial")))
.def("getInitialPosition", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getInitialPosition(); }, _ZNK4dart8dynamics15DegreeOfFreedom18getInitialPositionEv_docstring)
.def("setVelocity", [](dart::dynamics::DegreeOfFreedom *self, double _velocity) -> void { return self->setVelocity(_velocity); }, _ZN4dart8dynamics15DegreeOfFreedom11setVelocityEd_docstring, (::boost::python::arg("_velocity")))
.def("getVelocity", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getVelocity(); }, _ZNK4dart8dynamics15DegreeOfFreedom11getVelocityEv_docstring)
.def("setVelocityLimits", [](dart::dynamics::DegreeOfFreedom *self, double _lowerLimit, double _upperLimit) -> void { return self->setVelocityLimits(_lowerLimit, _upperLimit); }, _ZN4dart8dynamics15DegreeOfFreedom17setVelocityLimitsEdd_docstring, (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("setVelocityLimits", [](dart::dynamics::DegreeOfFreedom *self, const std::pair<double, double> & _limits) -> void { return self->setVelocityLimits(_limits); }, _ZN4dart8dynamics15DegreeOfFreedom17setVelocityLimitsERKSt4pairIddE_docstring, (::boost::python::arg("_limits")))
.def("getVelocityLimits", [](const dart::dynamics::DegreeOfFreedom *self) -> std::pair<double, double> { return self->getVelocityLimits(); }, _ZNK4dart8dynamics15DegreeOfFreedom17getVelocityLimitsEv_docstring)
.def("setVelocityLowerLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setVelocityLowerLimit(_limit); }, _ZN4dart8dynamics15DegreeOfFreedom21setVelocityLowerLimitEd_docstring, (::boost::python::arg("_limit")))
.def("getVelocityLowerLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getVelocityLowerLimit(); }, _ZNK4dart8dynamics15DegreeOfFreedom21getVelocityLowerLimitEv_docstring)
.def("setVelocityUpperLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setVelocityUpperLimit(_limit); }, _ZN4dart8dynamics15DegreeOfFreedom21setVelocityUpperLimitEd_docstring, (::boost::python::arg("_limit")))
.def("getVelocityUpperLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getVelocityUpperLimit(); }, _ZNK4dart8dynamics15DegreeOfFreedom21getVelocityUpperLimitEv_docstring)
.def("resetVelocity", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetVelocity(); }, _ZN4dart8dynamics15DegreeOfFreedom13resetVelocityEv_docstring)
.def("setInitialVelocity", [](dart::dynamics::DegreeOfFreedom *self, double _initial) -> void { return self->setInitialVelocity(_initial); }, _ZN4dart8dynamics15DegreeOfFreedom18setInitialVelocityEd_docstring, (::boost::python::arg("_initial")))
.def("getInitialVelocity", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getInitialVelocity(); }, _ZNK4dart8dynamics15DegreeOfFreedom18getInitialVelocityEv_docstring)
.def("setAcceleration", [](dart::dynamics::DegreeOfFreedom *self, double _acceleration) -> void { return self->setAcceleration(_acceleration); }, _ZN4dart8dynamics15DegreeOfFreedom15setAccelerationEd_docstring, (::boost::python::arg("_acceleration")))
.def("getAcceleration", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getAcceleration(); }, _ZNK4dart8dynamics15DegreeOfFreedom15getAccelerationEv_docstring)
.def("resetAcceleration", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetAcceleration(); }, _ZN4dart8dynamics15DegreeOfFreedom17resetAccelerationEv_docstring)
.def("setAccelerationLimits", [](dart::dynamics::DegreeOfFreedom *self, double _lowerLimit, double _upperLimit) -> void { return self->setAccelerationLimits(_lowerLimit, _upperLimit); }, _ZN4dart8dynamics15DegreeOfFreedom21setAccelerationLimitsEdd_docstring, (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("setAccelerationLimits", [](dart::dynamics::DegreeOfFreedom *self, const std::pair<double, double> & _limits) -> void { return self->setAccelerationLimits(_limits); }, _ZN4dart8dynamics15DegreeOfFreedom21setAccelerationLimitsERKSt4pairIddE_docstring, (::boost::python::arg("_limits")))
.def("getAccelerationLimits", [](const dart::dynamics::DegreeOfFreedom *self) -> std::pair<double, double> { return self->getAccelerationLimits(); }, _ZNK4dart8dynamics15DegreeOfFreedom21getAccelerationLimitsEv_docstring)
.def("setAccelerationLowerLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setAccelerationLowerLimit(_limit); }, _ZN4dart8dynamics15DegreeOfFreedom25setAccelerationLowerLimitEd_docstring, (::boost::python::arg("_limit")))
.def("getAccelerationLowerLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getAccelerationLowerLimit(); }, _ZNK4dart8dynamics15DegreeOfFreedom25getAccelerationLowerLimitEv_docstring)
.def("setAccelerationUpperLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setAccelerationUpperLimit(_limit); }, _ZN4dart8dynamics15DegreeOfFreedom25setAccelerationUpperLimitEd_docstring, (::boost::python::arg("_limit")))
.def("getAccelerationUpperLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getAccelerationUpperLimit(); }, _ZNK4dart8dynamics15DegreeOfFreedom25getAccelerationUpperLimitEv_docstring)
.def("setForce", [](dart::dynamics::DegreeOfFreedom *self, double _force) -> void { return self->setForce(_force); }, _ZN4dart8dynamics15DegreeOfFreedom8setForceEd_docstring, (::boost::python::arg("_force")))
.def("getForce", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getForce(); }, _ZNK4dart8dynamics15DegreeOfFreedom8getForceEv_docstring)
.def("resetForce", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetForce(); }, _ZN4dart8dynamics15DegreeOfFreedom10resetForceEv_docstring)
.def("setForceLimits", [](dart::dynamics::DegreeOfFreedom *self, double _lowerLimit, double _upperLimit) -> void { return self->setForceLimits(_lowerLimit, _upperLimit); }, _ZN4dart8dynamics15DegreeOfFreedom14setForceLimitsEdd_docstring, (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("setForceLimits", [](dart::dynamics::DegreeOfFreedom *self, const std::pair<double, double> & _limits) -> void { return self->setForceLimits(_limits); }, _ZN4dart8dynamics15DegreeOfFreedom14setForceLimitsERKSt4pairIddE_docstring, (::boost::python::arg("_limits")))
.def("getForceLimits", [](const dart::dynamics::DegreeOfFreedom *self) -> std::pair<double, double> { return self->getForceLimits(); }, _ZNK4dart8dynamics15DegreeOfFreedom14getForceLimitsEv_docstring)
.def("setForceLowerLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setForceLowerLimit(_limit); }, _ZN4dart8dynamics15DegreeOfFreedom18setForceLowerLimitEd_docstring, (::boost::python::arg("_limit")))
.def("getForceLowerLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getForceLowerLimit(); }, _ZNK4dart8dynamics15DegreeOfFreedom18getForceLowerLimitEv_docstring)
.def("setForceUpperLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setForceUpperLimit(_limit); }, _ZN4dart8dynamics15DegreeOfFreedom18setForceUpperLimitEd_docstring, (::boost::python::arg("_limit")))
.def("getForceUpperLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getForceUpperLimit(); }, _ZNK4dart8dynamics15DegreeOfFreedom18getForceUpperLimitEv_docstring)
.def("setVelocityChange", [](dart::dynamics::DegreeOfFreedom *self, double _velocityChange) -> void { return self->setVelocityChange(_velocityChange); }, _ZN4dart8dynamics15DegreeOfFreedom17setVelocityChangeEd_docstring, (::boost::python::arg("_velocityChange")))
.def("getVelocityChange", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getVelocityChange(); }, _ZNK4dart8dynamics15DegreeOfFreedom17getVelocityChangeEv_docstring)
.def("resetVelocityChange", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetVelocityChange(); }, _ZN4dart8dynamics15DegreeOfFreedom19resetVelocityChangeEv_docstring)
.def("setConstraintImpulse", [](dart::dynamics::DegreeOfFreedom *self, double _impulse) -> void { return self->setConstraintImpulse(_impulse); }, _ZN4dart8dynamics15DegreeOfFreedom20setConstraintImpulseEd_docstring, (::boost::python::arg("_impulse")))
.def("getConstraintImpulse", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getConstraintImpulse(); }, _ZNK4dart8dynamics15DegreeOfFreedom20getConstraintImpulseEv_docstring)
.def("resetConstraintImpulse", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetConstraintImpulse(); }, _ZN4dart8dynamics15DegreeOfFreedom22resetConstraintImpulseEv_docstring)
.def("setSpringStiffness", [](dart::dynamics::DegreeOfFreedom *self, double _k) -> void { return self->setSpringStiffness(_k); }, _ZN4dart8dynamics15DegreeOfFreedom18setSpringStiffnessEd_docstring, (::boost::python::arg("_k")))
.def("getSpringStiffness", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getSpringStiffness(); }, _ZNK4dart8dynamics15DegreeOfFreedom18getSpringStiffnessEv_docstring)
.def("setRestPosition", [](dart::dynamics::DegreeOfFreedom *self, double _q0) -> void { return self->setRestPosition(_q0); }, _ZN4dart8dynamics15DegreeOfFreedom15setRestPositionEd_docstring, (::boost::python::arg("_q0")))
.def("getRestPosition", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getRestPosition(); }, _ZNK4dart8dynamics15DegreeOfFreedom15getRestPositionEv_docstring)
.def("setDampingCoefficient", [](dart::dynamics::DegreeOfFreedom *self, double _coeff) -> void { return self->setDampingCoefficient(_coeff); }, _ZN4dart8dynamics15DegreeOfFreedom21setDampingCoefficientEd_docstring, (::boost::python::arg("_coeff")))
.def("getDampingCoefficient", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getDampingCoefficient(); }, _ZNK4dart8dynamics15DegreeOfFreedom21getDampingCoefficientEv_docstring)
.def("setCoulombFriction", [](dart::dynamics::DegreeOfFreedom *self, double _friction) -> void { return self->setCoulombFriction(_friction); }, _ZN4dart8dynamics15DegreeOfFreedom18setCoulombFrictionEd_docstring, (::boost::python::arg("_friction")))
.def("getCoulombFriction", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getCoulombFriction(); }, _ZNK4dart8dynamics15DegreeOfFreedom18getCoulombFrictionEv_docstring)
.def("getJoint", [](dart::dynamics::DegreeOfFreedom *self) -> dart::dynamics::Joint * { return self->getJoint(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), _ZN4dart8dynamics15DegreeOfFreedom8getJointEv_docstring)
.def("getSkeleton", [](dart::dynamics::DegreeOfFreedom *self) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(); }, _ZN4dart8dynamics15DegreeOfFreedom11getSkeletonEv_docstring)
.def("getChildBodyNode", [](dart::dynamics::DegreeOfFreedom *self) -> dart::dynamics::BodyNode * { return self->getChildBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics15DegreeOfFreedom16getChildBodyNodeEv_docstring)
.def("getParentBodyNode", [](dart::dynamics::DegreeOfFreedom *self) -> dart::dynamics::BodyNode * { return self->getParentBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics15DegreeOfFreedom17getParentBodyNodeEv_docstring)
;
}

/* footer */
