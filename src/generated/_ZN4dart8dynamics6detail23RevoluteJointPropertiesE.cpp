#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail23RevoluteJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::RevoluteJointProperties, ::boost::python::bases<dart::dynamics::detail::SingleDofJointProperties, dart::dynamics::detail::RevoluteJointUniqueProperties > >("RevoluteJointProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::RevoluteJointProperties * { return new dart::dynamics::detail::RevoluteJointProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::SingleDofJoint::Properties & _singleDofJointProperties) -> dart::dynamics::detail::RevoluteJointProperties * { return new dart::dynamics::detail::RevoluteJointProperties(_singleDofJointProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_singleDofJointProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::SingleDofJoint::Properties & _singleDofJointProperties, const dart::dynamics::detail::RevoluteJointUniqueProperties & _revoluteProperties) -> dart::dynamics::detail::RevoluteJointProperties * { return new dart::dynamics::detail::RevoluteJointProperties(_singleDofJointProperties, _revoluteProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_singleDofJointProperties"), ::boost::python::arg("_revoluteProperties"))))
;
}

/* footer */
