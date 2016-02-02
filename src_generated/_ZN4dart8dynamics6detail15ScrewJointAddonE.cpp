#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail15ScrewJointAddonE()
{
::boost::python::class_<dart::dynamics::detail::ScrewJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false> > >("ScrewJointAddon", boost::python::no_init)
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::PropertiesData &>((::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setAxis", static_cast<void (dart::dynamics::detail::ScrewJointAddon::*)(const Eigen::Vector3d &)>(&dart::dynamics::detail::ScrewJointAddon::setAxis), (::boost::python::arg("_axis")))
.def("getAxis", static_cast<const Eigen::Vector3d &(dart::dynamics::detail::ScrewJointAddon::*)() const>(&dart::dynamics::detail::ScrewJointAddon::getAxis), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPitch", static_cast<void (dart::dynamics::detail::ScrewJointAddon::*)(const double &)>(&dart::dynamics::detail::ScrewJointAddon::setPitch), (::boost::python::arg("value")))
.def("getPitch", static_cast<const double &(dart::dynamics::detail::ScrewJointAddon::*)() const>(&dart::dynamics::detail::ScrewJointAddon::getPitch), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
