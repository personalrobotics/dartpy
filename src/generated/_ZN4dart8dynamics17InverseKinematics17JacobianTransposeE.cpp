#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics17InverseKinematics17JacobianTransposeE_docstring[] = R"CHIMERA_STRING( JacobianTranspose will simply apply the transpose of the Jacobian to the
 error vector in order to compute the gradient. This method tends to be
 very smooth but imprecise, requiring more iterations before converging
 and being less precise in general. This method is suitable for animations
 where smoothness is prefered over precision.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics17JacobianTranspose5cloneEPS1__docstring[] = R"CHIMERA_STRING( Enable this GradientMethod to be cloned to a new IK module
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics17JacobianTranspose15computeGradientERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEERNS4_IdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Override this function with your implementation of the gradient
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


} // namespace

void _ZN4dart8dynamics17InverseKinematics17JacobianTransposeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::JacobianTranspose, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod > >("JacobianTranspose", _ZN4dart8dynamics17InverseKinematics17JacobianTransposeE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik) -> dart::dynamics::InverseKinematics::JacobianTranspose * { return new dart::dynamics::InverseKinematics::JacobianTranspose(_ik); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik, const dart::dynamics::InverseKinematics::GradientMethod::Properties & properties) -> dart::dynamics::InverseKinematics::JacobianTranspose * { return new dart::dynamics::InverseKinematics::JacobianTranspose(_ik, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"), ::boost::python::arg("properties"))))
.def("clone", [](const dart::dynamics::InverseKinematics::JacobianTranspose *self, dart::dynamics::InverseKinematics * _newIK) -> std::unique_ptr<dart::dynamics::InverseKinematics::GradientMethod> { return self->clone(_newIK); }, _ZNK4dart8dynamics17InverseKinematics17JacobianTranspose5cloneEPS1__docstring, (::boost::python::arg("_newIK")))
.def("computeGradient", [](dart::dynamics::InverseKinematics::JacobianTranspose *self, const Eigen::Vector6d & _error, Eigen::VectorXd & _grad) -> void { return self->computeGradient(_error, _grad); }, _ZN4dart8dynamics17InverseKinematics17JacobianTranspose15computeGradientERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEERNS4_IdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
;
}

/* footer */
