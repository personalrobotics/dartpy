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

void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS1_19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEEEENS0_32EmbeddedStateAndPropertiesAspectIS9_NS5_6detail17GenericJointStateIS8_EENSC_28GenericJointUniquePropertiesIS8_EEEESE_NS0_13MakeCloneableINS0_6Aspect5StateESE_EEXadL_ZNS1_23DefaultSetEmbeddedStateISH_SL_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISH_SL_EESR_PKSN_EEEESH_SG_NSI_INSJ_10PropertiesESG_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISH_SX_EEvSO_SR_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISH_SX_EESR_SU_EEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SE3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SE3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState> > >("_ZN4dart6common6detail24EmbeddedPropertiesAspectINS1_19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math8SE3SpaceEEEEENS0_32EmbeddedStateAndPropertiesAspectIS9_NS5_6detail17GenericJointStateIS8_EENSC_28GenericJointUniquePropertiesIS8_EEEESE_NS0_13MakeCloneableINS0_6Aspect5StateESE_EEXadL_ZNS1_23DefaultSetEmbeddedStateISH_SL_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISH_SL_EESR_PKSN_EEEESH_SG_NSI_INSJ_10PropertiesESG_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISH_SX_EEvSO_SR_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISH_SX_EESR_SU_EEEE", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SE3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> * { return new dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SE3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>(); }, ::boost::python::default_call_policies()))
.def("setAspectProperties", [](dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SE3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self, const dart::common::Aspect::Properties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("setProperties", [](dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SE3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self, const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SE3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>::Properties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("getProperties", [](const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SE3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self) -> const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SE3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>::Properties & { return self->getProperties(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("cloneAspect", [](const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SE3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SE3Space>, dart::dynamics::detail::GenericJointState<dart::math::SE3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space>, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SE3Space> >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self) -> std::unique_ptr<dart::common::Aspect> { return self->cloneAspect(); })
;
}

/* footer */
