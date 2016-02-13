#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail15EulerJointAddonE()
{
::boost::python::class_<dart::dynamics::detail::EulerJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::EulerJointAddon, dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::EulerJoint, &dart::dynamics::detail::JointPropertyUpdate, false> > >("EulerJointAddon", boost::python::no_init)
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::EulerJointAddon, dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::EulerJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::PropertiesData &>((::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setAxisOrder", static_cast<void (dart::dynamics::detail::EulerJointAddon::*)(const dart::dynamics::detail::AxisOrder &)>(&dart::dynamics::detail::EulerJointAddon::setAxisOrder), (::boost::python::arg("value")))
;
}

/* footer */
