#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics17InverseKinematics11JacobianDLSE_docstring[] = R"CHIMERA_STRING( JacobianDLS refers to the Damped Least Squares Jacobian Pseudoinverse
 (specifically, Moore-Penrose Pseudoinverse). This is a very precise method
 for computing the gradient and is especially suitable for performing IK on
 industrial manipulators that need to follow very exact workspace paths.
 However, it is vulnerable to be jittery around singularities (though the
 damping helps with this), and each cycle might take more time to compute
 than the JacobianTranspose method (although the JacobianDLS method will
 usually converge in fewer cycles than JacobianTranspose).
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11JacobianDLS5cloneEPS1__docstring[] = R"CHIMERA_STRING( Enable this GradientMethod to be cloned to a new IK module
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11JacobianDLS15computeGradientERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEERNS4_IdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Override this function with your implementation of the gradient
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

constexpr char _ZN4dart8dynamics17InverseKinematics11JacobianDLS21setDampingCoefficientEd_docstring[] = R"CHIMERA_STRING( Set the damping coefficient. A higher damping coefficient will smooth
 out behavior around singularities but will also result in less precision
 in general. The default value is appropriate for most use cases.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11JacobianDLS21getDampingCoefficientEv_docstring[] = R"CHIMERA_STRING( Get the damping coefficient.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11JacobianDLS24getJacobianDLSPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this JacobianDLS
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics17InverseKinematics11JacobianDLSE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::JacobianDLS, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod > >("JacobianDLS", _ZN4dart8dynamics17InverseKinematics11JacobianDLSE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik) -> dart::dynamics::InverseKinematics::JacobianDLS * { return new dart::dynamics::InverseKinematics::JacobianDLS(_ik); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik, const dart::dynamics::InverseKinematics::JacobianDLS::Properties & properties) -> dart::dynamics::InverseKinematics::JacobianDLS * { return new dart::dynamics::InverseKinematics::JacobianDLS(_ik, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"), ::boost::python::arg("properties"))))
.def("clone", [](const dart::dynamics::InverseKinematics::JacobianDLS *self, dart::dynamics::InverseKinematics * _newIK) -> std::unique_ptr<dart::dynamics::InverseKinematics::GradientMethod> { return self->clone(_newIK); }, _ZNK4dart8dynamics17InverseKinematics11JacobianDLS5cloneEPS1__docstring, (::boost::python::arg("_newIK")))
.def("computeGradient", [](dart::dynamics::InverseKinematics::JacobianDLS *self, const Eigen::Vector6d & _error, Eigen::VectorXd & _grad) -> void { return self->computeGradient(_error, _grad); }, _ZN4dart8dynamics17InverseKinematics11JacobianDLS15computeGradientERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEERNS4_IdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
.def("setDampingCoefficient", [](dart::dynamics::InverseKinematics::JacobianDLS *self) -> void { return self->setDampingCoefficient(); }, _ZN4dart8dynamics17InverseKinematics11JacobianDLS21setDampingCoefficientEd_docstring)
.def("setDampingCoefficient", [](dart::dynamics::InverseKinematics::JacobianDLS *self, double _damping) -> void { return self->setDampingCoefficient(_damping); }, _ZN4dart8dynamics17InverseKinematics11JacobianDLS21setDampingCoefficientEd_docstring, (::boost::python::arg("_damping")))
.def("getDampingCoefficient", [](const dart::dynamics::InverseKinematics::JacobianDLS *self) -> double { return self->getDampingCoefficient(); }, _ZNK4dart8dynamics17InverseKinematics11JacobianDLS21getDampingCoefficientEv_docstring)
.def("getJacobianDLSProperties", [](const dart::dynamics::InverseKinematics::JacobianDLS *self) -> dart::dynamics::InverseKinematics::JacobianDLS::Properties { return self->getJacobianDLSProperties(); }, _ZNK4dart8dynamics17InverseKinematics11JacobianDLS24getJacobianDLSPropertiesEv_docstring)
;
}

/* footer */
