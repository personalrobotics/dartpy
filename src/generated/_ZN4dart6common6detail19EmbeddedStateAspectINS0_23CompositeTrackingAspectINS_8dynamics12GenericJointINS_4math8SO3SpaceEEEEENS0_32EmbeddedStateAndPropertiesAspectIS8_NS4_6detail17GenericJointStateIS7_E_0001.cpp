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

/* postinclude */

void _ZN4dart6common6detail19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEEEENS0_32EmbeddedStateAndPropertiesAspectIS8_NS4_6detail17GenericJointStateIS7_EENSB_28GenericJointUniquePropertiesIS7_EEEESD_NS0_13MakeCloneableINS0_6Aspect5StateESD_EEXadL_ZNS1_23DefaultSetEmbeddedStateISG_SK_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISG_SK_EESQ_PKSM_EEE11DelegateTagE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail").attr("_ZN4dart6common6detail19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics12GenericJointINS_4math8SO3SpaceEEEEENS0_32EmbeddedStateAndPropertiesAspectIS8_NS4_6detail17GenericJointStateIS7_EENSB_28GenericJointUniquePropertiesIS7_EEEESD_NS0_13MakeCloneableINS0_6Aspect5StateESD_EEXadL_ZNS1_23DefaultSetEmbeddedStateISG_SK_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISG_SK_EESQ_PKSM_EEEE"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SO3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SO3Space>, dart::dynamics::detail::GenericJointState<dart::math::SO3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SO3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SO3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>::DelegateTag>("DelegateTag")
.value("Delegate", dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::GenericJoint<dart::math::SO3Space> >, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::GenericJoint<dart::math::SO3Space>, dart::dynamics::detail::GenericJointState<dart::math::SO3Space>, dart::dynamics::detail::GenericJointUniqueProperties<dart::math::SO3Space> >, dart::dynamics::detail::GenericJointState<dart::math::SO3Space>, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::GenericJointState<dart::math::SO3Space> >, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>::DelegateTag::Delegate)
;
}

/* footer */
