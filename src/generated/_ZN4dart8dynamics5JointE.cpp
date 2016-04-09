#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics5JointE_docstring[] = R"CHIMERA_STRING( class Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint13setPropertiesERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint18getJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the properties of another Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the properties of another Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint7setNameERKSsb_docstring[] = R"CHIMERA_STRING( 
 If the name is already taken, this will return an altered version which
 will be used by the Skeleton. Otherwise, return _name.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint7getNameEv_docstring[] = R"CHIMERA_STRING( Get joint name
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint16incrementVersionEv_docstring[] = R"CHIMERA_STRING( Increments Skeleton version number
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint10getVersionEv_docstring[] = R"CHIMERA_STRING( Gets the Skeleton version number
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint7getTypeEv_docstring[] = R"CHIMERA_STRING( Gets a string representing the joint type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint15setActuatorTypeENS1_12ActuatorTypeE_docstring[] = R"CHIMERA_STRING( Set actuator type
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint15getActuatorTypeEv_docstring[] = R"CHIMERA_STRING( Get actuator type
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint11isKinematicEv_docstring[] = R"CHIMERA_STRING( Return true if this joint is kinematic joint.
 Kinematic joint means the motion is prescribed by position or velocity or
 acceleration, which is determined by the actuator type.
 ACCELERATION/VELOCITY/LOCKED are kinematic joints while
 FORCE/PASSIVE/SERVO are dynamic joints.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint9isDynamicEv_docstring[] = R"CHIMERA_STRING( Return true if this joint is dynamic joint.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint16getChildBodyNodeEv_docstring[] = R"CHIMERA_STRING( Get the child BodyNode of this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint17getParentBodyNodeEv_docstring[] = R"CHIMERA_STRING( Get the parent BodyNode of this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint11getSkeletonEv_docstring[] = R"CHIMERA_STRING( Get the Skeleton that this Joint belongs to
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint30setTransformFromParentBodyNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Set transformation from parent body node to this joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint29setTransformFromChildBodyNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Set transformation from child body node to this joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint30getTransformFromParentBodyNodeEv_docstring[] = R"CHIMERA_STRING( Get transformation from parent body node to this joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint29getTransformFromChildBodyNodeEv_docstring[] = R"CHIMERA_STRING( Get transformation from child body node to this joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint24setPositionLimitEnforcedEb_docstring[] = R"CHIMERA_STRING( Set to enforce joint position limit
 The joint position limit is valid when the actutor type is one of
 PASSIVE/FORCE.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint18setPositionLimitedEb_docstring[] = R"CHIMERA_STRING( Deprecated. Replaced by setPositionLimitEnforced.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint23isPositionLimitEnforcedEv_docstring[] = R"CHIMERA_STRING( Get whether enforcing joint position limit
 The joint position limit is valid when the actutor type is one of
 PASSIVE/FORCE.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint17isPositionLimitedEv_docstring[] = R"CHIMERA_STRING( Deprecated. Replaced by isPositionLimitEnforced.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint18getIndexInSkeletonEm_docstring[] = R"CHIMERA_STRING( Get a unique index in skeleton of a generalized coordinate in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint14getIndexInTreeEm_docstring[] = R"CHIMERA_STRING( Get a unique index in the kinematic tree of a generalized coordinate in
 this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint23getJointIndexInSkeletonEv_docstring[] = R"CHIMERA_STRING( Get the index of this Joint within its Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint19getJointIndexInTreeEv_docstring[] = R"CHIMERA_STRING( Get the index of this Joint within its tree
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint12getTreeIndexEv_docstring[] = R"CHIMERA_STRING( Get the index of the tree that this Joint belongs to
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint6getDofEm_docstring[] = R"CHIMERA_STRING( Get an object to access the _index-th degree of freedom (generalized
 coordinate) of this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint10setDofNameEmRKSsb_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::setName()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint15preserveDofNameEmb_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::preserveName()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint18isDofNamePreservedEm_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::isNamePreserved()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint10getDofNameEm_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::getName()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint10getNumDofsEv_docstring[] = R"CHIMERA_STRING( Get number of generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint10setCommandEmd_docstring[] = R"CHIMERA_STRING( Set a single command
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint10getCommandEm_docstring[] = R"CHIMERA_STRING( Get a single command
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint11setCommandsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set all commands for this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint11getCommandsEv_docstring[] = R"CHIMERA_STRING( Get all commands for this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint13resetCommandsEv_docstring[] = R"CHIMERA_STRING( Set all the commands for this Joint to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint11setPositionEmd_docstring[] = R"CHIMERA_STRING( Set the position of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint11getPositionEm_docstring[] = R"CHIMERA_STRING( Get the position of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the positions of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint12getPositionsEv_docstring[] = R"CHIMERA_STRING( Get the positions of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint21setPositionLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for position
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint21getPositionLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for position
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint21setPositionUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for position
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint21getPositionUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for position
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint8isCyclicEm_docstring[] = R"CHIMERA_STRING( Get whether a generalized coordinate is cyclic. Return true if and only
 if this generalized coordinate has an infinite number of positions that
 produce the same local transform. Note that, for a multi-DOF joint,
 producing a cycle may require altering the position of this Joint's other
 generalized coordinates.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint16hasPositionLimitEm_docstring[] = R"CHIMERA_STRING( Get whether the position of a generalized coordinate has limits.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint13resetPositionEm_docstring[] = R"CHIMERA_STRING( Set the position of this generalized coordinate to its initial position
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint14resetPositionsEv_docstring[] = R"CHIMERA_STRING( Set the positions of all generalized coordinates in this Joint to their
 initial positions
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint18setInitialPositionEmd_docstring[] = R"CHIMERA_STRING( Change the position that resetPositions() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint18getInitialPositionEm_docstring[] = R"CHIMERA_STRING( Get the position that resetPosition() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint19setInitialPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Change the positions that resetPositions() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint19getInitialPositionsEv_docstring[] = R"CHIMERA_STRING( Get the positions that resetPositions() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint11setVelocityEmd_docstring[] = R"CHIMERA_STRING( Set the velocity of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint11getVelocityEm_docstring[] = R"CHIMERA_STRING( Get the velocity of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint13setVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the velocities of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint13getVelocitiesEv_docstring[] = R"CHIMERA_STRING( Get the velocities of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint21setVelocityLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for velocity
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint21getVelocityLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint21setVelocityUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for velocity
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint21getVelocityUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint13resetVelocityEm_docstring[] = R"CHIMERA_STRING( Set the velocity of a generalized coordinate in this Joint to its initial
 velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint15resetVelocitiesEv_docstring[] = R"CHIMERA_STRING( Set the velocities of all generalized coordinates in this Joint to their
 initial velocities
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint18setInitialVelocityEmd_docstring[] = R"CHIMERA_STRING( Change the velocity that resetVelocity() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint18getInitialVelocityEm_docstring[] = R"CHIMERA_STRING( Get the velocity that resetVelocity() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint20setInitialVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Change the velocities that resetVelocities() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint20getInitialVelocitiesEv_docstring[] = R"CHIMERA_STRING( Get the velocities that resetVelocities() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint15setAccelerationEmd_docstring[] = R"CHIMERA_STRING( Set the acceleration of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint15getAccelerationEm_docstring[] = R"CHIMERA_STRING( Get the acceleration of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint16setAccelerationsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the accelerations of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint16getAccelerationsEv_docstring[] = R"CHIMERA_STRING( Get the accelerations of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint18resetAccelerationsEv_docstring[] = R"CHIMERA_STRING( Set the accelerations of all generalized coordinates in this Joint to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint25setAccelerationLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for acceleration
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint25getAccelerationLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for acceleration
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint25setAccelerationUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for acceleration
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint25getAccelerationUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for acceleration
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint8setForceEmd_docstring[] = R"CHIMERA_STRING( Set the force of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint8getForceEm_docstring[] = R"CHIMERA_STRING( Get the force of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint9setForcesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the forces of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint9getForcesEv_docstring[] = R"CHIMERA_STRING( Get the forces of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint11resetForcesEv_docstring[] = R"CHIMERA_STRING( Set the forces of all generalized coordinates in this Joint to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint18setForceLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for force
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint18getForceLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for force
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint18setForceUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for force
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint18getForceUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for force
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint11checkSanityEb_docstring[] = R"CHIMERA_STRING( Returns false if the initial position or initial velocity are outside of
 limits
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint17setVelocityChangeEmd_docstring[] = R"CHIMERA_STRING( Set a single velocity change
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint17getVelocityChangeEm_docstring[] = R"CHIMERA_STRING( Get a single velocity change
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint20resetVelocityChangesEv_docstring[] = R"CHIMERA_STRING( Set zero all the velocity change
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint20setConstraintImpulseEmd_docstring[] = R"CHIMERA_STRING( Set a single constraint impulse
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint20getConstraintImpulseEm_docstring[] = R"CHIMERA_STRING( Get a single constraint impulse
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint23resetConstraintImpulsesEv_docstring[] = R"CHIMERA_STRING( Set zero all the constraint impulses
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint18integratePositionsEd_docstring[] = R"CHIMERA_STRING( Integrate positions using Euler method
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint19integrateVelocitiesEd_docstring[] = R"CHIMERA_STRING( Integrate velocities using Euler method
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint22getPositionDifferencesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES6__docstring[] = R"CHIMERA_STRING( Return the difference of two generalized coordinates which are measured in
 the configuration space of this Skeleton.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint18setSpringStiffnessEmd_docstring[] = R"CHIMERA_STRING( Set stiffness of joint spring force.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint18getSpringStiffnessEm_docstring[] = R"CHIMERA_STRING( Get stiffness of joint spring force.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint15setRestPositionEmd_docstring[] = R"CHIMERA_STRING( Set rest position of spring force.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint15getRestPositionEm_docstring[] = R"CHIMERA_STRING( Get rest position of spring force.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint21setDampingCoefficientEmd_docstring[] = R"CHIMERA_STRING( Set coefficient of joint damping (viscous friction) force.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint21getDampingCoefficientEm_docstring[] = R"CHIMERA_STRING( Get coefficient of joint damping (viscous friction) force.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint18setCoulombFrictionEmd_docstring[] = R"CHIMERA_STRING( Set joint Coulomb friction froce.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint18getCoulombFrictionEm_docstring[] = R"CHIMERA_STRING( Get joint Coulomb friction froce.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint18getPotentialEnergyEv_docstring[] = R"CHIMERA_STRING( Get potential energy
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint17getLocalTransformEv_docstring[] = R"CHIMERA_STRING( Get transformation from parent BodyNode to child BodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint23getLocalSpatialVelocityEv_docstring[] = R"CHIMERA_STRING( Get the velocity from the parent BodyNode to the child BodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint27getLocalSpatialAccelerationEv_docstring[] = R"CHIMERA_STRING( Get the acceleration from the parent BodyNode to the child BodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint27getLocalPrimaryAccelerationEv_docstring[] = R"CHIMERA_STRING( Get the J * q_dd of this joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint16getLocalJacobianEv_docstring[] = R"CHIMERA_STRING( Get generalized Jacobian from parent body node to child body node
 w.r.t. local generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint16getLocalJacobianERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Get generalized Jacobian from parent body node to child body node
 w.r.t. local generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint25getLocalJacobianTimeDerivEv_docstring[] = R"CHIMERA_STRING( Get time derivative of generalized Jacobian from parent body node
 to child body node w.r.t. local generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Joint23getBodyConstraintWrenchEv_docstring[] = R"CHIMERA_STRING( Get constraint wrench expressed in body node frame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint20notifyPositionUpdateEv_docstring[] = R"CHIMERA_STRING( Notify that a position update is needed
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint20notifyVelocityUpdateEv_docstring[] = R"CHIMERA_STRING( Notify that a velocity update is needed
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Joint24notifyAccelerationUpdateEv_docstring[] = R"CHIMERA_STRING( Notify that an acceleration update is needed
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics5JointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Joint, ::boost::noncopyable, dart::dynamics::JointPtr, ::boost::python::bases<dart::common::Subject, dart::common::VersionCounter, dart::common::AddonManager > >("Joint", _ZN4dart8dynamics5JointE_docstring, boost::python::no_init)
.def("setProperties", [](dart::dynamics::Joint *self, const dart::dynamics::Joint::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics5Joint13setPropertiesERKNS1_10PropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getJointProperties", [](const dart::dynamics::Joint *self) -> const dart::dynamics::Joint::Properties & { return self->getJointProperties(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Joint18getJointPropertiesEv_docstring)
.def("copy", [](dart::dynamics::Joint *self, const dart::dynamics::Joint & _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics5Joint4copyERKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::Joint *self, const dart::dynamics::Joint * _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics5Joint4copyEPKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("setName", [](dart::dynamics::Joint *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics5Joint7setNameERKSsb_docstring, (::boost::python::arg("_name")))
.def("setName", [](dart::dynamics::Joint *self, const std::string & _name, bool _renameDofs) -> const std::string & { return self->setName(_name, _renameDofs); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics5Joint7setNameERKSsb_docstring, (::boost::python::arg("_name"), ::boost::python::arg("_renameDofs")))
.def("getName", [](const dart::dynamics::Joint *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Joint7getNameEv_docstring)
.def("incrementVersion", [](dart::dynamics::Joint *self) -> std::size_t { return self->incrementVersion(); }, _ZN4dart8dynamics5Joint16incrementVersionEv_docstring)
.def("getVersion", [](const dart::dynamics::Joint *self) -> std::size_t { return self->getVersion(); }, _ZNK4dart8dynamics5Joint10getVersionEv_docstring)
.def("getType", [](const dart::dynamics::Joint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Joint7getTypeEv_docstring)
.def("setActuatorType", [](dart::dynamics::Joint *self, dart::dynamics::Joint::ActuatorType _actuatorType) -> void { return self->setActuatorType(_actuatorType); }, _ZN4dart8dynamics5Joint15setActuatorTypeENS1_12ActuatorTypeE_docstring, (::boost::python::arg("_actuatorType")))
.def("getActuatorType", [](const dart::dynamics::Joint *self) -> dart::dynamics::Joint::ActuatorType { return self->getActuatorType(); }, _ZNK4dart8dynamics5Joint15getActuatorTypeEv_docstring)
.def("isKinematic", [](const dart::dynamics::Joint *self) -> bool { return self->isKinematic(); }, _ZNK4dart8dynamics5Joint11isKinematicEv_docstring)
.def("isDynamic", [](const dart::dynamics::Joint *self) -> bool { return self->isDynamic(); }, _ZNK4dart8dynamics5Joint9isDynamicEv_docstring)
.def("getChildBodyNode", [](dart::dynamics::Joint *self) -> dart::dynamics::BodyNode * { return self->getChildBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics5Joint16getChildBodyNodeEv_docstring)
.def("getParentBodyNode", [](dart::dynamics::Joint *self) -> dart::dynamics::BodyNode * { return self->getParentBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics5Joint17getParentBodyNodeEv_docstring)
.def("getSkeleton", [](dart::dynamics::Joint *self) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(); }, _ZN4dart8dynamics5Joint11getSkeletonEv_docstring)
.def("setTransformFromParentBodyNode", [](dart::dynamics::Joint *self, const Eigen::Isometry3d & _T) -> void { return self->setTransformFromParentBodyNode(_T); }, _ZN4dart8dynamics5Joint30setTransformFromParentBodyNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("_T")))
.def("setTransformFromChildBodyNode", [](dart::dynamics::Joint *self, const Eigen::Isometry3d & _T) -> void { return self->setTransformFromChildBodyNode(_T); }, _ZN4dart8dynamics5Joint29setTransformFromChildBodyNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("_T")))
.def("getTransformFromParentBodyNode", [](const dart::dynamics::Joint *self) -> const Eigen::Isometry3d & { return self->getTransformFromParentBodyNode(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Joint30getTransformFromParentBodyNodeEv_docstring)
.def("getTransformFromChildBodyNode", [](const dart::dynamics::Joint *self) -> const Eigen::Isometry3d & { return self->getTransformFromChildBodyNode(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Joint29getTransformFromChildBodyNodeEv_docstring)
.def("setPositionLimitEnforced", [](dart::dynamics::Joint *self, bool _isPositionLimited) -> void { return self->setPositionLimitEnforced(_isPositionLimited); }, _ZN4dart8dynamics5Joint24setPositionLimitEnforcedEb_docstring, (::boost::python::arg("_isPositionLimited")))
.def("setPositionLimited", [](dart::dynamics::Joint *self, bool _isPositionLimited) -> void { return self->setPositionLimited(_isPositionLimited); }, _ZN4dart8dynamics5Joint18setPositionLimitedEb_docstring, (::boost::python::arg("_isPositionLimited")))
.def("isPositionLimitEnforced", [](const dart::dynamics::Joint *self) -> bool { return self->isPositionLimitEnforced(); }, _ZNK4dart8dynamics5Joint23isPositionLimitEnforcedEv_docstring)
.def("isPositionLimited", [](const dart::dynamics::Joint *self) -> bool { return self->isPositionLimited(); }, _ZNK4dart8dynamics5Joint17isPositionLimitedEv_docstring)
.def("getIndexInSkeleton", [](const dart::dynamics::Joint *self, std::size_t _index) -> std::size_t { return self->getIndexInSkeleton(_index); }, _ZNK4dart8dynamics5Joint18getIndexInSkeletonEm_docstring, (::boost::python::arg("_index")))
.def("getIndexInTree", [](const dart::dynamics::Joint *self, std::size_t _index) -> std::size_t { return self->getIndexInTree(_index); }, _ZNK4dart8dynamics5Joint14getIndexInTreeEm_docstring, (::boost::python::arg("_index")))
.def("getJointIndexInSkeleton", [](const dart::dynamics::Joint *self) -> std::size_t { return self->getJointIndexInSkeleton(); }, _ZNK4dart8dynamics5Joint23getJointIndexInSkeletonEv_docstring)
.def("getJointIndexInTree", [](const dart::dynamics::Joint *self) -> std::size_t { return self->getJointIndexInTree(); }, _ZNK4dart8dynamics5Joint19getJointIndexInTreeEv_docstring)
.def("getTreeIndex", [](const dart::dynamics::Joint *self) -> std::size_t { return self->getTreeIndex(); }, _ZNK4dart8dynamics5Joint12getTreeIndexEv_docstring)
.def("getDof", [](dart::dynamics::Joint *self, std::size_t _index) -> dart::dynamics::DegreeOfFreedom * { return self->getDof(_index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), _ZN4dart8dynamics5Joint6getDofEm_docstring, (::boost::python::arg("_index")))
.def("setDofName", [](dart::dynamics::Joint *self, std::size_t _index, const std::string & _name) -> const std::string & { return self->setDofName(_index, _name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics5Joint10setDofNameEmRKSsb_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_name")))
.def("setDofName", [](dart::dynamics::Joint *self, std::size_t _index, const std::string & _name, bool _preserveName) -> const std::string & { return self->setDofName(_index, _name, _preserveName); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics5Joint10setDofNameEmRKSsb_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_name"), ::boost::python::arg("_preserveName")))
.def("preserveDofName", [](dart::dynamics::Joint *self, std::size_t _index, bool _preserve) -> void { return self->preserveDofName(_index, _preserve); }, _ZN4dart8dynamics5Joint15preserveDofNameEmb_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_preserve")))
.def("isDofNamePreserved", [](const dart::dynamics::Joint *self, std::size_t _index) -> bool { return self->isDofNamePreserved(_index); }, _ZNK4dart8dynamics5Joint18isDofNamePreservedEm_docstring, (::boost::python::arg("_index")))
.def("getDofName", [](const dart::dynamics::Joint *self, std::size_t _index) -> const std::string & { return self->getDofName(_index); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Joint10getDofNameEm_docstring, (::boost::python::arg("_index")))
.def("getNumDofs", [](const dart::dynamics::Joint *self) -> std::size_t { return self->getNumDofs(); }, _ZNK4dart8dynamics5Joint10getNumDofsEv_docstring)
.def("setCommand", [](dart::dynamics::Joint *self, std::size_t _index, double _command) -> void { return self->setCommand(_index, _command); }, _ZN4dart8dynamics5Joint10setCommandEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_command")))
.def("getCommand", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getCommand(_index); }, _ZNK4dart8dynamics5Joint10getCommandEm_docstring, (::boost::python::arg("_index")))
.def("setCommands", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _commands) -> void { return self->setCommands(_commands); }, _ZN4dart8dynamics5Joint11setCommandsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_commands")))
.def("getCommands", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getCommands(); }, _ZNK4dart8dynamics5Joint11getCommandsEv_docstring)
.def("resetCommands", [](dart::dynamics::Joint *self) -> void { return self->resetCommands(); }, _ZN4dart8dynamics5Joint13resetCommandsEv_docstring)
.def("setPosition", [](dart::dynamics::Joint *self, std::size_t _index, double _position) -> void { return self->setPosition(_index, _position); }, _ZN4dart8dynamics5Joint11setPositionEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPosition", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getPosition(_index); }, _ZNK4dart8dynamics5Joint11getPositionEm_docstring, (::boost::python::arg("_index")))
.def("setPositions", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _positions) -> void { return self->setPositions(_positions); }, _ZN4dart8dynamics5Joint12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("getPositions", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getPositions(); }, _ZNK4dart8dynamics5Joint12getPositionsEv_docstring)
.def("setPositionLowerLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _position) -> void { return self->setPositionLowerLimit(_index, _position); }, _ZN4dart8dynamics5Joint21setPositionLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionLowerLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getPositionLowerLimit(_index); }, _ZNK4dart8dynamics5Joint21getPositionLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setPositionUpperLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _position) -> void { return self->setPositionUpperLimit(_index, _position); }, _ZN4dart8dynamics5Joint21setPositionUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionUpperLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getPositionUpperLimit(_index); }, _ZNK4dart8dynamics5Joint21getPositionUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("isCyclic", [](const dart::dynamics::Joint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, _ZNK4dart8dynamics5Joint8isCyclicEm_docstring, (::boost::python::arg("_index")))
.def("hasPositionLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> bool { return self->hasPositionLimit(_index); }, _ZNK4dart8dynamics5Joint16hasPositionLimitEm_docstring, (::boost::python::arg("_index")))
.def("resetPosition", [](dart::dynamics::Joint *self, std::size_t _index) -> void { return self->resetPosition(_index); }, _ZN4dart8dynamics5Joint13resetPositionEm_docstring, (::boost::python::arg("_index")))
.def("resetPositions", [](dart::dynamics::Joint *self) -> void { return self->resetPositions(); }, _ZN4dart8dynamics5Joint14resetPositionsEv_docstring)
.def("setInitialPosition", [](dart::dynamics::Joint *self, std::size_t _index, double _initial) -> void { return self->setInitialPosition(_index, _initial); }, _ZN4dart8dynamics5Joint18setInitialPositionEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialPosition", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getInitialPosition(_index); }, _ZNK4dart8dynamics5Joint18getInitialPositionEm_docstring, (::boost::python::arg("_index")))
.def("setInitialPositions", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _initial) -> void { return self->setInitialPositions(_initial); }, _ZN4dart8dynamics5Joint19setInitialPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_initial")))
.def("getInitialPositions", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getInitialPositions(); }, _ZNK4dart8dynamics5Joint19getInitialPositionsEv_docstring)
.def("setVelocity", [](dart::dynamics::Joint *self, std::size_t _index, double _velocity) -> void { return self->setVelocity(_index, _velocity); }, _ZN4dart8dynamics5Joint11setVelocityEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocity", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getVelocity(_index); }, _ZNK4dart8dynamics5Joint11getVelocityEm_docstring, (::boost::python::arg("_index")))
.def("setVelocities", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _velocities) -> void { return self->setVelocities(_velocities); }, _ZN4dart8dynamics5Joint13setVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_velocities")))
.def("getVelocities", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getVelocities(); }, _ZNK4dart8dynamics5Joint13getVelocitiesEv_docstring)
.def("setVelocityLowerLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _velocity) -> void { return self->setVelocityLowerLimit(_index, _velocity); }, _ZN4dart8dynamics5Joint21setVelocityLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityLowerLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getVelocityLowerLimit(_index); }, _ZNK4dart8dynamics5Joint21getVelocityLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setVelocityUpperLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _velocity) -> void { return self->setVelocityUpperLimit(_index, _velocity); }, _ZN4dart8dynamics5Joint21setVelocityUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityUpperLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getVelocityUpperLimit(_index); }, _ZNK4dart8dynamics5Joint21getVelocityUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("resetVelocity", [](dart::dynamics::Joint *self, std::size_t _index) -> void { return self->resetVelocity(_index); }, _ZN4dart8dynamics5Joint13resetVelocityEm_docstring, (::boost::python::arg("_index")))
.def("resetVelocities", [](dart::dynamics::Joint *self) -> void { return self->resetVelocities(); }, _ZN4dart8dynamics5Joint15resetVelocitiesEv_docstring)
.def("setInitialVelocity", [](dart::dynamics::Joint *self, std::size_t _index, double _initial) -> void { return self->setInitialVelocity(_index, _initial); }, _ZN4dart8dynamics5Joint18setInitialVelocityEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialVelocity", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getInitialVelocity(_index); }, _ZNK4dart8dynamics5Joint18getInitialVelocityEm_docstring, (::boost::python::arg("_index")))
.def("setInitialVelocities", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _initial) -> void { return self->setInitialVelocities(_initial); }, _ZN4dart8dynamics5Joint20setInitialVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_initial")))
.def("getInitialVelocities", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getInitialVelocities(); }, _ZNK4dart8dynamics5Joint20getInitialVelocitiesEv_docstring)
.def("setAcceleration", [](dart::dynamics::Joint *self, std::size_t _index, double _acceleration) -> void { return self->setAcceleration(_index, _acceleration); }, _ZN4dart8dynamics5Joint15setAccelerationEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAcceleration", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getAcceleration(_index); }, _ZNK4dart8dynamics5Joint15getAccelerationEm_docstring, (::boost::python::arg("_index")))
.def("setAccelerations", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _accelerations) -> void { return self->setAccelerations(_accelerations); }, _ZN4dart8dynamics5Joint16setAccelerationsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_accelerations")))
.def("getAccelerations", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getAccelerations(); }, _ZNK4dart8dynamics5Joint16getAccelerationsEv_docstring)
.def("resetAccelerations", [](dart::dynamics::Joint *self) -> void { return self->resetAccelerations(); }, _ZN4dart8dynamics5Joint18resetAccelerationsEv_docstring)
.def("setAccelerationLowerLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationLowerLimit(_index, _acceleration); }, _ZN4dart8dynamics5Joint25setAccelerationLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationLowerLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getAccelerationLowerLimit(_index); }, _ZNK4dart8dynamics5Joint25getAccelerationLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setAccelerationUpperLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationUpperLimit(_index, _acceleration); }, _ZN4dart8dynamics5Joint25setAccelerationUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationUpperLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getAccelerationUpperLimit(_index); }, _ZNK4dart8dynamics5Joint25getAccelerationUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("setForce", [](dart::dynamics::Joint *self, std::size_t _index, double _force) -> void { return self->setForce(_index, _force); }, _ZN4dart8dynamics5Joint8setForceEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForce", [](dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getForce(_index); }, _ZN4dart8dynamics5Joint8getForceEm_docstring, (::boost::python::arg("_index")))
.def("setForces", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _forces) -> void { return self->setForces(_forces); }, _ZN4dart8dynamics5Joint9setForcesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_forces")))
.def("getForces", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getForces(); }, _ZNK4dart8dynamics5Joint9getForcesEv_docstring)
.def("resetForces", [](dart::dynamics::Joint *self) -> void { return self->resetForces(); }, _ZN4dart8dynamics5Joint11resetForcesEv_docstring)
.def("setForceLowerLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _force) -> void { return self->setForceLowerLimit(_index, _force); }, _ZN4dart8dynamics5Joint18setForceLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceLowerLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getForceLowerLimit(_index); }, _ZNK4dart8dynamics5Joint18getForceLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setForceUpperLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _force) -> void { return self->setForceUpperLimit(_index, _force); }, _ZN4dart8dynamics5Joint18setForceUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceUpperLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getForceUpperLimit(_index); }, _ZNK4dart8dynamics5Joint18getForceUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("checkSanity", [](const dart::dynamics::Joint *self) -> bool { return self->checkSanity(); }, _ZNK4dart8dynamics5Joint11checkSanityEb_docstring)
.def("checkSanity", [](const dart::dynamics::Joint *self, bool _printWarnings) -> bool { return self->checkSanity(_printWarnings); }, _ZNK4dart8dynamics5Joint11checkSanityEb_docstring, (::boost::python::arg("_printWarnings")))
.def("setVelocityChange", [](dart::dynamics::Joint *self, std::size_t _index, double _velocityChange) -> void { return self->setVelocityChange(_index, _velocityChange); }, _ZN4dart8dynamics5Joint17setVelocityChangeEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocityChange")))
.def("getVelocityChange", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getVelocityChange(_index); }, _ZNK4dart8dynamics5Joint17getVelocityChangeEm_docstring, (::boost::python::arg("_index")))
.def("resetVelocityChanges", [](dart::dynamics::Joint *self) -> void { return self->resetVelocityChanges(); }, _ZN4dart8dynamics5Joint20resetVelocityChangesEv_docstring)
.def("setConstraintImpulse", [](dart::dynamics::Joint *self, std::size_t _index, double _impulse) -> void { return self->setConstraintImpulse(_index, _impulse); }, _ZN4dart8dynamics5Joint20setConstraintImpulseEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_impulse")))
.def("getConstraintImpulse", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getConstraintImpulse(_index); }, _ZNK4dart8dynamics5Joint20getConstraintImpulseEm_docstring, (::boost::python::arg("_index")))
.def("resetConstraintImpulses", [](dart::dynamics::Joint *self) -> void { return self->resetConstraintImpulses(); }, _ZN4dart8dynamics5Joint23resetConstraintImpulsesEv_docstring)
.def("integratePositions", [](dart::dynamics::Joint *self, double _dt) -> void { return self->integratePositions(_dt); }, _ZN4dart8dynamics5Joint18integratePositionsEd_docstring, (::boost::python::arg("_dt")))
.def("integrateVelocities", [](dart::dynamics::Joint *self, double _dt) -> void { return self->integrateVelocities(_dt); }, _ZN4dart8dynamics5Joint19integrateVelocitiesEd_docstring, (::boost::python::arg("_dt")))
.def("getPositionDifferences", [](const dart::dynamics::Joint *self, const Eigen::VectorXd & _q2, const Eigen::VectorXd & _q1) -> Eigen::VectorXd { return self->getPositionDifferences(_q2, _q1); }, _ZNK4dart8dynamics5Joint22getPositionDifferencesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES6__docstring, (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("setSpringStiffness", [](dart::dynamics::Joint *self, std::size_t _index, double _k) -> void { return self->setSpringStiffness(_index, _k); }, _ZN4dart8dynamics5Joint18setSpringStiffnessEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_k")))
.def("getSpringStiffness", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getSpringStiffness(_index); }, _ZNK4dart8dynamics5Joint18getSpringStiffnessEm_docstring, (::boost::python::arg("_index")))
.def("setRestPosition", [](dart::dynamics::Joint *self, std::size_t _index, double _q0) -> void { return self->setRestPosition(_index, _q0); }, _ZN4dart8dynamics5Joint15setRestPositionEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_q0")))
.def("getRestPosition", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getRestPosition(_index); }, _ZNK4dart8dynamics5Joint15getRestPositionEm_docstring, (::boost::python::arg("_index")))
.def("setDampingCoefficient", [](dart::dynamics::Joint *self, std::size_t _index, double _coeff) -> void { return self->setDampingCoefficient(_index, _coeff); }, _ZN4dart8dynamics5Joint21setDampingCoefficientEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_coeff")))
.def("getDampingCoefficient", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getDampingCoefficient(_index); }, _ZNK4dart8dynamics5Joint21getDampingCoefficientEm_docstring, (::boost::python::arg("_index")))
.def("setCoulombFriction", [](dart::dynamics::Joint *self, std::size_t _index, double _friction) -> void { return self->setCoulombFriction(_index, _friction); }, _ZN4dart8dynamics5Joint18setCoulombFrictionEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_friction")))
.def("getCoulombFriction", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getCoulombFriction(_index); }, _ZNK4dart8dynamics5Joint18getCoulombFrictionEm_docstring, (::boost::python::arg("_index")))
.def("getPotentialEnergy", [](const dart::dynamics::Joint *self) -> double { return self->getPotentialEnergy(); }, _ZNK4dart8dynamics5Joint18getPotentialEnergyEv_docstring)
.def("getLocalTransform", [](const dart::dynamics::Joint *self) -> const Eigen::Isometry3d & { return self->getLocalTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Joint17getLocalTransformEv_docstring)
.def("getLocalSpatialVelocity", [](const dart::dynamics::Joint *self) -> const Eigen::Vector6d & { return self->getLocalSpatialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Joint23getLocalSpatialVelocityEv_docstring)
.def("getLocalSpatialAcceleration", [](const dart::dynamics::Joint *self) -> const Eigen::Vector6d & { return self->getLocalSpatialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Joint27getLocalSpatialAccelerationEv_docstring)
.def("getLocalPrimaryAcceleration", [](const dart::dynamics::Joint *self) -> const Eigen::Vector6d & { return self->getLocalPrimaryAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Joint27getLocalPrimaryAccelerationEv_docstring)
.def("getLocalJacobian", [](const dart::dynamics::Joint *self) -> const dart::math::Jacobian { return self->getLocalJacobian(); }, _ZNK4dart8dynamics5Joint16getLocalJacobianEv_docstring)
.def("getLocalJacobian", [](const dart::dynamics::Joint *self, const Eigen::VectorXd & _positions) -> dart::math::Jacobian { return self->getLocalJacobian(_positions); }, _ZNK4dart8dynamics5Joint16getLocalJacobianERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("getLocalJacobianTimeDeriv", [](const dart::dynamics::Joint *self) -> const dart::math::Jacobian { return self->getLocalJacobianTimeDeriv(); }, _ZNK4dart8dynamics5Joint25getLocalJacobianTimeDerivEv_docstring)
.def("getBodyConstraintWrench", [](const dart::dynamics::Joint *self) -> Eigen::Vector6d { return self->getBodyConstraintWrench(); }, _ZNK4dart8dynamics5Joint23getBodyConstraintWrenchEv_docstring)
.def("notifyPositionUpdate", [](dart::dynamics::Joint *self) -> void { return self->notifyPositionUpdate(); }, _ZN4dart8dynamics5Joint20notifyPositionUpdateEv_docstring)
.def("notifyVelocityUpdate", [](dart::dynamics::Joint *self) -> void { return self->notifyVelocityUpdate(); }, _ZN4dart8dynamics5Joint20notifyVelocityUpdateEv_docstring)
.def("notifyAccelerationUpdate", [](dart::dynamics::Joint *self) -> void { return self->notifyAccelerationUpdate(); }, _ZN4dart8dynamics5Joint24notifyAccelerationUpdateEv_docstring)
.add_static_property("DefaultActuatorType", ::boost::python::make_getter(dart::dynamics::Joint::DefaultActuatorType))
;
}

/* footer */
