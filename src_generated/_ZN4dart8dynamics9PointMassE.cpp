#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics9PointMassE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PointMass, ::boost::python::bases<dart::common::Subject > >("PointMass", boost::python::no_init)
.def("getIndexInSoftBodyNode", static_cast<std::size_t (dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getIndexInSoftBodyNode))
.def("setMass", static_cast<void (dart::dynamics::PointMass::*)(double)>(&dart::dynamics::PointMass::setMass), (::boost::python::arg("_mass")))
.def("getMass", static_cast<double (dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getMass))
.def("getPsi", static_cast<double (dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getPsi))
.def("getImplicitPsi", static_cast<double (dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getImplicitPsi))
.def("getPi", static_cast<double (dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getPi))
.def("getImplicitPi", static_cast<double (dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getImplicitPi))
.def("addConnectedPointMass", static_cast<void (dart::dynamics::PointMass::*)(dart::dynamics::PointMass *)>(&dart::dynamics::PointMass::addConnectedPointMass), (::boost::python::arg("_pointMass")))
.def("getNumConnectedPointMasses", static_cast<std::size_t (dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getNumConnectedPointMasses))
.def("setColliding", static_cast<void (dart::dynamics::PointMass::*)(bool)>(&dart::dynamics::PointMass::setColliding), (::boost::python::arg("_isColliding")))
.def("isColliding", static_cast<bool (dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::isColliding))
.def("getNumDofs", static_cast<std::size_t (dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getNumDofs))
.def("setPosition", static_cast<void (dart::dynamics::PointMass::*)(std::size_t, double)>(&dart::dynamics::PointMass::setPosition), (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPosition", static_cast<double (dart::dynamics::PointMass::*)(std::size_t) const>(&dart::dynamics::PointMass::getPosition), (::boost::python::arg("_index")))
.def("setPositions", static_cast<void (dart::dynamics::PointMass::*)(const Eigen::Vector3d &)>(&dart::dynamics::PointMass::setPositions), (::boost::python::arg("_positions")))
.def("getPositions", static_cast<const Eigen::Vector3d &(dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getPositions), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("resetPositions", static_cast<void (dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::resetPositions))
.def("setVelocity", static_cast<void (dart::dynamics::PointMass::*)(std::size_t, double)>(&dart::dynamics::PointMass::setVelocity), (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocity", static_cast<double (dart::dynamics::PointMass::*)(std::size_t) const>(&dart::dynamics::PointMass::getVelocity), (::boost::python::arg("_index")))
.def("setVelocities", static_cast<void (dart::dynamics::PointMass::*)(const Eigen::Vector3d &)>(&dart::dynamics::PointMass::setVelocities), (::boost::python::arg("_velocities")))
.def("getVelocities", static_cast<const Eigen::Vector3d &(dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getVelocities), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("resetVelocities", static_cast<void (dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::resetVelocities))
.def("setAcceleration", static_cast<void (dart::dynamics::PointMass::*)(std::size_t, double)>(&dart::dynamics::PointMass::setAcceleration), (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAcceleration", static_cast<double (dart::dynamics::PointMass::*)(std::size_t) const>(&dart::dynamics::PointMass::getAcceleration), (::boost::python::arg("_index")))
.def("setAccelerations", static_cast<void (dart::dynamics::PointMass::*)(const Eigen::Vector3d &)>(&dart::dynamics::PointMass::setAccelerations), (::boost::python::arg("_accelerations")))
.def("getAccelerations", static_cast<const Eigen::Vector3d &(dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getAccelerations), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPartialAccelerations", static_cast<const Eigen::Vector3d &(dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getPartialAccelerations), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("resetAccelerations", static_cast<void (dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::resetAccelerations))
.def("setForce", static_cast<void (dart::dynamics::PointMass::*)(std::size_t, double)>(&dart::dynamics::PointMass::setForce), (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForce", static_cast<double (dart::dynamics::PointMass::*)(std::size_t)>(&dart::dynamics::PointMass::getForce), (::boost::python::arg("_index")))
.def("setForces", static_cast<void (dart::dynamics::PointMass::*)(const Eigen::Vector3d &)>(&dart::dynamics::PointMass::setForces), (::boost::python::arg("_forces")))
.def("getForces", static_cast<const Eigen::Vector3d &(dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getForces), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("resetForces", static_cast<void (dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::resetForces))
.def("setVelocityChange", static_cast<void (dart::dynamics::PointMass::*)(std::size_t, double)>(&dart::dynamics::PointMass::setVelocityChange), (::boost::python::arg("_index"), ::boost::python::arg("_velocityChange")))
.def("getVelocityChange", static_cast<double (dart::dynamics::PointMass::*)(std::size_t)>(&dart::dynamics::PointMass::getVelocityChange), (::boost::python::arg("_index")))
.def("resetVelocityChanges", static_cast<void (dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::resetVelocityChanges))
.def("setConstraintImpulse", static_cast<void (dart::dynamics::PointMass::*)(std::size_t, double)>(&dart::dynamics::PointMass::setConstraintImpulse), (::boost::python::arg("_index"), ::boost::python::arg("_impulse")))
.def("getConstraintImpulse", static_cast<double (dart::dynamics::PointMass::*)(std::size_t)>(&dart::dynamics::PointMass::getConstraintImpulse), (::boost::python::arg("_index")))
.def("resetConstraintImpulses", static_cast<void (dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::resetConstraintImpulses))
.def("integratePositions", static_cast<void (dart::dynamics::PointMass::*)(double)>(&dart::dynamics::PointMass::integratePositions), (::boost::python::arg("_dt")))
.def("integrateVelocities", static_cast<void (dart::dynamics::PointMass::*)(double)>(&dart::dynamics::PointMass::integrateVelocities), (::boost::python::arg("_dt")))
.def("addExtForce", static_cast<void (dart::dynamics::PointMass::*)(const Eigen::Vector3d &, bool)>(&dart::dynamics::PointMass::addExtForce), (::boost::python::arg("_force"), ::boost::python::arg("_isForceLocal") = false))
.def("clearExtForce", static_cast<void (dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::clearExtForce))
.def("setConstraintImpulse", static_cast<void (dart::dynamics::PointMass::*)(const Eigen::Vector3d &, bool)>(&dart::dynamics::PointMass::setConstraintImpulse), (::boost::python::arg("_constImp"), ::boost::python::arg("_isLocal") = false))
.def("addConstraintImpulse", static_cast<void (dart::dynamics::PointMass::*)(const Eigen::Vector3d &, bool)>(&dart::dynamics::PointMass::addConstraintImpulse), (::boost::python::arg("_constImp"), ::boost::python::arg("_isLocal") = false))
.def("clearConstraintImpulse", static_cast<void (dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::clearConstraintImpulse))
.def("getConstraintImpulses", static_cast<Eigen::Vector3d (dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getConstraintImpulses))
.def("setRestingPosition", static_cast<void (dart::dynamics::PointMass::*)(const Eigen::Vector3d &)>(&dart::dynamics::PointMass::setRestingPosition), (::boost::python::arg("_p")))
.def("getRestingPosition", static_cast<const Eigen::Vector3d &(dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getRestingPosition), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalPosition", static_cast<const Eigen::Vector3d &(dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getLocalPosition), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getWorldPosition", static_cast<const Eigen::Vector3d &(dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getWorldPosition), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getBodyJacobian", static_cast<Eigen::Matrix<double, 3, Eigen::Dynamic> (dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::getBodyJacobian))
.def("getWorldJacobian", static_cast<Eigen::Matrix<double, 3, Eigen::Dynamic> (dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::getWorldJacobian))
.def("getBodyVelocityChange", static_cast<const Eigen::Vector3d &(dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getBodyVelocityChange), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getParentSoftBodyNode", static_cast<dart::dynamics::SoftBodyNode *(dart::dynamics::PointMass::*)()>(&dart::dynamics::PointMass::getParentSoftBodyNode), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::SoftBodyNodePtr> >())
.def("getBodyVelocity", static_cast<const Eigen::Vector3d &(dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getBodyVelocity), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getWorldVelocity", static_cast<Eigen::Vector3d (dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getWorldVelocity))
.def("getBodyAcceleration", static_cast<const Eigen::Vector3d &(dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getBodyAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getWorldAcceleration", static_cast<Eigen::Vector3d (dart::dynamics::PointMass::*)() const>(&dart::dynamics::PointMass::getWorldAcceleration))
;
}

/* footer */
