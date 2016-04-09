#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail20ScrewJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::ScrewJointProperties, ::boost::python::bases<dart::dynamics::detail::SingleDofJointProperties, dart::dynamics::detail::ScrewJointUniqueProperties > >("ScrewJointProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::ScrewJointProperties * { return new dart::dynamics::detail::ScrewJointProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::SingleDofJoint::Properties & _singleDofProperties) -> dart::dynamics::detail::ScrewJointProperties * { return new dart::dynamics::detail::ScrewJointProperties(_singleDofProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_singleDofProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::SingleDofJoint::Properties & _singleDofProperties, const dart::dynamics::detail::ScrewJointUniqueProperties & _screwProperties) -> dart::dynamics::detail::ScrewJointProperties * { return new dart::dynamics::detail::ScrewJointProperties(_singleDofProperties, _screwProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_singleDofProperties"), ::boost::python::arg("_screwProperties"))))
;
}

/* footer */
