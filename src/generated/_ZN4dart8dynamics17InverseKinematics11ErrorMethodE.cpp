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

void _ZN4dart8dynamics17InverseKinematics11ErrorMethodE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::ErrorMethod, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("ErrorMethod", boost::python::no_init)
.def("clone", [](const dart::dynamics::InverseKinematics::ErrorMethod *self, dart::dynamics::InverseKinematics * _newIK) -> std::unique_ptr<dart::dynamics::InverseKinematics::ErrorMethod> { return self->clone(_newIK); }, (::boost::python::arg("_newIK")))
.def("computeError", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> Eigen::Vector6d { return self->computeError(); })
.def("computeDesiredTransform", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Isometry3d & _currentTf, const Eigen::Vector6d & _error) -> Eigen::Isometry3d { return self->computeDesiredTransform(_currentTf, _error); }, (::boost::python::arg("_currentTf"), ::boost::python::arg("_error")))
.def("evalError", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::VectorXd & _q) -> const Eigen::Vector6d & { return self->evalError(_q); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >(), (::boost::python::arg("_q")))
.def("getMethodName", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> const std::string & { return self->getMethodName(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setBounds(); })
.def("setBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector6d & _lower) -> void { return self->setBounds(_lower); }, (::boost::python::arg("_lower")))
.def("setBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector6d & _lower, const Eigen::Vector6d & _upper) -> void { return self->setBounds(_lower, _upper); }, (::boost::python::arg("_lower"), ::boost::python::arg("_upper")))
.def("setBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const std::pair<Eigen::Vector6d, Eigen::Vector6d> & _bounds) -> void { return self->setBounds(_bounds); }, (::boost::python::arg("_bounds")))
.def("getBounds", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> const std::pair<Eigen::Vector6d, Eigen::Vector6d> & { return self->getBounds(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setAngularBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setAngularBounds(); })
.def("setAngularBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _lower) -> void { return self->setAngularBounds(_lower); }, (::boost::python::arg("_lower")))
.def("setAngularBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _lower, const Eigen::Vector3d & _upper) -> void { return self->setAngularBounds(_lower, _upper); }, (::boost::python::arg("_lower"), ::boost::python::arg("_upper")))
.def("setAngularBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const std::pair<Eigen::Vector3d, Eigen::Vector3d> & _bounds) -> void { return self->setAngularBounds(_bounds); }, (::boost::python::arg("_bounds")))
.def("getAngularBounds", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> std::pair<Eigen::Vector3d, Eigen::Vector3d> { return self->getAngularBounds(); })
.def("setLinearBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setLinearBounds(); })
.def("setLinearBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _lower) -> void { return self->setLinearBounds(_lower); }, (::boost::python::arg("_lower")))
.def("setLinearBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _lower, const Eigen::Vector3d & _upper) -> void { return self->setLinearBounds(_lower, _upper); }, (::boost::python::arg("_lower"), ::boost::python::arg("_upper")))
.def("setLinearBounds", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const std::pair<Eigen::Vector3d, Eigen::Vector3d> & _bounds) -> void { return self->setLinearBounds(_bounds); }, (::boost::python::arg("_bounds")))
.def("getLinearBounds", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> std::pair<Eigen::Vector3d, Eigen::Vector3d> { return self->getLinearBounds(); })
.def("setErrorLengthClamp", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setErrorLengthClamp(); })
.def("setErrorLengthClamp", [](dart::dynamics::InverseKinematics::ErrorMethod *self, double _clampSize) -> void { return self->setErrorLengthClamp(_clampSize); }, (::boost::python::arg("_clampSize")))
.def("getErrorLengthClamp", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> double { return self->getErrorLengthClamp(); })
.def("setErrorWeights", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector6d & _weights) -> void { return self->setErrorWeights(_weights); }, (::boost::python::arg("_weights")))
.def("getErrorWeights", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> const Eigen::Vector6d & { return self->getErrorWeights(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setAngularErrorWeights", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setAngularErrorWeights(); })
.def("setAngularErrorWeights", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _weights) -> void { return self->setAngularErrorWeights(_weights); }, (::boost::python::arg("_weights")))
.def("getAngularErrorWeights", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> Eigen::Vector3d { return self->getAngularErrorWeights(); })
.def("setLinearErrorWeights", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->setLinearErrorWeights(); })
.def("setLinearErrorWeights", [](dart::dynamics::InverseKinematics::ErrorMethod *self, const Eigen::Vector3d & _weights) -> void { return self->setLinearErrorWeights(_weights); }, (::boost::python::arg("_weights")))
.def("getLinearErrorWeights", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> Eigen::Vector3d { return self->getLinearErrorWeights(); })
.def("getErrorMethodProperties", [](const dart::dynamics::InverseKinematics::ErrorMethod *self) -> dart::dynamics::InverseKinematics::ErrorMethod::Properties { return self->getErrorMethodProperties(); })
.def("clearCache", [](dart::dynamics::InverseKinematics::ErrorMethod *self) -> void { return self->clearCache(); })
;
}

/* footer */
