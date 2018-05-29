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

void _ZN4dart6common6detail19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics8BodyNodeEEENS0_32EmbeddedStateAndPropertiesAspectIS5_NS4_6detail13BodyNodeStateENS8_24BodyNodeAspectPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect5StateES9_EEXadL_ZNS1_23DefaultSetEmbeddedStateISB_SF_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISB_SF_EESL_PKSH_EEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, ::boost::noncopyable, ::boost::python::bases<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode> > >("_ZN4dart6common6detail19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics8BodyNodeEEENS0_32EmbeddedStateAndPropertiesAspectIS5_NS4_6detail13BodyNodeStateENS8_24BodyNodeAspectPropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect5StateES9_EEXadL_ZNS1_23DefaultSetEmbeddedStateISB_SF_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISB_SF_EESL_PKSH_EEEE", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState> * { return new dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>(); }, ::boost::python::default_call_policies()))
.def("setAspectState", [](dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState> *self, const dart::common::Aspect::State & state) -> void { return self->setAspectState(state); }, (::boost::python::arg("state")))
.def("setState", [](dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState> *self, const dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>::State & state) -> void { return self->setState(state); }, (::boost::python::arg("state")))
.def("getState", [](const dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState> *self) -> const dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>::State & { return self->getState(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("cloneAspect", [](const dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState> *self) -> std::unique_ptr<dart::common::Aspect> { return self->cloneAspect(); })
;
}

/* footer */
