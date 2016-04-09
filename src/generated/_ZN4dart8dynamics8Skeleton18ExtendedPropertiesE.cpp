#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics8Skeleton18ExtendedPropertiesE_docstring[] = R"CHIMERA_STRING( The Properties of this Skeleton and everything within the Skeleton,
 including Addons and Nodes that are attached to the
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics8Skeleton18ExtendedPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Skeleton"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Skeleton::ExtendedProperties, ::boost::python::bases<dart::dynamics::Skeleton::Properties > >("ExtendedProperties", _ZN4dart8dynamics8Skeleton18ExtendedPropertiesE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Skeleton::ExtendedProperties * { return new dart::dynamics::Skeleton::ExtendedProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Skeleton::BodyNodeExtendedProperties & bodyNodeProperties) -> dart::dynamics::Skeleton::ExtendedProperties * { return new dart::dynamics::Skeleton::ExtendedProperties(bodyNodeProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("bodyNodeProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Skeleton::BodyNodeExtendedProperties & bodyNodeProperties, const dart::dynamics::Skeleton::JointExtendedProperties & jointProperties) -> dart::dynamics::Skeleton::ExtendedProperties * { return new dart::dynamics::Skeleton::ExtendedProperties(bodyNodeProperties, jointProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("bodyNodeProperties"), ::boost::python::arg("jointProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Skeleton::BodyNodeExtendedProperties & bodyNodeProperties, const dart::dynamics::Skeleton::JointExtendedProperties & jointProperties, const std::vector<std::string> & parentNames) -> dart::dynamics::Skeleton::ExtendedProperties * { return new dart::dynamics::Skeleton::ExtendedProperties(bodyNodeProperties, jointProperties, parentNames); }, ::boost::python::default_call_policies(), (::boost::python::arg("bodyNodeProperties"), ::boost::python::arg("jointProperties"), ::boost::python::arg("parentNames"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Skeleton::BodyNodeExtendedProperties & bodyNodeProperties, const dart::dynamics::Skeleton::JointExtendedProperties & jointProperties, const std::vector<std::string> & parentNames, const dart::dynamics::Skeleton::AddonProperties & addonProperties) -> dart::dynamics::Skeleton::ExtendedProperties * { return new dart::dynamics::Skeleton::ExtendedProperties(bodyNodeProperties, jointProperties, parentNames, addonProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("bodyNodeProperties"), ::boost::python::arg("jointProperties"), ::boost::python::arg("parentNames"), ::boost::python::arg("addonProperties"))))
.def_readwrite("mBodyNodeProperties", &dart::dynamics::Skeleton::ExtendedProperties::mBodyNodeProperties)
.def_readwrite("mJointProperties", &dart::dynamics::Skeleton::ExtendedProperties::mJointProperties)
.def_readwrite("mParentBodyNodeNames", &dart::dynamics::Skeleton::ExtendedProperties::mParentBodyNodeNames)
.def_readwrite("mAddonProperties", &dart::dynamics::Skeleton::ExtendedProperties::mAddonProperties)
;
}

/* footer */
