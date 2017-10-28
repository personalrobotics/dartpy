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

void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS1_19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics8BodyNodeEEENS0_32EmbeddedStateAndPropertiesAspectIS6_NS5_6detail13BodyNodeStateENS9_24BodyNodeAspectPropertiesEEESA_NS0_13MakeCloneableINS0_6Aspect5StateESA_EEXadL_ZNS1_23DefaultSetEmbeddedStateISC_SG_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISC_SG_EESM_PKSI_EEEESC_SB_NSD_INSE_10PropertiesESB_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISC_SS_EEvSJ_SM_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISC_SS_EESM_SP_EEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeAspectProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>, ::boost::noncopyable >("EmbeddedPropertiesAspect_BodyNode", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeAspectProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> * { return new dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeAspectProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>(); }, ::boost::python::default_call_policies()))
.def("setAspectProperties", [](dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeAspectProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self, const dart::common::Aspect::Properties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("setProperties", [](dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeAspectProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self, const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeAspectProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>::Properties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("getProperties", [](const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeAspectProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self) -> const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeAspectProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>::Properties & { return self->getProperties(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("cloneAspect", [](const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::BodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::BodyNodeState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties>, dart::dynamics::detail::BodyNodeAspectProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::BodyNodeAspectProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self) -> std::unique_ptr<dart::common::Aspect> { return self->cloneAspect(); })
;
}

/* footer */
