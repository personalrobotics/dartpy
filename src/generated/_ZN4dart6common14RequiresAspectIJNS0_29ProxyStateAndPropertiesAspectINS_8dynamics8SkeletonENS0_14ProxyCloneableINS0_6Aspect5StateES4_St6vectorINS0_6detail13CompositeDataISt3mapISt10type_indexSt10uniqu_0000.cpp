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

void _ZN4dart6common14RequiresAspectIJNS0_29ProxyStateAndPropertiesAspectINS_8dynamics8SkeletonENS0_14ProxyCloneableINS0_6Aspect5StateES4_St6vectorINS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrIS7_St14default_deleteIS7_EESt4lessISC_ESaISt4pairIKSC_SG_EEENS9_8GetStateEEESaISP_EEXadL_ZNS3_6detail20setAllBodyNodeStatesEPS4_RKSR_EEXadL_ZNSS_20getAllBodyNodeStatesEPKS4_EEEENS5_INS6_10PropertiesES4_S8_INSA_ISB_ISC_SD_ISZ_SE_ISZ_EESI_SaISJ_ISK_S11_EEENS9_13GetPropertiesEEESaIS16_EEXadL_ZNSS_24setAllBodyNodePropertiesEST_RKS18_EEXadL_ZNSS_24getAllBodyNodePropertiesESX_EEEEEENS2_IS4_NS5_IS7_S4_SR_XadL_ZNSS_17setAllJointStatesEST_SV_EEXadL_ZNSS_17getAllJointStatesESX_EEEENS5_ISZ_S4_S18_XadL_ZNSS_21setAllJointPropertiesEST_S1A_EEXadL_ZNSS_21getAllJointPropertiesESX_EEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> >, dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > >, ::boost::noncopyable, ::boost::python::bases<dart::common::CompositeJoiner<dart::common::Virtual<dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> > > >, dart::common::Virtual<dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > > > > > >("_ZN4dart6common14RequiresAspectIJNS0_29ProxyStateAndPropertiesAspectINS_8dynamics8SkeletonENS0_14ProxyCloneableINS0_6Aspect5StateES4_St6vectorINS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrIS7_St14default_deleteIS7_EESt4lessISC_ESaISt4pairIKSC_SG_EEENS9_8GetStateEEESaISP_EEXadL_ZNS3_6detail20setAllBodyNodeStatesEPS4_RKSR_EEXadL_ZNSS_20getAllBodyNodeStatesEPKS4_EEEENS5_INS6_10PropertiesES4_S8_INSA_ISB_ISC_SD_ISZ_SE_ISZ_EESI_SaISJ_ISK_S11_EEENS9_13GetPropertiesEEESaIS16_EEXadL_ZNSS_24setAllBodyNodePropertiesEST_RKS18_EEXadL_ZNSS_24getAllBodyNodePropertiesESX_EEEEEENS2_IS4_NS5_IS7_S4_SR_XadL_ZNSS_17setAllJointStatesEST_SV_EEXadL_ZNSS_17getAllJointStatesESX_EEEENS5_ISZ_S4_S18_XadL_ZNSS_21setAllJointPropertiesEST_S1A_EEXadL_ZNSS_21getAllJointPropertiesESX_EEEEEEEEE", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> >, dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > > * { return new dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> >, dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */