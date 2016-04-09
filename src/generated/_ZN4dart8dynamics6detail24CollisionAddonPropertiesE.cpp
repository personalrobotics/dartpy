#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics6detail24CollisionAddonPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::CollisionAddonProperties >("CollisionAddonProperties", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::detail::CollisionAddonProperties * { return new dart::dynamics::detail::CollisionAddonProperties(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const bool collidable) -> dart::dynamics::detail::CollisionAddonProperties * { return new dart::dynamics::detail::CollisionAddonProperties(collidable); }, ::boost::python::default_call_policies(), (::boost::python::arg("collidable"))))
.def_readwrite("mCollidable", &dart::dynamics::detail::CollisionAddonProperties::mCollidable)
;
}

/* footer */
