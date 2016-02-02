#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics5JointE()
{
::boost::python::class_<dart::dynamics::Joint, ::boost::noncopyable, dart::dynamics::RevoluteJoint *, ::boost::python::bases<dart::common::Subject, dart::common::AddonManager > >("Joint", boost::python::no_init)
.def("setProperties", static_cast<void (dart::dynamics::Joint::*)(const dart::dynamics::Joint::Properties &)>(&dart::dynamics::Joint::setProperties), (::boost::python::arg("_properties")))
.def("getJointProperties", static_cast<const dart::dynamics::Joint::Properties &(dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getJointProperties), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("copy", static_cast<void (dart::dynamics::Joint::*)(const dart::dynamics::Joint &)>(&dart::dynamics::Joint::copy), (::boost::python::arg("_otherJoint")))
.def("copy", static_cast<void (dart::dynamics::Joint::*)(const dart::dynamics::Joint *)>(&dart::dynamics::Joint::copy), (::boost::python::arg("_otherJoint")))
.def("setName", static_cast<const std::string &(dart::dynamics::Joint::*)(const std::string &, bool)>(&dart::dynamics::Joint::setName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name"), ::boost::python::arg("_renameDofs") = true))
.def("getName", static_cast<const std::string &(dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getType", static_cast<const std::string &(dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setActuatorType", static_cast<void (dart::dynamics::Joint::*)(dart::dynamics::Joint::ActuatorType)>(&dart::dynamics::Joint::setActuatorType), (::boost::python::arg("_actuatorType")))
.def("getActuatorType", static_cast<dart::dynamics::Joint::ActuatorType (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getActuatorType))
.def("isKinematic", static_cast<bool (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::isKinematic))
.def("isDynamic", static_cast<bool (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::isDynamic))
.def("getChildBodyNode", static_cast<dart::dynamics::BodyNode *(dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::getChildBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("getParentBodyNode", static_cast<dart::dynamics::BodyNode *(dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::getParentBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("getSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::getSkeleton))
.def("getSkeleton", static_cast<std::shared_ptr<const dart::dynamics::Skeleton> (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getSkeleton))
.def("setTransformFromParentBodyNode", static_cast<void (dart::dynamics::Joint::*)(const Eigen::Isometry3d &)>(&dart::dynamics::Joint::setTransformFromParentBodyNode), (::boost::python::arg("_T")))
.def("setTransformFromChildBodyNode", static_cast<void (dart::dynamics::Joint::*)(const Eigen::Isometry3d &)>(&dart::dynamics::Joint::setTransformFromChildBodyNode), (::boost::python::arg("_T")))
.def("getTransformFromParentBodyNode", static_cast<const Eigen::Isometry3d &(dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getTransformFromParentBodyNode), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getTransformFromChildBodyNode", static_cast<const Eigen::Isometry3d &(dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getTransformFromChildBodyNode), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPositionLimitEnforced", static_cast<void (dart::dynamics::Joint::*)(bool)>(&dart::dynamics::Joint::setPositionLimitEnforced), (::boost::python::arg("_isPositionLimited")))
.def("setPositionLimited", static_cast<void (dart::dynamics::Joint::*)(bool)>(&dart::dynamics::Joint::setPositionLimited), (::boost::python::arg("_isPositionLimited")))
.def("isPositionLimitEnforced", static_cast<bool (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::isPositionLimitEnforced))
.def("isPositionLimited", static_cast<bool (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::isPositionLimited))
.def("getIndexInSkeleton", static_cast<std::size_t (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getIndexInSkeleton), (::boost::python::arg("_index")))
.def("getIndexInTree", static_cast<std::size_t (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getIndexInTree), (::boost::python::arg("_index")))
.def("getJointIndexInSkeleton", static_cast<std::size_t (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getJointIndexInSkeleton))
.def("getJointIndexInTree", static_cast<std::size_t (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getJointIndexInTree))
.def("getTreeIndex", static_cast<std::size_t (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getTreeIndex))
.def("setDofName", static_cast<const std::string &(dart::dynamics::Joint::*)(std::size_t, const std::string &, bool)>(&dart::dynamics::Joint::setDofName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_index"), ::boost::python::arg("_name"), ::boost::python::arg("_preserveName") = true))
.def("preserveDofName", static_cast<void (dart::dynamics::Joint::*)(std::size_t, bool)>(&dart::dynamics::Joint::preserveDofName), (::boost::python::arg("_index"), ::boost::python::arg("_preserve")))
.def("isDofNamePreserved", static_cast<bool (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::isDofNamePreserved), (::boost::python::arg("_index")))
.def("getDofName", static_cast<const std::string &(dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getDofName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_index")))
.def("getNumDofs", static_cast<std::size_t (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getNumDofs))
.def("setCommand", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setCommand), (::boost::python::arg("_index"), ::boost::python::arg("_command")))
.def("getCommand", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getCommand), (::boost::python::arg("_index")))
.def("setCommands", static_cast<void (dart::dynamics::Joint::*)(const Eigen::VectorXd &)>(&dart::dynamics::Joint::setCommands), (::boost::python::arg("_commands")))
.def("getCommands", static_cast<Eigen::VectorXd (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getCommands))
.def("resetCommands", static_cast<void (dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::resetCommands))
.def("setPosition", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setPosition), (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPosition", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getPosition), (::boost::python::arg("_index")))
.def("setPositions", static_cast<void (dart::dynamics::Joint::*)(const Eigen::VectorXd &)>(&dart::dynamics::Joint::setPositions), (::boost::python::arg("_positions")))
.def("getPositions", static_cast<Eigen::VectorXd (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getPositions))
.def("setPositionLowerLimit", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setPositionLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionLowerLimit", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getPositionLowerLimit), (::boost::python::arg("_index")))
.def("setPositionUpperLimit", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setPositionUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionUpperLimit", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getPositionUpperLimit), (::boost::python::arg("_index")))
.def("isCyclic", static_cast<bool (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::isCyclic), (::boost::python::arg("_index")))
.def("hasPositionLimit", static_cast<bool (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::hasPositionLimit), (::boost::python::arg("_index")))
.def("resetPosition", static_cast<void (dart::dynamics::Joint::*)(std::size_t)>(&dart::dynamics::Joint::resetPosition), (::boost::python::arg("_index")))
.def("resetPositions", static_cast<void (dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::resetPositions))
.def("setInitialPosition", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setInitialPosition), (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialPosition", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getInitialPosition), (::boost::python::arg("_index")))
.def("setInitialPositions", static_cast<void (dart::dynamics::Joint::*)(const Eigen::VectorXd &)>(&dart::dynamics::Joint::setInitialPositions), (::boost::python::arg("_initial")))
.def("getInitialPositions", static_cast<Eigen::VectorXd (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getInitialPositions))
.def("setVelocity", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setVelocity), (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocity", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getVelocity), (::boost::python::arg("_index")))
.def("setVelocities", static_cast<void (dart::dynamics::Joint::*)(const Eigen::VectorXd &)>(&dart::dynamics::Joint::setVelocities), (::boost::python::arg("_velocities")))
.def("getVelocities", static_cast<Eigen::VectorXd (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getVelocities))
.def("setVelocityLowerLimit", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setVelocityLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityLowerLimit", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getVelocityLowerLimit), (::boost::python::arg("_index")))
.def("setVelocityUpperLimit", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setVelocityUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityUpperLimit", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getVelocityUpperLimit), (::boost::python::arg("_index")))
.def("resetVelocity", static_cast<void (dart::dynamics::Joint::*)(std::size_t)>(&dart::dynamics::Joint::resetVelocity), (::boost::python::arg("_index")))
.def("resetVelocities", static_cast<void (dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::resetVelocities))
.def("setInitialVelocity", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setInitialVelocity), (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialVelocity", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getInitialVelocity), (::boost::python::arg("_index")))
.def("setInitialVelocities", static_cast<void (dart::dynamics::Joint::*)(const Eigen::VectorXd &)>(&dart::dynamics::Joint::setInitialVelocities), (::boost::python::arg("_initial")))
.def("getInitialVelocities", static_cast<Eigen::VectorXd (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getInitialVelocities))
.def("setAcceleration", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setAcceleration), (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAcceleration", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getAcceleration), (::boost::python::arg("_index")))
.def("setAccelerations", static_cast<void (dart::dynamics::Joint::*)(const Eigen::VectorXd &)>(&dart::dynamics::Joint::setAccelerations), (::boost::python::arg("_accelerations")))
.def("getAccelerations", static_cast<Eigen::VectorXd (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getAccelerations))
.def("resetAccelerations", static_cast<void (dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::resetAccelerations))
.def("setAccelerationLowerLimit", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setAccelerationLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationLowerLimit", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getAccelerationLowerLimit), (::boost::python::arg("_index")))
.def("setAccelerationUpperLimit", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setAccelerationUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationUpperLimit", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getAccelerationUpperLimit), (::boost::python::arg("_index")))
.def("setForce", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setForce), (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForce", static_cast<double (dart::dynamics::Joint::*)(std::size_t)>(&dart::dynamics::Joint::getForce), (::boost::python::arg("_index")))
.def("setForces", static_cast<void (dart::dynamics::Joint::*)(const Eigen::VectorXd &)>(&dart::dynamics::Joint::setForces), (::boost::python::arg("_forces")))
.def("getForces", static_cast<Eigen::VectorXd (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getForces))
.def("resetForces", static_cast<void (dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::resetForces))
.def("setForceLowerLimit", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setForceLowerLimit), (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceLowerLimit", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getForceLowerLimit), (::boost::python::arg("_index")))
.def("setForceUpperLimit", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setForceUpperLimit), (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceUpperLimit", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getForceUpperLimit), (::boost::python::arg("_index")))
.def("checkSanity", static_cast<bool (dart::dynamics::Joint::*)(bool) const>(&dart::dynamics::Joint::checkSanity), (::boost::python::arg("_printWarnings") = true))
.def("setVelocityChange", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setVelocityChange), (::boost::python::arg("_index"), ::boost::python::arg("_velocityChange")))
.def("getVelocityChange", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getVelocityChange), (::boost::python::arg("_index")))
.def("resetVelocityChanges", static_cast<void (dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::resetVelocityChanges))
.def("setConstraintImpulse", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setConstraintImpulse), (::boost::python::arg("_index"), ::boost::python::arg("_impulse")))
.def("getConstraintImpulse", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getConstraintImpulse), (::boost::python::arg("_index")))
.def("resetConstraintImpulses", static_cast<void (dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::resetConstraintImpulses))
.def("integratePositions", static_cast<void (dart::dynamics::Joint::*)(double)>(&dart::dynamics::Joint::integratePositions), (::boost::python::arg("_dt")))
.def("integrateVelocities", static_cast<void (dart::dynamics::Joint::*)(double)>(&dart::dynamics::Joint::integrateVelocities), (::boost::python::arg("_dt")))
.def("getPositionDifferences", static_cast<Eigen::VectorXd (dart::dynamics::Joint::*)(const Eigen::VectorXd &, const Eigen::VectorXd &) const>(&dart::dynamics::Joint::getPositionDifferences), (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("setSpringStiffness", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setSpringStiffness), (::boost::python::arg("_index"), ::boost::python::arg("_k")))
.def("getSpringStiffness", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getSpringStiffness), (::boost::python::arg("_index")))
.def("setRestPosition", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setRestPosition), (::boost::python::arg("_index"), ::boost::python::arg("_q0")))
.def("getRestPosition", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getRestPosition), (::boost::python::arg("_index")))
.def("setDampingCoefficient", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setDampingCoefficient), (::boost::python::arg("_index"), ::boost::python::arg("_coeff")))
.def("getDampingCoefficient", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getDampingCoefficient), (::boost::python::arg("_index")))
.def("setCoulombFriction", static_cast<void (dart::dynamics::Joint::*)(std::size_t, double)>(&dart::dynamics::Joint::setCoulombFriction), (::boost::python::arg("_index"), ::boost::python::arg("_friction")))
.def("getCoulombFriction", static_cast<double (dart::dynamics::Joint::*)(std::size_t) const>(&dart::dynamics::Joint::getCoulombFriction), (::boost::python::arg("_index")))
.def("getPotentialEnergy", static_cast<double (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getPotentialEnergy))
.def("getLocalTransform", static_cast<const Eigen::Isometry3d &(dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getLocalTransform), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalSpatialVelocity", static_cast<const Eigen::Vector6d &(dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getLocalSpatialVelocity), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalSpatialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getLocalSpatialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalPrimaryAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getLocalPrimaryAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalJacobian", static_cast<const dart::math::Jacobian (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getLocalJacobian))
.def("getLocalJacobian", static_cast<dart::math::Jacobian (dart::dynamics::Joint::*)(const Eigen::VectorXd &) const>(&dart::dynamics::Joint::getLocalJacobian), (::boost::python::arg("_positions")))
.def("getLocalJacobianTimeDeriv", static_cast<const dart::math::Jacobian (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getLocalJacobianTimeDeriv))
.def("getBodyConstraintWrench", static_cast<Eigen::Vector6d (dart::dynamics::Joint::*)() const>(&dart::dynamics::Joint::getBodyConstraintWrench))
.def("notifyPositionUpdate", static_cast<void (dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::notifyPositionUpdate))
.def("notifyVelocityUpdate", static_cast<void (dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::notifyVelocityUpdate))
.def("notifyAccelerationUpdate", static_cast<void (dart::dynamics::Joint::*)()>(&dart::dynamics::Joint::notifyAccelerationUpdate))
.def("applyGLTransform", static_cast<void (dart::dynamics::Joint::*)(dart::renderer::RenderInterface *)>(&dart::dynamics::Joint::applyGLTransform), (::boost::python::arg("_ri")))
.add_static_property("DefaultActuatorType", ::boost::python::make_getter(dart::dynamics::Joint::DefaultActuatorType))
;
}

/* footer */