#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart8dynamics7Support9setActiveEb_docstring[] = R"CHIMERA_STRING( Pass in true if this EndEffector should be used to support the robot, like
 a foot
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics7Support8isActiveEv_docstring[] = R"CHIMERA_STRING( Get whether this EndEffector is currently being used for support
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics7SupportE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Support, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate> > >("Support", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::dynamics::Support * { return new dart::dynamics::Support(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::StateData & state) -> dart::dynamics::Support * { return new dart::dynamics::Support(mgr, state); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("state"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::StateData & state, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::PropertiesData & properties) -> dart::dynamics::Support * { return new dart::dynamics::Support(mgr, state, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("state"), ::boost::python::arg("properties"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::PropertiesData & properties) -> dart::dynamics::Support * { return new dart::dynamics::Support(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::PropertiesData & properties, const dart::common::AddonWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::StateData state) -> dart::dynamics::Support * { return new dart::dynamics::Support(mgr, properties, state); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"), ::boost::python::arg("state"))))
.def("setGeometry", [](dart::dynamics::Support *self, const dart::math::SupportGeometry & value) -> void { return self->setGeometry(value); }, (::boost::python::arg("value")))
.def("getGeometry", [](const dart::dynamics::Support *self) -> const dart::math::SupportGeometry & { return self->getGeometry(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setActive", [](dart::dynamics::Support *self) -> void { return self->setActive(); }, _ZN4dart8dynamics7Support9setActiveEb_docstring)
.def("setActive", [](dart::dynamics::Support *self, bool _supporting) -> void { return self->setActive(_supporting); }, _ZN4dart8dynamics7Support9setActiveEb_docstring, (::boost::python::arg("_supporting")))
.def("isActive", [](const dart::dynamics::Support *self) -> bool { return self->isActive(); }, _ZNK4dart8dynamics7Support8isActiveEv_docstring)
;
}

/* footer */
