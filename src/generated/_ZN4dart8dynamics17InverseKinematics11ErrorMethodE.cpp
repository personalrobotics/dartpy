#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethodE_docstring[] = R"CHIMERA_STRING( ErrorMethod is a base class for different ways of computing the error of
 an InverseKinematics module.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11ErrorMethod5cloneEPS1__docstring[] = R"CHIMERA_STRING( Enable this ErrorMethod to be cloned to a new IK module.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod12computeErrorEv_docstring[] = R"CHIMERA_STRING( Override this function with your implementation of the error vector
 computation. The expectation is that the first three components of the
 vector will correspond to orientation error (in an angle-axis format)
 while the last three components correspond to translational error.
 When implementing this function, you should assume that the Skeleton's
 current joint positions corresponds to the positions that you
 must use to compute the error. This function will only get called when
 an update is needed.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod23computeDesiredTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS3_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( Override this function with your implementation of computing the desired
 given the current transform and error vector. If you want the desired
 transform to always be equal to the Target's transform, you can simply
 call ErrorMethod::computeDesiredTransform to implement this function.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod9evalErrorERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( This function is used to handle caching the error vector.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11ErrorMethod13getMethodNameEv_docstring[] = R"CHIMERA_STRING( Get the name of this ErrorMethod.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod9setBoundsERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES7__docstring[] = R"CHIMERA_STRING( Set all the error bounds.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod9setBoundsERKSt4pairIN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES6_E_docstring[] = R"CHIMERA_STRING( Set all the error bounds.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11ErrorMethod9getBoundsEv_docstring[] = R"CHIMERA_STRING( Get all the error bounds.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod16setAngularBoundsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7__docstring[] = R"CHIMERA_STRING( Set the error bounds for orientation.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod16setAngularBoundsERKSt4pairIN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_E_docstring[] = R"CHIMERA_STRING( Set the error bounds for orientation.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11ErrorMethod16getAngularBoundsEv_docstring[] = R"CHIMERA_STRING( Get the error bounds for orientation.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod15setLinearBoundsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7__docstring[] = R"CHIMERA_STRING( Set the error bounds for translation.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod15setLinearBoundsERKSt4pairIN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_E_docstring[] = R"CHIMERA_STRING( Set the error bounds for translation.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11ErrorMethod15getLinearBoundsEv_docstring[] = R"CHIMERA_STRING( Get the error bounds for translation.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod19setErrorLengthClampEd_docstring[] = R"CHIMERA_STRING( Set the clamp that will be applied to the length of the error vector
 each iteration.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11ErrorMethod19getErrorLengthClampEv_docstring[] = R"CHIMERA_STRING( Set the clamp that will be applied to the length of the error vector
 each iteration.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod15setErrorWeightsERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the weights that will be applied to each component of the error
 vector.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11ErrorMethod15getErrorWeightsEv_docstring[] = R"CHIMERA_STRING( Get the weights that will be applied to each component of the error
 vector.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod22setAngularErrorWeightsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the weights that will be applied to each angular component of the
 error vector.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11ErrorMethod22getAngularErrorWeightsEv_docstring[] = R"CHIMERA_STRING( Get the weights that will be applied to each angular component of the
 error vector.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod21setLinearErrorWeightsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the weights that will be applied to each linear component of the
 error vector.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11ErrorMethod21getLinearErrorWeightsEv_docstring[] = R"CHIMERA_STRING( Get the weights that will be applied to each linear component of the
 error vector.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics17InverseKinematics11ErrorMethod24getErrorMethodPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this ErrorMethod
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics17InverseKinematics11ErrorMethod10clearCacheEv_docstring[] = R"CHIMERA_STRING( Clear the cache to force the error to be recomputed. It should generally
 not be necessary to call this function.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics17InverseKinematics11ErrorMethodE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::ErrorMethod, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("ErrorMethod", _ZN4dart8dynamics17InverseKinematics11ErrorMethodE_docstring, boost::python::no_init)
.def("clone", [](const dart::dynamics::InverseKinematics::ErrorMethod *self, dart::dynamics::InverseKinematics * _newIK) -> std::unique_ptr<dart::dynamics::InverseKinematics::ErrorMethod> { return self->clone(_newIK); }, _ZNK4dart8dynamics17InverseKinematics11ErrorMethod5cloneEPS1__docstring, (::boost::python::arg("_newIK")))
.def("computeError", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> Eigen::Vector6d { return self->computeError(); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod12computeErrorEv_docstring)
.def("computeDesiredTransform", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Isometry3d & _currentTf, const Eigen::Vector6d & _error) -> Eigen::Isometry3d { return self->computeDesiredTransform(_currentTf, _error); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod23computeDesiredTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS3_6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring, (::boost::python::arg("_currentTf"), ::boost::python::arg("_error")))
.def("evalError", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::VectorXd & _q) -> const Eigen::Vector6d & { return self->evalError(_q); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics17InverseKinematics11ErrorMethod9evalErrorERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_q")))
.def("getMethodName", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> const std::string & { return self->getMethodName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics17InverseKinematics11ErrorMethod13getMethodNameEv_docstring)
.def("setBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setBounds(); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod9setBoundsERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES7__docstring)
.def("setBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector6d & _lower) -> void { return self->setBounds(_lower); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod9setBoundsERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES7__docstring, (::boost::python::arg("_lower")))
.def("setBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector6d & _lower, const Eigen::Vector6d & _upper) -> void { return self->setBounds(_lower, _upper); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod9setBoundsERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES7__docstring, (::boost::python::arg("_lower"), ::boost::python::arg("_upper")))
.def("setBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const std::pair<Eigen::Vector6d, Eigen::Vector6d> & _bounds) -> void { return self->setBounds(_bounds); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod9setBoundsERKSt4pairIN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES6_E_docstring, (::boost::python::arg("_bounds")))
.def("getBounds", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> const std::pair<Eigen::Vector6d, Eigen::Vector6d> & { return self->getBounds(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics17InverseKinematics11ErrorMethod9getBoundsEv_docstring)
.def("setAngularBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setAngularBounds(); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod16setAngularBoundsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7__docstring)
.def("setAngularBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _lower) -> void { return self->setAngularBounds(_lower); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod16setAngularBoundsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7__docstring, (::boost::python::arg("_lower")))
.def("setAngularBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _lower, const Eigen::Vector3d & _upper) -> void { return self->setAngularBounds(_lower, _upper); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod16setAngularBoundsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7__docstring, (::boost::python::arg("_lower"), ::boost::python::arg("_upper")))
.def("setAngularBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const std::pair<Eigen::Vector3d, Eigen::Vector3d> & _bounds) -> void { return self->setAngularBounds(_bounds); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod16setAngularBoundsERKSt4pairIN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_E_docstring, (::boost::python::arg("_bounds")))
.def("getAngularBounds", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> std::pair<Eigen::Vector3d, Eigen::Vector3d> { return self->getAngularBounds(); }, _ZNK4dart8dynamics17InverseKinematics11ErrorMethod16getAngularBoundsEv_docstring)
.def("setLinearBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setLinearBounds(); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod15setLinearBoundsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7__docstring)
.def("setLinearBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _lower) -> void { return self->setLinearBounds(_lower); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod15setLinearBoundsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7__docstring, (::boost::python::arg("_lower")))
.def("setLinearBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _lower, const Eigen::Vector3d & _upper) -> void { return self->setLinearBounds(_lower, _upper); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod15setLinearBoundsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES7__docstring, (::boost::python::arg("_lower"), ::boost::python::arg("_upper")))
.def("setLinearBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const std::pair<Eigen::Vector3d, Eigen::Vector3d> & _bounds) -> void { return self->setLinearBounds(_bounds); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod15setLinearBoundsERKSt4pairIN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_E_docstring, (::boost::python::arg("_bounds")))
.def("getLinearBounds", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> std::pair<Eigen::Vector3d, Eigen::Vector3d> { return self->getLinearBounds(); }, _ZNK4dart8dynamics17InverseKinematics11ErrorMethod15getLinearBoundsEv_docstring)
.def("setErrorLengthClamp", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setErrorLengthClamp(); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod19setErrorLengthClampEd_docstring)
.def("setErrorLengthClamp", [](dart::dynamics::InverseKinematics::ErrorMethod *self, double _clampSize) -> void { return self->setErrorLengthClamp(_clampSize); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod19setErrorLengthClampEd_docstring, (::boost::python::arg("_clampSize")))
.def("getErrorLengthClamp", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> double { return self->getErrorLengthClamp(); }, _ZNK4dart8dynamics17InverseKinematics11ErrorMethod19getErrorLengthClampEv_docstring)
.def("setErrorWeights", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector6d & _weights) -> void { return self->setErrorWeights(_weights); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod15setErrorWeightsERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring, (::boost::python::arg("_weights")))
.def("getErrorWeights", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> const Eigen::Vector6d & { return self->getErrorWeights(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics17InverseKinematics11ErrorMethod15getErrorWeightsEv_docstring)
.def("setAngularErrorWeights", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setAngularErrorWeights(); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod22setAngularErrorWeightsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring)
.def("setAngularErrorWeights", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _weights) -> void { return self->setAngularErrorWeights(_weights); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod22setAngularErrorWeightsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_weights")))
.def("getAngularErrorWeights", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> Eigen::Vector3d { return self->getAngularErrorWeights(); }, _ZNK4dart8dynamics17InverseKinematics11ErrorMethod22getAngularErrorWeightsEv_docstring)
.def("setLinearErrorWeights", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setLinearErrorWeights(); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod21setLinearErrorWeightsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring)
.def("setLinearErrorWeights", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _weights) -> void { return self->setLinearErrorWeights(_weights); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod21setLinearErrorWeightsERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_weights")))
.def("getLinearErrorWeights", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> Eigen::Vector3d { return self->getLinearErrorWeights(); }, _ZNK4dart8dynamics17InverseKinematics11ErrorMethod21getLinearErrorWeightsEv_docstring)
.def("getErrorMethodProperties", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> dart::dynamics::InverseKinematics::ErrorMethod::Properties { return self->getErrorMethodProperties(); }, _ZNK4dart8dynamics17InverseKinematics11ErrorMethod24getErrorMethodPropertiesEv_docstring)
.def("clearCache", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->clearCache(); }, _ZN4dart8dynamics17InverseKinematics11ErrorMethod10clearCacheEv_docstring)
;
}

/* footer */
