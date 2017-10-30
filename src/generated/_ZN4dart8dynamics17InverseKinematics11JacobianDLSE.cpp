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

void _ZN4dart8dynamics17InverseKinematics11JacobianDLSE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::JacobianDLS, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod > >("JacobianDLS", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik) -> dart::dynamics::InverseKinematics::JacobianDLS * { return new dart::dynamics::InverseKinematics::JacobianDLS(_ik); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik, const dart::dynamics::InverseKinematics::JacobianDLS::Properties & properties) -> dart::dynamics::InverseKinematics::JacobianDLS * { return new dart::dynamics::InverseKinematics::JacobianDLS(_ik, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"), ::boost::python::arg("properties"))))
.def("clone", [](const dart::dynamics::InverseKinematics::JacobianDLS *self, dart::dynamics::InverseKinematics * _newIK) -> std::unique_ptr<dart::dynamics::InverseKinematics::GradientMethod> { return self->clone(_newIK); }, (::boost::python::arg("_newIK")))
.def("computeGradient", [](dart::dynamics::InverseKinematics::JacobianDLS *self, const Eigen::Vector6d & _error, Eigen::VectorXd & _grad) -> void { return self->computeGradient(_error, _grad); }, (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
.def("setDampingCoefficient", [](dart::dynamics::InverseKinematics::JacobianDLS *self) -> void { return self->setDampingCoefficient(); })
.def("setDampingCoefficient", [](dart::dynamics::InverseKinematics::JacobianDLS *self, double _damping) -> void { return self->setDampingCoefficient(_damping); }, (::boost::python::arg("_damping")))
.def("getDampingCoefficient", [](const dart::dynamics::InverseKinematics::JacobianDLS *self) -> double { return self->getDampingCoefficient(); })
.def("getJacobianDLSProperties", [](const dart::dynamics::InverseKinematics::JacobianDLS *self) -> dart::dynamics::InverseKinematics::JacobianDLS::Properties { return self->getJacobianDLSProperties(); })
;
}

/* footer */
