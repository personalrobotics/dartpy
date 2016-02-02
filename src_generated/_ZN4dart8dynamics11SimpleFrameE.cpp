#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics11SimpleFrameE()
{
::boost::python::class_<dart::dynamics::SimpleFrame, ::boost::python::bases<dart::dynamics::Detachable, dart::dynamics::Frame > >("SimpleFrame", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::Frame *, const std::string &, const Eigen::Isometry3d &>((::boost::python::arg("_refFrame"), ::boost::python::arg("_name"), ::boost::python::arg("_relativeTransform"))))
.def("clone", static_cast<std::shared_ptr<dart::dynamics::SimpleFrame> (dart::dynamics::SimpleFrame::*)(dart::dynamics::Frame *) const>(&dart::dynamics::SimpleFrame::clone), (::boost::python::arg("_refFrame")))
.def("copy", static_cast<void (dart::dynamics::SimpleFrame::*)(const dart::dynamics::Frame &, dart::dynamics::Frame *, bool)>(&dart::dynamics::SimpleFrame::copy), (::boost::python::arg("_otherFrame"), ::boost::python::arg("_refFrame"), ::boost::python::arg("_copyProperties") = true))
.def("copy", static_cast<void (dart::dynamics::SimpleFrame::*)(const dart::dynamics::Frame *, dart::dynamics::Frame *, bool)>(&dart::dynamics::SimpleFrame::copy), (::boost::python::arg("_otherFrame"), ::boost::python::arg("_refFrame"), ::boost::python::arg("_copyProperties") = true))
.def("setRelativeTransform", static_cast<void (dart::dynamics::SimpleFrame::*)(const Eigen::Isometry3d &)>(&dart::dynamics::SimpleFrame::setRelativeTransform), (::boost::python::arg("_newRelTransform")))
.def("setTransform", static_cast<void (dart::dynamics::SimpleFrame::*)(const Eigen::Isometry3d &, const dart::dynamics::Frame *)>(&dart::dynamics::SimpleFrame::setTransform), (::boost::python::arg("_newTransform"), ::boost::python::arg("_withRespectTo")))
.def("getRelativeTransform", static_cast<const Eigen::Isometry3d &(dart::dynamics::SimpleFrame::*)() const>(&dart::dynamics::SimpleFrame::getRelativeTransform), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setRelativeSpatialVelocity", static_cast<void (dart::dynamics::SimpleFrame::*)(const Eigen::Vector6d &)>(&dart::dynamics::SimpleFrame::setRelativeSpatialVelocity), (::boost::python::arg("_newSpatialVelocity")))
.def("setRelativeSpatialVelocity", static_cast<void (dart::dynamics::SimpleFrame::*)(const Eigen::Vector6d &, const dart::dynamics::Frame *)>(&dart::dynamics::SimpleFrame::setRelativeSpatialVelocity), (::boost::python::arg("_newSpatialVelocity"), ::boost::python::arg("_inCoordinatesOf")))
.def("getRelativeSpatialVelocity", static_cast<const Eigen::Vector6d &(dart::dynamics::SimpleFrame::*)() const>(&dart::dynamics::SimpleFrame::getRelativeSpatialVelocity), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setRelativeSpatialAcceleration", static_cast<void (dart::dynamics::SimpleFrame::*)(const Eigen::Vector6d &)>(&dart::dynamics::SimpleFrame::setRelativeSpatialAcceleration), (::boost::python::arg("_newSpatialAcceleration")))
.def("setRelativeSpatialAcceleration", static_cast<void (dart::dynamics::SimpleFrame::*)(const Eigen::Vector6d &, const dart::dynamics::Frame *)>(&dart::dynamics::SimpleFrame::setRelativeSpatialAcceleration), (::boost::python::arg("_newSpatialAcceleration"), ::boost::python::arg("_inCoordinatesOf")))
.def("getRelativeSpatialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::SimpleFrame::*)() const>(&dart::dynamics::SimpleFrame::getRelativeSpatialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPrimaryRelativeAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::SimpleFrame::*)() const>(&dart::dynamics::SimpleFrame::getPrimaryRelativeAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPartialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::SimpleFrame::*)() const>(&dart::dynamics::SimpleFrame::getPartialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setClassicDerivatives", static_cast<void (dart::dynamics::SimpleFrame::*)(const Eigen::Vector3d &, const Eigen::Vector3d &, const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::dynamics::SimpleFrame::setClassicDerivatives), (::boost::python::arg("_linearVelocity"), ::boost::python::arg("_angularVelocity"), ::boost::python::arg("_linearAcceleration"), ::boost::python::arg("_angularAcceleration")))
;
}

/* footer */
