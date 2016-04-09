#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer15ModularFunctionE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer15ModularFunction4evalERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer15ModularFunction12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li0ENS2_6StrideILi0ELi0EEEEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer15ModularFunction11evalHessianERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li1ENS2_6StrideILi0ELi0EEEEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer15ModularFunction15setCostFunctionESt8functionIFdRKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer15ModularFunction17clearCostFunctionEb_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer15ModularFunction19setGradientFunctionESt8functionIFvRKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_3MapIS5_Li0ENS3_6StrideILi0ELi0EEEEEEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer15ModularFunction21clearGradientFunctionEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer15ModularFunction18setHessianFunctionESt8functionIFvRKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_3MapIS5_Li1ENS3_6StrideILi0ELi0EEEEEEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer15ModularFunction20clearHessianFunctionEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer15ModularFunctionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::ModularFunction, ::boost::python::bases<dart::optimizer::Function > >("ModularFunction", _ZN4dart9optimizer15ModularFunctionE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::ModularFunction * { return new dart::optimizer::ModularFunction(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::optimizer::ModularFunction * { return new dart::optimizer::ModularFunction(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("eval", [](dart::optimizer::ModularFunction *self, const Eigen::VectorXd & _x) -> double { return self->eval(_x); }, _ZN4dart9optimizer15ModularFunction4evalERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_x")))
.def("evalGradient", [](dart::optimizer::ModularFunction *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd> _grad) -> void { return self->evalGradient(_x, _grad); }, _ZN4dart9optimizer15ModularFunction12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li0ENS2_6StrideILi0ELi0EEEEE_docstring, (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalHessian", [](dart::optimizer::ModularFunction *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd, Eigen::RowMajor> _Hess) -> void { return self->evalHessian(_x, _Hess); }, _ZN4dart9optimizer15ModularFunction11evalHessianERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li1ENS2_6StrideILi0ELi0EEEEE_docstring, (::boost::python::arg("_x"), ::boost::python::arg("_Hess")))
.def("setCostFunction", [](dart::optimizer::ModularFunction *self, dart::optimizer::CostFunction _cost) -> void { return self->setCostFunction(_cost); }, _ZN4dart9optimizer15ModularFunction15setCostFunctionESt8functionIFdRKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEEEE_docstring, (::boost::python::arg("_cost")))
.def("clearCostFunction", [](dart::optimizer::ModularFunction *self) -> void { return self->clearCostFunction(); }, _ZN4dart9optimizer15ModularFunction17clearCostFunctionEb_docstring)
.def("clearCostFunction", [](dart::optimizer::ModularFunction *self, bool _printWarning) -> void { return self->clearCostFunction(_printWarning); }, _ZN4dart9optimizer15ModularFunction17clearCostFunctionEb_docstring, (::boost::python::arg("_printWarning")))
.def("setGradientFunction", [](dart::optimizer::ModularFunction *self, dart::optimizer::GradientFunction _gradient) -> void { return self->setGradientFunction(_gradient); }, _ZN4dart9optimizer15ModularFunction19setGradientFunctionESt8functionIFvRKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_3MapIS5_Li0ENS3_6StrideILi0ELi0EEEEEEE_docstring, (::boost::python::arg("_gradient")))
.def("clearGradientFunction", [](dart::optimizer::ModularFunction *self) -> void { return self->clearGradientFunction(); }, _ZN4dart9optimizer15ModularFunction21clearGradientFunctionEv_docstring)
.def("setHessianFunction", [](dart::optimizer::ModularFunction *self, dart::optimizer::HessianFunction _hessian) -> void { return self->setHessianFunction(_hessian); }, _ZN4dart9optimizer15ModularFunction18setHessianFunctionESt8functionIFvRKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_3MapIS5_Li1ENS3_6StrideILi0ELi0EEEEEEE_docstring, (::boost::python::arg("_hessian")))
.def("clearHessianFunction", [](dart::optimizer::ModularFunction *self) -> void { return self->clearHessianFunction(); }, _ZN4dart9optimizer15ModularFunction20clearHessianFunctionEv_docstring)
;
}

/* footer */
