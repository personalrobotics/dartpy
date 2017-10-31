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

void _ZN4dart9collision17FCLCollisionGroupE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::FCLCollisionGroup, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionGroup > >("FCLCollisionGroup", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const dart::collision::CollisionDetectorPtr & collisionDetector) -> dart::collision::FCLCollisionGroup * { return new dart::collision::FCLCollisionGroup(collisionDetector); }, ::boost::python::default_call_policies(), (::boost::python::arg("collisionDetector"))))
;
}

/* footer */
