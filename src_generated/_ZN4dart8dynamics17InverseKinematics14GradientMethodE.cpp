#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics14GradientMethodE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::GradientMethod, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("GradientMethod", boost::python::no_init)
.def("clone", static_cast<std::unique_ptr<dart::dynamics::InverseKinematics::GradientMethod> (dart::dynamics::InverseKinematics::GradientMethod::*)(dart::dynamics::InverseKinematics *) const>(&dart::dynamics::InverseKinematics::GradientMethod::clone), (::boost::python::arg("_newIK")))
.def("computeGradient", static_cast<void (dart::dynamics::InverseKinematics::GradientMethod::*)(const Eigen::Vector6d &, Eigen::VectorXd &)>(&dart::dynamics::InverseKinematics::GradientMethod::computeGradient), (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
.def("evalGradient", static_cast<void (dart::dynamics::InverseKinematics::GradientMethod::*)(const Eigen::VectorXd &, Eigen::Map<Eigen::VectorXd>)>(&dart::dynamics::InverseKinematics::GradientMethod::evalGradient), (::boost::python::arg("_q"), ::boost::python::arg("_grad")))
.def("getMethodName", static_cast<const std::string &(dart::dynamics::InverseKinematics::GradientMethod::*)() const>(&dart::dynamics::InverseKinematics::GradientMethod::getMethodName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("clampGradient", static_cast<void (dart::dynamics::InverseKinematics::GradientMethod::*)(Eigen::VectorXd &) const>(&dart::dynamics::InverseKinematics::GradientMethod::clampGradient), (::boost::python::arg("_grad")))
.def("setComponentWiseClamp", static_cast<void (dart::dynamics::InverseKinematics::GradientMethod::*)(double)>(&dart::dynamics::InverseKinematics::GradientMethod::setComponentWiseClamp), (::boost::python::arg("_clamp")))
.def("getComponentWiseClamp", static_cast<double (dart::dynamics::InverseKinematics::GradientMethod::*)() const>(&dart::dynamics::InverseKinematics::GradientMethod::getComponentWiseClamp))
.def("applyWeights", static_cast<void (dart::dynamics::InverseKinematics::GradientMethod::*)(Eigen::VectorXd &) const>(&dart::dynamics::InverseKinematics::GradientMethod::applyWeights), (::boost::python::arg("_grad")))
.def("setComponentWeights", static_cast<void (dart::dynamics::InverseKinematics::GradientMethod::*)(const Eigen::VectorXd &)>(&dart::dynamics::InverseKinematics::GradientMethod::setComponentWeights), (::boost::python::arg("_weights")))
.def("getComponentWeights", static_cast<const Eigen::VectorXd &(dart::dynamics::InverseKinematics::GradientMethod::*)() const>(&dart::dynamics::InverseKinematics::GradientMethod::getComponentWeights), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getGradientMethodProperties", static_cast<dart::dynamics::InverseKinematics::GradientMethod::Properties (dart::dynamics::InverseKinematics::GradientMethod::*)() const>(&dart::dynamics::InverseKinematics::GradientMethod::getGradientMethodProperties))
.def("clearCache", static_cast<void (dart::dynamics::InverseKinematics::GradientMethod::*)()>(&dart::dynamics::InverseKinematics::GradientMethod::clearCache))
;
}

/* footer */
