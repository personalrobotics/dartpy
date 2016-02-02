#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics7SupportE()
{
::boost::python::class_<dart::dynamics::Support, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::AddonWithProtectedStateAndPropertiesInSkeleton<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate, true> > >("Support", boost::python::no_init)
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedStateAndPropertiesInSkeleton<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate, true>::StateData &, const dart::dynamics::AddonWithProtectedStateAndPropertiesInSkeleton<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate, true>::PropertiesData &>((::boost::python::arg("mgr"), ::boost::python::arg("state"), ::boost::python::arg("properties"))))
.def(::boost::python::init<dart::common::AddonManager *, const dart::dynamics::AddonWithProtectedStateAndPropertiesInSkeleton<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate, true>::PropertiesData &, const dart::dynamics::AddonWithProtectedStateAndPropertiesInSkeleton<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate, true>::StateData>((::boost::python::arg("mgr"), ::boost::python::arg("properties"), ::boost::python::arg("state"))))
.def("setGeometry", static_cast<void (dart::dynamics::Support::*)(const dart::math::SupportGeometry &)>(&dart::dynamics::Support::setGeometry), (::boost::python::arg("value")))
.def("setActive", static_cast<void (dart::dynamics::Support::*)(bool)>(&dart::dynamics::Support::setActive), (::boost::python::arg("_supporting") = true))
.def("isActive", static_cast<bool (dart::dynamics::Support::*)() const>(&dart::dynamics::Support::isActive))
;
}

/* footer */
