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

void _ZN4dart9collision23BodyNodeCollisionFilterE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::BodyNodeCollisionFilter, ::boost::python::bases<dart::collision::CollisionFilter > >("BodyNodeCollisionFilter", boost::python::no_init)
.def("addBodyNodePairToBlackList", [](dart::collision::BodyNodeCollisionFilter *self, const dart::dynamics::BodyNode * bodyNode1, const dart::dynamics::BodyNode * bodyNode2) -> void { return self->addBodyNodePairToBlackList(bodyNode1, bodyNode2); }, (::boost::python::arg("bodyNode1"), ::boost::python::arg("bodyNode2")))
.def("removeBodyNodePairFromBlackList", [](dart::collision::BodyNodeCollisionFilter *self, const dart::dynamics::BodyNode * bodyNode1, const dart::dynamics::BodyNode * bodyNode2) -> void { return self->removeBodyNodePairFromBlackList(bodyNode1, bodyNode2); }, (::boost::python::arg("bodyNode1"), ::boost::python::arg("bodyNode2")))
.def("removeAllBodyNodePairsFromBlackList", [](dart::collision::BodyNodeCollisionFilter *self) -> void { return self->removeAllBodyNodePairsFromBlackList(); })
.def("ignoresCollision", [](const dart::collision::BodyNodeCollisionFilter *self, const dart::collision::CollisionObject * object1, const dart::collision::CollisionObject * object2) -> bool { return self->ignoresCollision(object1, object2); }, (::boost::python::arg("object1"), ::boost::python::arg("object2")))
;
}

/* footer */
