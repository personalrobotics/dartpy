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

void _ZN4dart9collision20FCLCollisionDetectorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::FCLCollisionDetector, ::boost::noncopyable, ::boost::python::bases<dart::collision::CollisionDetector > >("FCLCollisionDetector", boost::python::no_init)
.def("cloneWithoutCollisionObjects", [](dart::collision::FCLCollisionDetector *self) -> std::shared_ptr<dart::collision::CollisionDetector> { return self->cloneWithoutCollisionObjects(); })
.def("getType", [](const dart::collision::FCLCollisionDetector *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("createCollisionGroup", [](dart::collision::FCLCollisionDetector *self) -> std::unique_ptr<dart::collision::CollisionGroup> { return self->createCollisionGroup(); })
.def("collide", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group) -> bool { return self->collide(group); }, (::boost::python::arg("group")))
.def("collide", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group, const dart::collision::CollisionOption & option) -> bool { return self->collide(group, option); }, (::boost::python::arg("group"), ::boost::python::arg("option")))
.def("collide", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group, const dart::collision::CollisionOption & option, dart::collision::CollisionResult * result) -> bool { return self->collide(group, option, result); }, (::boost::python::arg("group"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("collide", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2) -> bool { return self->collide(group1, group2); }, (::boost::python::arg("group1"), ::boost::python::arg("group2")))
.def("collide", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2, const dart::collision::CollisionOption & option) -> bool { return self->collide(group1, group2, option); }, (::boost::python::arg("group1"), ::boost::python::arg("group2"), ::boost::python::arg("option")))
.def("collide", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2, const dart::collision::CollisionOption & option, dart::collision::CollisionResult * result) -> bool { return self->collide(group1, group2, option, result); }, (::boost::python::arg("group1"), ::boost::python::arg("group2"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("distance", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group) -> double { return self->distance(group); }, (::boost::python::arg("group")))
.def("distance", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group, const dart::collision::DistanceOption & option) -> double { return self->distance(group, option); }, (::boost::python::arg("group"), ::boost::python::arg("option")))
.def("distance", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group, const dart::collision::DistanceOption & option, dart::collision::DistanceResult * result) -> double { return self->distance(group, option, result); }, (::boost::python::arg("group"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("distance", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2) -> double { return self->distance(group1, group2); }, (::boost::python::arg("group1"), ::boost::python::arg("group2")))
.def("distance", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2, const dart::collision::DistanceOption & option) -> double { return self->distance(group1, group2, option); }, (::boost::python::arg("group1"), ::boost::python::arg("group2"), ::boost::python::arg("option")))
.def("distance", [](dart::collision::FCLCollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2, const dart::collision::DistanceOption & option, dart::collision::DistanceResult * result) -> double { return self->distance(group1, group2, option, result); }, (::boost::python::arg("group1"), ::boost::python::arg("group2"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("setPrimitiveShapeType", [](dart::collision::FCLCollisionDetector *self, dart::collision::FCLCollisionDetector::PrimitiveShape type) -> void { return self->setPrimitiveShapeType(type); }, (::boost::python::arg("type")))
.def("getPrimitiveShapeType", [](const dart::collision::FCLCollisionDetector *self) -> dart::collision::FCLCollisionDetector::PrimitiveShape { return self->getPrimitiveShapeType(); })
.def("setContactPointComputationMethod", [](dart::collision::FCLCollisionDetector *self, dart::collision::FCLCollisionDetector::ContactPointComputationMethod method) -> void { return self->setContactPointComputationMethod(method); }, (::boost::python::arg("method")))
.def("getContactPointComputationMethod", [](const dart::collision::FCLCollisionDetector *self) -> dart::collision::FCLCollisionDetector::ContactPointComputationMethod { return self->getContactPointComputationMethod(); })
.def("create", []() -> std::shared_ptr<dart::collision::FCLCollisionDetector> { return dart::collision::FCLCollisionDetector::create(); })
.def("getStaticType", []() -> const std::string & { return dart::collision::FCLCollisionDetector::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("create")
.staticmethod("getStaticType")
;
}

/* footer */
