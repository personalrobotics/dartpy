#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail16PlanarJointAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::PlanarJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::PlanarJointAddon, dart::dynamics::detail::PlanarJointUniqueProperties, dart::dynamics::PlanarJoint, &dart::dynamics::detail::JointPropertyUpdate, false> > >("PlanarJointAddon", boost::python::no_init)
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::PlanarJointAddon, dart::dynamics::detail::PlanarJointUniqueProperties, dart::dynamics::PlanarJoint, &dart::dynamics::detail::JointPropertyUpdate, false>::PropertiesData &>((::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setXYPlane", static_cast<void (dart::dynamics::detail::PlanarJointAddon::*)()>(&dart::dynamics::detail::PlanarJointAddon::setXYPlane))
.def("setYZPlane", static_cast<void (dart::dynamics::detail::PlanarJointAddon::*)()>(&dart::dynamics::detail::PlanarJointAddon::setYZPlane))
.def("setZXPlane", static_cast<void (dart::dynamics::detail::PlanarJointAddon::*)()>(&dart::dynamics::detail::PlanarJointAddon::setZXPlane))
.def("setArbitraryPlane", static_cast<void (dart::dynamics::detail::PlanarJointAddon::*)(const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::dynamics::detail::PlanarJointAddon::setArbitraryPlane), (::boost::python::arg("_axis1"), ::boost::python::arg("_axis2")))
.def("getTransAxis1", static_cast<const Eigen::Vector3d &(dart::dynamics::detail::PlanarJointAddon::*)() const>(&dart::dynamics::detail::PlanarJointAddon::getTransAxis1), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getTransAxis2", static_cast<const Eigen::Vector3d &(dart::dynamics::detail::PlanarJointAddon::*)() const>(&dart::dynamics::detail::PlanarJointAddon::getTransAxis2), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRotAxis", static_cast<const Eigen::Vector3d &(dart::dynamics::detail::PlanarJointAddon::*)() const>(&dart::dynamics::detail::PlanarJointAddon::getRotAxis), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
