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

void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS1_19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics12SoftBodyNodeEEENS0_32EmbeddedStateAndPropertiesAspectIS6_NS5_6detail23SoftBodyNodeUniqueStateENS9_28SoftBodyNodeUniquePropertiesEEESA_NS0_13MakeCloneableINS0_6Aspect5StateESA_EEXadL_ZNS1_23DefaultSetEmbeddedStateISC_SG_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISC_SG_EESM_PKSI_EEEESC_SB_NSD_INSE_10PropertiesESB_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISC_SS_EEvSJ_SM_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISC_SS_EESM_SP_EEE19ConvertIfPropertiesISB_EE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail").attr("_ZN4dart6common6detail24EmbeddedPropertiesAspectINS1_19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics12SoftBodyNodeEEENS0_32EmbeddedStateAndPropertiesAspectIS6_NS5_6detail23SoftBodyNodeUniqueStateENS9_28SoftBodyNodeUniquePropertiesEEESA_NS0_13MakeCloneableINS0_6Aspect5StateESA_EEXadL_ZNS1_23DefaultSetEmbeddedStateISC_SG_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISC_SG_EESM_PKSI_EEEESC_SB_NSD_INSE_10PropertiesESB_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISC_SS_EEvSJ_SM_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISC_SS_EESM_SP_EEEE"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::detail::EmbeddedPropertiesAspect<dart::common::detail::EmbeddedStateAspect<dart::common::CompositeTrackingAspect<dart::dynamics::SoftBodyNode>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties>, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::common::MakeCloneable<dart::common::Aspect::State, dart::dynamics::detail::SoftBodyNodeUniqueState>, &dart::common::detail::DefaultSetEmbeddedState, &dart::common::detail::DefaultGetEmbeddedState>, dart::common::EmbeddedStateAndPropertiesAspect<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties>, dart::dynamics::detail::SoftBodyNodeUniqueProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::SoftBodyNodeUniqueProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>::ConvertIfProperties<dart::dynamics::detail::SoftBodyNodeUniqueProperties>, ::boost::noncopyable >("_ZN4dart6common6detail24EmbeddedPropertiesAspectINS1_19EmbeddedStateAspectINS0_23CompositeTrackingAspectINS_8dynamics12SoftBodyNodeEEENS0_32EmbeddedStateAndPropertiesAspectIS6_NS5_6detail23SoftBodyNodeUniqueStateENS9_28SoftBodyNodeUniquePropertiesEEESA_NS0_13MakeCloneableINS0_6Aspect5StateESA_EEXadL_ZNS1_23DefaultSetEmbeddedStateISC_SG_EEvPT_RKT0_EEXadL_ZNS1_23DefaultGetEmbeddedStateISC_SG_EESM_PKSI_EEEESC_SB_NSD_INSE_10PropertiesESB_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISC_SS_EEvSJ_SM_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISC_SS_EESM_SP_EEE19ConvertIfPropertiesISB_EE", boost::python::no_init)
;
}

/* footer */
