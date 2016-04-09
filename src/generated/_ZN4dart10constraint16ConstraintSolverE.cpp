#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint16ConstraintSolverE_docstring[] = R"CHIMERA_STRING( ConstraintSolver manages constraints and computes constraint impulses
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver11addSkeletonERKSt10shared_ptrINS_8dynamics8SkeletonEE_docstring[] = R"CHIMERA_STRING( Add single skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver12addSkeletonsERKSt6vectorISt10shared_ptrINS_8dynamics8SkeletonEESaIS6_EE_docstring[] = R"CHIMERA_STRING( Add mutiple skeletons
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver14removeSkeletonERKSt10shared_ptrINS_8dynamics8SkeletonEE_docstring[] = R"CHIMERA_STRING( Remove single skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver15removeSkeletonsERKSt6vectorISt10shared_ptrINS_8dynamics8SkeletonEESaIS6_EE_docstring[] = R"CHIMERA_STRING( Remove multiple skeletons
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver18removeAllSkeletonsEv_docstring[] = R"CHIMERA_STRING( Remove all skeletons in this constraint solver
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver13addConstraintERKSt10shared_ptrINS0_14ConstraintBaseEE_docstring[] = R"CHIMERA_STRING( Add a constraint
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver16removeConstraintERKSt10shared_ptrINS0_14ConstraintBaseEE_docstring[] = R"CHIMERA_STRING( Remove a constraint
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver20removeAllConstraintsEv_docstring[] = R"CHIMERA_STRING( Remove all constraints
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver11setTimeStepEd_docstring[] = R"CHIMERA_STRING( Set time step
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint16ConstraintSolver11getTimeStepEv_docstring[] = R"CHIMERA_STRING( Get time step
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver20setCollisionDetectorEPNS_9collision17CollisionDetectorE_docstring[] = R"CHIMERA_STRING( Set collision detector. This function acquires ownership of the
 CollisionDetector passed as an argument. This method is deprecated in
 favor of the overload that accepts a std::shared_ptr.
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver20setCollisionDetectorERKSt10shared_ptrINS_9collision17CollisionDetectorEE_docstring[] = R"CHIMERA_STRING( Set collision detector
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver20getCollisionDetectorEv_docstring[] = R"CHIMERA_STRING( Get collision detector
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint16ConstraintSolver12getLCPSolverEv_docstring[] = R"CHIMERA_STRING( Get LCP solver
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint16ConstraintSolver5solveEv_docstring[] = R"CHIMERA_STRING( Solve constraint impulses and apply them to the skeletons
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint16ConstraintSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ConstraintSolver, ::boost::noncopyable >("ConstraintSolver", _ZN4dart10constraint16ConstraintSolverE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](double timeStep) -> dart::constraint::ConstraintSolver * { return new dart::constraint::ConstraintSolver(timeStep); }, ::boost::python::default_call_policies(), (::boost::python::arg("timeStep"))))
.def("addSkeleton", [](dart::constraint::ConstraintSolver *self, const dart::dynamics::SkeletonPtr & skeleton) -> void { return self->addSkeleton(skeleton); }, _ZN4dart10constraint16ConstraintSolver11addSkeletonERKSt10shared_ptrINS_8dynamics8SkeletonEE_docstring, (::boost::python::arg("skeleton")))
.def("addSkeletons", [](dart::constraint::ConstraintSolver *self, const std::vector<dart::dynamics::SkeletonPtr> & skeletons) -> void { return self->addSkeletons(skeletons); }, _ZN4dart10constraint16ConstraintSolver12addSkeletonsERKSt6vectorISt10shared_ptrINS_8dynamics8SkeletonEESaIS6_EE_docstring, (::boost::python::arg("skeletons")))
.def("removeSkeleton", [](dart::constraint::ConstraintSolver *self, const dart::dynamics::SkeletonPtr & skeleton) -> void { return self->removeSkeleton(skeleton); }, _ZN4dart10constraint16ConstraintSolver14removeSkeletonERKSt10shared_ptrINS_8dynamics8SkeletonEE_docstring, (::boost::python::arg("skeleton")))
.def("removeSkeletons", [](dart::constraint::ConstraintSolver *self, const std::vector<dart::dynamics::SkeletonPtr> & skeletons) -> void { return self->removeSkeletons(skeletons); }, _ZN4dart10constraint16ConstraintSolver15removeSkeletonsERKSt6vectorISt10shared_ptrINS_8dynamics8SkeletonEESaIS6_EE_docstring, (::boost::python::arg("skeletons")))
.def("removeAllSkeletons", [](dart::constraint::ConstraintSolver *self) -> void { return self->removeAllSkeletons(); }, _ZN4dart10constraint16ConstraintSolver18removeAllSkeletonsEv_docstring)
.def("addConstraint", [](dart::constraint::ConstraintSolver *self, const dart::constraint::ConstraintBasePtr & _constraint) -> void { return self->addConstraint(_constraint); }, _ZN4dart10constraint16ConstraintSolver13addConstraintERKSt10shared_ptrINS0_14ConstraintBaseEE_docstring, (::boost::python::arg("_constraint")))
.def("removeConstraint", [](dart::constraint::ConstraintSolver *self, const dart::constraint::ConstraintBasePtr & _constraint) -> void { return self->removeConstraint(_constraint); }, _ZN4dart10constraint16ConstraintSolver16removeConstraintERKSt10shared_ptrINS0_14ConstraintBaseEE_docstring, (::boost::python::arg("_constraint")))
.def("removeAllConstraints", [](dart::constraint::ConstraintSolver *self) -> void { return self->removeAllConstraints(); }, _ZN4dart10constraint16ConstraintSolver20removeAllConstraintsEv_docstring)
.def("setTimeStep", [](dart::constraint::ConstraintSolver *self, double _timeStep) -> void { return self->setTimeStep(_timeStep); }, _ZN4dart10constraint16ConstraintSolver11setTimeStepEd_docstring, (::boost::python::arg("_timeStep")))
.def("getTimeStep", [](const dart::constraint::ConstraintSolver *self) -> double { return self->getTimeStep(); }, _ZNK4dart10constraint16ConstraintSolver11getTimeStepEv_docstring)
.def("setCollisionDetector", [](dart::constraint::ConstraintSolver *self, dart::collision::CollisionDetector * collisionDetector) -> void { return self->setCollisionDetector(collisionDetector); }, _ZN4dart10constraint16ConstraintSolver20setCollisionDetectorEPNS_9collision17CollisionDetectorE_docstring, (::boost::python::arg("collisionDetector")))
.def("setCollisionDetector", [](dart::constraint::ConstraintSolver *self, const std::shared_ptr<dart::collision::CollisionDetector> & collisionDetector) -> void { return self->setCollisionDetector(collisionDetector); }, _ZN4dart10constraint16ConstraintSolver20setCollisionDetectorERKSt10shared_ptrINS_9collision17CollisionDetectorEE_docstring, (::boost::python::arg("collisionDetector")))
.def("getCollisionDetector", [](dart::constraint::ConstraintSolver *self) -> dart::collision::CollisionDetector * { return self->getCollisionDetector(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart10constraint16ConstraintSolver20getCollisionDetectorEv_docstring)
.def("getLCPSolver", [](const dart::constraint::ConstraintSolver *self) -> dart::constraint::LCPSolver * { return self->getLCPSolver(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZNK4dart10constraint16ConstraintSolver12getLCPSolverEv_docstring)
.def("solve", [](dart::constraint::ConstraintSolver *self) -> void { return self->solve(); }, _ZN4dart10constraint16ConstraintSolver5solveEv_docstring)
;
}

/* footer */
