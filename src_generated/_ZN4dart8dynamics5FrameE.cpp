#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics5FrameE()
{
::boost::python::class_<dart::dynamics::Frame, ::boost::noncopyable, dart::dynamics::Frame *, ::boost::python::bases<dart::dynamics::Entity > >("Frame", boost::python::no_init)
.def("World", static_cast<dart::dynamics::Frame *(*)()>(&dart::dynamics::Frame::World), ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getRelativeTransform", static_cast<const Eigen::Isometry3d &(dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getRelativeTransform), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getWorldTransform", static_cast<const Eigen::Isometry3d &(dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getWorldTransform), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getTransform", static_cast<Eigen::Isometry3d (dart::dynamics::Frame::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getTransform), (::boost::python::arg("_withRespectTo")))
.def("getTransform", static_cast<Eigen::Isometry3d (dart::dynamics::Frame::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getTransform), (::boost::python::arg("withRespectTo"), ::boost::python::arg("inCoordinatesOf")))
.def("getRelativeSpatialVelocity", static_cast<const Eigen::Vector6d &(dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getRelativeSpatialVelocity), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getSpatialVelocity", static_cast<const Eigen::Vector6d &(dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getSpatialVelocity), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getSpatialVelocity", static_cast<Eigen::Vector6d (dart::dynamics::Frame::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getSpatialVelocity), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getSpatialVelocity", static_cast<Eigen::Vector6d (dart::dynamics::Frame::*)(const Eigen::Vector3d &) const>(&dart::dynamics::Frame::getSpatialVelocity), (::boost::python::arg("_offset")))
.def("getSpatialVelocity", static_cast<Eigen::Vector6d (dart::dynamics::Frame::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getSpatialVelocity), (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearVelocity", static_cast<Eigen::Vector3d (dart::dynamics::Frame::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getLinearVelocity), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearVelocity", static_cast<Eigen::Vector3d (dart::dynamics::Frame::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getLinearVelocity), (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularVelocity", static_cast<Eigen::Vector3d (dart::dynamics::Frame::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getAngularVelocity), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getRelativeSpatialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getRelativeSpatialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPrimaryRelativeAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getPrimaryRelativeAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPartialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getPartialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getSpatialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getSpatialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getSpatialAcceleration", static_cast<Eigen::Vector6d (dart::dynamics::Frame::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getSpatialAcceleration), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getSpatialAcceleration", static_cast<Eigen::Vector6d (dart::dynamics::Frame::*)(const Eigen::Vector3d &) const>(&dart::dynamics::Frame::getSpatialAcceleration), (::boost::python::arg("_offset")))
.def("getSpatialAcceleration", static_cast<Eigen::Vector6d (dart::dynamics::Frame::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getSpatialAcceleration), (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearAcceleration", static_cast<Eigen::Vector3d (dart::dynamics::Frame::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getLinearAcceleration), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearAcceleration", static_cast<Eigen::Vector3d (dart::dynamics::Frame::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getLinearAcceleration), (::boost::python::arg("_offset"), ::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularAcceleration", static_cast<Eigen::Vector3d (dart::dynamics::Frame::*)(const dart::dynamics::Frame *, const dart::dynamics::Frame *) const>(&dart::dynamics::Frame::getAngularAcceleration), (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getChildEntities", static_cast<const std::set<const dart::dynamics::Entity *> (dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getChildEntities))
.def("getNumChildEntities", static_cast<std::size_t (dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getNumChildEntities))
.def("getChildFrames", static_cast<std::set<const dart::dynamics::Frame *> (dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getChildFrames))
.def("getNumChildFrames", static_cast<std::size_t (dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::getNumChildFrames))
.def("isWorld", static_cast<bool (dart::dynamics::Frame::*)() const>(&dart::dynamics::Frame::isWorld))
.def("draw", static_cast<void (dart::dynamics::Frame::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool, int) const>(&dart::dynamics::Frame::draw), (::boost::python::arg("_ri"), ::boost::python::arg("_color"), ::boost::python::arg("_useDefaultColor") = true, ::boost::python::arg("_depth") = 0))
.def("notifyTransformUpdate", static_cast<void (dart::dynamics::Frame::*)()>(&dart::dynamics::Frame::notifyTransformUpdate))
.def("notifyVelocityUpdate", static_cast<void (dart::dynamics::Frame::*)()>(&dart::dynamics::Frame::notifyVelocityUpdate))
.def("notifyAccelerationUpdate", static_cast<void (dart::dynamics::Frame::*)()>(&dart::dynamics::Frame::notifyAccelerationUpdate))
.staticmethod("World")
;
}

/* footer */
