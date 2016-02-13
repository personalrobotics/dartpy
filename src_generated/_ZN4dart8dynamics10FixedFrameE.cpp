#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics10FixedFrameE()
{
::boost::python::class_<dart::dynamics::FixedFrame, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Frame > >("FixedFrame", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::Frame *, const std::string &, const Eigen::Isometry3d &>((::boost::python::arg("_refFrame"), ::boost::python::arg("_name"), ::boost::python::arg("_relativeTransform"))))
.def("getRelativeTransform", static_cast<const Eigen::Isometry3d &(dart::dynamics::FixedFrame::*)() const>(&dart::dynamics::FixedFrame::getRelativeTransform), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeSpatialVelocity", static_cast<const Eigen::Vector6d &(dart::dynamics::FixedFrame::*)() const>(&dart::dynamics::FixedFrame::getRelativeSpatialVelocity), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeSpatialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::FixedFrame::*)() const>(&dart::dynamics::FixedFrame::getRelativeSpatialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPrimaryRelativeAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::FixedFrame::*)() const>(&dart::dynamics::FixedFrame::getPrimaryRelativeAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPartialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::FixedFrame::*)() const>(&dart::dynamics::FixedFrame::getPartialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
