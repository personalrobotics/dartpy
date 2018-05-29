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

void _ZN4dart8dynamics9FreeJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::FreeJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::GenericJoint<dart::math::SE3Space> > >("FreeJoint", boost::python::no_init)
.def("getFreeJointProperties", [](const dart::dynamics::FreeJoint *self) -> dart::dynamics::FreeJoint::Properties { return self->getFreeJointProperties(); })
.def("getType", [](const dart::dynamics::FreeJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("isCyclic", [](const dart::dynamics::FreeJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, (::boost::python::arg("_index")))
.def("setSpatialMotion", [](dart::dynamics::FreeJoint *self, const Eigen::Isometry3d * newTransform, const dart::dynamics::Frame * withRespectTo, const Eigen::Vector6d * newSpatialVelocity, const dart::dynamics::Frame * velRelativeTo, const dart::dynamics::Frame * velInCoordinatesOf, const Eigen::Vector6d * newSpatialAcceleration, const dart::dynamics::Frame * accRelativeTo, const dart::dynamics::Frame * accInCoordinatesOf) -> void { return self->setSpatialMotion(newTransform, withRespectTo, newSpatialVelocity, velRelativeTo, velInCoordinatesOf, newSpatialAcceleration, accRelativeTo, accInCoordinatesOf); }, (::boost::python::arg("newTransform"), ::boost::python::arg("withRespectTo"), ::boost::python::arg("newSpatialVelocity"), ::boost::python::arg("velRelativeTo"), ::boost::python::arg("velInCoordinatesOf"), ::boost::python::arg("newSpatialAcceleration"), ::boost::python::arg("accRelativeTo"), ::boost::python::arg("accInCoordinatesOf")))
.def("setRelativeTransform", [](dart::dynamics::FreeJoint *self, const Eigen::Isometry3d & newTransform) -> void { return self->setRelativeTransform(newTransform); }, (::boost::python::arg("newTransform")))
.def("setTransform", [](dart::dynamics::FreeJoint *self, const Eigen::Isometry3d & newTransform) -> void { return self->setTransform(newTransform); }, (::boost::python::arg("newTransform")))
.def("setTransform", [](dart::dynamics::FreeJoint *self, const Eigen::Isometry3d & newTransform, const dart::dynamics::Frame * withRespectTo) -> void { return self->setTransform(newTransform, withRespectTo); }, (::boost::python::arg("newTransform"), ::boost::python::arg("withRespectTo")))
.def("setRelativeSpatialVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialVelocity) -> void { return self->setRelativeSpatialVelocity(newSpatialVelocity); }, (::boost::python::arg("newSpatialVelocity")))
.def("setRelativeSpatialVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialVelocity, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setRelativeSpatialVelocity(newSpatialVelocity, inCoordinatesOf); }, (::boost::python::arg("newSpatialVelocity"), ::boost::python::arg("inCoordinatesOf")))
.def("setSpatialVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialVelocity, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setSpatialVelocity(newSpatialVelocity, relativeTo, inCoordinatesOf); }, (::boost::python::arg("newSpatialVelocity"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setLinearVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearVelocity) -> void { return self->setLinearVelocity(newLinearVelocity); }, (::boost::python::arg("newLinearVelocity")))
.def("setLinearVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearVelocity, const dart::dynamics::Frame * relativeTo) -> void { return self->setLinearVelocity(newLinearVelocity, relativeTo); }, (::boost::python::arg("newLinearVelocity"), ::boost::python::arg("relativeTo")))
.def("setLinearVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearVelocity, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setLinearVelocity(newLinearVelocity, relativeTo, inCoordinatesOf); }, (::boost::python::arg("newLinearVelocity"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setAngularVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularVelocity) -> void { return self->setAngularVelocity(newAngularVelocity); }, (::boost::python::arg("newAngularVelocity")))
.def("setAngularVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularVelocity, const dart::dynamics::Frame * relativeTo) -> void { return self->setAngularVelocity(newAngularVelocity, relativeTo); }, (::boost::python::arg("newAngularVelocity"), ::boost::python::arg("relativeTo")))
.def("setAngularVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularVelocity, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setAngularVelocity(newAngularVelocity, relativeTo, inCoordinatesOf); }, (::boost::python::arg("newAngularVelocity"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setRelativeSpatialAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialAcceleration) -> void { return self->setRelativeSpatialAcceleration(newSpatialAcceleration); }, (::boost::python::arg("newSpatialAcceleration")))
.def("setRelativeSpatialAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialAcceleration, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setRelativeSpatialAcceleration(newSpatialAcceleration, inCoordinatesOf); }, (::boost::python::arg("newSpatialAcceleration"), ::boost::python::arg("inCoordinatesOf")))
.def("setSpatialAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialAcceleration, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setSpatialAcceleration(newSpatialAcceleration, relativeTo, inCoordinatesOf); }, (::boost::python::arg("newSpatialAcceleration"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setLinearAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearAcceleration) -> void { return self->setLinearAcceleration(newLinearAcceleration); }, (::boost::python::arg("newLinearAcceleration")))
.def("setLinearAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearAcceleration, const dart::dynamics::Frame * relativeTo) -> void { return self->setLinearAcceleration(newLinearAcceleration, relativeTo); }, (::boost::python::arg("newLinearAcceleration"), ::boost::python::arg("relativeTo")))
.def("setLinearAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearAcceleration, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setLinearAcceleration(newLinearAcceleration, relativeTo, inCoordinatesOf); }, (::boost::python::arg("newLinearAcceleration"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setAngularAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularAcceleration) -> void { return self->setAngularAcceleration(newAngularAcceleration); }, (::boost::python::arg("newAngularAcceleration")))
.def("setAngularAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularAcceleration, const dart::dynamics::Frame * relativeTo) -> void { return self->setAngularAcceleration(newAngularAcceleration, relativeTo); }, (::boost::python::arg("newAngularAcceleration"), ::boost::python::arg("relativeTo")))
.def("setAngularAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularAcceleration, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setAngularAcceleration(newAngularAcceleration, relativeTo, inCoordinatesOf); }, (::boost::python::arg("newAngularAcceleration"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("getRelativeJacobianStatic", [](const dart::dynamics::FreeJoint *self, const Eigen::Vector6d & _positions) -> Eigen::Matrix6d { return self->getRelativeJacobianStatic(_positions); }, (::boost::python::arg("_positions")))
.def("getPositionDifferencesStatic", [](const dart::dynamics::FreeJoint *self, const Eigen::Vector6d & _q2, const Eigen::Vector6d & _q1) -> Eigen::Vector6d { return self->getPositionDifferencesStatic(_q2, _q1); }, (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::FreeJoint::getStaticType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("convertToPositions", [](const Eigen::Isometry3d & _tf) -> Eigen::Vector6d { return dart::dynamics::FreeJoint::convertToPositions(_tf); }, (::boost::python::arg("_tf")))
.def("convertToTransform", [](const Eigen::Vector6d & _positions) -> Eigen::Isometry3d { return dart::dynamics::FreeJoint::convertToTransform(_positions); }, (::boost::python::arg("_positions")))
.def("setTransform", [](dart::dynamics::Joint * joint, const Eigen::Isometry3d & tf) -> void { return dart::dynamics::FreeJoint::setTransform(joint, tf); }, (::boost::python::arg("joint"), ::boost::python::arg("tf")))
.def("setTransform", [](dart::dynamics::Joint * joint, const Eigen::Isometry3d & tf, const dart::dynamics::Frame * withRespectTo) -> void { return dart::dynamics::FreeJoint::setTransform(joint, tf, withRespectTo); }, (::boost::python::arg("joint"), ::boost::python::arg("tf"), ::boost::python::arg("withRespectTo")))
.def("setTransform", [](dart::dynamics::BodyNode * bodyNode, const Eigen::Isometry3d & tf) -> void { return dart::dynamics::FreeJoint::setTransform(bodyNode, tf); }, (::boost::python::arg("bodyNode"), ::boost::python::arg("tf")))
.def("setTransform", [](dart::dynamics::BodyNode * bodyNode, const Eigen::Isometry3d & tf, const dart::dynamics::Frame * withRespectTo) -> void { return dart::dynamics::FreeJoint::setTransform(bodyNode, tf, withRespectTo); }, (::boost::python::arg("bodyNode"), ::boost::python::arg("tf"), ::boost::python::arg("withRespectTo")))
.def("setTransform", [](dart::dynamics::Skeleton * skeleton, const Eigen::Isometry3d & tf) -> void { return dart::dynamics::FreeJoint::setTransform(skeleton, tf); }, (::boost::python::arg("skeleton"), ::boost::python::arg("tf")))
.def("setTransform", [](dart::dynamics::Skeleton * skeleton, const Eigen::Isometry3d & tf, const dart::dynamics::Frame * withRespectTo) -> void { return dart::dynamics::FreeJoint::setTransform(skeleton, tf, withRespectTo); }, (::boost::python::arg("skeleton"), ::boost::python::arg("tf"), ::boost::python::arg("withRespectTo")))
.def("setTransform", [](dart::dynamics::Skeleton * skeleton, const Eigen::Isometry3d & tf, const dart::dynamics::Frame * withRespectTo, bool applyToAllRootBodies) -> void { return dart::dynamics::FreeJoint::setTransform(skeleton, tf, withRespectTo, applyToAllRootBodies); }, (::boost::python::arg("skeleton"), ::boost::python::arg("tf"), ::boost::python::arg("withRespectTo"), ::boost::python::arg("applyToAllRootBodies")))
.staticmethod("convertToPositions")
.staticmethod("convertToTransform")
.staticmethod("getStaticType")
;
}

/* footer */
