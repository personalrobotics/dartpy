#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart10constraint17BalanceConstraintE_docstring[] = R"CHIMERA_STRING( BalanceConstraint is a kinematic constraint function designed to be passed
 into a HierarchicalIK module. Adding this constraint to the Problem of a
 HierarchicalIK will allow the IK solver to constrain the Skeleton so that it
 satisfies a support polygon style balancing constraint.
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint17BalanceConstraint5cloneERKSt10shared_ptrINS_8dynamics14HierarchicalIKEE_docstring[] = R"CHIMERA_STRING( Enable this function to be cloned to a new IK module.
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17BalanceConstraint4evalERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17BalanceConstraint12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li0ENS2_6StrideILi0ELi0EEEEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17BalanceConstraint14setErrorMethodENS1_13ErrorMethod_tE_docstring[] = R"CHIMERA_STRING( Set the method that this constraint function will use to compute the
 error. See the ErrorMethod_t docs for more information.
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint17BalanceConstraint14getErrorMethodEv_docstring[] = R"CHIMERA_STRING( Get the method that this constraint function will use to compute the
 error.
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17BalanceConstraint16setBalanceMethodENS1_15BalanceMethod_tE_docstring[] = R"CHIMERA_STRING( Set the method that this constraint function will use to achieve balance.
 See the BalanceMethod_t docs for more information.
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint17BalanceConstraint16getBalanceMethodEv_docstring[] = R"CHIMERA_STRING( Get the method that this constraint function will use to achieve balance.
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17BalanceConstraint24setOptimizationToleranceEd_docstring[] = R"CHIMERA_STRING( Set the tolerance for how far the center of mass can be from the support
 polygon centroid before the balance is considered optimized.
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint17BalanceConstraint24getOptimizationToleranceEv_docstring[] = R"CHIMERA_STRING( Get the tolerance for how far the center of mass can be from the support
 polygon centroid before the balance is considered optimized.
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17BalanceConstraint23setPseudoInverseDampingEd_docstring[] = R"CHIMERA_STRING( Set the damping factor that will be used when computing the pseudoinverse
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint17BalanceConstraint23getPseudoInverseDampingEv_docstring[] = R"CHIMERA_STRING( Get the damping factor that will be used when computing the pseudoinverse
)CHIMERA_STRING";

constexpr char _ZNK4dart10constraint17BalanceConstraint12getLastErrorEv_docstring[] = R"CHIMERA_STRING( Get the last error vector that was computed by this BalanceConstraint
)CHIMERA_STRING";

constexpr char _ZN4dart10constraint17BalanceConstraint11clearCachesEv_docstring[] = R"CHIMERA_STRING( Clear the caches to force the error computation to update. It should not
 generally be necessary to call this function.
)CHIMERA_STRING";


} // namespace

void _ZN4dart10constraint17BalanceConstraintE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::constraint::BalanceConstraint, ::boost::python::bases<dart::optimizer::Function, dart::dynamics::HierarchicalIK::Function > >("BalanceConstraint", _ZN4dart10constraint17BalanceConstraintE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const std::shared_ptr<dart::dynamics::HierarchicalIK> & _ik) -> dart::constraint::BalanceConstraint * { return new dart::constraint::BalanceConstraint(_ik); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"))))
.def("__init__", ::boost::python::make_constructor([](const std::shared_ptr<dart::dynamics::HierarchicalIK> & _ik, dart::constraint::BalanceConstraint::BalanceMethod_t _balanceMethod) -> dart::constraint::BalanceConstraint * { return new dart::constraint::BalanceConstraint(_ik, _balanceMethod); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"), ::boost::python::arg("_balanceMethod"))))
.def("__init__", ::boost::python::make_constructor([](const std::shared_ptr<dart::dynamics::HierarchicalIK> & _ik, dart::constraint::BalanceConstraint::BalanceMethod_t _balanceMethod, dart::constraint::BalanceConstraint::ErrorMethod_t _errorMethod) -> dart::constraint::BalanceConstraint * { return new dart::constraint::BalanceConstraint(_ik, _balanceMethod, _errorMethod); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"), ::boost::python::arg("_balanceMethod"), ::boost::python::arg("_errorMethod"))))
.def("clone", [](const dart::constraint::BalanceConstraint *self, const std::shared_ptr<dart::dynamics::HierarchicalIK> & _newIK) -> dart::optimizer::FunctionPtr { return self->clone(_newIK); }, _ZNK4dart10constraint17BalanceConstraint5cloneERKSt10shared_ptrINS_8dynamics14HierarchicalIKEE_docstring, (::boost::python::arg("_newIK")))
.def("eval", [](dart::constraint::BalanceConstraint *self, const Eigen::VectorXd & _x) -> double { return self->eval(_x); }, _ZN4dart10constraint17BalanceConstraint4evalERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_x")))
.def("evalGradient", [](dart::constraint::BalanceConstraint *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd> _grad) -> void { return self->evalGradient(_x, _grad); }, _ZN4dart10constraint17BalanceConstraint12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li0ENS2_6StrideILi0ELi0EEEEE_docstring, (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("setErrorMethod", [](dart::constraint::BalanceConstraint *self, dart::constraint::BalanceConstraint::ErrorMethod_t _method) -> void { return self->setErrorMethod(_method); }, _ZN4dart10constraint17BalanceConstraint14setErrorMethodENS1_13ErrorMethod_tE_docstring, (::boost::python::arg("_method")))
.def("getErrorMethod", [](const dart::constraint::BalanceConstraint *self) -> dart::constraint::BalanceConstraint::ErrorMethod_t { return self->getErrorMethod(); }, _ZNK4dart10constraint17BalanceConstraint14getErrorMethodEv_docstring)
.def("setBalanceMethod", [](dart::constraint::BalanceConstraint *self, dart::constraint::BalanceConstraint::BalanceMethod_t _method) -> void { return self->setBalanceMethod(_method); }, _ZN4dart10constraint17BalanceConstraint16setBalanceMethodENS1_15BalanceMethod_tE_docstring, (::boost::python::arg("_method")))
.def("getBalanceMethod", [](const dart::constraint::BalanceConstraint *self) -> dart::constraint::BalanceConstraint::BalanceMethod_t { return self->getBalanceMethod(); }, _ZNK4dart10constraint17BalanceConstraint16getBalanceMethodEv_docstring)
.def("setOptimizationTolerance", [](dart::constraint::BalanceConstraint *self, double _tol) -> void { return self->setOptimizationTolerance(_tol); }, _ZN4dart10constraint17BalanceConstraint24setOptimizationToleranceEd_docstring, (::boost::python::arg("_tol")))
.def("getOptimizationTolerance", [](const dart::constraint::BalanceConstraint *self) -> double { return self->getOptimizationTolerance(); }, _ZNK4dart10constraint17BalanceConstraint24getOptimizationToleranceEv_docstring)
.def("setPseudoInverseDamping", [](dart::constraint::BalanceConstraint *self, double _damping) -> void { return self->setPseudoInverseDamping(_damping); }, _ZN4dart10constraint17BalanceConstraint23setPseudoInverseDampingEd_docstring, (::boost::python::arg("_damping")))
.def("getPseudoInverseDamping", [](const dart::constraint::BalanceConstraint *self) -> double { return self->getPseudoInverseDamping(); }, _ZNK4dart10constraint17BalanceConstraint23getPseudoInverseDampingEv_docstring)
.def("getLastError", [](const dart::constraint::BalanceConstraint *self) -> const Eigen::Vector3d & { return self->getLastError(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart10constraint17BalanceConstraint12getLastErrorEv_docstring)
.def("clearCaches", [](dart::constraint::BalanceConstraint *self) -> void { return self->clearCaches(); }, _ZN4dart10constraint17BalanceConstraint11clearCachesEv_docstring)
;
}

/* footer */
