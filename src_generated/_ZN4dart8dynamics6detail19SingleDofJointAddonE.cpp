#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail19SingleDofJointAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::SingleDofJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false> > >("SingleDofJointAddon", boost::python::no_init)
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedPropertiesInSkeleton<dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp, false>::PropertiesData &>((::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setPositionLowerLimit", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setPositionLowerLimit), (::boost::python::arg("value")))
.def("getPositionLowerLimit", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getPositionLowerLimit), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPositionUpperLimit", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setPositionUpperLimit), (::boost::python::arg("value")))
.def("getPositionUpperLimit", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getPositionUpperLimit), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setInitialPosition", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setInitialPosition), (::boost::python::arg("value")))
.def("getInitialPosition", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getInitialPosition), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setVelocityLowerLimit", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setVelocityLowerLimit), (::boost::python::arg("value")))
.def("getVelocityLowerLimit", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getVelocityLowerLimit), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setVelocityUpperLimit", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setVelocityUpperLimit), (::boost::python::arg("value")))
.def("getVelocityUpperLimit", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getVelocityUpperLimit), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setInitialVelocity", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setInitialVelocity), (::boost::python::arg("value")))
.def("getInitialVelocity", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getInitialVelocity), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAccelerationLowerLimit", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setAccelerationLowerLimit), (::boost::python::arg("value")))
.def("getAccelerationLowerLimit", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getAccelerationLowerLimit), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAccelerationUpperLimit", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setAccelerationUpperLimit), (::boost::python::arg("value")))
.def("getAccelerationUpperLimit", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getAccelerationUpperLimit), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setForceLowerLimit", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setForceLowerLimit), (::boost::python::arg("value")))
.def("getForceLowerLimit", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getForceLowerLimit), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setForceUpperLimit", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setForceUpperLimit), (::boost::python::arg("value")))
.def("getForceUpperLimit", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getForceUpperLimit), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setSpringStiffness", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setSpringStiffness), (::boost::python::arg("value")))
.def("getSpringStiffness", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getSpringStiffness), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setRestPosition", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setRestPosition), (::boost::python::arg("value")))
.def("getRestPosition", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getRestPosition), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setDampingCoefficient", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setDampingCoefficient), (::boost::python::arg("value")))
.def("getDampingCoefficient", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getDampingCoefficient), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setFriction", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const double &)>(&dart::dynamics::detail::SingleDofJointAddon::setFriction), (::boost::python::arg("value")))
.def("getFriction", static_cast<const double &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getFriction), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPreserveDofName", static_cast<void (dart::dynamics::detail::SingleDofJointAddon::*)(const bool &)>(&dart::dynamics::detail::SingleDofJointAddon::setPreserveDofName), (::boost::python::arg("value")))
.def("setDofName", static_cast<const std::string &(dart::dynamics::detail::SingleDofJointAddon::*)(const std::string &, bool)>(&dart::dynamics::detail::SingleDofJointAddon::setDofName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("name"), ::boost::python::arg("preserveName") = true))
.def("getDofName", static_cast<const std::string &(dart::dynamics::detail::SingleDofJointAddon::*)() const>(&dart::dynamics::detail::SingleDofJointAddon::getDofName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
