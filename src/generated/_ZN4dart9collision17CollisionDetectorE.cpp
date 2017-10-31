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

void _ZN4dart9collision17CollisionDetectorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::collision::CollisionDetector, ::boost::noncopyable >("CollisionDetector", boost::python::no_init)
.def("cloneWithoutCollisionObjects", [](dart::collision::CollisionDetector *self) -> std::shared_ptr<dart::collision::CollisionDetector> { return self->cloneWithoutCollisionObjects(); })
.def("getType", [](const dart::collision::CollisionDetector *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("createCollisionGroup", [](dart::collision::CollisionDetector *self) -> std::unique_ptr<dart::collision::CollisionGroup> { return self->createCollisionGroup(); })
.def("createCollisionGroupAsSharedPtr", [](dart::collision::CollisionDetector *self) -> std::shared_ptr<dart::collision::CollisionGroup> { return self->createCollisionGroupAsSharedPtr(); })
.def("collide", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group) -> bool { return self->collide(group); }, (::boost::python::arg("group")))
.def("collide", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group, const dart::collision::CollisionOption & option) -> bool { return self->collide(group, option); }, (::boost::python::arg("group"), ::boost::python::arg("option")))
.def("collide", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group, const dart::collision::CollisionOption & option, dart::collision::CollisionResult * result) -> bool { return self->collide(group, option, result); }, (::boost::python::arg("group"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("collide", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2) -> bool { return self->collide(group1, group2); }, (::boost::python::arg("group1"), ::boost::python::arg("group2")))
.def("collide", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2, const dart::collision::CollisionOption & option) -> bool { return self->collide(group1, group2, option); }, (::boost::python::arg("group1"), ::boost::python::arg("group2"), ::boost::python::arg("option")))
.def("collide", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2, const dart::collision::CollisionOption & option, dart::collision::CollisionResult * result) -> bool { return self->collide(group1, group2, option, result); }, (::boost::python::arg("group1"), ::boost::python::arg("group2"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("distance", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group) -> double { return self->distance(group); }, (::boost::python::arg("group")))
.def("distance", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group, const dart::collision::DistanceOption & option) -> double { return self->distance(group, option); }, (::boost::python::arg("group"), ::boost::python::arg("option")))
.def("distance", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group, const dart::collision::DistanceOption & option, dart::collision::DistanceResult * result) -> double { return self->distance(group, option, result); }, (::boost::python::arg("group"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("distance", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2) -> double { return self->distance(group1, group2); }, (::boost::python::arg("group1"), ::boost::python::arg("group2")))
.def("distance", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2, const dart::collision::DistanceOption & option) -> double { return self->distance(group1, group2, option); }, (::boost::python::arg("group1"), ::boost::python::arg("group2"), ::boost::python::arg("option")))
.def("distance", [](dart::collision::CollisionDetector *self, dart::collision::CollisionGroup * group1, dart::collision::CollisionGroup * group2, const dart::collision::DistanceOption & option, dart::collision::DistanceResult * result) -> double { return self->distance(group1, group2, option, result); }, (::boost::python::arg("group1"), ::boost::python::arg("group2"), ::boost::python::arg("option"), ::boost::python::arg("result")))
.def("getFactory", []() -> dart::collision::CollisionDetector::Factory * { return dart::collision::CollisionDetector::getFactory(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.staticmethod("getFactory")
;
}

/* footer */
