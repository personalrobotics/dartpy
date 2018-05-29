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

void _ZN4dart8dynamics17InverseKinematics14GradientMethodE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::GradientMethod, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("GradientMethod", boost::python::no_init)
.def("clone", [](const dart::dynamics::InverseKinematics::GradientMethod *self, dart::dynamics::InverseKinematics * _newIK) -> std::unique_ptr<dart::dynamics::InverseKinematics::GradientMethod> { return self->clone(_newIK); }, (::boost::python::arg("_newIK")))
.def("computeGradient", [](dart::dynamics::InverseKinematics::GradientMethod *self, const Eigen::Vector6d & _error, Eigen::VectorXd & _grad) -> void { return self->computeGradient(_error, _grad); }, (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
.def("evalGradient", [](dart::dynamics::InverseKinematics::GradientMethod *self, const Eigen::VectorXd & _q, Eigen::Map<Eigen::VectorXd> _grad) -> void { return self->evalGradient(_q, _grad); }, (::boost::python::arg("_q"), ::boost::python::arg("_grad")))
.def("getMethodName", [](const dart::dynamics::InverseKinematics::GradientMethod *self) -> const std::string & { return self->getMethodName(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("clampGradient", [](const dart::dynamics::InverseKinematics::GradientMethod *self, Eigen::VectorXd & _grad) -> void { return self->clampGradient(_grad); }, (::boost::python::arg("_grad")))
.def("setComponentWiseClamp", [](dart::dynamics::InverseKinematics::GradientMethod *self) -> void { return self->setComponentWiseClamp(); })
.def("setComponentWiseClamp", [](dart::dynamics::InverseKinematics::GradientMethod *self, double _clamp) -> void { return self->setComponentWiseClamp(_clamp); }, (::boost::python::arg("_clamp")))
.def("getComponentWiseClamp", [](const dart::dynamics::InverseKinematics::GradientMethod *self) -> double { return self->getComponentWiseClamp(); })
.def("applyWeights", [](const dart::dynamics::InverseKinematics::GradientMethod *self, Eigen::VectorXd & _grad) -> void { return self->applyWeights(_grad); }, (::boost::python::arg("_grad")))
.def("setComponentWeights", [](dart::dynamics::InverseKinematics::GradientMethod *self, const Eigen::VectorXd & _weights) -> void { return self->setComponentWeights(_weights); }, (::boost::python::arg("_weights")))
.def("getComponentWeights", [](const dart::dynamics::InverseKinematics::GradientMethod *self) -> const Eigen::VectorXd & { return self->getComponentWeights(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("convertJacobianMethodOutputToGradient", [](dart::dynamics::InverseKinematics::GradientMethod *self, Eigen::VectorXd & grad, const std::vector<std::size_t> & dofs) -> void { return self->convertJacobianMethodOutputToGradient(grad, dofs); }, (::boost::python::arg("grad"), ::boost::python::arg("dofs")))
.def("getGradientMethodProperties", [](const dart::dynamics::InverseKinematics::GradientMethod *self) -> dart::dynamics::InverseKinematics::GradientMethod::Properties { return self->getGradientMethodProperties(); })
.def("clearCache", [](dart::dynamics::InverseKinematics::GradientMethod *self) -> void { return self->clearCache(); })
.def("getIK", [](dart::dynamics::InverseKinematics::GradientMethod *self) -> dart::dynamics::InverseKinematics * { return self->getIK(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
;
}

/* footer */
