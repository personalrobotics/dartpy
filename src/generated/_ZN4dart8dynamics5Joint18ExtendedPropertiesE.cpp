#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics5Joint18ExtendedPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Joint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Joint::ExtendedProperties, ::boost::python::bases<dart::dynamics::Joint::Properties > >("ExtendedProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Joint::ExtendedProperties * { return new dart::dynamics::Joint::ExtendedProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & standardProperties) -> dart::dynamics::Joint::ExtendedProperties * { return new dart::dynamics::Joint::ExtendedProperties(standardProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("standardProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Joint::Properties & standardProperties, const dart::dynamics::Joint::AddonProperties & addonProperties) -> dart::dynamics::Joint::ExtendedProperties * { return new dart::dynamics::Joint::ExtendedProperties(standardProperties, addonProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("standardProperties"), ::boost::python::arg("addonProperties"))))
.def_readwrite("mAddonProperties", &dart::dynamics::Joint::ExtendedProperties::mAddonProperties)
;
}

/* footer */
