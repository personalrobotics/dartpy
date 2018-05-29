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

void _ZN4dart6common15CompositeJoinerIJNS0_15EmbedPropertiesINS_8dynamics8SkeletonENS3_6detail24SkeletonAspectPropertiesEEENS0_14RequiresAspectIJNS0_29ProxyStateAndPropertiesAspectIS4_NS0_14ProxyCloneableINS0_6Aspect5StateES4_St6vectorINS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrISC_St14default_deleteISC_EESt4lessISH_ESaISt4pairIKSH_SL_EEENSE_8GetStateEEESaISU_EEXadL_ZNS5_20setAllBodyNodeStatesEPS4_RKSW_EEXadL_ZNS5_20getAllBodyNodeStatesEPKS4_EEEENSA_INSB_10PropertiesES4_SD_INSF_ISG_ISH_SI_IS13_SJ_IS13_EESN_SaISO_ISP_S15_EEENSE_13GetPropertiesEEESaIS1A_EEXadL_ZNS5_24setAllBodyNodePropertiesESX_RKS1C_EEXadL_ZNS5_24getAllBodyNodePropertiesES11_EEEEEENS9_IS4_NSA_ISC_S4_SW_XadL_ZNS5_17setAllJointStatesESX_SZ_EEXadL_ZNS5_17getAllJointStatesES11_EEEENSA_IS13_S4_S1C_XadL_ZNS5_21setAllJointPropertiesESX_S1E_EEXadL_ZNS5_21getAllJointPropertiesES11_EEEEEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::CompositeJoiner<dart::common::EmbedProperties<dart::dynamics::Skeleton, dart::dynamics::detail::SkeletonAspectProperties>, dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> >, dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > > >, ::boost::noncopyable, ::boost::python::bases<dart::common::EmbedProperties<dart::dynamics::Skeleton, dart::dynamics::detail::SkeletonAspectProperties>, dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> >, dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > > > >("_ZN4dart6common15CompositeJoinerIJNS0_15EmbedPropertiesINS_8dynamics8SkeletonENS3_6detail24SkeletonAspectPropertiesEEENS0_14RequiresAspectIJNS0_29ProxyStateAndPropertiesAspectIS4_NS0_14ProxyCloneableINS0_6Aspect5StateES4_St6vectorINS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrISC_St14default_deleteISC_EESt4lessISH_ESaISt4pairIKSH_SL_EEENSE_8GetStateEEESaISU_EEXadL_ZNS5_20setAllBodyNodeStatesEPS4_RKSW_EEXadL_ZNS5_20getAllBodyNodeStatesEPKS4_EEEENSA_INSB_10PropertiesES4_SD_INSF_ISG_ISH_SI_IS13_SJ_IS13_EESN_SaISO_ISP_S15_EEENSE_13GetPropertiesEEESaIS1A_EEXadL_ZNS5_24setAllBodyNodePropertiesESX_RKS1C_EEXadL_ZNS5_24getAllBodyNodePropertiesES11_EEEEEENS9_IS4_NSA_ISC_S4_SW_XadL_ZNS5_17setAllJointStatesESX_SZ_EEXadL_ZNS5_17getAllJointStatesES11_EEEENSA_IS13_S4_S1C_XadL_ZNS5_21setAllJointPropertiesESX_S1E_EEXadL_ZNS5_21getAllJointPropertiesES11_EEEEEEEEEEEE", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::CompositeJoiner<dart::common::EmbedProperties<dart::dynamics::Skeleton, dart::dynamics::detail::SkeletonAspectProperties>, dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> >, dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > > > * { return new dart::common::CompositeJoiner<dart::common::EmbedProperties<dart::dynamics::Skeleton, dart::dynamics::detail::SkeletonAspectProperties>, dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> >, dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > > >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
