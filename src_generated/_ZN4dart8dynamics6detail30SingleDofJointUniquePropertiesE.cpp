#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail30SingleDofJointUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::SingleDofJointUniqueProperties >("SingleDofJointUniqueProperties", boost::python::no_init)
.def(::boost::python::init<double, double, double, double, double, double, double, double, double, double, double, double, bool, std::string>((::boost::python::arg("_positionLowerLimit"), ::boost::python::arg("_positionUpperLimit"), ::boost::python::arg("_velocityLowerLimit"), ::boost::python::arg("_velocityUpperLimit"), ::boost::python::arg("_accelerationLowerLimit"), ::boost::python::arg("_accelerationUpperLimit"), ::boost::python::arg("_forceLowerLimit"), ::boost::python::arg("_forceUpperLimit"), ::boost::python::arg("_springStiffness"), ::boost::python::arg("_restPosition"), ::boost::python::arg("_dampingCoefficient"), ::boost::python::arg("_coulombFriction"), ::boost::python::arg("_preserveDofName"), ::boost::python::arg("_dofName") = "")))
.def_readwrite("mPositionLowerLimit", &dart::dynamics::detail::SingleDofJointUniqueProperties::mPositionLowerLimit)
.def_readwrite("mPositionUpperLimit", &dart::dynamics::detail::SingleDofJointUniqueProperties::mPositionUpperLimit)
.def_readwrite("mInitialPosition", &dart::dynamics::detail::SingleDofJointUniqueProperties::mInitialPosition)
.def_readwrite("mVelocityLowerLimit", &dart::dynamics::detail::SingleDofJointUniqueProperties::mVelocityLowerLimit)
.def_readwrite("mVelocityUpperLimit", &dart::dynamics::detail::SingleDofJointUniqueProperties::mVelocityUpperLimit)
.def_readwrite("mInitialVelocity", &dart::dynamics::detail::SingleDofJointUniqueProperties::mInitialVelocity)
.def_readwrite("mAccelerationLowerLimit", &dart::dynamics::detail::SingleDofJointUniqueProperties::mAccelerationLowerLimit)
.def_readwrite("mAccelerationUpperLimit", &dart::dynamics::detail::SingleDofJointUniqueProperties::mAccelerationUpperLimit)
.def_readwrite("mForceLowerLimit", &dart::dynamics::detail::SingleDofJointUniqueProperties::mForceLowerLimit)
.def_readwrite("mForceUpperLimit", &dart::dynamics::detail::SingleDofJointUniqueProperties::mForceUpperLimit)
.def_readwrite("mSpringStiffness", &dart::dynamics::detail::SingleDofJointUniqueProperties::mSpringStiffness)
.def_readwrite("mRestPosition", &dart::dynamics::detail::SingleDofJointUniqueProperties::mRestPosition)
.def_readwrite("mDampingCoefficient", &dart::dynamics::detail::SingleDofJointUniqueProperties::mDampingCoefficient)
.def_readwrite("mFriction", &dart::dynamics::detail::SingleDofJointUniqueProperties::mFriction)
.def_readwrite("mPreserveDofName", &dart::dynamics::detail::SingleDofJointUniqueProperties::mPreserveDofName)
.def_readwrite("mDofName", &dart::dynamics::detail::SingleDofJointUniqueProperties::mDofName)
;
}

/* footer */
