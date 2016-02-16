#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail19UniversalJointAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::UniversalJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::UniversalJointAddon, dart::dynamics::detail::UniversalJointUniqueProperties, dart::dynamics::UniversalJoint, &dart::dynamics::detail::JointPropertyUpdate, false> > >("UniversalJointAddon", boost::python::no_init)
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::UniversalJointAddon, dart::dynamics::detail::UniversalJointUniqueProperties, dart::dynamics::UniversalJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::PropertiesData &>((::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setAxis1", static_cast<void (dart::dynamics::detail::UniversalJointAddon::*)(const Eigen::Vector3d &)>(&dart::dynamics::detail::UniversalJointAddon::setAxis1), (::boost::python::arg("_axis")))
.def("getAxis1", static_cast<const Eigen::Vector3d &(dart::dynamics::detail::UniversalJointAddon::*)() const>(&dart::dynamics::detail::UniversalJointAddon::getAxis1), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAxis2", static_cast<void (dart::dynamics::detail::UniversalJointAddon::*)(const Eigen::Vector3d &)>(&dart::dynamics::detail::UniversalJointAddon::setAxis2), (::boost::python::arg("_axis")))
.def("getAxis2", static_cast<const Eigen::Vector3d &(dart::dynamics::detail::UniversalJointAddon::*)() const>(&dart::dynamics::detail::UniversalJointAddon::getAxis2), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
