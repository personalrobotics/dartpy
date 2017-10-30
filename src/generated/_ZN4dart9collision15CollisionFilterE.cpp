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

void _ZN4dart9collision15CollisionFilterE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::CollisionFilter, ::boost::noncopyable >("CollisionFilter", boost::python::no_init)
.def("needCollision", [](const dart::collision::CollisionFilter *self, const dart::collision::CollisionObject * object1, const dart::collision::CollisionObject * object2) -> bool { return self->needCollision(object1, object2); }, (::boost::python::arg("object1"), ::boost::python::arg("object2")))
.def("ignoresCollision", [](const dart::collision::CollisionFilter *self, const dart::collision::CollisionObject * object1, const dart::collision::CollisionObject * object2) -> bool { return self->ignoresCollision(object1, object2); }, (::boost::python::arg("object1"), ::boost::python::arg("object2")))
;
}

/* footer */
