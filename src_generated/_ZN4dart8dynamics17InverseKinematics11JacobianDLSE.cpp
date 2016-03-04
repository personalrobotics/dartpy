#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics11JacobianDLSE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::JacobianDLS, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod > >("JacobianDLS", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::InverseKinematics *, const dart::dynamics::InverseKinematics::JacobianDLS::Properties &>((::boost::python::arg("_ik"), ::boost::python::arg("properties"))))
.def("clone", static_cast<std::unique_ptr<dart::dynamics::InverseKinematics::GradientMethod> (dart::dynamics::InverseKinematics::JacobianDLS::*)(dart::dynamics::InverseKinematics *) const>(&dart::dynamics::InverseKinematics::JacobianDLS::clone), (::boost::python::arg("_newIK")))
.def("computeGradient", static_cast<void (dart::dynamics::InverseKinematics::JacobianDLS::*)(const Eigen::Vector6d &, Eigen::VectorXd &)>(&dart::dynamics::InverseKinematics::JacobianDLS::computeGradient), (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
.def("setDampingCoefficient", static_cast<void (dart::dynamics::InverseKinematics::JacobianDLS::*)(double)>(&dart::dynamics::InverseKinematics::JacobianDLS::setDampingCoefficient), (::boost::python::arg("_damping")))
.def("getDampingCoefficient", static_cast<double (dart::dynamics::InverseKinematics::JacobianDLS::*)() const>(&dart::dynamics::InverseKinematics::JacobianDLS::getDampingCoefficient))
.def("getJacobianDLSProperties", static_cast<dart::dynamics::InverseKinematics::JacobianDLS::Properties (dart::dynamics::InverseKinematics::JacobianDLS::*)() const>(&dart::dynamics::InverseKinematics::JacobianDLS::getJacobianDLSProperties))
;
}

/* footer */
