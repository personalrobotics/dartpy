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

void _ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10FixedFrameENSL_10ShapeFrameEEE11DelegateTagE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail").attr("_ZN4dart6common6detail11ComposeDataINS1_13CompositeDataISt3mapISt10type_indexSt10unique_ptrINS0_6Aspect10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEENS1_13GetPropertiesEEESJ_JNS_8dynamics10FixedFrameENSL_10ShapeFrameEEEE"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::common::detail::ComposeData<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, dart::common::detail::GetProperties, dart::dynamics::FixedFrame, dart::dynamics::ShapeFrame>::DelegateTag>("DelegateTag")
.value("Delegate", dart::common::detail::ComposeData<dart::common::detail::CompositeData<std::map<std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::Aspect::Properties, std::default_delete<dart::common::Aspect::Properties> > > > >, dart::common::detail::GetProperties>, dart::common::detail::GetProperties, dart::dynamics::FixedFrame, dart::dynamics::ShapeFrame>::DelegateTag::Delegate)
;
}

/* footer */
