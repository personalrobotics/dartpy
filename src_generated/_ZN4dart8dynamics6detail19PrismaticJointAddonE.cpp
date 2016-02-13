#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail19PrismaticJointAddonE()
{
::boost::python::class_<dart::dynamics::detail::PrismaticJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::PrismaticJointAddon, dart::dynamics::detail::PrismaticJointUniqueProperties, dart::dynamics::PrismaticJoint, &dart::dynamics::detail::JointPropertyUpdate, false> > >("PrismaticJointAddon", boost::python::no_init)
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::PrismaticJointAddon, dart::dynamics::detail::PrismaticJointUniqueProperties, dart::dynamics::PrismaticJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::PropertiesData &>((::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setAxis", static_cast<void (dart::dynamics::detail::PrismaticJointAddon::*)(const Eigen::Vector3d &)>(&dart::dynamics::detail::PrismaticJointAddon::setAxis), (::boost::python::arg("_axis")))
.def("getAxis", static_cast<const Eigen::Vector3d &(dart::dynamics::detail::PrismaticJointAddon::*)() const>(&dart::dynamics::detail::PrismaticJointAddon::getAxis), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
