#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail23DynamicsAddonPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::DynamicsAddonProperties >("DynamicsAddonProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::DynamicsAddonProperties * { return new dart::dynamics::detail::DynamicsAddonProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const double frictionCoeff) -> dart::dynamics::detail::DynamicsAddonProperties * { return new dart::dynamics::detail::DynamicsAddonProperties(frictionCoeff); }, ::boost::python::default_call_policies(), (::boost::python::arg("frictionCoeff"))))
.def("__init__", ::boost::python::make_constructor([](const double frictionCoeff, const double restitutionCoeff) -> dart::dynamics::detail::DynamicsAddonProperties * { return new dart::dynamics::detail::DynamicsAddonProperties(frictionCoeff, restitutionCoeff); }, ::boost::python::default_call_policies(), (::boost::python::arg("frictionCoeff"), ::boost::python::arg("restitutionCoeff"))))
.def_readwrite("mFrictionCoeff", &dart::dynamics::detail::DynamicsAddonProperties::mFrictionCoeff)
.def_readwrite("mRestitutionCoeff", &dart::dynamics::detail::DynamicsAddonProperties::mRestitutionCoeff)
;
}

/* footer */
