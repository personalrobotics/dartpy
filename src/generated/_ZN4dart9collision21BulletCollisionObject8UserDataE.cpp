#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart9collision21BulletCollisionObject8UserDataE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision").attr("BulletCollisionObject"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::BulletCollisionObject::UserData, ::boost::noncopyable >("UserData", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::collision::CollisionObject * collisionObject) -> dart::collision::BulletCollisionObject::UserData * { return new dart::collision::BulletCollisionObject::UserData(collisionObject); }, ::boost::python::default_call_policies(), (::boost::python::arg("collisionObject"))))
.def_readwrite("collisionObject", &dart::collision::BulletCollisionObject::UserData::collisionObject)
;
}

/* footer */
