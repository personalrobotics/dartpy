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

void _ZN4dart10constraint17BalanceConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::BalanceConstraint, ::boost::python::bases<dart::optimizer::Function, dart::dynamics::HierarchicalIK::Function > >("BalanceConstraint", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const std::shared_ptr<dart::dynamics::HierarchicalIK> & _ik) -> dart::constraint::BalanceConstraint * { return new dart::constraint::BalanceConstraint(_ik); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"))))
.def("__init__", ::boost::python::make_constructor([](const std::shared_ptr<dart::dynamics::HierarchicalIK> & _ik, dart::constraint::BalanceConstraint::BalanceMethod_t _balanceMethod) -> dart::constraint::BalanceConstraint * { return new dart::constraint::BalanceConstraint(_ik, _balanceMethod); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"), ::boost::python::arg("_balanceMethod"))))
.def("__init__", ::boost::python::make_constructor([](const std::shared_ptr<dart::dynamics::HierarchicalIK> & _ik, dart::constraint::BalanceConstraint::BalanceMethod_t _balanceMethod, dart::constraint::BalanceConstraint::ErrorMethod_t _errorMethod) -> dart::constraint::BalanceConstraint * { return new dart::constraint::BalanceConstraint(_ik, _balanceMethod, _errorMethod); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"), ::boost::python::arg("_balanceMethod"), ::boost::python::arg("_errorMethod"))))
.def("clone", [](const dart::constraint::BalanceConstraint *self, const std::shared_ptr<dart::dynamics::HierarchicalIK> & _newIK) -> dart::optimizer::FunctionPtr { return self->clone(_newIK); }, (::boost::python::arg("_newIK")))
.def("eval", [](dart::constraint::BalanceConstraint *self, const Eigen::VectorXd & _x) -> double { return self->eval(_x); }, (::boost::python::arg("_x")))
.def("evalGradient", [](dart::constraint::BalanceConstraint *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd> _grad) -> void { return self->evalGradient(_x, _grad); }, (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("setErrorMethod", [](dart::constraint::BalanceConstraint *self, dart::constraint::BalanceConstraint::ErrorMethod_t _method) -> void { return self->setErrorMethod(_method); }, (::boost::python::arg("_method")))
.def("getErrorMethod", [](const dart::constraint::BalanceConstraint *self) -> dart::constraint::BalanceConstraint::ErrorMethod_t { return self->getErrorMethod(); })
.def("setBalanceMethod", [](dart::constraint::BalanceConstraint *self, dart::constraint::BalanceConstraint::BalanceMethod_t _method) -> void { return self->setBalanceMethod(_method); }, (::boost::python::arg("_method")))
.def("getBalanceMethod", [](const dart::constraint::BalanceConstraint *self) -> dart::constraint::BalanceConstraint::BalanceMethod_t { return self->getBalanceMethod(); })
.def("setOptimizationTolerance", [](dart::constraint::BalanceConstraint *self, double _tol) -> void { return self->setOptimizationTolerance(_tol); }, (::boost::python::arg("_tol")))
.def("getOptimizationTolerance", [](const dart::constraint::BalanceConstraint *self) -> double { return self->getOptimizationTolerance(); })
.def("setPseudoInverseDamping", [](dart::constraint::BalanceConstraint *self, double _damping) -> void { return self->setPseudoInverseDamping(_damping); }, (::boost::python::arg("_damping")))
.def("getPseudoInverseDamping", [](const dart::constraint::BalanceConstraint *self) -> double { return self->getPseudoInverseDamping(); })
.def("getLastError", [](const dart::constraint::BalanceConstraint *self) -> const Eigen::Vector3d & { return self->getLastError(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("clearCaches", [](dart::constraint::BalanceConstraint *self) -> void { return self->clearCaches(); })
;
}

/* footer */
