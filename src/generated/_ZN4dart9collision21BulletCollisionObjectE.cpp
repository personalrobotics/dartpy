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

void _ZN4dart9collision21BulletCollisionObjectE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::BulletCollisionObject, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionObject > >("BulletCollisionObject", boost::python::no_init)
.def("getBulletCollisionObject", [](const dart::collision::BulletCollisionObject *self) -> const btCollisionObject * { return self->getBulletCollisionObject(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
;
}

/* footer */
