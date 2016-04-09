#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics14CollisionAddonEEEEEE_docstring[] = R"CHIMERA_STRING( This class is used to have CRTP functions inherit their template parameters
 virtually instead of directly.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics14CollisionAddonEEEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon> >, ::boost::noncopyable, ::boost::python::bases<dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon> > >("VirtualSpecializedForAddonCollisionAddon", _ZN4dart6common7VirtualINS0_19SpecializedForAddonIJNS_8dynamics14CollisionAddonEEEEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon> > * { return new dart::common::Virtual<dart::common::SpecializedForAddon<dart::dynamics::CollisionAddon> >(); }, ::boost::python::default_call_policies()))
;
}

/* footer */
