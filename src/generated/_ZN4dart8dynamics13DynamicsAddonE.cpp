#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics13DynamicsAddonE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedProperties generates implementations of the Property
 managing functions for an Addon class.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics13DynamicsAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::DynamicsAddon, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::ShapeFrame>, dart::dynamics::DynamicsAddon, dart::dynamics::detail::DynamicsAddonProperties, dart::dynamics::ShapeFrame, &dart::common::detail::NoOp> > >("DynamicsAddon", _ZN4dart8dynamics13DynamicsAddonE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::dynamics::DynamicsAddon * { return new dart::dynamics::DynamicsAddon(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::ShapeFrame>, dart::dynamics::DynamicsAddon, dart::dynamics::detail::DynamicsAddonProperties, dart::dynamics::ShapeFrame, &dart::common::detail::NoOp>::PropertiesData & properties) -> dart::dynamics::DynamicsAddon * { return new dart::dynamics::DynamicsAddon(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setFrictionCoeff", [](dart::dynamics::DynamicsAddon *self, const double & value) -> void { return self->setFrictionCoeff(value); }, (::boost::python::arg("value")))
.def("getFrictionCoeff", [](const dart::dynamics::DynamicsAddon *self) -> const double & { return self->getFrictionCoeff(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setRestitutionCoeff", [](dart::dynamics::DynamicsAddon *self, const double & value) -> void { return self->setRestitutionCoeff(value); }, (::boost::python::arg("value")))
.def("getRestitutionCoeff", [](const dart::dynamics::DynamicsAddon *self) -> const double & { return self->getRestitutionCoeff(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
