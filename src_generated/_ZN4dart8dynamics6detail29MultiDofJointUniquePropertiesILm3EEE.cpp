#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm3EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::MultiDofJointUniqueProperties<3> >("_ZN4dart8dynamics6detail29MultiDofJointUniquePropertiesILm3EEE", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &, const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &, const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &, const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &, const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &, const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &, const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &, const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &, const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &, const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &, const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &, const dart::dynamics::detail::MultiDofJointUniqueProperties<3>::Vector &>((::boost::python::arg("_positionLowerLimits"), ::boost::python::arg("_positionUpperLimits"), ::boost::python::arg("_velocityLowerLimits"), ::boost::python::arg("_velocityUpperLimits"), ::boost::python::arg("_accelerationLowerLimits"), ::boost::python::arg("_accelerationUpperLimits"), ::boost::python::arg("_forceLowerLimits"), ::boost::python::arg("_forceUpperLimits"), ::boost::python::arg("_springStiffness"), ::boost::python::arg("_restPosition"), ::boost::python::arg("_dampingCoefficient"), ::boost::python::arg("_coulombFrictions"))))
.def_readwrite("mPositionLowerLimits", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mPositionLowerLimits)
.def_readwrite("mPositionUpperLimits", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mPositionUpperLimits)
.def_readwrite("mInitialPositions", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mInitialPositions)
.def_readwrite("mVelocityLowerLimits", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mVelocityLowerLimits)
.def_readwrite("mVelocityUpperLimits", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mVelocityUpperLimits)
.def_readwrite("mInitialVelocities", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mInitialVelocities)
.def_readwrite("mAccelerationLowerLimits", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mAccelerationLowerLimits)
.def_readwrite("mAccelerationUpperLimits", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mAccelerationUpperLimits)
.def_readwrite("mForceLowerLimits", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mForceLowerLimits)
.def_readwrite("mForceUpperLimits", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mForceUpperLimits)
.def_readwrite("mSpringStiffnesses", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mSpringStiffnesses)
.def_readwrite("mRestPositions", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mRestPositions)
.def_readwrite("mDampingCoefficients", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mDampingCoefficients)
.def_readwrite("mFrictions", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mFrictions)
.def_readwrite("mPreserveDofNames", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mPreserveDofNames)
.def_readwrite("mDofNames", &dart::dynamics::detail::MultiDofJointUniqueProperties<3>::mDofNames)
.add_static_property("NumDofs", ::boost::python::make_getter(dart::dynamics::detail::MultiDofJointUniqueProperties<3>::NumDofs))
;
}

/* footer */
