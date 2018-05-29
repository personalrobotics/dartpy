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

void _ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS2_6detail13BodyNodeStateENS4_24BodyNodeAspectPropertiesEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeAspectProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> > >("_ZN4dart6common32EmbeddedStateAndPropertiesAspectINS_8dynamics8BodyNodeENS2_6detail13BodyNodeStateENS4_24BodyNodeAspectPropertiesEEE", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties> * { return new dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>::StateData & state) -> dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties> * { return new dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>(state); }, ::boost::python::default_call_policies(), (::boost::python::arg("state"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>::PropertiesData & properties) -> dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties> * { return new dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>(properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("properties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>::StateData & state, const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>::PropertiesData & properties) -> dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties> * { return new dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>(state, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("state"), ::boost::python::arg("properties"))))
.def("__init__", ::boost::python::make_constructor([](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>::PropertiesData & properties, const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>::StateData & state) -> dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties> * { return new dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>(properties, state); }, ::boost::python::default_call_policies(), (::boost::python::arg("properties"), ::boost::python::arg("state"))))
.def("cloneAspect", [](const dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties> *self) -> std::unique_ptr<dart::common::Aspect> { return self->cloneAspect(); })
;
}

/* footer */
