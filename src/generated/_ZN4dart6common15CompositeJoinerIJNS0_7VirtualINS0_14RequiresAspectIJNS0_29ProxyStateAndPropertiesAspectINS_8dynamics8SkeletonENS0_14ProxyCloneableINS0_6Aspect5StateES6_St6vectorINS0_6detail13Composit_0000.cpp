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

void _ZN4dart6common15CompositeJoinerIJNS0_7VirtualINS0_14RequiresAspectIJNS0_29ProxyStateAndPropertiesAspectINS_8dynamics8SkeletonENS0_14ProxyCloneableINS0_6Aspect5StateES6_St6vectorINS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrIS9_St14default_deleteIS9_EESt4lessISE_ESaISt4pairIKSE_SI_EEENSB_8GetStateEEESaISR_EEXadL_ZNS5_6detail20setAllBodyNodeStatesEPS6_RKST_EEXadL_ZNSU_20getAllBodyNodeStatesEPKS6_EEEENS7_INS8_10PropertiesES6_SA_INSC_ISD_ISE_SF_IS11_SG_IS11_EESK_SaISL_ISM_S13_EEENSB_13GetPropertiesEEESaIS18_EEXadL_ZNSU_24setAllBodyNodePropertiesESV_RKS1A_EEXadL_ZNSU_24getAllBodyNodePropertiesESZ_EEEEEEEEEEENS2_INS3_IJNS4_IS6_NS7_IS9_S6_ST_XadL_ZNSU_17setAllJointStatesESV_SX_EEXadL_ZNSU_17getAllJointStatesESZ_EEEENS7_IS11_S6_S1A_XadL_ZNSU_21setAllJointPropertiesESV_S1C_EEXadL_ZNSU_21getAllJointPropertiesESZ_EEEEEEEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::CompositeJoiner<dart::common::Virtual<dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> > > >, dart::common::Virtual<dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > > > >, ::boost::noncopyable >("_ZN4dart6common15CompositeJoinerIJNS0_7VirtualINS0_14RequiresAspectIJNS0_29ProxyStateAndPropertiesAspectINS_8dynamics8SkeletonENS0_14ProxyCloneableINS0_6Aspect5StateES6_St6vectorINS0_6detail13CompositeDataISt3mapISt10type_indexSt10unique_ptrIS9_St14default_deleteIS9_EESt4lessISE_ESaISt4pairIKSE_SI_EEENSB_8GetStateEEESaISR_EEXadL_ZNS5_6detail20setAllBodyNodeStatesEPS6_RKST_EEXadL_ZNSU_20getAllBodyNodeStatesEPKS6_EEEENS7_INS8_10PropertiesES6_SA_INSC_ISD_ISE_SF_IS11_SG_IS11_EESK_SaISL_ISM_S13_EEENSB_13GetPropertiesEEESaIS18_EEXadL_ZNSU_24setAllBodyNodePropertiesESV_RKS1A_EEXadL_ZNSU_24getAllBodyNodePropertiesESZ_EEEEEEEEEEENS2_INS3_IJNS4_IS6_NS7_IS9_S6_ST_XadL_ZNSU_17setAllJointStatesESV_SX_EEXadL_ZNSU_17getAllJointStatesESZ_EEEENS7_IS11_S6_S1A_XadL_ZNSU_21setAllJointPropertiesESV_S1C_EEXadL_ZNSU_21getAllJointPropertiesESZ_EEEEEEEEEEEEEE", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::CompositeJoiner<dart::common::Virtual<dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> > > >, dart::common::Virtual<dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > > > > * { return new dart::common::CompositeJoiner<dart::common::Virtual<dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllBodyNodeStates, &dart::dynamics::detail::getAllBodyNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllBodyNodeProperties, &dart::dynamics::detail::getAllBodyNodeProperties> > > >, dart::common::Virtual<dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::Skeleton, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::State, std::default_delete<dart::common::Aspect::State> > > > >, dart::common::detail::GetState> > >, &dart::dynamics::detail::setAllJointStates, &dart::dynamics::detail::getAllJointStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::Skeleton, std::vector<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, std::allocator<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties> > >, &dart::dynamics::detail::setAllJointProperties, &dart::dynamics::detail::getAllJointProperties> > > > >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
