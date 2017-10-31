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

void _ZN4dart10constraint16ConstraintSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ConstraintSolver, ::boost::noncopyable >("ConstraintSolver", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](double timeStep) -> dart::constraint::ConstraintSolver * { return new dart::constraint::ConstraintSolver(timeStep); }, ::boost::python::default_call_policies(), (::boost::python::arg("timeStep"))))
.def("addSkeleton", [](dart::constraint::ConstraintSolver *self, const dart::dynamics::SkeletonPtr & skeleton) -> void { return self->addSkeleton(skeleton); }, (::boost::python::arg("skeleton")))
.def("addSkeletons", [](dart::constraint::ConstraintSolver *self, const std::vector<dart::dynamics::SkeletonPtr> & skeletons) -> void { return self->addSkeletons(skeletons); }, (::boost::python::arg("skeletons")))
.def("removeSkeleton", [](dart::constraint::ConstraintSolver *self, const dart::dynamics::SkeletonPtr & skeleton) -> void { return self->removeSkeleton(skeleton); }, (::boost::python::arg("skeleton")))
.def("removeSkeletons", [](dart::constraint::ConstraintSolver *self, const std::vector<dart::dynamics::SkeletonPtr> & skeletons) -> void { return self->removeSkeletons(skeletons); }, (::boost::python::arg("skeletons")))
.def("removeAllSkeletons", [](dart::constraint::ConstraintSolver *self) -> void { return self->removeAllSkeletons(); })
.def("addConstraint", [](dart::constraint::ConstraintSolver *self, const dart::constraint::ConstraintBasePtr & _constraint) -> void { return self->addConstraint(_constraint); }, (::boost::python::arg("_constraint")))
.def("removeConstraint", [](dart::constraint::ConstraintSolver *self, const dart::constraint::ConstraintBasePtr & _constraint) -> void { return self->removeConstraint(_constraint); }, (::boost::python::arg("_constraint")))
.def("removeAllConstraints", [](dart::constraint::ConstraintSolver *self) -> void { return self->removeAllConstraints(); })
.def("clearLastCollisionResult", [](dart::constraint::ConstraintSolver *self) -> void { return self->clearLastCollisionResult(); })
.def("setTimeStep", [](dart::constraint::ConstraintSolver *self, double _timeStep) -> void { return self->setTimeStep(_timeStep); }, (::boost::python::arg("_timeStep")))
.def("getTimeStep", [](const dart::constraint::ConstraintSolver *self) -> double { return self->getTimeStep(); })
.def("setCollisionDetector", [](dart::constraint::ConstraintSolver *self, dart::collision::CollisionDetector * collisionDetector) -> void { return self->setCollisionDetector(collisionDetector); }, (::boost::python::arg("collisionDetector")))
.def("setCollisionDetector", [](dart::constraint::ConstraintSolver *self, const std::shared_ptr<dart::collision::CollisionDetector> & collisionDetector) -> void { return self->setCollisionDetector(collisionDetector); }, (::boost::python::arg("collisionDetector")))
.def("getCollisionDetector", [](dart::constraint::ConstraintSolver *self) -> dart::collision::CollisionDetectorPtr { return self->getCollisionDetector(); })
.def("getCollisionDetector", [](const dart::constraint::ConstraintSolver *self) -> dart::collision::ConstCollisionDetectorPtr { return self->getCollisionDetector(); })
.def("getCollisionGroup", [](dart::constraint::ConstraintSolver *self) -> dart::collision::CollisionGroupPtr { return self->getCollisionGroup(); })
.def("getCollisionGroup", [](const dart::constraint::ConstraintSolver *self) -> dart::collision::ConstCollisionGroupPtr { return self->getCollisionGroup(); })
.def("getLCPSolver", [](const dart::constraint::ConstraintSolver *self) -> dart::constraint::LCPSolver * { return self->getLCPSolver(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("solve", [](dart::constraint::ConstraintSolver *self) -> void { return self->solve(); })
;
}

/* footer */
