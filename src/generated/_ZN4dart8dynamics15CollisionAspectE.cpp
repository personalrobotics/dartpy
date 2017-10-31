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

void _ZN4dart8dynamics15CollisionAspectE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::CollisionAspect, ::boost::noncopyable >("CollisionAspect", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::CollisionAspect * { return new dart::dynamics::CollisionAspect(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::detail::AspectWithVersionedProperties<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::dynamics::CollisionAspect, dart::dynamics::detail::CollisionAspectProperties, dart::dynamics::ShapeFrame, &dart::common::detail::NoOp>::PropertiesData & properties) -> dart::dynamics::CollisionAspect * { return new dart::dynamics::CollisionAspect(properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("properties"))))
.def("setCollidable", [](dart::dynamics::CollisionAspect *self, const bool & value) -> void { return self->setCollidable(value); }, (::boost::python::arg("value")))
.def("getCollidable", [](const dart::dynamics::CollisionAspect *self) -> const bool & { return self->getCollidable(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCollidable", [](const dart::dynamics::CollisionAspect *self) -> bool { return self->isCollidable(); })
;
}

/* footer */
