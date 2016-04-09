#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics11EndEffector14PropertiesDataE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("EndEffector"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EndEffector::PropertiesData, ::boost::python::bases<dart::dynamics::Entity::Properties, dart::dynamics::EndEffector::UniqueProperties > >("PropertiesData", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::EndEffector::PropertiesData * { return new dart::dynamics::EndEffector::PropertiesData(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Entity::Properties & _entityProperties) -> dart::dynamics::EndEffector::PropertiesData * { return new dart::dynamics::EndEffector::PropertiesData(_entityProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_entityProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Entity::Properties & _entityProperties, const dart::dynamics::EndEffector::UniqueProperties & _effectorProperties) -> dart::dynamics::EndEffector::PropertiesData * { return new dart::dynamics::EndEffector::PropertiesData(_entityProperties, _effectorProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_entityProperties"), ::boost::python::arg("_effectorProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Entity::Properties & _entityProperties, const dart::dynamics::EndEffector::UniqueProperties & _effectorProperties, const dart::common::AddonManager::Properties & _addonProperties) -> dart::dynamics::EndEffector::PropertiesData * { return new dart::dynamics::EndEffector::PropertiesData(_entityProperties, _effectorProperties, _addonProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_entityProperties"), ::boost::python::arg("_effectorProperties"), ::boost::python::arg("_addonProperties"))))
.def_readwrite("mAddonProperties", &dart::dynamics::EndEffector::PropertiesData::mAddonProperties)
;
}

/* footer */
