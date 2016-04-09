#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail18BodyNodePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::BodyNodeProperties, ::boost::python::bases<dart::dynamics::Entity::Properties, dart::dynamics::detail::BodyNodeUniqueProperties > >("BodyNodeProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::BodyNodeProperties * { return new dart::dynamics::detail::BodyNodeProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Entity::Properties & _entityProperties) -> dart::dynamics::detail::BodyNodeProperties * { return new dart::dynamics::detail::BodyNodeProperties(_entityProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_entityProperties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::Entity::Properties & _entityProperties, const dart::dynamics::detail::BodyNodeUniqueProperties & _bodyNodeProperties) -> dart::dynamics::detail::BodyNodeProperties * { return new dart::dynamics::detail::BodyNodeProperties(_entityProperties, _bodyNodeProperties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_entityProperties"), ::boost::python::arg("_bodyNodeProperties"))))
;
}

/* footer */
