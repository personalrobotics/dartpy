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

void _ZN4dart8dynamics14HierarchicalIKE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::HierarchicalIK, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("HierarchicalIK", boost::python::no_init)
.def("solve", [](dart::dynamics::HierarchicalIK *self) -> bool { return self->solve(); })
.def("solve", [](dart::dynamics::HierarchicalIK *self, bool _applySolution) -> bool { return self->solve(_applySolution); }, (::boost::python::arg("_applySolution")))
.def("solve", [](dart::dynamics::HierarchicalIK *self, Eigen::VectorXd & positions) -> bool { return self->solve(positions); }, (::boost::python::arg("positions")))
.def("solve", [](dart::dynamics::HierarchicalIK *self, Eigen::VectorXd & positions, bool _applySolution) -> bool { return self->solve(positions, _applySolution); }, (::boost::python::arg("positions"), ::boost::python::arg("_applySolution")))
.def("clone", [](const dart::dynamics::HierarchicalIK *self, const dart::dynamics::SkeletonPtr & _newSkel) -> std::shared_ptr<dart::dynamics::HierarchicalIK> { return self->clone(_newSkel); }, (::boost::python::arg("_newSkel")))
.def("setObjective", [](dart::dynamics::HierarchicalIK *self, const std::shared_ptr<dart::optimizer::Function> & _objective) -> void { return self->setObjective(_objective); }, (::boost::python::arg("_objective")))
.def("getObjective", [](dart::dynamics::HierarchicalIK *self) -> const std::shared_ptr<dart::optimizer::Function> & { return self->getObjective(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getObjective", [](const dart::dynamics::HierarchicalIK *self) -> std::shared_ptr<const dart::optimizer::Function> { return self->getObjective(); })
.def("setNullSpaceObjective", [](dart::dynamics::HierarchicalIK *self, const std::shared_ptr<dart::optimizer::Function> & _nsObjective) -> void { return self->setNullSpaceObjective(_nsObjective); }, (::boost::python::arg("_nsObjective")))
.def("getNullSpaceObjective", [](dart::dynamics::HierarchicalIK *self) -> const std::shared_ptr<dart::optimizer::Function> & { return self->getNullSpaceObjective(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getNullSpaceObjective", [](const dart::dynamics::HierarchicalIK *self) -> std::shared_ptr<const dart::optimizer::Function> { return self->getNullSpaceObjective(); })
.def("hasNullSpaceObjective", [](const dart::dynamics::HierarchicalIK *self) -> bool { return self->hasNullSpaceObjective(); })
.def("getProblem", [](dart::dynamics::HierarchicalIK *self) -> const std::shared_ptr<dart::optimizer::Problem> & { return self->getProblem(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getProblem", [](const dart::dynamics::HierarchicalIK *self) -> std::shared_ptr<const dart::optimizer::Problem> { return self->getProblem(); })
.def("resetProblem", [](dart::dynamics::HierarchicalIK *self) -> void { return self->resetProblem(); })
.def("resetProblem", [](dart::dynamics::HierarchicalIK *self, bool _clearSeeds) -> void { return self->resetProblem(_clearSeeds); }, (::boost::python::arg("_clearSeeds")))
.def("setSolver", [](dart::dynamics::HierarchicalIK *self, const std::shared_ptr<dart::optimizer::Solver> & _newSolver) -> void { return self->setSolver(_newSolver); }, (::boost::python::arg("_newSolver")))
.def("getSolver", [](dart::dynamics::HierarchicalIK *self) -> const std::shared_ptr<dart::optimizer::Solver> & { return self->getSolver(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getSolver", [](const dart::dynamics::HierarchicalIK *self) -> std::shared_ptr<const dart::optimizer::Solver> { return self->getSolver(); })
.def("refreshIKHierarchy", [](dart::dynamics::HierarchicalIK *self) -> void { return self->refreshIKHierarchy(); })
.def("getIKHierarchy", [](const dart::dynamics::HierarchicalIK *self) -> const dart::dynamics::IKHierarchy & { return self->getIKHierarchy(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("computeNullSpaces", [](const dart::dynamics::HierarchicalIK *self) -> const std::vector<Eigen::MatrixXd> & { return self->computeNullSpaces(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getPositions", [](const dart::dynamics::HierarchicalIK *self) -> Eigen::VectorXd { return self->getPositions(); })
.def("setPositions", [](dart::dynamics::HierarchicalIK *self, const Eigen::VectorXd & _q) -> void { return self->setPositions(_q); }, (::boost::python::arg("_q")))
.def("getSkeleton", [](dart::dynamics::HierarchicalIK *self) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(); })
.def("getAffiliation", [](dart::dynamics::HierarchicalIK *self) -> dart::dynamics::SkeletonPtr { return self->getAffiliation(); })
.def("clearCaches", [](dart::dynamics::HierarchicalIK *self) -> void { return self->clearCaches(); })
;
}

/* footer */
