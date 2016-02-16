#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint17BalanceConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::BalanceConstraint, ::boost::python::bases<dart::optimizer::Function, dart::dynamics::HierarchicalIK::Function > >("BalanceConstraint", boost::python::no_init)
.def(::boost::python::init<const std::shared_ptr<dart::dynamics::HierarchicalIK> &, dart::constraint::BalanceConstraint::BalanceMethod_t, dart::constraint::BalanceConstraint::ErrorMethod_t>((::boost::python::arg("_ik"), ::boost::python::arg("_balanceMethod") = 0, ::boost::python::arg("_errorMethod") = 0)))
.def("eval", static_cast<double (dart::constraint::BalanceConstraint::*)(const Eigen::VectorXd &)>(&dart::constraint::BalanceConstraint::eval), (::boost::python::arg("_x")))
.def("evalGradient", static_cast<void (dart::constraint::BalanceConstraint::*)(const Eigen::VectorXd &, Eigen::Map<Eigen::VectorXd>)>(&dart::constraint::BalanceConstraint::evalGradient), (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("setErrorMethod", static_cast<void (dart::constraint::BalanceConstraint::*)(dart::constraint::BalanceConstraint::ErrorMethod_t)>(&dart::constraint::BalanceConstraint::setErrorMethod), (::boost::python::arg("_method")))
.def("getErrorMethod", static_cast<dart::constraint::BalanceConstraint::ErrorMethod_t (dart::constraint::BalanceConstraint::*)() const>(&dart::constraint::BalanceConstraint::getErrorMethod))
.def("setBalanceMethod", static_cast<void (dart::constraint::BalanceConstraint::*)(dart::constraint::BalanceConstraint::BalanceMethod_t)>(&dart::constraint::BalanceConstraint::setBalanceMethod), (::boost::python::arg("_method")))
.def("getBalanceMethod", static_cast<dart::constraint::BalanceConstraint::BalanceMethod_t (dart::constraint::BalanceConstraint::*)() const>(&dart::constraint::BalanceConstraint::getBalanceMethod))
.def("setOptimizationTolerance", static_cast<void (dart::constraint::BalanceConstraint::*)(double)>(&dart::constraint::BalanceConstraint::setOptimizationTolerance), (::boost::python::arg("_tol")))
.def("getOptimizationTolerance", static_cast<double (dart::constraint::BalanceConstraint::*)() const>(&dart::constraint::BalanceConstraint::getOptimizationTolerance))
.def("setPseudoInverseDamping", static_cast<void (dart::constraint::BalanceConstraint::*)(double)>(&dart::constraint::BalanceConstraint::setPseudoInverseDamping), (::boost::python::arg("_damping")))
.def("getPseudoInverseDamping", static_cast<double (dart::constraint::BalanceConstraint::*)() const>(&dart::constraint::BalanceConstraint::getPseudoInverseDamping))
.def("getLastError", static_cast<const Eigen::Vector3d &(dart::constraint::BalanceConstraint::*)() const>(&dart::constraint::BalanceConstraint::getLastError), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("clearCaches", static_cast<void (dart::constraint::BalanceConstraint::*)()>(&dart::constraint::BalanceConstraint::clearCaches))
;
}

/* footer */
