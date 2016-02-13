#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail18RevoluteJointAddonE()
{
::boost::python::class_<dart::dynamics::detail::RevoluteJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false> > >("RevoluteJointAddon", boost::python::no_init)
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::PropertiesData &>((::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setAxis", static_cast<void (dart::dynamics::detail::RevoluteJointAddon::*)(const Eigen::Vector3d &)>(&dart::dynamics::detail::RevoluteJointAddon::setAxis), (::boost::python::arg("_axis")))
.def("getAxis", static_cast<const Eigen::Vector3d &(dart::dynamics::detail::RevoluteJointAddon::*)() const>(&dart::dynamics::detail::RevoluteJointAddon::getAxis), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
