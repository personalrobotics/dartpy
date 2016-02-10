#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematicsE()
{
::boost::python::class_<dart::dynamics::InverseKinematics, ::boost::noncopyable, std::shared_ptr<dart::dynamics::InverseKinematics>, ::boost::python::bases<dart::common::Subject > >("InverseKinematics", boost::python::no_init)
.def("create", static_cast<dart::dynamics::InverseKinematicsPtr (*)(dart::dynamics::JacobianNode *)>(&dart::dynamics::InverseKinematics::create), (::boost::python::arg("_node")))
.def("solve", static_cast<bool (dart::dynamics::InverseKinematics::*)(bool)>(&dart::dynamics::InverseKinematics::solve), (::boost::python::arg("_applySolution") = true))
.def("solve", static_cast<bool (dart::dynamics::InverseKinematics::*)(Eigen::VectorXd &, bool)>(&dart::dynamics::InverseKinematics::solve), (::boost::python::arg("positions"), ::boost::python::arg("_applySolution") = true))
.def("clone", static_cast<dart::dynamics::InverseKinematicsPtr (dart::dynamics::InverseKinematics::*)(dart::dynamics::JacobianNode *) const>(&dart::dynamics::InverseKinematics::clone), (::boost::python::arg("_newNode")))
.def("setActive", static_cast<void (dart::dynamics::InverseKinematics::*)(bool)>(&dart::dynamics::InverseKinematics::setActive), (::boost::python::arg("_active") = true))
.def("setInactive", static_cast<void (dart::dynamics::InverseKinematics::*)()>(&dart::dynamics::InverseKinematics::setInactive))
.def("isActive", static_cast<bool (dart::dynamics::InverseKinematics::*)() const>(&dart::dynamics::InverseKinematics::isActive))
.def("setHierarchyLevel", static_cast<void (dart::dynamics::InverseKinematics::*)(std::size_t)>(&dart::dynamics::InverseKinematics::setHierarchyLevel), (::boost::python::arg("_level")))
.def("getHierarchyLevel", static_cast<std::size_t (dart::dynamics::InverseKinematics::*)() const>(&dart::dynamics::InverseKinematics::getHierarchyLevel))
.def("useChain", static_cast<void (dart::dynamics::InverseKinematics::*)()>(&dart::dynamics::InverseKinematics::useChain))
.def("useWholeBody", static_cast<void (dart::dynamics::InverseKinematics::*)()>(&dart::dynamics::InverseKinematics::useWholeBody))
.def("setDofs", static_cast<void (dart::dynamics::InverseKinematics::*)(const std::vector<std::size_t> &)>(&dart::dynamics::InverseKinematics::setDofs), (::boost::python::arg("_dofs")))
.def("setObjective", static_cast<void (dart::dynamics::InverseKinematics::*)(const std::shared_ptr<dart::optimizer::Function> &)>(&dart::dynamics::InverseKinematics::setObjective), (::boost::python::arg("_objective")))
.def("getObjective", static_cast<const std::shared_ptr<dart::optimizer::Function> &(dart::dynamics::InverseKinematics::*)()>(&dart::dynamics::InverseKinematics::getObjective), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getObjective", static_cast<std::shared_ptr<const dart::optimizer::Function> (dart::dynamics::InverseKinematics::*)() const>(&dart::dynamics::InverseKinematics::getObjective))
.def("setNullSpaceObjective", static_cast<void (dart::dynamics::InverseKinematics::*)(const std::shared_ptr<dart::optimizer::Function> &)>(&dart::dynamics::InverseKinematics::setNullSpaceObjective), (::boost::python::arg("_nsObjective")))
.def("getNullSpaceObjective", static_cast<const std::shared_ptr<dart::optimizer::Function> &(dart::dynamics::InverseKinematics::*)()>(&dart::dynamics::InverseKinematics::getNullSpaceObjective), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getNullSpaceObjective", static_cast<std::shared_ptr<const dart::optimizer::Function> (dart::dynamics::InverseKinematics::*)() const>(&dart::dynamics::InverseKinematics::getNullSpaceObjective))
.def("hasNullSpaceObjective", static_cast<bool (dart::dynamics::InverseKinematics::*)() const>(&dart::dynamics::InverseKinematics::hasNullSpaceObjective))
.def("getProblem", static_cast<const std::shared_ptr<dart::optimizer::Problem> &(dart::dynamics::InverseKinematics::*)()>(&dart::dynamics::InverseKinematics::getProblem), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getProblem", static_cast<std::shared_ptr<const dart::optimizer::Problem> (dart::dynamics::InverseKinematics::*)() const>(&dart::dynamics::InverseKinematics::getProblem))
.def("resetProblem", static_cast<void (dart::dynamics::InverseKinematics::*)(bool)>(&dart::dynamics::InverseKinematics::resetProblem), (::boost::python::arg("_clearSeeds") = false))
.def("setSolver", static_cast<void (dart::dynamics::InverseKinematics::*)(const std::shared_ptr<dart::optimizer::Solver> &)>(&dart::dynamics::InverseKinematics::setSolver), (::boost::python::arg("_newSolver")))
.def("getSolver", static_cast<const std::shared_ptr<dart::optimizer::Solver> &(dart::dynamics::InverseKinematics::*)()>(&dart::dynamics::InverseKinematics::getSolver), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getSolver", static_cast<std::shared_ptr<const dart::optimizer::Solver> (dart::dynamics::InverseKinematics::*)() const>(&dart::dynamics::InverseKinematics::getSolver))
.def("setOffset", static_cast<void (dart::dynamics::InverseKinematics::*)(const Eigen::Vector3d &)>(&dart::dynamics::InverseKinematics::setOffset), (::boost::python::arg("_offset")))
.def("getOffset", static_cast<const Eigen::Vector3d &(dart::dynamics::InverseKinematics::*)() const>(&dart::dynamics::InverseKinematics::getOffset), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("hasOffset", static_cast<bool (dart::dynamics::InverseKinematics::*)() const>(&dart::dynamics::InverseKinematics::hasOffset))
.def("setTarget", static_cast<void (dart::dynamics::InverseKinematics::*)(std::shared_ptr<dart::dynamics::SimpleFrame>)>(&dart::dynamics::InverseKinematics::setTarget), (::boost::python::arg("_newTarget")))
.def("getTarget", static_cast<std::shared_ptr<dart::dynamics::SimpleFrame> (dart::dynamics::InverseKinematics::*)()>(&dart::dynamics::InverseKinematics::getTarget))
.def("getNode", static_cast<dart::dynamics::JacobianNode *(dart::dynamics::InverseKinematics::*)()>(&dart::dynamics::InverseKinematics::getNode), ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getAffiliation", static_cast<dart::dynamics::JacobianNode *(dart::dynamics::InverseKinematics::*)()>(&dart::dynamics::InverseKinematics::getAffiliation), ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("computeJacobian", static_cast<const dart::math::Jacobian &(dart::dynamics::InverseKinematics::*)() const>(&dart::dynamics::InverseKinematics::computeJacobian), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPositions", static_cast<Eigen::VectorXd (dart::dynamics::InverseKinematics::*)() const>(&dart::dynamics::InverseKinematics::getPositions))
.def("setPositions", static_cast<void (dart::dynamics::InverseKinematics::*)(const Eigen::VectorXd &)>(&dart::dynamics::InverseKinematics::setPositions), (::boost::python::arg("_q")))
.def("clearCaches", static_cast<void (dart::dynamics::InverseKinematics::*)()>(&dart::dynamics::InverseKinematics::clearCaches))
.staticmethod("create")
;
}

/* footer */
