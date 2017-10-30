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

void _ZN4dart8dynamics5JointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Joint, ::boost::noncopyable, dart::dynamics::JointPtr, ::boost::python::bases<dart::common::Subject, dart::common::VersionCounter > >("Joint", boost::python::no_init)
.def("hasJointAspect", [](const dart::dynamics::Joint *self) -> bool { return self->hasJointAspect(); })
.def("setJointAspect", [](dart::dynamics::Joint *self, const dart::common::EmbedProperties<dart::dynamics::Joint, dart::dynamics::detail::JointProperties>::Aspect * aspect) -> void { return self->setJointAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removeJointAspect", [](dart::dynamics::Joint *self) -> void { return self->removeJointAspect(); })
.def("releaseJointAspect", [](dart::dynamics::Joint *self) -> std::unique_ptr<dart::common::EmbedProperties<dart::dynamics::Joint, dart::dynamics::detail::JointProperties>::Aspect> { return self->releaseJointAspect(); })
.def("setProperties", [](dart::dynamics::Joint *self, const dart::dynamics::Joint::Properties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("setAspectProperties", [](dart::dynamics::Joint *self, const dart::common::EmbedProperties<dart::dynamics::Joint, dart::dynamics::detail::JointProperties>::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getJointProperties", [](const dart::dynamics::Joint *self) -> const dart::dynamics::Joint::Properties & { return self->getJointProperties(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("copy", [](dart::dynamics::Joint *self, const dart::dynamics::Joint & _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::Joint *self, const dart::dynamics::Joint * _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("setName", [](dart::dynamics::Joint *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("setName", [](dart::dynamics::Joint *self, const std::string & _name, bool _renameDofs) -> const std::string & { return self->setName(_name, _renameDofs); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name"), ::boost::python::arg("_renameDofs")))
.def("getName", [](const dart::dynamics::Joint *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getType", [](const dart::dynamics::Joint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setActuatorType", [](dart::dynamics::Joint *self, dart::dynamics::Joint::ActuatorType _actuatorType) -> void { return self->setActuatorType(_actuatorType); }, (::boost::python::arg("_actuatorType")))
.def("getActuatorType", [](const dart::dynamics::Joint *self) -> dart::dynamics::Joint::ActuatorType { return self->getActuatorType(); })
.def("isKinematic", [](const dart::dynamics::Joint *self) -> bool { return self->isKinematic(); })
.def("isDynamic", [](const dart::dynamics::Joint *self) -> bool { return self->isDynamic(); })
.def("getChildBodyNode", [](dart::dynamics::Joint *self) -> dart::dynamics::BodyNode * { return self->getChildBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("getParentBodyNode", [](dart::dynamics::Joint *self) -> dart::dynamics::BodyNode * { return self->getParentBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("getSkeleton", [](dart::dynamics::Joint *self) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(); })
.def("setTransformFromParentBodyNode", [](dart::dynamics::Joint *self, const Eigen::Isometry3d & _T) -> void { return self->setTransformFromParentBodyNode(_T); }, (::boost::python::arg("_T")))
.def("setTransformFromChildBodyNode", [](dart::dynamics::Joint *self, const Eigen::Isometry3d & _T) -> void { return self->setTransformFromChildBodyNode(_T); }, (::boost::python::arg("_T")))
.def("getTransformFromParentBodyNode", [](const dart::dynamics::Joint *self) -> const Eigen::Isometry3d & { return self->getTransformFromParentBodyNode(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getTransformFromChildBodyNode", [](const dart::dynamics::Joint *self) -> const Eigen::Isometry3d & { return self->getTransformFromChildBodyNode(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPositionLimitEnforced", [](dart::dynamics::Joint *self, bool _isPositionLimitEnforced) -> void { return self->setPositionLimitEnforced(_isPositionLimitEnforced); }, (::boost::python::arg("_isPositionLimitEnforced")))
.def("isPositionLimitEnforced", [](const dart::dynamics::Joint *self) -> bool { return self->isPositionLimitEnforced(); })
.def("getIndexInSkeleton", [](const dart::dynamics::Joint *self, std::size_t _index) -> std::size_t { return self->getIndexInSkeleton(_index); }, (::boost::python::arg("_index")))
.def("getIndexInTree", [](const dart::dynamics::Joint *self, std::size_t _index) -> std::size_t { return self->getIndexInTree(_index); }, (::boost::python::arg("_index")))
.def("getJointIndexInSkeleton", [](const dart::dynamics::Joint *self) -> std::size_t { return self->getJointIndexInSkeleton(); })
.def("getJointIndexInTree", [](const dart::dynamics::Joint *self) -> std::size_t { return self->getJointIndexInTree(); })
.def("getTreeIndex", [](const dart::dynamics::Joint *self) -> std::size_t { return self->getTreeIndex(); })
.def("getDof", [](dart::dynamics::Joint *self, std::size_t _index) -> dart::dynamics::DegreeOfFreedom * { return self->getDof(_index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_index")))
.def("setDofName", [](dart::dynamics::Joint *self, std::size_t _index, const std::string & _name) -> const std::string & { return self->setDofName(_index, _name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_index"), ::boost::python::arg("_name")))
.def("setDofName", [](dart::dynamics::Joint *self, std::size_t _index, const std::string & _name, bool _preserveName) -> const std::string & { return self->setDofName(_index, _name, _preserveName); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_index"), ::boost::python::arg("_name"), ::boost::python::arg("_preserveName")))
.def("preserveDofName", [](dart::dynamics::Joint *self, std::size_t _index, bool _preserve) -> void { return self->preserveDofName(_index, _preserve); }, (::boost::python::arg("_index"), ::boost::python::arg("_preserve")))
.def("isDofNamePreserved", [](const dart::dynamics::Joint *self, std::size_t _index) -> bool { return self->isDofNamePreserved(_index); }, (::boost::python::arg("_index")))
.def("getDofName", [](const dart::dynamics::Joint *self, std::size_t _index) -> const std::string & { return self->getDofName(_index); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_index")))
.def("getNumDofs", [](const dart::dynamics::Joint *self) -> std::size_t { return self->getNumDofs(); })
.def("setCommand", [](dart::dynamics::Joint *self, std::size_t _index, double _command) -> void { return self->setCommand(_index, _command); }, (::boost::python::arg("_index"), ::boost::python::arg("_command")))
.def("getCommand", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getCommand(_index); }, (::boost::python::arg("_index")))
.def("setCommands", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _commands) -> void { return self->setCommands(_commands); }, (::boost::python::arg("_commands")))
.def("getCommands", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getCommands(); })
.def("resetCommands", [](dart::dynamics::Joint *self) -> void { return self->resetCommands(); })
.def("setPosition", [](dart::dynamics::Joint *self, std::size_t _index, double _position) -> void { return self->setPosition(_index, _position); }, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPosition", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getPosition(_index); }, (::boost::python::arg("_index")))
.def("setPositions", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _positions) -> void { return self->setPositions(_positions); }, (::boost::python::arg("_positions")))
.def("getPositions", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getPositions(); })
.def("setPositionLowerLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _position) -> void { return self->setPositionLowerLimit(_index, _position); }, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionLowerLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getPositionLowerLimit(_index); }, (::boost::python::arg("_index")))
.def("setPositionUpperLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _position) -> void { return self->setPositionUpperLimit(_index, _position); }, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionUpperLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getPositionUpperLimit(_index); }, (::boost::python::arg("_index")))
.def("isCyclic", [](const dart::dynamics::Joint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, (::boost::python::arg("_index")))
.def("hasPositionLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> bool { return self->hasPositionLimit(_index); }, (::boost::python::arg("_index")))
.def("resetPosition", [](dart::dynamics::Joint *self, std::size_t _index) -> void { return self->resetPosition(_index); }, (::boost::python::arg("_index")))
.def("resetPositions", [](dart::dynamics::Joint *self) -> void { return self->resetPositions(); })
.def("setInitialPosition", [](dart::dynamics::Joint *self, std::size_t _index, double _initial) -> void { return self->setInitialPosition(_index, _initial); }, (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialPosition", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getInitialPosition(_index); }, (::boost::python::arg("_index")))
.def("setInitialPositions", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _initial) -> void { return self->setInitialPositions(_initial); }, (::boost::python::arg("_initial")))
.def("getInitialPositions", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getInitialPositions(); })
.def("setVelocity", [](dart::dynamics::Joint *self, std::size_t _index, double _velocity) -> void { return self->setVelocity(_index, _velocity); }, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocity", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getVelocity(_index); }, (::boost::python::arg("_index")))
.def("setVelocities", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _velocities) -> void { return self->setVelocities(_velocities); }, (::boost::python::arg("_velocities")))
.def("getVelocities", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getVelocities(); })
.def("setVelocityLowerLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _velocity) -> void { return self->setVelocityLowerLimit(_index, _velocity); }, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityLowerLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getVelocityLowerLimit(_index); }, (::boost::python::arg("_index")))
.def("setVelocityUpperLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _velocity) -> void { return self->setVelocityUpperLimit(_index, _velocity); }, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityUpperLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getVelocityUpperLimit(_index); }, (::boost::python::arg("_index")))
.def("resetVelocity", [](dart::dynamics::Joint *self, std::size_t _index) -> void { return self->resetVelocity(_index); }, (::boost::python::arg("_index")))
.def("resetVelocities", [](dart::dynamics::Joint *self) -> void { return self->resetVelocities(); })
.def("setInitialVelocity", [](dart::dynamics::Joint *self, std::size_t _index, double _initial) -> void { return self->setInitialVelocity(_index, _initial); }, (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialVelocity", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getInitialVelocity(_index); }, (::boost::python::arg("_index")))
.def("setInitialVelocities", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _initial) -> void { return self->setInitialVelocities(_initial); }, (::boost::python::arg("_initial")))
.def("getInitialVelocities", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getInitialVelocities(); })
.def("setAcceleration", [](dart::dynamics::Joint *self, std::size_t _index, double _acceleration) -> void { return self->setAcceleration(_index, _acceleration); }, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAcceleration", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getAcceleration(_index); }, (::boost::python::arg("_index")))
.def("setAccelerations", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _accelerations) -> void { return self->setAccelerations(_accelerations); }, (::boost::python::arg("_accelerations")))
.def("getAccelerations", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getAccelerations(); })
.def("resetAccelerations", [](dart::dynamics::Joint *self) -> void { return self->resetAccelerations(); })
.def("setAccelerationLowerLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationLowerLimit(_index, _acceleration); }, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationLowerLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getAccelerationLowerLimit(_index); }, (::boost::python::arg("_index")))
.def("setAccelerationUpperLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationUpperLimit(_index, _acceleration); }, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationUpperLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getAccelerationUpperLimit(_index); }, (::boost::python::arg("_index")))
.def("setForce", [](dart::dynamics::Joint *self, std::size_t _index, double _force) -> void { return self->setForce(_index, _force); }, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForce", [](dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getForce(_index); }, (::boost::python::arg("_index")))
.def("setForces", [](dart::dynamics::Joint *self, const Eigen::VectorXd & _forces) -> void { return self->setForces(_forces); }, (::boost::python::arg("_forces")))
.def("getForces", [](const dart::dynamics::Joint *self) -> Eigen::VectorXd { return self->getForces(); })
.def("resetForces", [](dart::dynamics::Joint *self) -> void { return self->resetForces(); })
.def("setForceLowerLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _force) -> void { return self->setForceLowerLimit(_index, _force); }, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceLowerLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getForceLowerLimit(_index); }, (::boost::python::arg("_index")))
.def("setForceUpperLimit", [](dart::dynamics::Joint *self, std::size_t _index, double _force) -> void { return self->setForceUpperLimit(_index, _force); }, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceUpperLimit", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getForceUpperLimit(_index); }, (::boost::python::arg("_index")))
.def("checkSanity", [](const dart::dynamics::Joint *self) -> bool { return self->checkSanity(); })
.def("checkSanity", [](const dart::dynamics::Joint *self, bool _printWarnings) -> bool { return self->checkSanity(_printWarnings); }, (::boost::python::arg("_printWarnings")))
.def("setVelocityChange", [](dart::dynamics::Joint *self, std::size_t _index, double _velocityChange) -> void { return self->setVelocityChange(_index, _velocityChange); }, (::boost::python::arg("_index"), ::boost::python::arg("_velocityChange")))
.def("getVelocityChange", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getVelocityChange(_index); }, (::boost::python::arg("_index")))
.def("resetVelocityChanges", [](dart::dynamics::Joint *self) -> void { return self->resetVelocityChanges(); })
.def("setConstraintImpulse", [](dart::dynamics::Joint *self, std::size_t _index, double _impulse) -> void { return self->setConstraintImpulse(_index, _impulse); }, (::boost::python::arg("_index"), ::boost::python::arg("_impulse")))
.def("getConstraintImpulse", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getConstraintImpulse(_index); }, (::boost::python::arg("_index")))
.def("resetConstraintImpulses", [](dart::dynamics::Joint *self) -> void { return self->resetConstraintImpulses(); })
.def("integratePositions", [](dart::dynamics::Joint *self, double _dt) -> void { return self->integratePositions(_dt); }, (::boost::python::arg("_dt")))
.def("integrateVelocities", [](dart::dynamics::Joint *self, double _dt) -> void { return self->integrateVelocities(_dt); }, (::boost::python::arg("_dt")))
.def("getPositionDifferences", [](const dart::dynamics::Joint *self, const Eigen::VectorXd & _q2, const Eigen::VectorXd & _q1) -> Eigen::VectorXd { return self->getPositionDifferences(_q2, _q1); }, (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("setSpringStiffness", [](dart::dynamics::Joint *self, std::size_t _index, double _k) -> void { return self->setSpringStiffness(_index, _k); }, (::boost::python::arg("_index"), ::boost::python::arg("_k")))
.def("getSpringStiffness", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getSpringStiffness(_index); }, (::boost::python::arg("_index")))
.def("setRestPosition", [](dart::dynamics::Joint *self, std::size_t _index, double _q0) -> void { return self->setRestPosition(_index, _q0); }, (::boost::python::arg("_index"), ::boost::python::arg("_q0")))
.def("getRestPosition", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getRestPosition(_index); }, (::boost::python::arg("_index")))
.def("setDampingCoefficient", [](dart::dynamics::Joint *self, std::size_t _index, double _coeff) -> void { return self->setDampingCoefficient(_index, _coeff); }, (::boost::python::arg("_index"), ::boost::python::arg("_coeff")))
.def("getDampingCoefficient", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getDampingCoefficient(_index); }, (::boost::python::arg("_index")))
.def("setCoulombFriction", [](dart::dynamics::Joint *self, std::size_t _index, double _friction) -> void { return self->setCoulombFriction(_index, _friction); }, (::boost::python::arg("_index"), ::boost::python::arg("_friction")))
.def("getCoulombFriction", [](const dart::dynamics::Joint *self, std::size_t _index) -> double { return self->getCoulombFriction(_index); }, (::boost::python::arg("_index")))
.def("getPotentialEnergy", [](const dart::dynamics::Joint *self) -> double { return self->getPotentialEnergy(); })
.def("computePotentialEnergy", [](const dart::dynamics::Joint *self) -> double { return self->computePotentialEnergy(); })
.def("getLocalTransform", [](const dart::dynamics::Joint *self) -> const Eigen::Isometry3d & { return self->getLocalTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalSpatialVelocity", [](const dart::dynamics::Joint *self) -> const Eigen::Vector6d & { return self->getLocalSpatialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalSpatialAcceleration", [](const dart::dynamics::Joint *self) -> const Eigen::Vector6d & { return self->getLocalSpatialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalPrimaryAcceleration", [](const dart::dynamics::Joint *self) -> const Eigen::Vector6d & { return self->getLocalPrimaryAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalJacobian", [](const dart::dynamics::Joint *self) -> const dart::math::Jacobian { return self->getLocalJacobian(); })
.def("getLocalJacobian", [](const dart::dynamics::Joint *self, const Eigen::VectorXd & positions) -> dart::math::Jacobian { return self->getLocalJacobian(positions); }, (::boost::python::arg("positions")))
.def("getLocalJacobianTimeDeriv", [](const dart::dynamics::Joint *self) -> const dart::math::Jacobian { return self->getLocalJacobianTimeDeriv(); })
.def("getRelativeTransform", [](const dart::dynamics::Joint *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeSpatialVelocity", [](const dart::dynamics::Joint *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeSpatialAcceleration", [](const dart::dynamics::Joint *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativePrimaryAcceleration", [](const dart::dynamics::Joint *self) -> const Eigen::Vector6d & { return self->getRelativePrimaryAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeJacobian", [](const dart::dynamics::Joint *self) -> const dart::math::Jacobian { return self->getRelativeJacobian(); })
.def("getRelativeJacobian", [](const dart::dynamics::Joint *self, const Eigen::VectorXd & positions) -> dart::math::Jacobian { return self->getRelativeJacobian(positions); }, (::boost::python::arg("positions")))
.def("getRelativeJacobianTimeDeriv", [](const dart::dynamics::Joint *self) -> const dart::math::Jacobian { return self->getRelativeJacobianTimeDeriv(); })
.def("getBodyConstraintWrench", [](const dart::dynamics::Joint *self) -> Eigen::Vector6d { return self->getBodyConstraintWrench(); })
.def("notifyPositionUpdate", [](dart::dynamics::Joint *self) -> void { return self->notifyPositionUpdate(); })
.def("notifyPositionUpdated", [](dart::dynamics::Joint *self) -> void { return self->notifyPositionUpdated(); })
.def("notifyVelocityUpdate", [](dart::dynamics::Joint *self) -> void { return self->notifyVelocityUpdate(); })
.def("notifyVelocityUpdated", [](dart::dynamics::Joint *self) -> void { return self->notifyVelocityUpdated(); })
.def("notifyAccelerationUpdate", [](dart::dynamics::Joint *self) -> void { return self->notifyAccelerationUpdate(); })
.def("notifyAccelerationUpdated", [](dart::dynamics::Joint *self) -> void { return self->notifyAccelerationUpdated(); })
.add_static_property("FORCE", ::boost::python::make_getter(dart::dynamics::Joint::FORCE))
.add_static_property("PASSIVE", ::boost::python::make_getter(dart::dynamics::Joint::PASSIVE))
.add_static_property("SERVO", ::boost::python::make_getter(dart::dynamics::Joint::SERVO))
.add_static_property("ACCELERATION", ::boost::python::make_getter(dart::dynamics::Joint::ACCELERATION))
.add_static_property("VELOCITY", ::boost::python::make_getter(dart::dynamics::Joint::VELOCITY))
.add_static_property("LOCKED", ::boost::python::make_getter(dart::dynamics::Joint::LOCKED))
.add_static_property("DefaultActuatorType", ::boost::python::make_getter(dart::dynamics::Joint::DefaultActuatorType))
;
}

/* footer */
