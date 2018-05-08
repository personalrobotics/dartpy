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

void _ZN4dart9collision24CompositeCollisionFilterE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::CompositeCollisionFilter, ::boost::python::bases<dart::collision::CollisionFilter > >("CompositeCollisionFilter", boost::python::no_init)
.def("addCollisionFilter", [](dart::collision::CompositeCollisionFilter *self, const dart::collision::CollisionFilter * filter) -> void { return self->addCollisionFilter(filter); }, (::boost::python::arg("filter")))
.def("removeCollisionFilter", [](dart::collision::CompositeCollisionFilter *self, const dart::collision::CollisionFilter * filter) -> void { return self->removeCollisionFilter(filter); }, (::boost::python::arg("filter")))
.def("removeAllCollisionFilters", [](dart::collision::CompositeCollisionFilter *self) -> void { return self->removeAllCollisionFilters(); })
.def("ignoresCollision", [](const dart::collision::CompositeCollisionFilter *self, const dart::collision::CollisionObject * object1, const dart::collision::CollisionObject * object2) -> bool { return self->ignoresCollision(object1, object2); }, (::boost::python::arg("object1"), ::boost::python::arg("object2")))
;
}

/* footer */
