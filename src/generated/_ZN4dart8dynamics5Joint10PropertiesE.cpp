#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics5Joint10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Joint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Joint::Properties >("Properties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Joint::Properties * { return new dart::dynamics::Joint::Properties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::dynamics::Joint::Properties * { return new dart::dynamics::Joint::Properties(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, const Eigen::Isometry3d & _T_ParentBodyToJoint) -> dart::dynamics::Joint::Properties * { return new dart::dynamics::Joint::Properties(_name, _T_ParentBodyToJoint); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_T_ParentBodyToJoint"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, const Eigen::Isometry3d & _T_ParentBodyToJoint, const Eigen::Isometry3d & _T_ChildBodyToJoint) -> dart::dynamics::Joint::Properties * { return new dart::dynamics::Joint::Properties(_name, _T_ParentBodyToJoint, _T_ChildBodyToJoint); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_T_ParentBodyToJoint"), ::boost::python::arg("_T_ChildBodyToJoint"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, const Eigen::Isometry3d & _T_ParentBodyToJoint, const Eigen::Isometry3d & _T_ChildBodyToJoint, bool _isPositionLimited) -> dart::dynamics::Joint::Properties * { return new dart::dynamics::Joint::Properties(_name, _T_ParentBodyToJoint, _T_ChildBodyToJoint, _isPositionLimited); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_T_ParentBodyToJoint"), ::boost::python::arg("_T_ChildBodyToJoint"), ::boost::python::arg("_isPositionLimited"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, const Eigen::Isometry3d & _T_ParentBodyToJoint, const Eigen::Isometry3d & _T_ChildBodyToJoint, bool _isPositionLimited, dart::dynamics::Joint::ActuatorType _actuatorType) -> dart::dynamics::Joint::Properties * { return new dart::dynamics::Joint::Properties(_name, _T_ParentBodyToJoint, _T_ChildBodyToJoint, _isPositionLimited, _actuatorType); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_T_ParentBodyToJoint"), ::boost::python::arg("_T_ChildBodyToJoint"), ::boost::python::arg("_isPositionLimited"), ::boost::python::arg("_actuatorType"))))
.def_readwrite("mName", &dart::dynamics::Joint::Properties::mName)
.def_readwrite("mT_ParentBodyToJoint", &dart::dynamics::Joint::Properties::mT_ParentBodyToJoint)
.def_readwrite("mT_ChildBodyToJoint", &dart::dynamics::Joint::Properties::mT_ChildBodyToJoint)
.def_readwrite("mIsPositionLimited", &dart::dynamics::Joint::Properties::mIsPositionLimited)
.def_readwrite("mActuatorType", &dart::dynamics::Joint::Properties::mActuatorType)
;
}

/* footer */
