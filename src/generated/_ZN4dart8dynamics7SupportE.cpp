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

void _ZN4dart8dynamics7SupportE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Support, ::boost::noncopyable >("Support", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::Support * { return new dart::dynamics::Support(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::AspectWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::StateData & state) -> dart::dynamics::Support * { return new dart::dynamics::Support(state); }, ::boost::python::default_call_policies(), (::boost::python::arg("state"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::AspectWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::StateData & state, const dart::common::AspectWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::PropertiesData & properties) -> dart::dynamics::Support * { return new dart::dynamics::Support(state, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("state"), ::boost::python::arg("properties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::AspectWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::PropertiesData & properties) -> dart::dynamics::Support * { return new dart::dynamics::Support(properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("properties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::AspectWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::PropertiesData & properties, const dart::common::AspectWithStateAndVersionedProperties<dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::detail::SupportPropertiesData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate, &dart::dynamics::detail::SupportUpdate>::StateData state) -> dart::dynamics::Support * { return new dart::dynamics::Support(properties, state); }, ::boost::python::default_call_policies(), (::boost::python::arg("properties"), ::boost::python::arg("state"))))
.def("setGeometry", [](dart::dynamics::Support *self, const dart::math::SupportGeometry & value) -> void { return self->setGeometry(value); }, (::boost::python::arg("value")))
.def("getGeometry", [](const dart::dynamics::Support *self) -> const dart::math::SupportGeometry & { return self->getGeometry(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setActive", [](dart::dynamics::Support *self) -> void { return self->setActive(); })
.def("setActive", [](dart::dynamics::Support *self, bool _supporting) -> void { return self->setActive(_supporting); }, (::boost::python::arg("_supporting")))
.def("isActive", [](const dart::dynamics::Support *self) -> bool { return self->isActive(); })
;
}

/* footer */
