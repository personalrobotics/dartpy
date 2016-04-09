#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics9FreeJointE_docstring[] = R"CHIMERA_STRING( class FreeJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9FreeJoint22getFreeJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this FreeJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9FreeJoint7getTypeEv_docstring[] = R"CHIMERA_STRING( Gets a string representing the joint type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint13getStaticTypeEv_docstring[] = R"CHIMERA_STRING( Get joint type for this class
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9FreeJoint8isCyclicEm_docstring[] = R"CHIMERA_STRING( Get whether a generalized coordinate is cyclic. Return true if and only
 if this generalized coordinate has an infinite number of positions that
 produce the same local transform. Note that, for a multi-DOF joint,
 producing a cycle may require altering the position of this Joint's other
 generalized coordinates.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint18convertToPositionsERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Convert a transform into a 6D vector that can be used to set the positions
 of a FreeJoint. The positions returned by this function will result in a
 relative transform of
 getTransformFromParentBodyNode() * _tf * getTransformFromChildBodyNode().inverse()
 between the parent BodyNode and the child BodyNode frames when applied to
 a FreeJoint.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint18convertToTransformERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( Convert a FreeJoint-style 6D vector into a transform
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint12setTransformEPNS0_5JointERKN5Eigen9TransformIdLi3ELi1ELi0EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( If the given joint is a FreeJoint, then set the transform of the given
 Joint's child BodyNode so that its transform with respect to
 "withRespecTo" is equal to "tf".
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint12setTransformEPNS0_8BodyNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( If the parent Joint of the given BodyNode is a FreeJoint, then set the
 transform of the given BodyNode so that its transform with respect to
 "withRespecTo" is equal to "tf".
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint12setTransformEPNS0_8SkeletonERKN5Eigen9TransformIdLi3ELi1ELi0EEEPKNS0_5FrameEb_docstring[] = R"CHIMERA_STRING( Apply setTransform(bodyNode, tf, withRespecTo) for all the root BodyNodes
 of the given Skeleton. If false is passed in "applyToAllRootBodies", then
 it will be applied to only the default root BodyNode that will be obtained
 by Skeleton::getRootBodyNode().
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint16setSpatialMotionEPKN5Eigen9TransformIdLi3ELi1ELi0EEEPKNS0_5FrameEPKNS2_6MatrixIdLi6ELi1ELi0ELi6ELi1EEES9_S9_SD_S9_S9__docstring[] = R"CHIMERA_STRING( Set the transform, spatial velocity, and spatial acceleration of the child
 BodyNode relative to an arbitrary Frame. The reference frame can be
 arbitrarily specified.
 If you want to set more than one kind of Cartetian coordinates (e.g.,
 transform and spatial velocity) at the same time, you should call
 corresponding setters in a certain order (transform -> velocity ->
 acceleration), If you don't velocity or acceleration can be corrupted by
 transform or velocity. This function calls the corresponding setters in
 the right order so that all the desired Cartetian coordinates are properly
 set.
 Pass nullptr for "newTransform", "newSpatialVelocity", or
 "newSpatialAcceleration" if you don't want to set them.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint20setRelativeTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Set the transform of the child BodyNode relative to the parent BodyNode
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint12setTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Set the transform of the child BodyNode relative to an arbitrary Frame.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint26setRelativeSpatialVelocityERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the spatial velocity of the child BodyNode relative to the parent
 BodyNode.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint26setRelativeSpatialVelocityERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Set the spatial velocity of the child BodyNode relative to the parent
 BodyNode.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint18setSpatialVelocityERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameES9__docstring[] = R"CHIMERA_STRING( Set the spatial velocity of the child BodyNode relative to an arbitrary
 Frame.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint17setLinearVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring[] = R"CHIMERA_STRING( Set the linear portion of classical velocity of the child BodyNode
 relative to an arbitrary Frame.
 Note that the angular portion of claasical velocity of the child
 BodyNode will not be changed after this function called.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint18setAngularVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring[] = R"CHIMERA_STRING( Set the angular portion of classical velocity of the child BodyNode
 relative to an arbitrary Frame.
 Note that the linear portion of claasical velocity of the child
 BodyNode will not be changed after this function called.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint30setRelativeSpatialAccelerationERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the spatial acceleration of the child BodyNode relative to the parent
 BodyNode.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint30setRelativeSpatialAccelerationERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Set the spatial acceleration of the child BodyNode relative to the parent
 BodyNode.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint22setSpatialAccelerationERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameES9__docstring[] = R"CHIMERA_STRING( Set the spatial acceleration of the child BodyNode relative to an
 arbitrary Frame.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint21setLinearAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring[] = R"CHIMERA_STRING( Set the linear portion of classical acceleration of the child BodyNode
 relative to an arbitrary Frame.
 Note that the angular portion of claasical acceleration of the child
 BodyNode will not be changed after this function called.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9FreeJoint22setAngularAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring[] = R"CHIMERA_STRING( Set the angular portion of classical acceleration of the child BodyNode
 relative to an arbitrary Frame.
 Note that the linear portion of claasical acceleration of the child
 BodyNode will not be changed after this function called.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9FreeJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( Fixed-size version of getLocalJacobian()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9FreeJoint28getPositionDifferencesStaticERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES6__docstring[] = R"CHIMERA_STRING( Fixed-size version of getPositionDifferences()
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics9FreeJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::FreeJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::MultiDofJoint<6> > >("FreeJoint", _ZN4dart8dynamics9FreeJointE_docstring, boost::python::no_init)
.def("getFreeJointProperties", [](const dart::dynamics::FreeJoint *self) -> dart::dynamics::FreeJoint::Properties { return self->getFreeJointProperties(); }, _ZNK4dart8dynamics9FreeJoint22getFreeJointPropertiesEv_docstring)
.def("getType", [](const dart::dynamics::FreeJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9FreeJoint7getTypeEv_docstring)
.def("isCyclic", [](const dart::dynamics::FreeJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, _ZNK4dart8dynamics9FreeJoint8isCyclicEm_docstring, (::boost::python::arg("_index")))
.def("setSpatialMotion", [](dart::dynamics::FreeJoint *self, const Eigen::Isometry3d * newTransform, const dart::dynamics::Frame * withRespectTo, const Eigen::Vector6d * newSpatialVelocity, const dart::dynamics::Frame * velRelativeTo, const dart::dynamics::Frame * velInCoordinatesOf, const Eigen::Vector6d * newSpatialAcceleration, const dart::dynamics::Frame * accRelativeTo, const dart::dynamics::Frame * accInCoordinatesOf) -> void { return self->setSpatialMotion(newTransform, withRespectTo, newSpatialVelocity, velRelativeTo, velInCoordinatesOf, newSpatialAcceleration, accRelativeTo, accInCoordinatesOf); }, _ZN4dart8dynamics9FreeJoint16setSpatialMotionEPKN5Eigen9TransformIdLi3ELi1ELi0EEEPKNS0_5FrameEPKNS2_6MatrixIdLi6ELi1ELi0ELi6ELi1EEES9_S9_SD_S9_S9__docstring, (::boost::python::arg("newTransform"), ::boost::python::arg("withRespectTo"), ::boost::python::arg("newSpatialVelocity"), ::boost::python::arg("velRelativeTo"), ::boost::python::arg("velInCoordinatesOf"), ::boost::python::arg("newSpatialAcceleration"), ::boost::python::arg("accRelativeTo"), ::boost::python::arg("accInCoordinatesOf")))
.def("setRelativeTransform", [](dart::dynamics::FreeJoint *self, const Eigen::Isometry3d & newTransform) -> void { return self->setRelativeTransform(newTransform); }, _ZN4dart8dynamics9FreeJoint20setRelativeTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("newTransform")))
.def("setTransform", [](dart::dynamics::FreeJoint *self, const Eigen::Isometry3d & newTransform) -> void { return self->setTransform(newTransform); }, _ZN4dart8dynamics9FreeJoint12setTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEEPKNS0_5FrameE_docstring, (::boost::python::arg("newTransform")))
.def("setTransform", [](dart::dynamics::FreeJoint *self, const Eigen::Isometry3d & newTransform, const dart::dynamics::Frame * withRespectTo) -> void { return self->setTransform(newTransform, withRespectTo); }, _ZN4dart8dynamics9FreeJoint12setTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEEPKNS0_5FrameE_docstring, (::boost::python::arg("newTransform"), ::boost::python::arg("withRespectTo")))
.def("setRelativeSpatialVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialVelocity) -> void { return self->setRelativeSpatialVelocity(newSpatialVelocity); }, _ZN4dart8dynamics9FreeJoint26setRelativeSpatialVelocityERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring, (::boost::python::arg("newSpatialVelocity")))
.def("setRelativeSpatialVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialVelocity, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setRelativeSpatialVelocity(newSpatialVelocity, inCoordinatesOf); }, _ZN4dart8dynamics9FreeJoint26setRelativeSpatialVelocityERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("newSpatialVelocity"), ::boost::python::arg("inCoordinatesOf")))
.def("setSpatialVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialVelocity, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setSpatialVelocity(newSpatialVelocity, relativeTo, inCoordinatesOf); }, _ZN4dart8dynamics9FreeJoint18setSpatialVelocityERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newSpatialVelocity"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setLinearVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearVelocity) -> void { return self->setLinearVelocity(newLinearVelocity); }, _ZN4dart8dynamics9FreeJoint17setLinearVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newLinearVelocity")))
.def("setLinearVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearVelocity, const dart::dynamics::Frame * relativeTo) -> void { return self->setLinearVelocity(newLinearVelocity, relativeTo); }, _ZN4dart8dynamics9FreeJoint17setLinearVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newLinearVelocity"), ::boost::python::arg("relativeTo")))
.def("setLinearVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearVelocity, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setLinearVelocity(newLinearVelocity, relativeTo, inCoordinatesOf); }, _ZN4dart8dynamics9FreeJoint17setLinearVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newLinearVelocity"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setAngularVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularVelocity) -> void { return self->setAngularVelocity(newAngularVelocity); }, _ZN4dart8dynamics9FreeJoint18setAngularVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newAngularVelocity")))
.def("setAngularVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularVelocity, const dart::dynamics::Frame * relativeTo) -> void { return self->setAngularVelocity(newAngularVelocity, relativeTo); }, _ZN4dart8dynamics9FreeJoint18setAngularVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newAngularVelocity"), ::boost::python::arg("relativeTo")))
.def("setAngularVelocity", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularVelocity, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setAngularVelocity(newAngularVelocity, relativeTo, inCoordinatesOf); }, _ZN4dart8dynamics9FreeJoint18setAngularVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newAngularVelocity"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setRelativeSpatialAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialAcceleration) -> void { return self->setRelativeSpatialAcceleration(newSpatialAcceleration); }, _ZN4dart8dynamics9FreeJoint30setRelativeSpatialAccelerationERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring, (::boost::python::arg("newSpatialAcceleration")))
.def("setRelativeSpatialAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialAcceleration, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setRelativeSpatialAcceleration(newSpatialAcceleration, inCoordinatesOf); }, _ZN4dart8dynamics9FreeJoint30setRelativeSpatialAccelerationERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("newSpatialAcceleration"), ::boost::python::arg("inCoordinatesOf")))
.def("setSpatialAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector6d & newSpatialAcceleration, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setSpatialAcceleration(newSpatialAcceleration, relativeTo, inCoordinatesOf); }, _ZN4dart8dynamics9FreeJoint22setSpatialAccelerationERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newSpatialAcceleration"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setLinearAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearAcceleration) -> void { return self->setLinearAcceleration(newLinearAcceleration); }, _ZN4dart8dynamics9FreeJoint21setLinearAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newLinearAcceleration")))
.def("setLinearAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearAcceleration, const dart::dynamics::Frame * relativeTo) -> void { return self->setLinearAcceleration(newLinearAcceleration, relativeTo); }, _ZN4dart8dynamics9FreeJoint21setLinearAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newLinearAcceleration"), ::boost::python::arg("relativeTo")))
.def("setLinearAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newLinearAcceleration, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setLinearAcceleration(newLinearAcceleration, relativeTo, inCoordinatesOf); }, _ZN4dart8dynamics9FreeJoint21setLinearAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newLinearAcceleration"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("setAngularAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularAcceleration) -> void { return self->setAngularAcceleration(newAngularAcceleration); }, _ZN4dart8dynamics9FreeJoint22setAngularAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newAngularAcceleration")))
.def("setAngularAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularAcceleration, const dart::dynamics::Frame * relativeTo) -> void { return self->setAngularAcceleration(newAngularAcceleration, relativeTo); }, _ZN4dart8dynamics9FreeJoint22setAngularAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newAngularAcceleration"), ::boost::python::arg("relativeTo")))
.def("setAngularAcceleration", [](dart::dynamics::FreeJoint *self, const Eigen::Vector3d & newAngularAcceleration, const dart::dynamics::Frame * relativeTo, const dart::dynamics::Frame * inCoordinatesOf) -> void { return self->setAngularAcceleration(newAngularAcceleration, relativeTo, inCoordinatesOf); }, _ZN4dart8dynamics9FreeJoint22setAngularAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameES9__docstring, (::boost::python::arg("newAngularAcceleration"), ::boost::python::arg("relativeTo"), ::boost::python::arg("inCoordinatesOf")))
.def("getLocalJacobianStatic", [](const dart::dynamics::FreeJoint *self, const Eigen::Vector6d & _positions) -> Eigen::Matrix6d { return self->getLocalJacobianStatic(_positions); }, _ZNK4dart8dynamics9FreeJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("getPositionDifferencesStatic", [](const dart::dynamics::FreeJoint *self, const Eigen::Vector6d & _q2, const Eigen::Vector6d & _q1) -> Eigen::Vector6d { return self->getPositionDifferencesStatic(_q2, _q1); }, _ZNK4dart8dynamics9FreeJoint28getPositionDifferencesStaticERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES6__docstring, (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::FreeJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
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
