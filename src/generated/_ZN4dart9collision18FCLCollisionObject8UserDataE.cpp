#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart9collision18FCLCollisionObject8UserDataE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision").attr("FCLCollisionObject"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::FCLCollisionObject::UserData, ::boost::noncopyable >("UserData", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::collision::CollisionObject * collisionObject) -> dart::collision::FCLCollisionObject::UserData * { return new dart::collision::FCLCollisionObject::UserData(collisionObject); }, ::boost::python::default_call_policies(), (::boost::python::arg("collisionObject"))))
.def_readwrite("mCollisionObject", &dart::collision::FCLCollisionObject::UserData::mCollisionObject)
;
}

/* footer */
