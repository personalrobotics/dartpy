#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail15JointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::JointProperties >("JointProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::JointProperties * { return new dart::dynamics::detail::JointProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::dynamics::detail::JointProperties * { return new dart::dynamics::detail::JointProperties(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, const Eigen::Isometry3d & _T_ParentBodyToJoint) -> dart::dynamics::detail::JointProperties * { return new dart::dynamics::detail::JointProperties(_name, _T_ParentBodyToJoint); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_T_ParentBodyToJoint"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, const Eigen::Isometry3d & _T_ParentBodyToJoint, const Eigen::Isometry3d & _T_ChildBodyToJoint) -> dart::dynamics::detail::JointProperties * { return new dart::dynamics::detail::JointProperties(_name, _T_ParentBodyToJoint, _T_ChildBodyToJoint); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_T_ParentBodyToJoint"), ::boost::python::arg("_T_ChildBodyToJoint"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, const Eigen::Isometry3d & _T_ParentBodyToJoint, const Eigen::Isometry3d & _T_ChildBodyToJoint, bool _isPositionLimitEnforced) -> dart::dynamics::detail::JointProperties * { return new dart::dynamics::detail::JointProperties(_name, _T_ParentBodyToJoint, _T_ChildBodyToJoint, _isPositionLimitEnforced); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_T_ParentBodyToJoint"), ::boost::python::arg("_T_ChildBodyToJoint"), ::boost::python::arg("_isPositionLimitEnforced"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name, const Eigen::Isometry3d & _T_ParentBodyToJoint, const Eigen::Isometry3d & _T_ChildBodyToJoint, bool _isPositionLimitEnforced, dart::dynamics::detail::ActuatorType _actuatorType) -> dart::dynamics::detail::JointProperties * { return new dart::dynamics::detail::JointProperties(_name, _T_ParentBodyToJoint, _T_ChildBodyToJoint, _isPositionLimitEnforced, _actuatorType); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"), ::boost::python::arg("_T_ParentBodyToJoint"), ::boost::python::arg("_T_ChildBodyToJoint"), ::boost::python::arg("_isPositionLimitEnforced"), ::boost::python::arg("_actuatorType"))))
.def_readwrite("mName", &dart::dynamics::detail::JointProperties::mName)
.def_readwrite("mT_ParentBodyToJoint", &dart::dynamics::detail::JointProperties::mT_ParentBodyToJoint)
.def_readwrite("mT_ChildBodyToJoint", &dart::dynamics::detail::JointProperties::mT_ChildBodyToJoint)
.def_readwrite("mIsPositionLimitEnforced", &dart::dynamics::detail::JointProperties::mIsPositionLimitEnforced)
.def_readwrite("mActuatorType", &dart::dynamics::detail::JointProperties::mActuatorType)
;
}

/* footer */
