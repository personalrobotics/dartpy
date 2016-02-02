#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics5ShapeE()
{
::boost::python::class_<dart::dynamics::Shape, ::boost::noncopyable, dart::dynamics::Shape *, ::boost::python::bases<dart::common::Subject > >("Shape", boost::python::no_init)
.def("setColor", static_cast<void (dart::dynamics::Shape::*)(const Eigen::Vector3d &)>(&dart::dynamics::Shape::setColor), (::boost::python::arg("_color")))
.def("setColor", static_cast<void (dart::dynamics::Shape::*)(const Eigen::Vector4d &)>(&dart::dynamics::Shape::setColor), (::boost::python::arg("_color")))
.def("setRGB", static_cast<void (dart::dynamics::Shape::*)(const Eigen::Vector3d &)>(&dart::dynamics::Shape::setRGB), (::boost::python::arg("_rgb")))
.def("setRGBA", static_cast<void (dart::dynamics::Shape::*)(const Eigen::Vector4d &)>(&dart::dynamics::Shape::setRGBA), (::boost::python::arg("_rgba")))
.def("getColor", static_cast<Eigen::Vector3d (dart::dynamics::Shape::*)() const>(&dart::dynamics::Shape::getColor))
.def("getRGB", static_cast<Eigen::Vector3d (dart::dynamics::Shape::*)() const>(&dart::dynamics::Shape::getRGB))
.def("getRGBA", static_cast<const Eigen::Vector4d &(dart::dynamics::Shape::*)() const>(&dart::dynamics::Shape::getRGBA), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAlpha", static_cast<void (dart::dynamics::Shape::*)(double)>(&dart::dynamics::Shape::setAlpha), (::boost::python::arg("_alpha")))
.def("getBoundingBoxDim", static_cast<Eigen::Vector3d (dart::dynamics::Shape::*)() const>(&dart::dynamics::Shape::getBoundingBoxDim))
.def("setLocalTransform", static_cast<void (dart::dynamics::Shape::*)(const Eigen::Isometry3d &)>(&dart::dynamics::Shape::setLocalTransform), (::boost::python::arg("_Transform")))
.def("getLocalTransform", static_cast<const Eigen::Isometry3d &(dart::dynamics::Shape::*)() const>(&dart::dynamics::Shape::getLocalTransform), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setOffset", static_cast<void (dart::dynamics::Shape::*)(const Eigen::Vector3d &)>(&dart::dynamics::Shape::setOffset), (::boost::python::arg("_offset")))
.def("getOffset", static_cast<Eigen::Vector3d (dart::dynamics::Shape::*)() const>(&dart::dynamics::Shape::getOffset))
.def("computeInertia", static_cast<Eigen::Matrix3d (dart::dynamics::Shape::*)(double) const>(&dart::dynamics::Shape::computeInertia), (::boost::python::arg("mass")))
.def("computeInertiaFromDensity", static_cast<Eigen::Matrix3d (dart::dynamics::Shape::*)(double) const>(&dart::dynamics::Shape::computeInertiaFromDensity), (::boost::python::arg("density")))
.def("computeInertiaFromMass", static_cast<Eigen::Matrix3d (dart::dynamics::Shape::*)(double) const>(&dart::dynamics::Shape::computeInertiaFromMass), (::boost::python::arg("density")))
.def("getVolume", static_cast<double (dart::dynamics::Shape::*)() const>(&dart::dynamics::Shape::getVolume))
.def("getID", static_cast<int (dart::dynamics::Shape::*)() const>(&dart::dynamics::Shape::getID))
.def("getShapeType", static_cast<dart::dynamics::Shape::ShapeType (dart::dynamics::Shape::*)() const>(&dart::dynamics::Shape::getShapeType))
.def("setDataVariance", static_cast<void (dart::dynamics::Shape::*)(unsigned int)>(&dart::dynamics::Shape::setDataVariance), (::boost::python::arg("_variance")))
.def("addDataVariance", static_cast<void (dart::dynamics::Shape::*)(unsigned int)>(&dart::dynamics::Shape::addDataVariance), (::boost::python::arg("_variance")))
.def("removeDataVariance", static_cast<void (dart::dynamics::Shape::*)(unsigned int)>(&dart::dynamics::Shape::removeDataVariance), (::boost::python::arg("_variance")))
.def("getDataVariance", static_cast<unsigned int (dart::dynamics::Shape::*)() const>(&dart::dynamics::Shape::getDataVariance))
.def("checkDataVariance", static_cast<bool (dart::dynamics::Shape::*)(dart::dynamics::Shape::DataVariance) const>(&dart::dynamics::Shape::checkDataVariance), (::boost::python::arg("type")))
.def("refreshData", static_cast<void (dart::dynamics::Shape::*)()>(&dart::dynamics::Shape::refreshData))
.def("draw", static_cast<void (dart::dynamics::Shape::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool) const>(&dart::dynamics::Shape::draw), (::boost::python::arg("_ri"), ::boost::python::arg("_color"), ::boost::python::arg("_useDefaultColor") = true))
.def("setHidden", static_cast<void (dart::dynamics::Shape::*)(bool)>(&dart::dynamics::Shape::setHidden), (::boost::python::arg("_hide") = true))
.def("isHidden", static_cast<bool (dart::dynamics::Shape::*)() const>(&dart::dynamics::Shape::isHidden))
;
}

/* footer */
