#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common19SpecializedForAddonIJNS_8dynamics14CollisionAddonENS2_13DynamicsAddonEEEE_docstring[] = R"CHIMERA_STRING( This is the variadic version of the SpecializedForAddon class which
 allows you to include arbitrarily many specialized types in the
 specialization.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common19SpecializedForAddonIJNS_8dynamics14CollisionAddonENS2_13DynamicsAddonEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon, dart::dynamics::DynamicsAddon>, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon> >, dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::DynamicsAddon> > > > >("SpecializedForAddon_CollisionAddon_DynamicsAddon", _ZN4dart6common19SpecializedForAddonIJNS_8dynamics14CollisionAddonENS2_13DynamicsAddonEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon, dart::dynamics::DynamicsAddon> * { return new dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon, dart::dynamics::DynamicsAddon>(); }, ::boost::python::default_call_policies()))
;
}

/* footer */