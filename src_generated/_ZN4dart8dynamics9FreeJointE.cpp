#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics9FreeJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::FreeJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::MultiDofJoint<6> > >("FreeJoint", boost::python::no_init)
.def("getFreeJointProperties", static_cast<dart::dynamics::FreeJoint::Properties (dart::dynamics::FreeJoint::*)() const>(&dart::dynamics::FreeJoint::getFreeJointProperties))
.def("getType", static_cast<const std::string &(dart::dynamics::FreeJoint::*)() const>(&dart::dynamics::FreeJoint::getType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getStaticType", static_cast<const std::string &(*)()>(&dart::dynamics::FreeJoint::getStaticType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", static_cast<bool (dart::dynamics::FreeJoint::*)(std::size_t) const>(&dart::dynamics::FreeJoint::isCyclic), (::boost::python::arg("_index")))
.def("convertToPositions", static_cast<Eigen::Vector6d (*)(const Eigen::Isometry3d &)>(&dart::dynamics::FreeJoint::convertToPositions), (::boost::python::arg("_tf")))
.def("convertToTransform", static_cast<Eigen::Isometry3d (*)(const Eigen::Vector6d &)>(&dart::dynamics::FreeJoint::convertToTransform), (::boost::python::arg("_positions")))
.def("setTransform", static_cast<void (*)(dart::dynamics::Joint *, const Eigen::Isometry3d &, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setTransform), (::boost::python::arg("joint"), ::boost::python::arg("tf"), ::boost::python::arg("withRespectTo")))
.def("setTransform", static_cast<void (*)(dart::dynamics::BodyNode *, const Eigen::Isometry3d &, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setTransform), (::boost::python::arg("bodyNode"), ::boost::python::arg("tf"), ::boost::python::arg("withRespectTo")))
.def("setTransform", static_cast<void (*)(dart::dynamics::Skeleton *, const Eigen::Isometry3d &, const dart::dynamics::Frame *, bool)>(&dart::dynamics::FreeJoint::setTransform), (::boost::python::arg("skeleton"), ::boost::python::arg("tf"), ::boost::python::arg("withRespectTo"), ::boost::python::arg("applyToAllRootBodies") = true))
.def("setSpatialMotion", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Isometry3d *, const dart::dynamics::Frame *, const Eigen::Vector6d *, const dart::dynamics::Frame *, const dart::dynamics::Frame *, const Eigen::Vector6d *, const dart::dynamics::Frame *, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setSpatialMotion), (::boost::python::arg("newTransform"), ::boost::python::arg("withRespectTo"), ::boost::python::arg("newSpatialVelocity"), ::boost::python::arg("velRelativeTo"), ::boost::python::arg("velInCoordinatesOf"), ::boost::python::arg("newSpatialAcceleration"), ::boost::python::arg("accRelativeTo"), ::boost::python::arg("accInCoordinatesOf")))
.def("setRelativeTransform", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Isometry3d &)>(&dart::dynamics::FreeJoint::setRelativeTransform), (::boost::python::arg("newTransform")))
.def("setTransform", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Isometry3d &, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setTransform), (::boost::python::arg("newTransform"), ::boost::python::arg("withRespectTo")))
.def("setRelativeSpatialVelocity", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Vector6d &)>(&dart::dynamics::FreeJoint::setRelativeSpatialVelocity), (::boost::python::arg("newSpatialVelocity")))
.def("setRelativeSpatialVelocity", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Vector6d &, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setRelativeSpatialVelocity), (::boost::python::arg("newSpatialVelocity"), ::boost::python::arg("inCoordinatesOf")))
.def("setSpatialVelocity", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Vector6d &, const dart::dynamics::Frame *, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setSpatialVelocity), (::boost::python::arg("newSpatialVelocity"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setLinearVelocity", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setLinearVelocity), (::boost::python::arg("newLinearVelocity"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setAngularVelocity", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setAngularVelocity), (::boost::python::arg("newAngularVelocity"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setRelativeSpatialAcceleration", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Vector6d &)>(&dart::dynamics::FreeJoint::setRelativeSpatialAcceleration), (::boost::python::arg("newSpatialAcceleration")))
.def("setRelativeSpatialAcceleration", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Vector6d &, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setRelativeSpatialAcceleration), (::boost::python::arg("newSpatialAcceleration"), ::boost::python::arg("inCoordinatesOf")))
.def("setSpatialAcceleration", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Vector6d &, const dart::dynamics::Frame *, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setSpatialAcceleration), (::boost::python::arg("newSpatialAcceleration"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setLinearAcceleration", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setLinearAcceleration), (::boost::python::arg("newLinearAcceleration"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setAngularAcceleration", static_cast<void (dart::dynamics::FreeJoint::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *, const dart::dynamics::Frame *)>(&dart::dynamics::FreeJoint::setAngularAcceleration), (::boost::python::arg("newAngularAcceleration"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("getLocalJacobianStatic", static_cast<Eigen::Matrix6d (dart::dynamics::FreeJoint::*)(const Eigen::Vector6d &) const>(&dart::dynamics::FreeJoint::getLocalJacobianStatic), (::boost::python::arg("_positions")))
.def("getPositionDifferencesStatic", static_cast<Eigen::Vector6d (dart::dynamics::FreeJoint::*)(const Eigen::Vector6d &, const Eigen::Vector6d &) const>(&dart::dynamics::FreeJoint::getPositionDifferencesStatic), (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.staticmethod("convertToPositions")
.staticmethod("convertToTransform")
.staticmethod("getStaticType")
.staticmethod("setTransform")
;
}

/* footer */
