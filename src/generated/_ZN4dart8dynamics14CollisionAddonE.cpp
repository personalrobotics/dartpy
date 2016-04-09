#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics14CollisionAddonE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedProperties generates implementations of the Property
 managing functions for an Addon class.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14CollisionAddon12isCollidableEv_docstring[] = R"CHIMERA_STRING( Return true if this body can collide with others bodies
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics14CollisionAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::CollisionAddon, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::ShapeFrame>, dart::dynamics::CollisionAddon, dart::dynamics::detail::CollisionAddonProperties, dart::dynamics::ShapeFrame, &dart::common::detail::NoOp> > >("CollisionAddon", _ZN4dart8dynamics14CollisionAddonE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::dynamics::CollisionAddon * { return new dart::dynamics::CollisionAddon(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::ShapeFrame>, dart::dynamics::CollisionAddon, dart::dynamics::detail::CollisionAddonProperties, dart::dynamics::ShapeFrame, &dart::common::detail::NoOp>::PropertiesData & properties) -> dart::dynamics::CollisionAddon * { return new dart::dynamics::CollisionAddon(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setCollidable", [](dart::dynamics::CollisionAddon *self, const bool & value) -> void { return self->setCollidable(value); }, (::boost::python::arg("value")))
.def("getCollidable", [](const dart::dynamics::CollisionAddon *self) -> const bool & { return self->getCollidable(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCollidable", [](const dart::dynamics::CollisionAddon *self) -> bool { return self->isCollidable(); }, _ZNK4dart8dynamics14CollisionAddon12isCollidableEv_docstring)
;
}

/* footer */
