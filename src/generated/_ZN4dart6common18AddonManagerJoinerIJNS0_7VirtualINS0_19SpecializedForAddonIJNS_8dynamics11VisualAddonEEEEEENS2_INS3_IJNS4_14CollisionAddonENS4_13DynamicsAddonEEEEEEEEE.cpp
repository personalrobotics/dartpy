#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common18AddonManagerJoinerIJNS0_7VirtualINS0_19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEEEENS2_INS3_IJNS4_14CollisionAddonENS4_13DynamicsAddonEEEEEEEEE_docstring[] = R"CHIMERA_STRING( AddonManagerJoiner allows classes that inherit from various
 SpecializedForAddon types to be inherited by a single derived class.
 This class solves the diamond-of-death problem for multiple
 SpecializedForAddon inheritance.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common18AddonManagerJoinerIJNS0_7VirtualINS0_19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEEEENS2_INS3_IJNS4_14CollisionAddonENS4_13DynamicsAddonEEEEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::AddonManagerJoiner<dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::VisualAddon> >, dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon, dart::dynamics::DynamicsAddon> > >, ::boost::noncopyable, ::boost::python::bases<dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::VisualAddon> >, dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon, dart::dynamics::DynamicsAddon> > > >("AddonManagerJoiner_VirtualSpecializedForAddonVisualAddon_VirtualSpecializedForAddonCollisionAddon_DynamicsAddon", _ZN4dart6common18AddonManagerJoinerIJNS0_7VirtualINS0_19SpecializedForAddonIJNS_8dynamics11VisualAddonEEEEEENS2_INS3_IJNS4_14CollisionAddonENS4_13DynamicsAddonEEEEEEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::AddonManagerJoiner<dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::VisualAddon> >, dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon, dart::dynamics::DynamicsAddon> > > * { return new dart::common::AddonManagerJoiner<dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::VisualAddon> >, dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon, dart::dynamics::DynamicsAddon> > >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
