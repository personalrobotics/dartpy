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

void _ZN4dart8dynamics5FrameE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Frame, ::boost::noncopyable, dart::dynamics::Frame *, ::boost::python::bases<dart::dynamics::Entity > >("Frame", boost::python::no_init)
.def("getRelativeTransform", [](const dart::dynamics::Frame *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getWorldTransform", [](const dart::dynamics::Frame *self) -> const Eigen::Isometry3d & { return self->getWorldTransform(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getTransform", [](const dart::dynamics::Frame *self) -> Eigen::Isometry3d { return self->getTransform(); })
.def("getTransform", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _withRespectTo) -> Eigen::Isometry3d { return self->getTransform(_withRespectTo); }, (::boost::python::arg("_withRespectTo")))
.def("getTransform", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * withRespectTo, const dart::dynamics::Frame * inCoordinatesOf) -> Eigen::Isometry3d { return self->getTransform(withRespectTo, inCoordinatesOf); }, (::boost::python::arg("withRespectTo"), ::boost::python::arg("inCoordinatesOf")))
.def("getRelativeSpatialVelocity", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialVelocity(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getSpatialVelocity", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getSpatialVelocity(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getSpatialVelocity", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getSpatialVelocity(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getSpatialVelocity", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset) -> Eigen::Vector6d { return self->getSpatialVelocity(_offset); }, (::boost::python::arg("_offset")))
.def("getSpatialVelocity", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getSpatialVelocity(_offset, _relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearVelocity", [](const dart::dynamics::Frame *self) -> Eigen::Vector3d { return self->getLinearVelocity(); })
.def("getLinearVelocity", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getLinearVelocity(_relativeTo); }, (::boost::python::arg("_relativeTo")))
.def("getLinearVelocity", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getLinearVelocity(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearVelocity", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset) -> Eigen::Vector3d { return self->getLinearVelocity(_offset); }, (::boost::python::arg("_offset")))
.def("getLinearVelocity", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getLinearVelocity(_offset, _relativeTo); }, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo")))
.def("getLinearVelocity", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getLinearVelocity(_offset, _relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularVelocity", [](const dart::dynamics::Frame *self) -> Eigen::Vector3d { return self->getAngularVelocity(); })
.def("getAngularVelocity", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getAngularVelocity(_relativeTo); }, (::boost::python::arg("_relativeTo")))
.def("getAngularVelocity", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getAngularVelocity(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getRelativeSpatialAcceleration", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialAcceleration(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getPrimaryRelativeAcceleration", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getPrimaryRelativeAcceleration(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getPartialAcceleration", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getPartialAcceleration(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getSpatialAcceleration", [](const dart::dynamics::Frame *self) -> const Eigen::Vector6d & { return self->getSpatialAcceleration(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getSpatialAcceleration", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getSpatialAcceleration(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getSpatialAcceleration", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset) -> Eigen::Vector6d { return self->getSpatialAcceleration(_offset); }, (::boost::python::arg("_offset")))
.def("getSpatialAcceleration", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getSpatialAcceleration(_offset, _relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self) -> Eigen::Vector3d { return self->getLinearAcceleration(); })
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getLinearAcceleration(_relativeTo); }, (::boost::python::arg("_relativeTo")))
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getLinearAcceleration(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset) -> Eigen::Vector3d { return self->getLinearAcceleration(_offset); }, (::boost::python::arg("_offset")))
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getLinearAcceleration(_offset, _relativeTo); }, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo")))
.def("getLinearAcceleration", [](const dart::dynamics::Frame *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getLinearAcceleration(_offset, _relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularAcceleration", [](const dart::dynamics::Frame *self) -> Eigen::Vector3d { return self->getAngularAcceleration(); })
.def("getAngularAcceleration", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getAngularAcceleration(_relativeTo); }, (::boost::python::arg("_relativeTo")))
.def("getAngularAcceleration", [](const dart::dynamics::Frame *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getAngularAcceleration(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getChildEntities", [](dart::dynamics::Frame *self) -> const std::set<dart::dynamics::Entity *> & { return self->getChildEntities(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getChildEntities", [](const dart::dynamics::Frame *self) -> const std::set<const dart::dynamics::Entity *> { return self->getChildEntities(); })
.def("getNumChildEntities", [](const dart::dynamics::Frame *self) -> std::size_t { return self->getNumChildEntities(); })
.def("getChildFrames", [](dart::dynamics::Frame *self) -> const std::set<dart::dynamics::Frame *> & { return self->getChildFrames(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getChildFrames", [](const dart::dynamics::Frame *self) -> std::set<const dart::dynamics::Frame *> { return self->getChildFrames(); })
.def("getNumChildFrames", [](const dart::dynamics::Frame *self) -> std::size_t { return self->getNumChildFrames(); })
.def("isShapeFrame", [](const dart::dynamics::Frame *self) -> bool { return self->isShapeFrame(); })
.def("asShapeFrame", [](dart::dynamics::Frame *self) -> dart::dynamics::ShapeFrame * { return self->asShapeFrame(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("isWorld", [](const dart::dynamics::Frame *self) -> bool { return self->isWorld(); })
.def("dirtyTransform", [](dart::dynamics::Frame *self) -> void { return self->dirtyTransform(); })
.def("dirtyVelocity", [](dart::dynamics::Frame *self) -> void { return self->dirtyVelocity(); })
.def("dirtyAcceleration", [](dart::dynamics::Frame *self) -> void { return self->dirtyAcceleration(); })
.def("World", []() -> dart::dynamics::Frame * { return dart::dynamics::Frame::World(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.staticmethod("World")
;
}

/* footer */
