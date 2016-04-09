#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics11SimpleFrameE_docstring[] = R"CHIMERA_STRING( The SimpleFrame class offers a user-friendly way of creating arbitrary
 Frames within the kinematic tree structure of DART. The user is free to
 specify the relative transform, relative velocity, and relative acceleration
 of this Frame.
 While many classes (such as BodyNode and EndEffector) inherit the Frame
 class, they all have restrictions (constraints) on how their properties
 (such as position, velocity, and acceleration) can be modified. Conversely,
 the SimpleFrame class is nothing but a simple abstract Frame whose
 properties can be arbitrarily set and modified by the user.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11SimpleFrame5cloneEPNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Create a new SimpleFrame with the same world transform, velocity, and
 acceleration as this one. _refFrame will be used as the reference Frame
 of the new SimpleFrame.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame4copyERKNS0_5FrameEPS2_b_docstring[] = R"CHIMERA_STRING( Make the world transform, world velocity, and world acceleration of this
 SimpleFrame match another Frame. The _refFrame argument will be the new
 parent Frame of this SimpleFrame. Also copies the Entity Properties if
 _copyProperties is left as true.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame4copyEPKNS0_5FrameEPS2_b_docstring[] = R"CHIMERA_STRING( Same as copy(const Frame
&
)
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame21spawnChildSimpleFrameERKSsRKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Spawn a child SimpleFrame to this SimpleFrame. SimpleFrame doesn't have
 the ownership of the created child SimpleFrame. This means that you are
 responsible for holding onto the returned SimpleFrame. If you neglect to
 store it, it will automatically be destroyed.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame20setRelativeTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Set the relative transform of this SimpleFrame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame22setRelativeTranslationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the relative translation of this SimpleFrame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame19setRelativeRotationERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE_docstring[] = R"CHIMERA_STRING( Set the relative rotation of this SimpleFrame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame12setTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Set the transform of this SimpleFrame so that its transform with respect
 to Frame _withRespectTo is equal to _newTransform. Note that the parent
 Frame of this SimpleFrame will not be changed.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame14setTranslationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Set the translation of this SimpleFrame so that its translation with
 respect to Frame _withRespectTo is equal to _newTranslation. Note that the
 parent Frame of this SimpleFrame will not be changed.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame11setRotationERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Set the rotation of this SimpleFrame so that its rotation with respect
 to Frame _withRespectTo is equal to _newRotation. Note that the parent
 Frame of this SimpleFrame will not be changed.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11SimpleFrame20getRelativeTransformEv_docstring[] = R"CHIMERA_STRING( Get the transform of this Frame with respect to its parent Frame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame26setRelativeSpatialVelocityERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the spatial velocity of this SimpleFrame relative to its parent Frame.
 Must be in the coordinates of THIS Frame.
 This is the most computationally efficient way of setting relative
 velocity.
 Use setClassicDerivatives to set the velocity according to classic
 relative linear and angular velocity values.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame26setRelativeSpatialVelocityERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Set the spatial velocity of this SimpleFrame relative to its parent Frame.
 Specify the coordinate Frame of _newSpatialVelocity.
 Use setClassicDerivatives to set the velocity according to classic
 relative linear and angular velocity values.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11SimpleFrame26getRelativeSpatialVelocityEv_docstring[] = R"CHIMERA_STRING( Get the spatial velocity of this Frame relative to its parent Frame, in
 its own coordinates.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame30setRelativeSpatialAccelerationERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the spatial acceleration of this SimpleFrame relative to its parent
 Frame. Must be in the coordinates of THIS Frame.
 This is the most computationally efficient way of setting relative
 acceleration.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame30setRelativeSpatialAccelerationERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Set the spatial acceleration of this SimpleFrame relative to its parent
 Frame. Specify the coordinate Frame of _newSpatialAcceleration.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11SimpleFrame30getRelativeSpatialAccelerationEv_docstring[] = R"CHIMERA_STRING( Get the spatial acceleration of this Frame relative to its parent Frame,
 in the coordinates of this Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11SimpleFrame30getPrimaryRelativeAccelerationEv_docstring[] = R"CHIMERA_STRING( The Featherstone ABI algorithm exploits a component of the spatial
 acceleration which we refer to as the partial acceleration, accessible
 by getPartialAcceleration(). We save operations during our forward
 kinematics by computing and storing the partial acceleration separately
 from the rest of the Frame's acceleration. getPrimaryRelativeAcceleration()
 will return the portion of the relative spatial acceleration that is not
 contained in the partial acceleration. To get the full spatial
 acceleration of this Frame relative to its parent Frame, use
 getRelativeSpatialAcceleration(). To get the full spatial acceleration
 of this Frame relative to the World Frame, use getSpatialAcceleration().
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11SimpleFrame22getPartialAccelerationEv_docstring[] = R"CHIMERA_STRING( The Featherstone ABI algorithm exploits a component of the spatial
 acceleration which we refer to as the partial acceleration. This function
 returns that component of acceleration.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11SimpleFrame21setClassicDerivativesERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_S6_S6__docstring[] = R"CHIMERA_STRING( Set the relative velocity and acceleration of this Frame according to
 classical (non-spatial) relative velocity and relative acceleration
 vectors. These values must be given with respect to this Frame's parent
 (note: this is unlike setRelativeSpatialVelocity and
 setRelativeSpatialAcceleration which expect values in the Frame's own
 coordinates).
 This method is slightly less computationally efficient than using
 setRelativeSpatialVelocity and setRelativeSpatialAcceleration, but offers
 the most intuitive way of setting relative velocities and relative
 accelerations.
 These values are equivalent to the terms in the Newton-Euler
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics11SimpleFrameE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SimpleFrame, std::shared_ptr<dart::dynamics::SimpleFrame>, ::boost::python::bases<dart::dynamics::Detachable, dart::dynamics::ShapeFrame > >("SimpleFrame", _ZN4dart8dynamics11SimpleFrameE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Frame * _refFrame) -> dart::dynamics::SimpleFrame * { return new dart::dynamics::SimpleFrame(_refFrame); }, ::boost::python::default_call_policies(), (::boost::python::arg("_refFrame"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Frame * _refFrame, const std::string & _name) -> dart::dynamics::SimpleFrame * { return new dart::dynamics::SimpleFrame(_refFrame, _name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_refFrame"), ::boost::python::arg("_name"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Frame * _refFrame, const std::string & _name, const Eigen::Isometry3d & _relativeTransform) -> dart::dynamics::SimpleFrame * { return new dart::dynamics::SimpleFrame(_refFrame, _name, _relativeTransform); }, ::boost::python::default_call_policies(), (::boost::python::arg("_refFrame"), ::boost::python::arg("_name"), ::boost::python::arg("_relativeTransform"))))
.def("clone", [](const dart::dynamics::SimpleFrame *self) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->clone(); }, _ZNK4dart8dynamics11SimpleFrame5cloneEPNS0_5FrameE_docstring)
.def("clone", [](const dart::dynamics::SimpleFrame *self, dart::dynamics::Frame * _refFrame) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->clone(_refFrame); }, _ZNK4dart8dynamics11SimpleFrame5cloneEPNS0_5FrameE_docstring, (::boost::python::arg("_refFrame")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame & _otherFrame) -> void { return self->copy(_otherFrame); }, _ZN4dart8dynamics11SimpleFrame4copyERKNS0_5FrameEPS2_b_docstring, (::boost::python::arg("_otherFrame")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame & _otherFrame, dart::dynamics::Frame * _refFrame) -> void { return self->copy(_otherFrame, _refFrame); }, _ZN4dart8dynamics11SimpleFrame4copyERKNS0_5FrameEPS2_b_docstring, (::boost::python::arg("_otherFrame"), ::boost::python::arg("_refFrame")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame & _otherFrame, dart::dynamics::Frame * _refFrame, bool _copyProperties) -> void { return self->copy(_otherFrame, _refFrame, _copyProperties); }, _ZN4dart8dynamics11SimpleFrame4copyERKNS0_5FrameEPS2_b_docstring, (::boost::python::arg("_otherFrame"), ::boost::python::arg("_refFrame"), ::boost::python::arg("_copyProperties")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame * _otherFrame) -> void { return self->copy(_otherFrame); }, _ZN4dart8dynamics11SimpleFrame4copyEPKNS0_5FrameEPS2_b_docstring, (::boost::python::arg("_otherFrame")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame * _otherFrame, dart::dynamics::Frame * _refFrame) -> void { return self->copy(_otherFrame, _refFrame); }, _ZN4dart8dynamics11SimpleFrame4copyEPKNS0_5FrameEPS2_b_docstring, (::boost::python::arg("_otherFrame"), ::boost::python::arg("_refFrame")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame * _otherFrame, dart::dynamics::Frame * _refFrame, bool _copyProperties) -> void { return self->copy(_otherFrame, _refFrame, _copyProperties); }, _ZN4dart8dynamics11SimpleFrame4copyEPKNS0_5FrameEPS2_b_docstring, (::boost::python::arg("_otherFrame"), ::boost::python::arg("_refFrame"), ::boost::python::arg("_copyProperties")))
.def("spawnChildSimpleFrame", [](dart::dynamics::SimpleFrame *self) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->spawnChildSimpleFrame(); }, _ZN4dart8dynamics11SimpleFrame21spawnChildSimpleFrameERKSsRKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring)
.def("spawnChildSimpleFrame", [](dart::dynamics::SimpleFrame *self, const std::string & name) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->spawnChildSimpleFrame(name); }, _ZN4dart8dynamics11SimpleFrame21spawnChildSimpleFrameERKSsRKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("name")))
.def("spawnChildSimpleFrame", [](dart::dynamics::SimpleFrame *self, const std::string & name, const Eigen::Isometry3d & relativeTransform) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->spawnChildSimpleFrame(name, relativeTransform); }, _ZN4dart8dynamics11SimpleFrame21spawnChildSimpleFrameERKSsRKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("name"), ::boost::python::arg("relativeTransform")))
.def("setRelativeTransform", [](dart::dynamics::SimpleFrame *self, const Eigen::Isometry3d & _newRelTransform) -> void { return self->setRelativeTransform(_newRelTransform); }, _ZN4dart8dynamics11SimpleFrame20setRelativeTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("_newRelTransform")))
.def("setRelativeTranslation", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _newTranslation) -> void { return self->setRelativeTranslation(_newTranslation); }, _ZN4dart8dynamics11SimpleFrame22setRelativeTranslationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_newTranslation")))
.def("setRelativeRotation", [](dart::dynamics::SimpleFrame *self, const Eigen::Matrix3d & _newRotation) -> void { return self->setRelativeRotation(_newRotation); }, _ZN4dart8dynamics11SimpleFrame19setRelativeRotationERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE_docstring, (::boost::python::arg("_newRotation")))
.def("setTransform", [](dart::dynamics::SimpleFrame *self, const Eigen::Isometry3d & _newTransform) -> void { return self->setTransform(_newTransform); }, _ZN4dart8dynamics11SimpleFrame12setTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_newTransform")))
.def("setTransform", [](dart::dynamics::SimpleFrame *self, const Eigen::Isometry3d & _newTransform, const dart::dynamics::Frame * _withRespectTo) -> void { return self->setTransform(_newTransform, _withRespectTo); }, _ZN4dart8dynamics11SimpleFrame12setTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_newTransform"), ::boost::python::arg("_withRespectTo")))
.def("setTranslation", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _newTranslation) -> void { return self->setTranslation(_newTranslation); }, _ZN4dart8dynamics11SimpleFrame14setTranslationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_newTranslation")))
.def("setTranslation", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _newTranslation, const dart::dynamics::Frame * _withRespectTo) -> void { return self->setTranslation(_newTranslation, _withRespectTo); }, _ZN4dart8dynamics11SimpleFrame14setTranslationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_newTranslation"), ::boost::python::arg("_withRespectTo")))
.def("setRotation", [](dart::dynamics::SimpleFrame *self, const Eigen::Matrix3d & _newRotation) -> void { return self->setRotation(_newRotation); }, _ZN4dart8dynamics11SimpleFrame11setRotationERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_newRotation")))
.def("setRotation", [](dart::dynamics::SimpleFrame *self, const Eigen::Matrix3d & _newRotation, const dart::dynamics::Frame * _withRespectTo) -> void { return self->setRotation(_newRotation, _withRespectTo); }, _ZN4dart8dynamics11SimpleFrame11setRotationERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_newRotation"), ::boost::python::arg("_withRespectTo")))
.def("getRelativeTransform", [](const dart::dynamics::SimpleFrame *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11SimpleFrame20getRelativeTransformEv_docstring)
.def("setRelativeSpatialVelocity", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector6d & _newSpatialVelocity) -> void { return self->setRelativeSpatialVelocity(_newSpatialVelocity); }, _ZN4dart8dynamics11SimpleFrame26setRelativeSpatialVelocityERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring, (::boost::python::arg("_newSpatialVelocity")))
.def("setRelativeSpatialVelocity", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector6d & _newSpatialVelocity, const dart::dynamics::Frame * _inCoordinatesOf) -> void { return self->setRelativeSpatialVelocity(_newSpatialVelocity, _inCoordinatesOf); }, _ZN4dart8dynamics11SimpleFrame26setRelativeSpatialVelocityERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_newSpatialVelocity"), ::boost::python::arg("_inCoordinatesOf")))
.def("getRelativeSpatialVelocity", [](const dart::dynamics::SimpleFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11SimpleFrame26getRelativeSpatialVelocityEv_docstring)
.def("setRelativeSpatialAcceleration", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector6d & _newSpatialAcceleration) -> void { return self->setRelativeSpatialAcceleration(_newSpatialAcceleration); }, _ZN4dart8dynamics11SimpleFrame30setRelativeSpatialAccelerationERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring, (::boost::python::arg("_newSpatialAcceleration")))
.def("setRelativeSpatialAcceleration", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector6d & _newSpatialAcceleration, const dart::dynamics::Frame * _inCoordinatesOf) -> void { return self->setRelativeSpatialAcceleration(_newSpatialAcceleration, _inCoordinatesOf); }, _ZN4dart8dynamics11SimpleFrame30setRelativeSpatialAccelerationERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_newSpatialAcceleration"), ::boost::python::arg("_inCoordinatesOf")))
.def("getRelativeSpatialAcceleration", [](const dart::dynamics::SimpleFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11SimpleFrame30getRelativeSpatialAccelerationEv_docstring)
.def("getPrimaryRelativeAcceleration", [](const dart::dynamics::SimpleFrame *self) -> const Eigen::Vector6d & { return self->getPrimaryRelativeAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11SimpleFrame30getPrimaryRelativeAccelerationEv_docstring)
.def("getPartialAcceleration", [](const dart::dynamics::SimpleFrame *self) -> const Eigen::Vector6d & { return self->getPartialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11SimpleFrame22getPartialAccelerationEv_docstring)
.def("setClassicDerivatives", [](dart::dynamics::SimpleFrame *self) -> void { return self->setClassicDerivatives(); }, _ZN4dart8dynamics11SimpleFrame21setClassicDerivativesERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_S6_S6__docstring)
.def("setClassicDerivatives", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _linearVelocity) -> void { return self->setClassicDerivatives(_linearVelocity); }, _ZN4dart8dynamics11SimpleFrame21setClassicDerivativesERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_S6_S6__docstring, (::boost::python::arg("_linearVelocity")))
.def("setClassicDerivatives", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _linearVelocity, const Eigen::Vector3d & _angularVelocity) -> void { return self->setClassicDerivatives(_linearVelocity, _angularVelocity); }, _ZN4dart8dynamics11SimpleFrame21setClassicDerivativesERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_S6_S6__docstring, (::boost::python::arg("_linearVelocity"), ::boost::python::arg("_angularVelocity")))
.def("setClassicDerivatives", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _linearVelocity, const Eigen::Vector3d & _angularVelocity, const Eigen::Vector3d & _linearAcceleration) -> void { return self->setClassicDerivatives(_linearVelocity, _angularVelocity, _linearAcceleration); }, _ZN4dart8dynamics11SimpleFrame21setClassicDerivativesERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_S6_S6__docstring, (::boost::python::arg("_linearVelocity"), ::boost::python::arg("_angularVelocity"), ::boost::python::arg("_linearAcceleration")))
.def("setClassicDerivatives", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _linearVelocity, const Eigen::Vector3d & _angularVelocity, const Eigen::Vector3d & _linearAcceleration, const Eigen::Vector3d & _angularAcceleration) -> void { return self->setClassicDerivatives(_linearVelocity, _angularVelocity, _linearAcceleration, _angularAcceleration); }, _ZN4dart8dynamics11SimpleFrame21setClassicDerivativesERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_S6_S6__docstring, (::boost::python::arg("_linearVelocity"), ::boost::python::arg("_angularVelocity"), ::boost::python::arg("_linearAcceleration"), ::boost::python::arg("_angularAcceleration")))
;
}

/* footer */
