#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics5Joint10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Joint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Joint::Properties >("Properties", boost::python::no_init)
.def(::boost::python::init<const std::string &, const Eigen::Isometry3d &, const Eigen::Isometry3d &, bool, dart::dynamics::Joint::ActuatorType>((::boost::python::arg("_name"), ::boost::python::arg("_T_ParentBodyToJoint"), ::boost::python::arg("_T_ChildBodyToJoint"), ::boost::python::arg("_isPositionLimited"), ::boost::python::arg("_actuatorType"))))
.def_readwrite("mName", &dart::dynamics::Joint::Properties::mName)
.def_readwrite("mT_ParentBodyToJoint", &dart::dynamics::Joint::Properties::mT_ParentBodyToJoint)
.def_readwrite("mT_ChildBodyToJoint", &dart::dynamics::Joint::Properties::mT_ChildBodyToJoint)
.def_readwrite("mIsPositionLimited", &dart::dynamics::Joint::Properties::mIsPositionLimited)
.def_readwrite("mActuatorType", &dart::dynamics::Joint::Properties::mActuatorType)
;
}

/* footer */
