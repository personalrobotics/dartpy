#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics17JacobianTransposeE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::JacobianTranspose, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod > >("JacobianTranspose", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::InverseKinematics *, const dart::dynamics::InverseKinematics::GradientMethod::Properties &>((::boost::python::arg("_ik"), ::boost::python::arg("properties"))))
.def("clone", static_cast<std::unique_ptr<dart::dynamics::InverseKinematics::GradientMethod> (dart::dynamics::InverseKinematics::JacobianTranspose::*)(dart::dynamics::InverseKinematics *) const>(&dart::dynamics::InverseKinematics::JacobianTranspose::clone), (::boost::python::arg("_newIK")))
.def("computeGradient", static_cast<void (dart::dynamics::InverseKinematics::JacobianTranspose::*)(const Eigen::Vector6d &, Eigen::VectorXd &)>(&dart::dynamics::InverseKinematics::JacobianTranspose::computeGradient), (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
;
}

/* footer */
