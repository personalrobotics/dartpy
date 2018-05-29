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

void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS1_19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEEEENS0_32EmbeddedStateAndPropertiesAspectISA_NS5_6detail17GenericJointStateIS9_EENSD_28GenericJointUniquePropertiesIS9_EEEESF_NS0_13MakeCloneableINS0_6Aspect5StateESF_EEXadL_ZNS1_23DefaultSetEmbeddedStateISI_SM_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISI_SM_EESS_PKSO_EEEESI_SH_NSJ_INSK_10PropertiesESH_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISI_SY_EEvSP_SS_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISI_SY_EESS_SV_EEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState> > >("_ZN4dart6common6detail24EmbeddedPropertiesAspectINS1_19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math15RealVectorSpaceILm2EEEEEEENS0_32EmbeddedStateAndPropertiesAspectISA_NS5_6detail17GenericJointStateIS9_EENSD_28GenericJointUniquePropertiesIS9_EEEESF_NS0_13MakeCloneableINS0_6Aspect5StateESF_EEXadL_ZNS1_23DefaultSetEmbeddedStateISI_SM_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISI_SM_EESS_PKSO_EEEESI_SH_NSJ_INSK_10PropertiesESH_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISI_SY_EEvSP_SS_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISI_SY_EESS_SV_EEEE", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> * { return new dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>(); }, ::boost::python::default_call_policies()))
.def("setAspectProperties", [](dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self, const dart::common::Aspect::Properties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("setProperties", [](dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self, const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>::Properties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("getProperties", [](const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self) -> const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>::Properties & { return self->getProperties(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("cloneAspect", [](const dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointState<dart::math::RealVectorSpace<2> >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> >, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::RealVectorSpace<2> > >, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self) -> std::unique_ptr<dart::common::Aspect> { return self->cloneAspect(); })
;
}

/* footer */
