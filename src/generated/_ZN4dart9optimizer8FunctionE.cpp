#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart9optimizer8FunctionE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8Function7setNameERKSs_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart9optimizer8Function7getNameEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8Function4evalERN5Eigen3MapIKNS2_6MatrixIdLin1ELi1ELi0ELin1ELi1EEELi0ENS2_6StrideILi0ELi0EEEEE_docstring[] = R"CHIMERA_STRING( 
 Note: This function is deprecated in favor of the const Eigen::VectorXd
&
 version
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8Function4evalERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8Function12evalGradientERN5Eigen3MapIKNS2_6MatrixIdLin1ELi1ELi0ELin1ELi1EEELi0ENS2_6StrideILi0ELi0EEEEENS3_IS5_Li0ES8_EE_docstring[] = R"CHIMERA_STRING( 
 Note: This function is deprecated in favor of the const Eigen::VectorXd
&
 version
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8Function12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li0ENS2_6StrideILi0ELi0EEEEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8Function12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEERS4__docstring[] = R"CHIMERA_STRING( 
 If you have a raw array that the gradient will be passed in, then use
 evalGradient(const Eigen::VectorXd
&
, Eigen::Map
<Eigen
::VectorXd>)
 for better performance.
)CHIMERA_STRING";

constexpr char _ZN4dart9optimizer8Function11evalHessianERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li1ENS2_6StrideILi0ELi0EEEEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart9optimizer8FunctionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("optimizer"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::optimizer::Function >("Function", _ZN4dart9optimizer8FunctionE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::optimizer::Function * { return new dart::optimizer::Function(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _name) -> dart::optimizer::Function * { return new dart::optimizer::Function(_name); }, ::boost::python::default_call_policies(), (::boost::python::arg("_name"))))
.def("setName", [](dart::optimizer::Function *self, const std::string & _newName) -> void { return self->setName(_newName); }, _ZN4dart9optimizer8Function7setNameERKSs_docstring, (::boost::python::arg("_newName")))
.def("getName", [](const dart::optimizer::Function *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart9optimizer8Function7getNameEv_docstring)
.def("eval", [](dart::optimizer::Function *self, Eigen::Map<const Eigen::VectorXd> & _x) -> double { return self->eval(_x); }, _ZN4dart9optimizer8Function4evalERN5Eigen3MapIKNS2_6MatrixIdLin1ELi1ELi0ELin1ELi1EEELi0ENS2_6StrideILi0ELi0EEEEE_docstring, (::boost::python::arg("_x")))
.def("eval", [](dart::optimizer::Function *self, const Eigen::VectorXd & _x) -> double { return self->eval(_x); }, _ZN4dart9optimizer8Function4evalERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_x")))
.def("evalGradient", [](dart::optimizer::Function *self, Eigen::Map<const Eigen::VectorXd> & _x, Eigen::Map<Eigen::VectorXd> _grad) -> void { return self->evalGradient(_x, _grad); }, _ZN4dart9optimizer8Function12evalGradientERN5Eigen3MapIKNS2_6MatrixIdLin1ELi1ELi0ELin1ELi1EEELi0ENS2_6StrideILi0ELi0EEEEENS3_IS5_Li0ES8_EE_docstring, (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalGradient", [](dart::optimizer::Function *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd> _grad) -> void { return self->evalGradient(_x, _grad); }, _ZN4dart9optimizer8Function12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li0ENS2_6StrideILi0ELi0EEEEE_docstring, (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalGradient", [](dart::optimizer::Function *self, const Eigen::VectorXd & _x, Eigen::VectorXd & _grad) -> void { return self->evalGradient(_x, _grad); }, _ZN4dart9optimizer8Function12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEERS4__docstring, (::boost::python::arg("_x"), ::boost::python::arg("_grad")))
.def("evalHessian", [](dart::optimizer::Function *self, const Eigen::VectorXd & _x, Eigen::Map<Eigen::VectorXd, Eigen::RowMajor> _Hess) -> void { return self->evalHessian(_x, _Hess); }, _ZN4dart9optimizer8Function11evalHessianERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS2_3MapIS4_Li1ENS2_6StrideILi0ELi0EEEEE_docstring, (::boost::python::arg("_x"), ::boost::python::arg("_Hess")))
;
}

/* footer */
