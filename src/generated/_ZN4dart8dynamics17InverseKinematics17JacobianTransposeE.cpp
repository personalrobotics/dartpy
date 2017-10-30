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

void _ZN4dart8dynamics17InverseKinematics17JacobianTransposeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::JacobianTranspose, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod > >("JacobianTranspose", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik) -> dart::dynamics::InverseKinematics::JacobianTranspose * { return new dart::dynamics::InverseKinematics::JacobianTranspose(_ik); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik, const dart::dynamics::InverseKinematics::GradientMethod::Properties & properties) -> dart::dynamics::InverseKinematics::JacobianTranspose * { return new dart::dynamics::InverseKinematics::JacobianTranspose(_ik, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"), ::boost::python::arg("properties"))))
.def("clone", [](const dart::dynamics::InverseKinematics::JacobianTranspose *self, dart::dynamics::InverseKinematics * _newIK) -> std::unique_ptr<dart::dynamics::InverseKinematics::GradientMethod> { return self->clone(_newIK); }, (::boost::python::arg("_newIK")))
.def("computeGradient", [](dart::dynamics::InverseKinematics::JacobianTranspose *self, const Eigen::Vector6d & _error, Eigen::VectorXd & _grad) -> void { return self->computeGradient(_error, _grad); }, (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
;
}

/* footer */
