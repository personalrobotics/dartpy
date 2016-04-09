#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart9collision23BodyNodeCollisionFilterE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::BodyNodeCollisionFilter, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionFilter > >("BodyNodeCollisionFilter", boost::python::no_init)
.def("needCollision", [](const dart::collision::BodyNodeCollisionFilter *self, const dart::collision::CollisionObject * object1, const dart::collision::CollisionObject * object2) -> bool { return self->needCollision(object1, object2); }, (::boost::python::arg("object1"), ::boost::python::arg("object2")))
.def("isAdjacentBodies", [](const dart::collision::BodyNodeCollisionFilter *self, const dart::dynamics::BodyNode * bodyNode1, const dart::dynamics::BodyNode * bodyNode2) -> bool { return self->isAdjacentBodies(bodyNode1, bodyNode2); }, (::boost::python::arg("bodyNode1"), ::boost::python::arg("bodyNode2")))
;
}

/* footer */
