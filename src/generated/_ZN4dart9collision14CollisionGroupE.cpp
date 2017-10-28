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

void _ZN4dart9collision14CollisionGroupE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::CollisionGroup, ::boost::noncopyable >("CollisionGroup", boost::python::no_init)
.def("getCollisionDetector", [](dart::collision::CollisionGroup *self) -> dart::collision::CollisionDetectorPtr { return self->getCollisionDetector(); })
.def("getCollisionDetector", [](const dart::collision::CollisionGroup *self) -> dart::collision::ConstCollisionDetectorPtr { return self->getCollisionDetector(); })
.def("addShapeFrame", [](dart::collision::CollisionGroup *self, const dart::dynamics::ShapeFrame * shapeFrame) -> void { return self->addShapeFrame(shapeFrame); }, (::boost::python::arg("shapeFrame")))
.def("addShapeFrames", [](dart::collision::CollisionGroup *self, const std::vector<const dart::dynamics::ShapeFrame *> & shapeFrames) -> void { return self->addShapeFrames(shapeFrames); }, (::boost::python::arg("shapeFrames")))
.def("addShapeFramesOf", [](dart::collision::CollisionGroup *self) -> void { return self->addShapeFramesOf(); })
.def("removeShapeFrame", [](dart::collision::CollisionGroup *self, const dart::dynamics::ShapeFrame * shapeFrame) -> void { return self->removeShapeFrame(shapeFrame); }, (::boost::python::arg("shapeFrame")))
.def("removeShapeFrames", [](dart::collision::CollisionGroup *self, const std::vector<const dart::dynamics::ShapeFrame *> & shapeFrames) -> void { return self->removeShapeFrames(shapeFrames); }, (::boost::python::arg("shapeFrames")))
.def("removeShapeFramesOf", [](dart::collision::CollisionGroup *self) -> void { return self->removeShapeFramesOf(); })
.def("removeAllShapeFrames", [](dart::collision::CollisionGroup *self) -> void { return self->removeAllShapeFrames(); })
.def("hasShapeFrame", [](const dart::collision::CollisionGroup *self, const dart::dynamics::ShapeFrame * shapeFrame) -> bool { return self->hasShapeFrame(shapeFrame); }, (::boost::python::arg("shapeFrame")))
.def("getNumShapeFrames", [](const dart::collision::CollisionGroup *self) -> std::size_t { return self->getNumShapeFrames(); })
.def("collide", [](dart::collision::CollisionGroup *self) -> bool { return self->collide(); })
.def("collide", [](dart::collision::CollisionGroup *self, const dart::collision::CollisionOption & option) -> bool { return self->collide(option); }, (::boost::python::arg("option")))
.def("collide", [](dart::collision::CollisionGroup *self, const dart::collision::CollisionOption & option, dart::collision::CollisionResult * result) -> bool { return self->collide(option, result); }, (::boost::python::arg("option"), ::boost::python::arg("result")))
.def("collide", [](dart::collision::CollisionGroup *self, dart::collision::CollisionGroup * otherGroup) -> bool { return self->collide(otherGroup); }, (::boost::python::arg("otherGroup")))
.def("collide", [](dart::collision::CollisionGroup *self, dart::collision::CollisionGroup * otherGroup, const dart::collision::CollisionOption & option) -> bool { return self->collide(otherGroup, option); }, (::boost::python::arg("otherGroup"), ::boost::python::arg("option")))
.def("collide", [](dart::collision::CollisionGroup *self, dart::collision::CollisionGroup * otherGroup, const dart::collision::CollisionOption & option, dart::collision::CollisionResult * result) -> bool { return self->collide(otherGroup, option, result); }, (::boost::python::arg("otherGroup"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("distance", [](dart::collision::CollisionGroup *self) -> double { return self->distance(); })
.def("distance", [](dart::collision::CollisionGroup *self, const dart::collision::DistanceOption & option) -> double { return self->distance(option); }, (::boost::python::arg("option")))
.def("distance", [](dart::collision::CollisionGroup *self, const dart::collision::DistanceOption & option, dart::collision::DistanceResult * result) -> double { return self->distance(option, result); }, (::boost::python::arg("option"), ::boost::python::arg("result")))
.def("distance", [](dart::collision::CollisionGroup *self, dart::collision::CollisionGroup * otherGroup) -> double { return self->distance(otherGroup); }, (::boost::python::arg("otherGroup")))
.def("distance", [](dart::collision::CollisionGroup *self, dart::collision::CollisionGroup * otherGroup, const dart::collision::DistanceOption & option) -> double { return self->distance(otherGroup, option); }, (::boost::python::arg("otherGroup"), ::boost::python::arg("option")))
.def("distance", [](dart::collision::CollisionGroup *self, dart::collision::CollisionGroup * otherGroup, const dart::collision::DistanceOption & option, dart::collision::DistanceResult * result) -> double { return self->distance(otherGroup, option, result); }, (::boost::python::arg("otherGroup"), ::boost::python::arg("option"), ::boost::python::arg("result")))
;
}

/* footer */
