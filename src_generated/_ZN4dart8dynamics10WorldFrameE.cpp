#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics10WorldFrameE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::WorldFrame, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Frame > >("WorldFrame", boost::python::no_init)
.def("getRelativeTransform", static_cast<const Eigen::Isometry3d &(dart::dynamics::WorldFrame::*)() const>(&dart::dynamics::WorldFrame::getRelativeTransform), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeSpatialVelocity", static_cast<const Eigen::Vector6d &(dart::dynamics::WorldFrame::*)() const>(&dart::dynamics::WorldFrame::getRelativeSpatialVelocity), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeSpatialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::WorldFrame::*)() const>(&dart::dynamics::WorldFrame::getRelativeSpatialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPrimaryRelativeAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::WorldFrame::*)() const>(&dart::dynamics::WorldFrame::getPrimaryRelativeAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPartialAcceleration", static_cast<const Eigen::Vector6d &(dart::dynamics::WorldFrame::*)() const>(&dart::dynamics::WorldFrame::getPartialAcceleration), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
