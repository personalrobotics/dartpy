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

void _ZN4dart9collision22BodyNodeDistanceFilterE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::BodyNodeDistanceFilter, ::boost::noncopyable, ::boost::python::bases<dart::collision::DistanceFilter > >("BodyNodeDistanceFilter", boost::python::no_init)
.def("needDistance", [](const dart::collision::BodyNodeDistanceFilter *self, const dart::collision::CollisionObject * object1, const dart::collision::CollisionObject * object2) -> bool { return self->needDistance(object1, object2); }, (::boost::python::arg("object1"), ::boost::python::arg("object2")))
.def("areAdjacentBodies", [](const dart::collision::BodyNodeDistanceFilter *self, const dart::dynamics::BodyNode * bodyNode1, const dart::dynamics::BodyNode * bodyNode2) -> bool { return self->areAdjacentBodies(bodyNode1, bodyNode2); }, (::boost::python::arg("bodyNode1"), ::boost::python::arg("bodyNode2")))
;
}

/* footer */
