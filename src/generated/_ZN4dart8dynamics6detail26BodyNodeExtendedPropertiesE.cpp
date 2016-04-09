#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail26BodyNodeExtendedPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::BodyNodeExtendedProperties, ::boost::python::bases<dart::dynamics::detail::BodyNodeProperties > >("BodyNodeExtendedProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::BodyNodeExtendedProperties * { return new dart::dynamics::detail::BodyNodeExtendedProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::BodyNodeProperties & standardProperties) -> dart::dynamics::detail::BodyNodeExtendedProperties * { return new dart::dynamics::detail::BodyNodeExtendedProperties(standardProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("standardProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::BodyNodeProperties & standardProperties, const dart::dynamics::detail::BodyNodeExtendedProperties::NodeProperties & nodeProperties) -> dart::dynamics::detail::BodyNodeExtendedProperties * { return new dart::dynamics::detail::BodyNodeExtendedProperties(standardProperties, nodeProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("standardProperties"), ::boost::python::arg("nodeProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::detail::BodyNodeProperties & standardProperties, const dart::dynamics::detail::BodyNodeExtendedProperties::NodeProperties & nodeProperties, const dart::dynamics::detail::BodyNodeExtendedProperties::AddonProperties & addonProperties) -> dart::dynamics::detail::BodyNodeExtendedProperties * { return new dart::dynamics::detail::BodyNodeExtendedProperties(standardProperties, nodeProperties, addonProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("standardProperties"), ::boost::python::arg("nodeProperties"), ::boost::python::arg("addonProperties"))))
.def_readwrite("mNodeProperties", &dart::dynamics::detail::BodyNodeExtendedProperties::mNodeProperties)
.def_readwrite("mAddonProperties", &dart::dynamics::detail::BodyNodeExtendedProperties::mAddonProperties)
;
}

/* footer */
