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

void _ZN4dart10simulation5WorldE()
{
::boost::python::object parent_object(::boost::python::scope().attr("simulation"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::simulation::World, dart::simulation::WorldPtr, ::boost::python::bases<dart::common::Subject > >("World", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::simulation::World * { return new dart::simulation::World(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::simulation::World * { return new dart::simulation::World(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("clone", [](const dart::simulation::World *self) -> std::shared_ptr<dart::simulation::World> { return self->clone(); })
.def("setName", [](dart::simulation::World *self, const std::string & _newName) -> const std::string & { return self->setName(_newName); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >(), (::boost::python::arg("_newName")))
.def("getName", [](const dart::simulation::World *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setGravity", [](dart::simulation::World *self, const Eigen::Vector3d & _gravity) -> void { return self->setGravity(_gravity); }, (::boost::python::arg("_gravity")))
.def("getGravity", [](const dart::simulation::World *self) -> const Eigen::Vector3d & { return self->getGravity(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setTimeStep", [](dart::simulation::World *self, double _timeStep) -> void { return self->setTimeStep(_timeStep); }, (::boost::python::arg("_timeStep")))
.def("getTimeStep", [](const dart::simulation::World *self) -> double { return self->getTimeStep(); })
.def("getSkeleton", [](const dart::simulation::World *self, std::size_t _index) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(_index); }, (::boost::python::arg("_index")))
.def("getSkeleton", [](const dart::simulation::World *self, const std::string & _name) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(_name); }, (::boost::python::arg("_name")))
.def("getNumSkeletons", [](const dart::simulation::World *self) -> std::size_t { return self->getNumSkeletons(); })
.def("addSkeleton", [](dart::simulation::World *self, const dart::dynamics::SkeletonPtr & _skeleton) -> std::string { return self->addSkeleton(_skeleton); }, (::boost::python::arg("_skeleton")))
.def("removeSkeleton", [](dart::simulation::World *self, const dart::dynamics::SkeletonPtr & _skeleton) -> void { return self->removeSkeleton(_skeleton); }, (::boost::python::arg("_skeleton")))
.def("removeAllSkeletons", [](dart::simulation::World *self) -> std::set<dart::dynamics::SkeletonPtr> { return self->removeAllSkeletons(); })
.def("hasSkeleton", [](const dart::simulation::World *self, const dart::dynamics::ConstSkeletonPtr & skeleton) -> bool { return self->hasSkeleton(skeleton); }, (::boost::python::arg("skeleton")))
.def("getIndex", [](const dart::simulation::World *self, int _index) -> int { return self->getIndex(_index); }, (::boost::python::arg("_index")))
.def("getSimpleFrame", [](const dart::simulation::World *self, std::size_t _index) -> dart::dynamics::SimpleFramePtr { return self->getSimpleFrame(_index); }, (::boost::python::arg("_index")))
.def("getSimpleFrame", [](const dart::simulation::World *self, const std::string & _name) -> dart::dynamics::SimpleFramePtr { return self->getSimpleFrame(_name); }, (::boost::python::arg("_name")))
.def("getNumSimpleFrames", [](const dart::simulation::World *self) -> std::size_t { return self->getNumSimpleFrames(); })
.def("addSimpleFrame", [](dart::simulation::World *self, const dart::dynamics::SimpleFramePtr & _frame) -> std::string { return self->addSimpleFrame(_frame); }, (::boost::python::arg("_frame")))
.def("removeSimpleFrame", [](dart::simulation::World *self, const dart::dynamics::SimpleFramePtr & _frame) -> void { return self->removeSimpleFrame(_frame); }, (::boost::python::arg("_frame")))
.def("removeAllSimpleFrames", [](dart::simulation::World *self) -> std::set<dart::dynamics::SimpleFramePtr> { return self->removeAllSimpleFrames(); })
.def("checkCollision", [](dart::simulation::World *self, bool checkAllCollisions) -> bool { return self->checkCollision(checkAllCollisions); }, (::boost::python::arg("checkAllCollisions")))
.def("checkCollision", [](dart::simulation::World *self) -> bool { return self->checkCollision(); })
.def("checkCollision", [](dart::simulation::World *self, const dart::collision::CollisionOption & option) -> bool { return self->checkCollision(option); }, (::boost::python::arg("option")))
.def("checkCollision", [](dart::simulation::World *self, const dart::collision::CollisionOption & option, dart::collision::CollisionResult * result) -> bool { return self->checkCollision(option, result); }, (::boost::python::arg("option"), ::boost::python::arg("result")))
.def("reset", [](dart::simulation::World *self) -> void { return self->reset(); })
.def("step", [](dart::simulation::World *self) -> void { return self->step(); })
.def("step", [](dart::simulation::World *self, bool _resetCommand) -> void { return self->step(_resetCommand); }, (::boost::python::arg("_resetCommand")))
.def("setTime", [](dart::simulation::World *self, double _time) -> void { return self->setTime(_time); }, (::boost::python::arg("_time")))
.def("getTime", [](const dart::simulation::World *self) -> double { return self->getTime(); })
.def("getSimFrames", [](const dart::simulation::World *self) -> int { return self->getSimFrames(); })
.def("getConstraintSolver", [](const dart::simulation::World *self) -> dart::constraint::ConstraintSolver * { return self->getConstraintSolver(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("bake", [](dart::simulation::World *self) -> void { return self->bake(); })
.def("getRecording", [](dart::simulation::World *self) -> dart::simulation::Recording * { return self->getRecording(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("create", []() -> std::shared_ptr<dart::simulation::World> { return dart::simulation::World::create(); })
.def("create", [](const std::string & name) -> std::shared_ptr<dart::simulation::World> { return dart::simulation::World::create(name); }, (::boost::python::arg("name")))
.staticmethod("create")
.def_readonly("onNameChanged", &dart::simulation::World::onNameChanged)
;
}

/* footer */
