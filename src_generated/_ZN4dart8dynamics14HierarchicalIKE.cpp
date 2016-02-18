#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics14HierarchicalIKE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::HierarchicalIK, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("HierarchicalIK", boost::python::no_init)
.def("solve", static_cast<bool (dart::dynamics::HierarchicalIK::*)(bool)>(&dart::dynamics::HierarchicalIK::solve), (::boost::python::arg("_applySolution")))
.def("solve", static_cast<bool (dart::dynamics::HierarchicalIK::*)(Eigen::VectorXd &, bool)>(&dart::dynamics::HierarchicalIK::solve), (::boost::python::arg("positions"), ::boost::python::arg("_applySolution")))
.def("clone", static_cast<std::shared_ptr<dart::dynamics::HierarchicalIK> (dart::dynamics::HierarchicalIK::*)(const dart::dynamics::SkeletonPtr &) const>(&dart::dynamics::HierarchicalIK::clone), (::boost::python::arg("_newSkel")))
.def("setObjective", static_cast<void (dart::dynamics::HierarchicalIK::*)(const std::shared_ptr<dart::optimizer::Function> &)>(&dart::dynamics::HierarchicalIK::setObjective), (::boost::python::arg("_objective")))
.def("getObjective", static_cast<const std::shared_ptr<dart::optimizer::Function> &(dart::dynamics::HierarchicalIK::*)()>(&dart::dynamics::HierarchicalIK::getObjective), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getObjective", static_cast<std::shared_ptr<const dart::optimizer::Function> (dart::dynamics::HierarchicalIK::*)() const>(&dart::dynamics::HierarchicalIK::getObjective))
.def("setNullSpaceObjective", static_cast<void (dart::dynamics::HierarchicalIK::*)(const std::shared_ptr<dart::optimizer::Function> &)>(&dart::dynamics::HierarchicalIK::setNullSpaceObjective), (::boost::python::arg("_nsObjective")))
.def("getNullSpaceObjective", static_cast<const std::shared_ptr<dart::optimizer::Function> &(dart::dynamics::HierarchicalIK::*)()>(&dart::dynamics::HierarchicalIK::getNullSpaceObjective), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getNullSpaceObjective", static_cast<std::shared_ptr<const dart::optimizer::Function> (dart::dynamics::HierarchicalIK::*)() const>(&dart::dynamics::HierarchicalIK::getNullSpaceObjective))
.def("hasNullSpaceObjective", static_cast<bool (dart::dynamics::HierarchicalIK::*)() const>(&dart::dynamics::HierarchicalIK::hasNullSpaceObjective))
.def("getProblem", static_cast<const std::shared_ptr<dart::optimizer::Problem> &(dart::dynamics::HierarchicalIK::*)()>(&dart::dynamics::HierarchicalIK::getProblem), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getProblem", static_cast<std::shared_ptr<const dart::optimizer::Problem> (dart::dynamics::HierarchicalIK::*)() const>(&dart::dynamics::HierarchicalIK::getProblem))
.def("resetProblem", static_cast<void (dart::dynamics::HierarchicalIK::*)(bool)>(&dart::dynamics::HierarchicalIK::resetProblem), (::boost::python::arg("_clearSeeds")))
.def("setSolver", static_cast<void (dart::dynamics::HierarchicalIK::*)(const std::shared_ptr<dart::optimizer::Solver> &)>(&dart::dynamics::HierarchicalIK::setSolver), (::boost::python::arg("_newSolver")))
.def("getSolver", static_cast<const std::shared_ptr<dart::optimizer::Solver> &(dart::dynamics::HierarchicalIK::*)()>(&dart::dynamics::HierarchicalIK::getSolver), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getSolver", static_cast<std::shared_ptr<const dart::optimizer::Solver> (dart::dynamics::HierarchicalIK::*)() const>(&dart::dynamics::HierarchicalIK::getSolver))
.def("refreshIKHierarchy", static_cast<void (dart::dynamics::HierarchicalIK::*)()>(&dart::dynamics::HierarchicalIK::refreshIKHierarchy))
.def("computeNullSpaces", static_cast<const std::vector<Eigen::MatrixXd> &(dart::dynamics::HierarchicalIK::*)() const>(&dart::dynamics::HierarchicalIK::computeNullSpaces), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPositions", static_cast<Eigen::VectorXd (dart::dynamics::HierarchicalIK::*)() const>(&dart::dynamics::HierarchicalIK::getPositions))
.def("setPositions", static_cast<void (dart::dynamics::HierarchicalIK::*)(const Eigen::VectorXd &)>(&dart::dynamics::HierarchicalIK::setPositions), (::boost::python::arg("_q")))
.def("getSkeleton", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::HierarchicalIK::*)()>(&dart::dynamics::HierarchicalIK::getSkeleton))
.def("getAffiliation", static_cast<dart::dynamics::SkeletonPtr (dart::dynamics::HierarchicalIK::*)()>(&dart::dynamics::HierarchicalIK::getAffiliation))
.def("clearCaches", static_cast<void (dart::dynamics::HierarchicalIK::*)()>(&dart::dynamics::HierarchicalIK::clearCaches))
;
}

/* footer */
