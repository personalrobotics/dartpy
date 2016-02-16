#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics9PointMass10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("PointMass"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PointMass::Properties, ::boost::noncopyable >("Properties", boost::python::no_init)
.def(::boost::python::init<const Eigen::Vector3d &, double, const std::vector<std::size_t> &, const Eigen::Vector3d &, const Eigen::Vector3d &, const Eigen::Vector3d &, const Eigen::Vector3d &, const Eigen::Vector3d &, const Eigen::Vector3d &, const Eigen::Vector3d &, const Eigen::Vector3d &>((::boost::python::arg("_X0"), ::boost::python::arg("_mass"), ::boost::python::arg("_connections"), ::boost::python::arg("_positionLowerLimits"), ::boost::python::arg("_positionUpperLimits"), ::boost::python::arg("_velocityLowerLimits"), ::boost::python::arg("_velocityUpperLimits"), ::boost::python::arg("_accelerationLowerLimits"), ::boost::python::arg("_accelerationUpperLimits"), ::boost::python::arg("_forceLowerLimits"), ::boost::python::arg("_forceUpperLimits"))))
.def("setRestingPosition", static_cast<void (dart::dynamics::PointMass::Properties::*)(const Eigen::Vector3d &)>(&dart::dynamics::PointMass::Properties::setRestingPosition), (::boost::python::arg("_x")))
.def("setMass", static_cast<void (dart::dynamics::PointMass::Properties::*)(double)>(&dart::dynamics::PointMass::Properties::setMass), (::boost::python::arg("_mass")))
.def_readwrite("mX0", &dart::dynamics::PointMass::Properties::mX0)
.def_readwrite("mMass", &dart::dynamics::PointMass::Properties::mMass)
.def_readwrite("mConnectedPointMassIndices", &dart::dynamics::PointMass::Properties::mConnectedPointMassIndices)
.def_readwrite("mPositionLowerLimits", &dart::dynamics::PointMass::Properties::mPositionLowerLimits)
.def_readwrite("mPositionUpperLimits", &dart::dynamics::PointMass::Properties::mPositionUpperLimits)
.def_readwrite("mVelocityLowerLimits", &dart::dynamics::PointMass::Properties::mVelocityLowerLimits)
.def_readwrite("mVelocityUpperLimits", &dart::dynamics::PointMass::Properties::mVelocityUpperLimits)
.def_readwrite("mAccelerationLowerLimits", &dart::dynamics::PointMass::Properties::mAccelerationLowerLimits)
.def_readwrite("mAccelerationUpperLimits", &dart::dynamics::PointMass::Properties::mAccelerationUpperLimits)
.def_readwrite("mForceLowerLimits", &dart::dynamics::PointMass::Properties::mForceLowerLimits)
.def_readwrite("mForceUpperLimits", &dart::dynamics::PointMass::Properties::mForceUpperLimits)
;
}

/* footer */
