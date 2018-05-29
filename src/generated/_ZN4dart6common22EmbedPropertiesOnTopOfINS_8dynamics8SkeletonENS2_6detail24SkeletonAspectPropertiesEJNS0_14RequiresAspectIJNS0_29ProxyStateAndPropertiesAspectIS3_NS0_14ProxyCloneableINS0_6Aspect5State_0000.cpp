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

void _ZN4dart6common22EmbedPropertiesOnTopOfINS_8dynamics8SkeletonENS2_6detail24SkeletonAspectPropertiesEJNS0_14RequiresAspectIJNS0_29ProxyStateAndPropertiesAspectIS3_NS0_14ProxyCloneableINS0_6Aspect5StateES3_St6vectorINS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrISA_St14default_deleteISA_EESt4lessISF_ESaISt4pairIKSF_SJ_EEENSC_8GetStateEEESaISS_EEXadL_ZNS4_20setAllBodyNodeStatesEPS3_RKSU_EEXadL_ZNS4_20getAllBodyNodeStatesEPKS3_EEEENS8_INS9_10PropertiesES3_SB_INSD_ISE_ISF_SG_IS11_SH_IS11_EESL_SaISM_ISN_S13_EEENSC_13GetPropertiesEEESaIS18_EEXadL_ZNS4_24setAllBodyNodePropertiesESV_RKS1A_EEXadL_ZNS4_24getAllBodyNodePropertiesESZ_EEEEEENS7_IS3_NS8_ISA_S3_SU_XadL_ZNS4_17setAllJointStatesESV_SX_EEXadL_ZNS4_17getAllJointStatesESZ_EEEENS8_IS11_S3_S1A_XadL_ZNS4_21setAllJointPropertiesESV_S1C_EEXadL_ZNS4_21getAllJointPropertiesESZ_EEEEEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::Skeleton, dart::dynamics::detail::SkeletonAspectProperties, dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> >, dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > > >, ::boost::noncopyable, ::boost::python::bases<dart::common::CompositeJoiner<dart::common::EmbedProperties<dart::dynamics::Skeleton, dart::dynamics::detail::SkeletonAspectProperties>, dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> >, dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > > > > >("_ZN4dart6common22EmbedPropertiesOnTopOfINS_8dynamics8SkeletonENS2_6detail24SkeletonAspectPropertiesEJNS0_14RequiresAspectIJNS0_29ProxyStateAndPropertiesAspectIS3_NS0_14ProxyCloneableINS0_6Aspect5StateES3_St6vectorINS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrISA_St14default_deleteISA_EESt4lessISF_ESaISt4pairIKSF_SJ_EEENSC_8GetStateEEESaISS_EEXadL_ZNS4_20setAllBodyNodeStatesEPS3_RKSU_EEXadL_ZNS4_20getAllBodyNodeStatesEPKS3_EEEENS8_INS9_10PropertiesES3_SB_INSD_ISE_ISF_SG_IS11_SH_IS11_EESL_SaISM_ISN_S13_EEENSC_13GetPropertiesEEESaIS18_EEXadL_ZNS4_24setAllBodyNodePropertiesESV_RKS1A_EEXadL_ZNS4_24getAllBodyNodePropertiesESZ_EEEEEENS7_IS3_NS8_ISA_S3_SU_XadL_ZNS4_17setAllJointStatesESV_SX_EEXadL_ZNS4_17getAllJointStatesESZ_EEEENS8_IS11_S3_S1A_XadL_ZNS4_21setAllJointPropertiesESV_S1C_EEXadL_ZNS4_21getAllJointPropertiesESZ_EEEEEEEEEEEE", boost::python::no_init)
;
}

/* footer */
