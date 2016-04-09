#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10simulation5WorldE_docstring[] = R"CHIMERA_STRING( class World
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World5cloneEv_docstring[] = R"CHIMERA_STRING( Create a clone of this World. All Skeletons and SimpleFrames that are held
 by this World will be copied over.
 Note that the states of the Skeletons will not be transferred over to this
 clone [TODO: copy the states as well]
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World7setNameERKSs_docstring[] = R"CHIMERA_STRING( Set the name of this World
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World7getNameEv_docstring[] = R"CHIMERA_STRING( Get the name of this World
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World10setGravityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set gravity
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World10getGravityEv_docstring[] = R"CHIMERA_STRING( Get gravity
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World11setTimeStepEd_docstring[] = R"CHIMERA_STRING( Set time step
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World11getTimeStepEv_docstring[] = R"CHIMERA_STRING( Get time step
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World11getSkeletonEm_docstring[] = R"CHIMERA_STRING( Get the indexed skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World11getSkeletonERKSs_docstring[] = R"CHIMERA_STRING( Find a Skeleton by name
 
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World15getNumSkeletonsEv_docstring[] = R"CHIMERA_STRING( Get the number of skeletons
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World11addSkeletonERKSt10shared_ptrINS_8dynamics8SkeletonEE_docstring[] = R"CHIMERA_STRING( Add a skeleton to this world
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World14removeSkeletonERKSt10shared_ptrINS_8dynamics8SkeletonEE_docstring[] = R"CHIMERA_STRING( Remove a skeleton from this world
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World18removeAllSkeletonsEv_docstring[] = R"CHIMERA_STRING( Remove all the skeletons in this world, and return a set of shared
 pointers to them, in case you want to recycle them
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World8getIndexEi_docstring[] = R"CHIMERA_STRING( Get the dof index for the indexed skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World14getSimpleFrameEm_docstring[] = R"CHIMERA_STRING( Get the indexed Entity
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World14getSimpleFrameERKSs_docstring[] = R"CHIMERA_STRING( Find an Entity by name
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World18getNumSimpleFramesEv_docstring[] = R"CHIMERA_STRING( Get the number of Entities
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World14addSimpleFrameERKSt10shared_ptrINS_8dynamics11SimpleFrameEE_docstring[] = R"CHIMERA_STRING( Add an Entity to this world
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World17removeSimpleFrameERKSt10shared_ptrINS_8dynamics11SimpleFrameEE_docstring[] = R"CHIMERA_STRING( Remove a SimpleFrame from this world
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World21removeAllSimpleFramesEv_docstring[] = R"CHIMERA_STRING( Remove all SimpleFrames in this world, and return a set of shared
 pointers to them, in case you want to recycle them
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World14checkCollisionEb_docstring[] = R"CHIMERA_STRING( Return whether there is any collision between bodies
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World5resetEv_docstring[] = R"CHIMERA_STRING( Reset the time, frame counter and recorded histories
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World4stepEb_docstring[] = R"CHIMERA_STRING( Calculate the dynamics and integrate the world for one step
 
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World7setTimeEd_docstring[] = R"CHIMERA_STRING( Set current time
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World7getTimeEv_docstring[] = R"CHIMERA_STRING( Get current time
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World12getSimFramesEv_docstring[] = R"CHIMERA_STRING( Get the number of simulated frames
 TODO(MXG): I think the name of this function is much too similar to
 getSimpleFrame()
)CHIMERA_STRING";

constexpr char _ZNK4dart10simulation5World19getConstraintSolverEv_docstring[] = R"CHIMERA_STRING( Get the constraint solver
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World4bakeEv_docstring[] = R"CHIMERA_STRING( Bake simulated current state and store it into mRecording
)CHIMERA_STRING";

constexpr char _ZN4dart10simulation5World12getRecordingEv_docstring[] = R"CHIMERA_STRING( Get recording
)CHIMERA_STRING";


} // namespace

void _ZN4dart10simulation5WorldE()
{
::boost::python::object parent_object(::boost::python::scope().attr("simulation"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::simulation::World, ::boost::python::bases<dart::common::Subject > >("World", _ZN4dart10simulation5WorldE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::simulation::World * { return new dart::simulation::World(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::simulation::World * { return new dart::simulation::World(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("clone", [](const dart::simulation::World *self) -> std::shared_ptr<dart::simulation::World> { return self->clone(); }, _ZNK4dart10simulation5World5cloneEv_docstring)
.def("setName", [](dart::simulation::World *self, const std::string & _newName) -> const std::string & { return self->setName(_newName); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart10simulation5World7setNameERKSs_docstring, (::boost::python::arg("_newName")))
.def("getName", [](const dart::simulation::World *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart10simulation5World7getNameEv_docstring)
.def("setGravity", [](dart::simulation::World *self, const Eigen::Vector3d & _gravity) -> void { return self->setGravity(_gravity); }, _ZN4dart10simulation5World10setGravityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_gravity")))
.def("getGravity", [](const dart::simulation::World *self) -> const Eigen::Vector3d & { return self->getGravity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart10simulation5World10getGravityEv_docstring)
.def("setTimeStep", [](dart::simulation::World *self, double _timeStep) -> void { return self->setTimeStep(_timeStep); }, _ZN4dart10simulation5World11setTimeStepEd_docstring, (::boost::python::arg("_timeStep")))
.def("getTimeStep", [](const dart::simulation::World *self) -> double { return self->getTimeStep(); }, _ZNK4dart10simulation5World11getTimeStepEv_docstring)
.def("getSkeleton", [](const dart::simulation::World *self, std::size_t _index) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(_index); }, _ZNK4dart10simulation5World11getSkeletonEm_docstring, (::boost::python::arg("_index")))
.def("getSkeleton", [](const dart::simulation::World *self, const std::string & _name) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(_name); }, _ZNK4dart10simulation5World11getSkeletonERKSs_docstring, (::boost::python::arg("_name")))
.def("getNumSkeletons", [](const dart::simulation::World *self) -> std::size_t { return self->getNumSkeletons(); }, _ZNK4dart10simulation5World15getNumSkeletonsEv_docstring)
.def("addSkeleton", [](dart::simulation::World *self, const dart::dynamics::SkeletonPtr & _skeleton) -> std::string { return self->addSkeleton(_skeleton); }, _ZN4dart10simulation5World11addSkeletonERKSt10shared_ptrINS_8dynamics8SkeletonEE_docstring, (::boost::python::arg("_skeleton")))
.def("removeSkeleton", [](dart::simulation::World *self, const dart::dynamics::SkeletonPtr & _skeleton) -> void { return self->removeSkeleton(_skeleton); }, _ZN4dart10simulation5World14removeSkeletonERKSt10shared_ptrINS_8dynamics8SkeletonEE_docstring, (::boost::python::arg("_skeleton")))
.def("removeAllSkeletons", [](dart::simulation::World *self) -> std::set<dart::dynamics::SkeletonPtr> { return self->removeAllSkeletons(); }, _ZN4dart10simulation5World18removeAllSkeletonsEv_docstring)
.def("getIndex", [](const dart::simulation::World *self, int _index) -> int { return self->getIndex(_index); }, _ZNK4dart10simulation5World8getIndexEi_docstring, (::boost::python::arg("_index")))
.def("getSimpleFrame", [](const dart::simulation::World *self, std::size_t _index) -> dart::dynamics::SimpleFramePtr { return self->getSimpleFrame(_index); }, _ZNK4dart10simulation5World14getSimpleFrameEm_docstring, (::boost::python::arg("_index")))
.def("getSimpleFrame", [](const dart::simulation::World *self, const std::string & _name) -> dart::dynamics::SimpleFramePtr { return self->getSimpleFrame(_name); }, _ZNK4dart10simulation5World14getSimpleFrameERKSs_docstring, (::boost::python::arg("_name")))
.def("getNumSimpleFrames", [](const dart::simulation::World *self) -> std::size_t { return self->getNumSimpleFrames(); }, _ZNK4dart10simulation5World18getNumSimpleFramesEv_docstring)
.def("addSimpleFrame", [](dart::simulation::World *self, const dart::dynamics::SimpleFramePtr & _frame) -> std::string { return self->addSimpleFrame(_frame); }, _ZN4dart10simulation5World14addSimpleFrameERKSt10shared_ptrINS_8dynamics11SimpleFrameEE_docstring, (::boost::python::arg("_frame")))
.def("removeSimpleFrame", [](dart::simulation::World *self, const dart::dynamics::SimpleFramePtr & _frame) -> void { return self->removeSimpleFrame(_frame); }, _ZN4dart10simulation5World17removeSimpleFrameERKSt10shared_ptrINS_8dynamics11SimpleFrameEE_docstring, (::boost::python::arg("_frame")))
.def("removeAllSimpleFrames", [](dart::simulation::World *self) -> std::set<dart::dynamics::SimpleFramePtr> { return self->removeAllSimpleFrames(); }, _ZN4dart10simulation5World21removeAllSimpleFramesEv_docstring)
.def("checkCollision", [](dart::simulation::World *self) -> bool { return self->checkCollision(); }, _ZN4dart10simulation5World14checkCollisionEb_docstring)
.def("checkCollision", [](dart::simulation::World *self, bool _checkAllCollisions) -> bool { return self->checkCollision(_checkAllCollisions); }, _ZN4dart10simulation5World14checkCollisionEb_docstring, (::boost::python::arg("_checkAllCollisions")))
.def("reset", [](dart::simulation::World *self) -> void { return self->reset(); }, _ZN4dart10simulation5World5resetEv_docstring)
.def("step", [](dart::simulation::World *self) -> void { return self->step(); }, _ZN4dart10simulation5World4stepEb_docstring)
.def("step", [](dart::simulation::World *self, bool _resetCommand) -> void { return self->step(_resetCommand); }, _ZN4dart10simulation5World4stepEb_docstring, (::boost::python::arg("_resetCommand")))
.def("setTime", [](dart::simulation::World *self, double _time) -> void { return self->setTime(_time); }, _ZN4dart10simulation5World7setTimeEd_docstring, (::boost::python::arg("_time")))
.def("getTime", [](const dart::simulation::World *self) -> double { return self->getTime(); }, _ZNK4dart10simulation5World7getTimeEv_docstring)
.def("getSimFrames", [](const dart::simulation::World *self) -> int { return self->getSimFrames(); }, _ZNK4dart10simulation5World12getSimFramesEv_docstring)
.def("getConstraintSolver", [](const dart::simulation::World *self) -> dart::constraint::ConstraintSolver * { return self->getConstraintSolver(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZNK4dart10simulation5World19getConstraintSolverEv_docstring)
.def("bake", [](dart::simulation::World *self) -> void { return self->bake(); }, _ZN4dart10simulation5World4bakeEv_docstring)
.def("getRecording", [](dart::simulation::World *self) -> dart::simulation::Recording * { return self->getRecording(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart10simulation5World12getRecordingEv_docstring)
.def_readonly("onNameChanged", &dart::simulation::World::onNameChanged)
;
}

/* footer */
