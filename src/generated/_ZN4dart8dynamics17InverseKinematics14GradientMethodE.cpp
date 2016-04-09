#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics17InverseKinematics14GradientMethodE_docstring[] = R"CHIMERA_STRING( GradientMethod is a base class for different ways of computing the
 gradient of an InverseKinematics module.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics14GradientMethod5cloneEPS1__docstring[] = R"CHIMERA_STRING( Enable this GradientMethod to be cloned to a new IK module
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics14GradientMethod15computeGradientERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEERNS4_IdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Override this function with your implementation of the gradient
 computation. The direction that this gradient points in should make the
 error **worse** if applied to the joint positions, because the
 Problem is configured as a gradient **descent** error minimization
 Problem.
 The error vector that is passed in will be determined by the IK module's
 ErrorMethod. The expectation is that the first three components of the
 vector correspond to orientation error (in an angle-axis format) while
 the last three components correspond to translational error.
 When implementing this function, you should assume that the Skeleton's
 current joint positions corresponds to the positions that you
 must use to compute the error. This function will only get called when
 an update is needed.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics14GradientMethod12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_3MapIS5_Li0ENS3_6StrideILi0ELi0EEEEE_docstring[] = R"CHIMERA_STRING( This function is used to handle caching the gradient vector and
 interfacing with the solver.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics14GradientMethod13getMethodNameEv_docstring[] = R"CHIMERA_STRING( Get the name of this GradientMethod.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics14GradientMethod13clampGradientERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Clamp the gradient based on the clamp settings of this GradientMethod.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics14GradientMethod21setComponentWiseClampEd_docstring[] = R"CHIMERA_STRING( Set the component-wise clamp for this GradientMethod. Each component
 of the gradient will be individually clamped to this size.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics14GradientMethod21getComponentWiseClampEv_docstring[] = R"CHIMERA_STRING( Get the component-wise clamp for this GradientMethod.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics14GradientMethod12applyWeightsERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Apply weights to the gradient based on the weight settings of this
 GradientMethod.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics14GradientMethod19setComponentWeightsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the weights that will be applied to each component of the gradient.
 If the number of components in _weights is smaller than the number of
 components in the gradient, then a weight of 1.0 will be applied to all
 components that are out of the range of _weights. Passing in an empty
 vector for _weights will effectively make all the gradient components
 unweighted.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics14GradientMethod19getComponentWeightsEv_docstring[] = R"CHIMERA_STRING( Get the weights of this GradientMethod.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics14GradientMethod27getGradientMethodPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this GradientMethod
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics14GradientMethod10clearCacheEv_docstring[] = R"CHIMERA_STRING( Clear the cache to force the gradient to be recomputed. It should
 generally not be necessary to call this function.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics17InverseKinematics14GradientMethodE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::GradientMethod, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("GradientMethod", _ZN4dart8dynamics17InverseKinematics14GradientMethodE_docstring, boost::python::no_init)
.def("clone", [](const dart::dynamics::InverseKinematics::GradientMethod *self, dart::dynamics::InverseKinematics * _newIK) -> std::unique_ptr<dart::dynamics::InverseKinematics::GradientMethod> { return self->clone(_newIK); }, _ZNK4dart8dynamics17InverseKinematics14GradientMethod5cloneEPS1__docstring, (::boost::python::arg("_newIK")))
.def("computeGradient", [](dart::dynamics::InverseKinematics::GradientMethod *self, const Eigen::Vector6d & _error, Eigen::VectorXd & _grad) -> void { return self->computeGradient(_error, _grad); }, _ZN4dart8dynamics17InverseKinematics14GradientMethod15computeGradientERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEERNS4_IdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
.def("evalGradient", [](dart::dynamics::InverseKinematics::GradientMethod *self, const Eigen::VectorXd & _q, Eigen::Map<Eigen::VectorXd> _grad) -> void { return self->evalGradient(_q, _grad); }, _ZN4dart8dynamics17InverseKinematics14GradientMethod12evalGradientERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEENS3_3MapIS5_Li0ENS3_6StrideILi0ELi0EEEEE_docstring, (::boost::python::arg("_q"), ::boost::python::arg("_grad")))
.def("getMethodName", [](const dart::dynamics::InverseKinematics::GradientMethod *self) -> const std::string & { return self->getMethodName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics17InverseKinematics14GradientMethod13getMethodNameEv_docstring)
.def("clampGradient", [](const dart::dynamics::InverseKinematics::GradientMethod *self, Eigen::VectorXd & _grad) -> void { return self->clampGradient(_grad); }, _ZNK4dart8dynamics17InverseKinematics14GradientMethod13clampGradientERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_grad")))
.def("setComponentWiseClamp", [](dart::dynamics::InverseKinematics::GradientMethod *self) -> void { return self->setComponentWiseClamp(); }, _ZN4dart8dynamics17InverseKinematics14GradientMethod21setComponentWiseClampEd_docstring)
.def("setComponentWiseClamp", [](dart::dynamics::InverseKinematics::GradientMethod *self, double _clamp) -> void { return self->setComponentWiseClamp(_clamp); }, _ZN4dart8dynamics17InverseKinematics14GradientMethod21setComponentWiseClampEd_docstring, (::boost::python::arg("_clamp")))
.def("getComponentWiseClamp", [](const dart::dynamics::InverseKinematics::GradientMethod *self) -> double { return self->getComponentWiseClamp(); }, _ZNK4dart8dynamics17InverseKinematics14GradientMethod21getComponentWiseClampEv_docstring)
.def("applyWeights", [](const dart::dynamics::InverseKinematics::GradientMethod *self, Eigen::VectorXd & _grad) -> void { return self->applyWeights(_grad); }, _ZNK4dart8dynamics17InverseKinematics14GradientMethod12applyWeightsERN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_grad")))
.def("setComponentWeights", [](dart::dynamics::InverseKinematics::GradientMethod *self, const Eigen::VectorXd & _weights) -> void { return self->setComponentWeights(_weights); }, _ZN4dart8dynamics17InverseKinematics14GradientMethod19setComponentWeightsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_weights")))
.def("getComponentWeights", [](const dart::dynamics::InverseKinematics::GradientMethod *self) -> const Eigen::VectorXd & { return self->getComponentWeights(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics17InverseKinematics14GradientMethod19getComponentWeightsEv_docstring)
.def("getGradientMethodProperties", [](const dart::dynamics::InverseKinematics::GradientMethod *self) -> dart::dynamics::InverseKinematics::GradientMethod::Properties { return self->getGradientMethodProperties(); }, _ZNK4dart8dynamics17InverseKinematics14GradientMethod27getGradientMethodPropertiesEv_docstring)
.def("clearCache", [](dart::dynamics::InverseKinematics::GradientMethod *self) -> void { return self->clearCache(); }, _ZN4dart8dynamics17InverseKinematics14GradientMethod10clearCacheEv_docstring)
;
}

/* footer */
