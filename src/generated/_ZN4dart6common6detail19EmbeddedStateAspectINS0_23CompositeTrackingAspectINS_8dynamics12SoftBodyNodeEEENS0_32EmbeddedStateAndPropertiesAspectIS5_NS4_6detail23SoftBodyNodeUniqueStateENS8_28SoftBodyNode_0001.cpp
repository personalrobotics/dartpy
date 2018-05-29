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

void _ZN4dart6common6detail19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics12SoftBodyNodeEEENS0_32EmbeddedStateAndPropertiesAspectIS5_NS4_6detail23SoftBodyNodeUniqueStateENS8_28SoftBodyNodeUniquePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect5StateES9_EEXadL_ZNS1_23DefaultSetEmbeddedStateISB_SF_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISB_SF_EESL_PKSH_EEE11DelegateTagE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail").attr("_ZN4dart6common6detail19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics12SoftBodyNodeEEENS0_32EmbeddedStateAndPropertiesAspectIS5_NS4_6detail23SoftBodyNodeUniqueStateENS8_28SoftBodyNodeUniquePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect5StateES9_EEXadL_ZNS1_23DefaultSetEmbeddedStateISB_SF_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISB_SF_EESL_PKSH_EEEE"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::SoftBodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties>, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SoftBodyNodeUniqueState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>::DelegateTag>("DelegateTag")
.value("Delegate", dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::SoftBodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties>, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SoftBodyNodeUniqueState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>::DelegateTag::Delegate)
;
}

/* footer */
