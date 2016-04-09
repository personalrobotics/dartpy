#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer12NullFunctionE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer12NullFunction4evalERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer12NullFunction12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li0ENS2_6StrideILi0ELi0EEEEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer12NullFunction11evalHessianERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li1ENS2_6StrideILi0ELi0EEEEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer12NullFunctionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::NullFunction, ::boost::python::bases<dart::optimizer::Function > >("NullFunction", _ZN4dart9optimizer12NullFunctionE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::NullFunction * { return new dart::optimizer::NullFunction(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::optimizer::NullFunction * { return new dart::optimizer::NullFunction(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("eval", [](dart::optimizer::NullFunction *self, const Eigen::VectorXd & _arg0_) -> double { return self->eval(_arg0_); }, _ZN4dart9optimizer12NullFunction4evalERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_arg0_")))
.def("evalGradient", [](dart::optimizer::NullFunction *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd> _grad) -> void { return self->evalGradient(_x, _grad); }, _ZN4dart9optimizer12NullFunction12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li0ENS2_6StrideILi0ELi0EEEEE_docstring, (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalHessian", [](dart::optimizer::NullFunction *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd, Eigen::RowMajor> _Hess) -> void { return self->evalHessian(_x, _Hess); }, _ZN4dart9optimizer12NullFunction11evalHessianERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li1ENS2_6StrideILi0ELi0EEEEE_docstring, (::boost::python::arg("_x"), ::boost::python::arg("_Hess")))
;
}

/* footer */
