#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart9collision21BulletCollisionObjectE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::BulletCollisionObject, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionObject > >("BulletCollisionObject", boost::python::no_init)
;
}

/* footer */
