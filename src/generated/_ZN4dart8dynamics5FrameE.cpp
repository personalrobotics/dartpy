#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics5FrameE_docstring[] = R"CHIMERA_STRING( The Frame class serves as the backbone of DART's kinematic tree structure.
 Frame inherits Entity, so it exists within a reference Frame. This class
 keeps track of both its local (relative) and global (world) transforms,
 velocities, and accelerations. It also notifies every child Entity when
 a transform, velocity, or acceleration has changed locally or globally.
 Entity class is inherited by using virtual inheritence to solve the
 so-called "diamond problem". Because of that, the Entity's constructor will
 be called directly by the most derived class's constructor.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame20getRelativeTransformEv_docstring[] = R"CHIMERA_STRING( Get the transform of this Frame with respect to its parent Frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame17getWorldTransformEv_docstring[] = R"CHIMERA_STRING( Get the transform of this Frame with respect to the World Frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame12getTransformEPKS1__docstring[] = R"CHIMERA_STRING( Get the transform of this Frame with respect to some other Frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame12getTransformEPKS1_S3__docstring[] = R"CHIMERA_STRING( Get the transform of this Frame with respect to some other Frame. It can
 be expressed in the coordinates of any Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame26getRelativeSpatialVelocityEv_docstring[] = R"CHIMERA_STRING( Get the spatial velocity of this Frame relative to its parent Frame, in
 its own coordinates.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame18getSpatialVelocityEv_docstring[] = R"CHIMERA_STRING( Get the total spatial velocity of this Frame in the coordinates of this
 Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame18getSpatialVelocityEPKS1_S3__docstring[] = R"CHIMERA_STRING( Get the spatial velocity of this Frame relative to some other Frame. It
 can be expressed in the coordinates of any Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame18getSpatialVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Get the spatial velocity of a fixed point in this Frame. The velocity is
 in coordinates of this Frame and is relative to the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame18getSpatialVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKS1_S8__docstring[] = R"CHIMERA_STRING( Get the spatial velocity of a fixed point in this Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame17getLinearVelocityEPKS1_S3__docstring[] = R"CHIMERA_STRING( Get the linear portion of classical velocity of this Frame relative to
 some other Frame. It can be expressed in the coordinates of any Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame17getLinearVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKS1_S8__docstring[] = R"CHIMERA_STRING( Get the linear velocity of a point that is fixed in this Frame. You can
 specify a relative Frame, and it can be expressed in the coordinates of
 any Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame18getAngularVelocityEPKS1_S3__docstring[] = R"CHIMERA_STRING( Get the angular portion of classical velocity of this Frame relative to
 some other Frame. It can be expressed in the coordinates of any Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame30getRelativeSpatialAccelerationEv_docstring[] = R"CHIMERA_STRING( Get the spatial acceleration of this Frame relative to its parent Frame,
 in the coordinates of this Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame30getPrimaryRelativeAccelerationEv_docstring[] = R"CHIMERA_STRING( The Featherstone ABI algorithm exploits a component of the spatial
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

constexpr char _ZNK4dart8dynamics5Frame22getPartialAccelerationEv_docstring[] = R"CHIMERA_STRING( The Featherstone ABI algorithm exploits a component of the spatial
 acceleration which we refer to as the partial acceleration. This function
 returns that component of acceleration.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame22getSpatialAccelerationEv_docstring[] = R"CHIMERA_STRING( Get the total spatial acceleration of this Frame in the coordinates of
 this Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame22getSpatialAccelerationEPKS1_S3__docstring[] = R"CHIMERA_STRING( Get the spatial acceleration of this Frame relative to some other Frame.
 It can be expressed in the coordinates of any Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame22getSpatialAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Get the spatial acceleration of a fixed point in this Frame. The
 acceleration is in coordinates of this Frame and is relative to the World
 Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame22getSpatialAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKS1_S8__docstring[] = R"CHIMERA_STRING( Get the spatial acceleration of a fixed point in this Frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame21getLinearAccelerationEPKS1_S3__docstring[] = R"CHIMERA_STRING( Get the linear portion of classical acceleration of this Frame relative to
 some other Frame. It can be expressed in the coordinates of any Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame22getAngularAccelerationEPKS1_S3__docstring[] = R"CHIMERA_STRING( Get the angular portion of classical acceleration of this Frame relative
 to some other Frame. It can be expressed in the coordinates of any Frame.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Frame16getChildEntitiesEv_docstring[] = R"CHIMERA_STRING( Get a container with the Entities that are children of this Frame.
 std::set is used because Entities may be arbitrarily added and removed
 from a parent Frame, and each entry should be unique. std::set makes this
 procedure easier.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame16getChildEntitiesEv_docstring[] = R"CHIMERA_STRING( Get a container with the Entities that are children of this Frame. Note
 that this is version is slightly less efficient than the non-const version
 because it needs to rebuild a set where each pointer is converted to be a
 const pointer.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame19getNumChildEntitiesEv_docstring[] = R"CHIMERA_STRING( Get the number of Entities that are currently children of this Frame.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Frame14getChildFramesEv_docstring[] = R"CHIMERA_STRING( Get a container with the Frames that are children of this Frame.
 std::set is used because Frames may be arbitrarily added and removed
 from a parent Frame, and each entry should be unique.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame14getChildFramesEv_docstring[] = R"CHIMERA_STRING( Get a container with the Frames that are children of this Frame. Note
 that this version is less efficient than the non-const version because
 it needs to rebuild a set so that the entries are const.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame17getNumChildFramesEv_docstring[] = R"CHIMERA_STRING( Get the number of Frames that are currently children of this Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame12isShapeFrameEv_docstring[] = R"CHIMERA_STRING( Returns true if this Frame is a ShapeFrame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Frame12asShapeFrameEv_docstring[] = R"CHIMERA_STRING( Convert 'this' into a ShapeFrame pointer if Frame is a ShapeFrame,
 otherwise return nullptr
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics5Frame7isWorldEv_docstring[] = R"CHIMERA_STRING( Returns true if this Frame is the World Frame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Frame21notifyTransformUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Frame and all its children that its pose has changed
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Frame20notifyVelocityUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Frame and all its children that its velocity has changed
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Frame24notifyAccelerationUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Frame and all its children that its acceleration has changed
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics5FrameE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Frame, ::boost::noncopyable, dart::dynamics::Frame *, ::boost::python::bases<dart::dynamics::Entity > >("Frame", _ZN4dart8dynamics5FrameE_docstring, boost::python::no_init)
.def("getRelativeTransform", [](const dart::dynamics::Frame *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Frame20getRelativeTransformEv_docstring)
.def("getWorldTransform", [](const dart::dynamics::Frame *self) -> const Eigen::Isometry3d & { return self->getWorldTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Frame17getWorldTransformEv_docstring)
.def("getTransform", [](const dart::dynamics::Frame *self) -> Eigen::Isometry3d { return self->getTransform(); }, _ZNK4dart8dynamics5Frame12getTransformEPKS1__docstring)
.def("getTransform", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _withRespectTo) -> Eigen::Isometry3d { return self->getTransform(_withRespectTo); }, _ZNK4dart8dynamics5Frame12getTransformEPKS1__docstring, (::boost::python::arg("_withRespectTo")))
.def("getTransform", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * withRespectTo, const dart::dynamics::Frame * inCoordinatesOf) -> Eigen::Isometry3d { return self->getTransform(withRespectTo, inCoordinatesOf); }, _ZNK4dart8dynamics5Frame12getTransformEPKS1_S3__docstring, (::boost::python::arg("withRespectTo"), ::boost::python::arg("inCoordinatesOf")))
.def("getRelativeSpatialVelocity", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Frame26getRelativeSpatialVelocityEv_docstring)
.def("getSpatialVelocity", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getSpatialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Frame18getSpatialVelocityEv_docstring)
.def("getSpatialVelocity", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getSpatialVelocity(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics5Frame18getSpatialVelocityEPKS1_S3__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getSpatialVelocity", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset) -> Eigen::Vector6d { return self->getSpatialVelocity(_offset); }, _ZNK4dart8dynamics5Frame18getSpatialVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_offset")))
.def("getSpatialVelocity", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getSpatialVelocity(_offset, _relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics5Frame18getSpatialVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKS1_S8__docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearVelocity", [](const dart::dynamics::Frame *self) -> Eigen::Vector3d { return self->getLinearVelocity(); }, _ZNK4dart8dynamics5Frame17getLinearVelocityEPKS1_S3__docstring)
.def("getLinearVelocity", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getLinearVelocity(_relativeTo); }, _ZNK4dart8dynamics5Frame17getLinearVelocityEPKS1_S3__docstring, (::boost::python::arg("_relativeTo")))
.def("getLinearVelocity", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getLinearVelocity(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics5Frame17getLinearVelocityEPKS1_S3__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearVelocity", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset) -> Eigen::Vector3d { return self->getLinearVelocity(_offset); }, _ZNK4dart8dynamics5Frame17getLinearVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKS1_S8__docstring, (::boost::python::arg("_offset")))
.def("getLinearVelocity", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getLinearVelocity(_offset, _relativeTo); }, _ZNK4dart8dynamics5Frame17getLinearVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKS1_S8__docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo")))
.def("getLinearVelocity", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getLinearVelocity(_offset, _relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics5Frame17getLinearVelocityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKS1_S8__docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularVelocity", [](const dart::dynamics::Frame *self) -> Eigen::Vector3d { return self->getAngularVelocity(); }, _ZNK4dart8dynamics5Frame18getAngularVelocityEPKS1_S3__docstring)
.def("getAngularVelocity", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getAngularVelocity(_relativeTo); }, _ZNK4dart8dynamics5Frame18getAngularVelocityEPKS1_S3__docstring, (::boost::python::arg("_relativeTo")))
.def("getAngularVelocity", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getAngularVelocity(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics5Frame18getAngularVelocityEPKS1_S3__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getRelativeSpatialAcceleration", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Frame30getRelativeSpatialAccelerationEv_docstring)
.def("getPrimaryRelativeAcceleration", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getPrimaryRelativeAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Frame30getPrimaryRelativeAccelerationEv_docstring)
.def("getPartialAcceleration", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getPartialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Frame22getPartialAccelerationEv_docstring)
.def("getSpatialAcceleration", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getSpatialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics5Frame22getSpatialAccelerationEv_docstring)
.def("getSpatialAcceleration", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getSpatialAcceleration(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics5Frame22getSpatialAccelerationEPKS1_S3__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getSpatialAcceleration", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset) -> Eigen::Vector6d { return self->getSpatialAcceleration(_offset); }, _ZNK4dart8dynamics5Frame22getSpatialAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_offset")))
.def("getSpatialAcceleration", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getSpatialAcceleration(_offset, _relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics5Frame22getSpatialAccelerationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKS1_S8__docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self) -> Eigen::Vector3d { return self->getLinearAcceleration(); }, _ZNK4dart8dynamics5Frame21getLinearAccelerationEPKS1_S3__docstring)
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getLinearAcceleration(_relativeTo); }, _ZNK4dart8dynamics5Frame21getLinearAccelerationEPKS1_S3__docstring, (::boost::python::arg("_relativeTo")))
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getLinearAcceleration(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics5Frame21getLinearAccelerationEPKS1_S3__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset) -> Eigen::Vector3d { return self->getLinearAcceleration(_offset); }, (::boost::python::arg("_offset")))
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getLinearAcceleration(_offset, _relativeTo); }, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo")))
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getLinearAcceleration(_offset, _relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularAcceleration", [](const dart::dynamics::Frame *self) -> Eigen::Vector3d { return self->getAngularAcceleration(); }, _ZNK4dart8dynamics5Frame22getAngularAccelerationEPKS1_S3__docstring)
.def("getAngularAcceleration", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getAngularAcceleration(_relativeTo); }, _ZNK4dart8dynamics5Frame22getAngularAccelerationEPKS1_S3__docstring, (::boost::python::arg("_relativeTo")))
.def("getAngularAcceleration", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getAngularAcceleration(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics5Frame22getAngularAccelerationEPKS1_S3__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getChildEntities", [](dart::dynamics::Frame *self) -> const std::set<dart::dynamics::Entity *> & { return self->getChildEntities(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics5Frame16getChildEntitiesEv_docstring)
.def("getChildEntities", [](const dart::dynamics::Frame *self) -> const std::set<const dart::dynamics::Entity *> { return self->getChildEntities(); }, _ZNK4dart8dynamics5Frame16getChildEntitiesEv_docstring)
.def("getNumChildEntities", [](const dart::dynamics::Frame *self) -> std::size_t { return self->getNumChildEntities(); }, _ZNK4dart8dynamics5Frame19getNumChildEntitiesEv_docstring)
.def("getChildFrames", [](dart::dynamics::Frame *self) -> const std::set<dart::dynamics::Frame *> & { return self->getChildFrames(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics5Frame14getChildFramesEv_docstring)
.def("getChildFrames", [](const dart::dynamics::Frame *self) -> std::set<const dart::dynamics::Frame *> { return self->getChildFrames(); }, _ZNK4dart8dynamics5Frame14getChildFramesEv_docstring)
.def("getNumChildFrames", [](const dart::dynamics::Frame *self) -> std::size_t { return self->getNumChildFrames(); }, _ZNK4dart8dynamics5Frame17getNumChildFramesEv_docstring)
.def("isShapeFrame", [](const dart::dynamics::Frame *self) -> bool { return self->isShapeFrame(); }, _ZNK4dart8dynamics5Frame12isShapeFrameEv_docstring)
.def("asShapeFrame", [](dart::dynamics::Frame *self) -> dart::dynamics::ShapeFrame * { return self->asShapeFrame(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics5Frame12asShapeFrameEv_docstring)
.def("isWorld", [](const dart::dynamics::Frame *self) -> bool { return self->isWorld(); }, _ZNK4dart8dynamics5Frame7isWorldEv_docstring)
.def("notifyTransformUpdate", [](dart::dynamics::Frame *self) -> void { return self->notifyTransformUpdate(); }, _ZN4dart8dynamics5Frame21notifyTransformUpdateEv_docstring)
.def("notifyVelocityUpdate", [](dart::dynamics::Frame *self) -> void { return self->notifyVelocityUpdate(); }, _ZN4dart8dynamics5Frame20notifyVelocityUpdateEv_docstring)
.def("notifyAccelerationUpdate", [](dart::dynamics::Frame *self) -> void { return self->notifyAccelerationUpdate(); }, _ZN4dart8dynamics5Frame24notifyAccelerationUpdateEv_docstring)
.def("World", []() -> dart::dynamics::Frame * { return dart::dynamics::Frame::World(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.staticmethod("World")
;
}

/* footer */
