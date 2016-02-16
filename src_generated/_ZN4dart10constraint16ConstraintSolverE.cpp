#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint16ConstraintSolverE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::ConstraintSolver, ::boost::noncopyable >("ConstraintSolver", boost::python::no_init)
.def(::boost::python::init<double>((::boost::python::arg("_timeStep"))))
.def("addSkeleton", static_cast<void (dart::constraint::ConstraintSolver::*)(const dart::dynamics::SkeletonPtr &)>(&dart::constraint::ConstraintSolver::addSkeleton), (::boost::python::arg("_skeleton")))
.def("addSkeletons", static_cast<void (dart::constraint::ConstraintSolver::*)(const std::vector<dart::dynamics::SkeletonPtr> &)>(&dart::constraint::ConstraintSolver::addSkeletons), (::boost::python::arg("_skeletons")))
.def("removeSkeleton", static_cast<void (dart::constraint::ConstraintSolver::*)(const dart::dynamics::SkeletonPtr &)>(&dart::constraint::ConstraintSolver::removeSkeleton), (::boost::python::arg("_skeleton")))
.def("removeSkeletons", static_cast<void (dart::constraint::ConstraintSolver::*)(const std::vector<dart::dynamics::SkeletonPtr> &)>(&dart::constraint::ConstraintSolver::removeSkeletons), (::boost::python::arg("_skeletons")))
.def("removeAllSkeletons", static_cast<void (dart::constraint::ConstraintSolver::*)()>(&dart::constraint::ConstraintSolver::removeAllSkeletons))
.def("removeAllConstraints", static_cast<void (dart::constraint::ConstraintSolver::*)()>(&dart::constraint::ConstraintSolver::removeAllConstraints))
.def("setTimeStep", static_cast<void (dart::constraint::ConstraintSolver::*)(double)>(&dart::constraint::ConstraintSolver::setTimeStep), (::boost::python::arg("_timeStep")))
.def("getTimeStep", static_cast<double (dart::constraint::ConstraintSolver::*)() const>(&dart::constraint::ConstraintSolver::getTimeStep))
.def("setCollisionDetector", static_cast<void (dart::constraint::ConstraintSolver::*)(dart::collision::CollisionDetector *)>(&dart::constraint::ConstraintSolver::setCollisionDetector), (::boost::python::arg("_collisionDetector")))
.def("solve", static_cast<void (dart::constraint::ConstraintSolver::*)()>(&dart::constraint::ConstraintSolver::solve))
;
}

/* footer */
