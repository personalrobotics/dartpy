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

void _ZN4dart8dynamics17InverseKinematicsE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics, ::boost::noncopyable, std::shared_ptr<dart::dynamics::InverseKinematics>, ::boost::python::bases<dart::common::Subject > >("InverseKinematics", boost::python::no_init)
.def("solve", [](dart::dynamics::InverseKinematics *self) -> bool { return self->solve(); })
.def("solve", [](dart::dynamics::InverseKinematics *self, bool _applySolution) -> bool { return self->solve(_applySolution); }, (::boost::python::arg("_applySolution")))
.def("solve", [](dart::dynamics::InverseKinematics *self, Eigen::VectorXd & positions) -> bool { return self->solve(positions); }, (::boost::python::arg("positions")))
.def("solve", [](dart::dynamics::InverseKinematics *self, Eigen::VectorXd & positions, bool _applySolution) -> bool { return self->solve(positions, _applySolution); }, (::boost::python::arg("positions"), ::boost::python::arg("_applySolution")))
.def("clone", [](const dart::dynamics::InverseKinematics *self, dart::dynamics::JacobianNode * _newNode) -> dart::dynamics::InverseKinematicsPtr { return self->clone(_newNode); }, (::boost::python::arg("_newNode")))
.def("setActive", [](dart::dynamics::InverseKinematics *self) -> void { return self->setActive(); })
.def("setActive", [](dart::dynamics::InverseKinematics *self, bool _active) -> void { return self->setActive(_active); }, (::boost::python::arg("_active")))
.def("setInactive", [](dart::dynamics::InverseKinematics *self) -> void { return self->setInactive(); })
.def("isActive", [](const dart::dynamics::InverseKinematics *self) -> bool { return self->isActive(); })
.def("setHierarchyLevel", [](dart::dynamics::InverseKinematics *self, std::size_t _level) -> void { return self->setHierarchyLevel(_level); }, (::boost::python::arg("_level")))
.def("getHierarchyLevel", [](const dart::dynamics::InverseKinematics *self) -> std::size_t { return self->getHierarchyLevel(); })
.def("useChain", [](dart::dynamics::InverseKinematics *self) -> void { return self->useChain(); })
.def("useWholeBody", [](dart::dynamics::InverseKinematics *self) -> void { return self->useWholeBody(); })
.def("setDofs", [](dart::dynamics::InverseKinematics *self, const std::vector<std::size_t> & _dofs) -> void { return self->setDofs(_dofs); }, (::boost::python::arg("_dofs")))
.def("getDofs", [](const dart::dynamics::InverseKinematics *self) -> const std::vector<std::size_t> & { return self->getDofs(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getDofMap", [](const dart::dynamics::InverseKinematics *self) -> const std::vector<int> & { return self->getDofMap(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setObjective", [](dart::dynamics::InverseKinematics *self, const std::shared_ptr<dart::optimizer::Function> & _objective) -> void { return self->setObjective(_objective); }, (::boost::python::arg("_objective")))
.def("getObjective", [](dart::dynamics::InverseKinematics *self) -> const std::shared_ptr<dart::optimizer::Function> & { return self->getObjective(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getObjective", [](const dart::dynamics::InverseKinematics *self) -> std::shared_ptr<const dart::optimizer::Function> { return self->getObjective(); })
.def("setNullSpaceObjective", [](dart::dynamics::InverseKinematics *self, const std::shared_ptr<dart::optimizer::Function> & _nsObjective) -> void { return self->setNullSpaceObjective(_nsObjective); }, (::boost::python::arg("_nsObjective")))
.def("getNullSpaceObjective", [](dart::dynamics::InverseKinematics *self) -> const std::shared_ptr<dart::optimizer::Function> & { return self->getNullSpaceObjective(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getNullSpaceObjective", [](const dart::dynamics::InverseKinematics *self) -> std::shared_ptr<const dart::optimizer::Function> { return self->getNullSpaceObjective(); })
.def("hasNullSpaceObjective", [](const dart::dynamics::InverseKinematics *self) -> bool { return self->hasNullSpaceObjective(); })
.def("getErrorMethod", [](dart::dynamics::InverseKinematics *self) -> dart::dynamics::InverseKinematics::ErrorMethod & { return self->getErrorMethod(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("getGradientMethod", [](dart::dynamics::InverseKinematics *self) -> dart::dynamics::InverseKinematics::GradientMethod & { return self->getGradientMethod(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("getAnalytical", [](dart::dynamics::InverseKinematics *self) -> dart::dynamics::InverseKinematics::Analytical * { return self->getAnalytical(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("getProblem", [](dart::dynamics::InverseKinematics *self) -> const std::shared_ptr<dart::optimizer::Problem> & { return self->getProblem(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getProblem", [](const dart::dynamics::InverseKinematics *self) -> std::shared_ptr<const dart::optimizer::Problem> { return self->getProblem(); })
.def("resetProblem", [](dart::dynamics::InverseKinematics *self) -> void { return self->resetProblem(); })
.def("resetProblem", [](dart::dynamics::InverseKinematics *self, bool _clearSeeds) -> void { return self->resetProblem(_clearSeeds); }, (::boost::python::arg("_clearSeeds")))
.def("setSolver", [](dart::dynamics::InverseKinematics *self, const std::shared_ptr<dart::optimizer::Solver> & _newSolver) -> void { return self->setSolver(_newSolver); }, (::boost::python::arg("_newSolver")))
.def("getSolver", [](dart::dynamics::InverseKinematics *self) -> const std::shared_ptr<dart::optimizer::Solver> & { return self->getSolver(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getSolver", [](const dart::dynamics::InverseKinematics *self) -> std::shared_ptr<const dart::optimizer::Solver> { return self->getSolver(); })
.def("setOffset", [](dart::dynamics::InverseKinematics *self) -> void { return self->setOffset(); })
.def("setOffset", [](dart::dynamics::InverseKinematics *self, const Eigen::Vector3d & _offset) -> void { return self->setOffset(_offset); }, (::boost::python::arg("_offset")))
.def("getOffset", [](const dart::dynamics::InverseKinematics *self) -> const Eigen::Vector3d & { return self->getOffset(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("hasOffset", [](const dart::dynamics::InverseKinematics *self) -> bool { return self->hasOffset(); })
.def("setTarget", [](dart::dynamics::InverseKinematics *self, std::shared_ptr<dart::dynamics::SimpleFrame> _newTarget) -> void { return self->setTarget(_newTarget); }, (::boost::python::arg("_newTarget")))
.def("getTarget", [](dart::dynamics::InverseKinematics *self) -> std::shared_ptr<dart::dynamics::SimpleFrame> { return self->getTarget(); })
.def("getTarget", [](const dart::dynamics::InverseKinematics *self) -> std::shared_ptr<const dart::dynamics::SimpleFrame> { return self->getTarget(); })
.def("getNode", [](dart::dynamics::InverseKinematics *self) -> dart::dynamics::JacobianNode * { return self->getNode(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("getAffiliation", [](dart::dynamics::InverseKinematics *self) -> dart::dynamics::JacobianNode * { return self->getAffiliation(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("computeJacobian", [](const dart::dynamics::InverseKinematics *self) -> const dart::math::Jacobian & { return self->computeJacobian(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getPositions", [](const dart::dynamics::InverseKinematics *self) -> Eigen::VectorXd { return self->getPositions(); })
.def("setPositions", [](dart::dynamics::InverseKinematics *self, const Eigen::VectorXd & _q) -> void { return self->setPositions(_q); }, (::boost::python::arg("_q")))
.def("clearCaches", [](dart::dynamics::InverseKinematics *self) -> void { return self->clearCaches(); })
.def("create", [](dart::dynamics::JacobianNode * _node) -> dart::dynamics::InverseKinematicsPtr { return dart::dynamics::InverseKinematics::create(_node); }, (::boost::python::arg("_node")))
.staticmethod("create")
;
}

/* footer */
