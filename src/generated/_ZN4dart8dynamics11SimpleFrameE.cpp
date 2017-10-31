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

void _ZN4dart8dynamics11SimpleFrameE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SimpleFrame, std::shared_ptr<dart::dynamics::SimpleFrame>, ::boost::python::bases<dart::dynamics::Detachable, dart::dynamics::ShapeFrame > >("SimpleFrame", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Frame * _refFrame) -> dart::dynamics::SimpleFrame * { return new dart::dynamics::SimpleFrame(_refFrame); }, ::boost::python::default_call_policies(), (::boost::python::arg("_refFrame"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Frame * _refFrame, const std::string & _name) -> dart::dynamics::SimpleFrame * { return new dart::dynamics::SimpleFrame(_refFrame, _name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_refFrame"), ::boost::python::arg("_name"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Frame * _refFrame, const std::string & _name, const Eigen::Isometry3d & _relativeTransform) -> dart::dynamics::SimpleFrame * { return new dart::dynamics::SimpleFrame(_refFrame, _name, _relativeTransform); }, ::boost::python::default_call_policies(), (::boost::python::arg("_refFrame"), ::boost::python::arg("_name"), ::boost::python::arg("_relativeTransform"))))
.def("setName", [](dart::dynamics::SimpleFrame *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("getName", [](const dart::dynamics::SimpleFrame *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("clone", [](const dart::dynamics::SimpleFrame *self) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->clone(); })
.def("clone", [](const dart::dynamics::SimpleFrame *self, dart::dynamics::Frame * _refFrame) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->clone(_refFrame); }, (::boost::python::arg("_refFrame")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame & _otherFrame) -> void { return self->copy(_otherFrame); }, (::boost::python::arg("_otherFrame")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame & _otherFrame, dart::dynamics::Frame * _refFrame) -> void { return self->copy(_otherFrame, _refFrame); }, (::boost::python::arg("_otherFrame"), ::boost::python::arg("_refFrame")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame & _otherFrame, dart::dynamics::Frame * _refFrame, bool _copyProperties) -> void { return self->copy(_otherFrame, _refFrame, _copyProperties); }, (::boost::python::arg("_otherFrame"), ::boost::python::arg("_refFrame"), ::boost::python::arg("_copyProperties")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame * _otherFrame) -> void { return self->copy(_otherFrame); }, (::boost::python::arg("_otherFrame")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame * _otherFrame, dart::dynamics::Frame * _refFrame) -> void { return self->copy(_otherFrame, _refFrame); }, (::boost::python::arg("_otherFrame"), ::boost::python::arg("_refFrame")))
.def("copy", [](dart::dynamics::SimpleFrame *self, const dart::dynamics::Frame * _otherFrame, dart::dynamics::Frame * _refFrame, bool _copyProperties) -> void { return self->copy(_otherFrame, _refFrame, _copyProperties); }, (::boost::python::arg("_otherFrame"), ::boost::python::arg("_refFrame"), ::boost::python::arg("_copyProperties")))
.def("spawnChildSimpleFrame", [](dart::dynamics::SimpleFrame *self) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->spawnChildSimpleFrame(); })
.def("spawnChildSimpleFrame", [](dart::dynamics::SimpleFrame *self, const std::string & name) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->spawnChildSimpleFrame(name); }, (::boost::python::arg("name")))
.def("spawnChildSimpleFrame", [](dart::dynamics::SimpleFrame *self, const std::string & name, const Eigen::Isometry3d & relativeTransform) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->spawnChildSimpleFrame(name, relativeTransform); }, (::boost::python::arg("name"), ::boost::python::arg("relativeTransform")))
.def("setRelativeTransform", [](dart::dynamics::SimpleFrame *self, const Eigen::Isometry3d & _newRelTransform) -> void { return self->setRelativeTransform(_newRelTransform); }, (::boost::python::arg("_newRelTransform")))
.def("setRelativeTranslation", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _newTranslation) -> void { return self->setRelativeTranslation(_newTranslation); }, (::boost::python::arg("_newTranslation")))
.def("setRelativeRotation", [](dart::dynamics::SimpleFrame *self, const Eigen::Matrix3d & _newRotation) -> void { return self->setRelativeRotation(_newRotation); }, (::boost::python::arg("_newRotation")))
.def("setTransform", [](dart::dynamics::SimpleFrame *self, const Eigen::Isometry3d & _newTransform) -> void { return self->setTransform(_newTransform); }, (::boost::python::arg("_newTransform")))
.def("setTransform", [](dart::dynamics::SimpleFrame *self, const Eigen::Isometry3d & _newTransform, const dart::dynamics::Frame * _withRespectTo) -> void { return self->setTransform(_newTransform, _withRespectTo); }, (::boost::python::arg("_newTransform"), ::boost::python::arg("_withRespectTo")))
.def("setTranslation", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _newTranslation) -> void { return self->setTranslation(_newTranslation); }, (::boost::python::arg("_newTranslation")))
.def("setTranslation", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _newTranslation, const dart::dynamics::Frame * _withRespectTo) -> void { return self->setTranslation(_newTranslation, _withRespectTo); }, (::boost::python::arg("_newTranslation"), ::boost::python::arg("_withRespectTo")))
.def("setRotation", [](dart::dynamics::SimpleFrame *self, const Eigen::Matrix3d & _newRotation) -> void { return self->setRotation(_newRotation); }, (::boost::python::arg("_newRotation")))
.def("setRotation", [](dart::dynamics::SimpleFrame *self, const Eigen::Matrix3d & _newRotation, const dart::dynamics::Frame * _withRespectTo) -> void { return self->setRotation(_newRotation, _withRespectTo); }, (::boost::python::arg("_newRotation"), ::boost::python::arg("_withRespectTo")))
.def("getRelativeTransform", [](const dart::dynamics::SimpleFrame *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setRelativeSpatialVelocity", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector6d & _newSpatialVelocity) -> void { return self->setRelativeSpatialVelocity(_newSpatialVelocity); }, (::boost::python::arg("_newSpatialVelocity")))
.def("setRelativeSpatialVelocity", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector6d & _newSpatialVelocity, const dart::dynamics::Frame * _inCoordinatesOf) -> void { return self->setRelativeSpatialVelocity(_newSpatialVelocity, _inCoordinatesOf); }, (::boost::python::arg("_newSpatialVelocity"), ::boost::python::arg("_inCoordinatesOf")))
.def("getRelativeSpatialVelocity", [](const dart::dynamics::SimpleFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setRelativeSpatialAcceleration", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector6d & _newSpatialAcceleration) -> void { return self->setRelativeSpatialAcceleration(_newSpatialAcceleration); }, (::boost::python::arg("_newSpatialAcceleration")))
.def("setRelativeSpatialAcceleration", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector6d & _newSpatialAcceleration, const dart::dynamics::Frame * _inCoordinatesOf) -> void { return self->setRelativeSpatialAcceleration(_newSpatialAcceleration, _inCoordinatesOf); }, (::boost::python::arg("_newSpatialAcceleration"), ::boost::python::arg("_inCoordinatesOf")))
.def("getRelativeSpatialAcceleration", [](const dart::dynamics::SimpleFrame *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPrimaryRelativeAcceleration", [](const dart::dynamics::SimpleFrame *self) -> const Eigen::Vector6d & { return self->getPrimaryRelativeAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPartialAcceleration", [](const dart::dynamics::SimpleFrame *self) -> const Eigen::Vector6d & { return self->getPartialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setClassicDerivatives", [](dart::dynamics::SimpleFrame *self) -> void { return self->setClassicDerivatives(); })
.def("setClassicDerivatives", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _linearVelocity) -> void { return self->setClassicDerivatives(_linearVelocity); }, (::boost::python::arg("_linearVelocity")))
.def("setClassicDerivatives", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _linearVelocity, const Eigen::Vector3d & _angularVelocity) -> void { return self->setClassicDerivatives(_linearVelocity, _angularVelocity); }, (::boost::python::arg("_linearVelocity"), ::boost::python::arg("_angularVelocity")))
.def("setClassicDerivatives", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _linearVelocity, const Eigen::Vector3d & _angularVelocity, const Eigen::Vector3d & _linearAcceleration) -> void { return self->setClassicDerivatives(_linearVelocity, _angularVelocity, _linearAcceleration); }, (::boost::python::arg("_linearVelocity"), ::boost::python::arg("_angularVelocity"), ::boost::python::arg("_linearAcceleration")))
.def("setClassicDerivatives", [](dart::dynamics::SimpleFrame *self, const Eigen::Vector3d & _linearVelocity, const Eigen::Vector3d & _angularVelocity, const Eigen::Vector3d & _linearAcceleration, const Eigen::Vector3d & _angularAcceleration) -> void { return self->setClassicDerivatives(_linearVelocity, _angularVelocity, _linearAcceleration, _angularAcceleration); }, (::boost::python::arg("_linearVelocity"), ::boost::python::arg("_angularVelocity"), ::boost::python::arg("_linearAcceleration"), ::boost::python::arg("_angularAcceleration")))
;
}

/* footer */
