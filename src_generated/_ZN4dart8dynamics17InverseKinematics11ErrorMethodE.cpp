#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics11ErrorMethodE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::ErrorMethod, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("ErrorMethod", boost::python::no_init)
.def("clone", static_cast<std::unique_ptr<dart::dynamics::InverseKinematics::ErrorMethod> (dart::dynamics::InverseKinematics::ErrorMethod::*)(dart::dynamics::InverseKinematics *) const>(&dart::dynamics::InverseKinematics::ErrorMethod::clone), (::boost::python::arg("_newIK")))
.def("computeError", static_cast<Eigen::Vector6d (dart::dynamics::InverseKinematics::ErrorMethod::*)()>(&dart::dynamics::InverseKinematics::ErrorMethod::computeError))
.def("computeDesiredTransform", static_cast<Eigen::Isometry3d (dart::dynamics::InverseKinematics::ErrorMethod::*)(const Eigen::Isometry3d &, const Eigen::Vector6d &)>(&dart::dynamics::InverseKinematics::ErrorMethod::computeDesiredTransform), (::boost::python::arg("_currentTf"), ::boost::python::arg("_error")))
.def("evalError", static_cast<const Eigen::Vector6d &(dart::dynamics::InverseKinematics::ErrorMethod::*)(const Eigen::VectorXd &)>(&dart::dynamics::InverseKinematics::ErrorMethod::evalError), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_q")))
.def("getMethodName", static_cast<const std::string &(dart::dynamics::InverseKinematics::ErrorMethod::*)() const>(&dart::dynamics::InverseKinematics::ErrorMethod::getMethodName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setBounds", static_cast<void (dart::dynamics::InverseKinematics::ErrorMethod::*)(const Eigen::Vector6d &, const Eigen::Vector6d &)>(&dart::dynamics::InverseKinematics::ErrorMethod::setBounds), (::boost::python::arg("_lower"), ::boost::python::arg("_upper")))
.def("setBounds", static_cast<void (dart::dynamics::InverseKinematics::ErrorMethod::*)(const std::pair<Eigen::Vector6d, Eigen::Vector6d> &)>(&dart::dynamics::InverseKinematics::ErrorMethod::setBounds), (::boost::python::arg("_bounds")))
.def("setAngularBounds", static_cast<void (dart::dynamics::InverseKinematics::ErrorMethod::*)(const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::dynamics::InverseKinematics::ErrorMethod::setAngularBounds), (::boost::python::arg("_lower"), ::boost::python::arg("_upper")))
.def("setAngularBounds", static_cast<void (dart::dynamics::InverseKinematics::ErrorMethod::*)(const std::pair<Eigen::Vector3d, Eigen::Vector3d> &)>(&dart::dynamics::InverseKinematics::ErrorMethod::setAngularBounds), (::boost::python::arg("_bounds")))
.def("getAngularBounds", static_cast<std::pair<Eigen::Vector3d, Eigen::Vector3d> (dart::dynamics::InverseKinematics::ErrorMethod::*)() const>(&dart::dynamics::InverseKinematics::ErrorMethod::getAngularBounds))
.def("setLinearBounds", static_cast<void (dart::dynamics::InverseKinematics::ErrorMethod::*)(const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::dynamics::InverseKinematics::ErrorMethod::setLinearBounds), (::boost::python::arg("_lower"), ::boost::python::arg("_upper")))
.def("setLinearBounds", static_cast<void (dart::dynamics::InverseKinematics::ErrorMethod::*)(const std::pair<Eigen::Vector3d, Eigen::Vector3d> &)>(&dart::dynamics::InverseKinematics::ErrorMethod::setLinearBounds), (::boost::python::arg("_bounds")))
.def("getLinearBounds", static_cast<std::pair<Eigen::Vector3d, Eigen::Vector3d> (dart::dynamics::InverseKinematics::ErrorMethod::*)() const>(&dart::dynamics::InverseKinematics::ErrorMethod::getLinearBounds))
.def("setErrorLengthClamp", static_cast<void (dart::dynamics::InverseKinematics::ErrorMethod::*)(double)>(&dart::dynamics::InverseKinematics::ErrorMethod::setErrorLengthClamp), (::boost::python::arg("_clampSize") = 1.000000e+00))
.def("getErrorLengthClamp", static_cast<double (dart::dynamics::InverseKinematics::ErrorMethod::*)() const>(&dart::dynamics::InverseKinematics::ErrorMethod::getErrorLengthClamp))
.def("setErrorWeights", static_cast<void (dart::dynamics::InverseKinematics::ErrorMethod::*)(const Eigen::Vector6d &)>(&dart::dynamics::InverseKinematics::ErrorMethod::setErrorWeights), (::boost::python::arg("_weights")))
.def("getErrorWeights", static_cast<const Eigen::Vector6d &(dart::dynamics::InverseKinematics::ErrorMethod::*)() const>(&dart::dynamics::InverseKinematics::ErrorMethod::getErrorWeights), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAngularErrorWeights", static_cast<void (dart::dynamics::InverseKinematics::ErrorMethod::*)(const Eigen::Vector3d &)>(&dart::dynamics::InverseKinematics::ErrorMethod::setAngularErrorWeights), (::boost::python::arg("_weights")))
.def("getAngularErrorWeights", static_cast<Eigen::Vector3d (dart::dynamics::InverseKinematics::ErrorMethod::*)() const>(&dart::dynamics::InverseKinematics::ErrorMethod::getAngularErrorWeights))
.def("setLinearErrorWeights", static_cast<void (dart::dynamics::InverseKinematics::ErrorMethod::*)(const Eigen::Vector3d &)>(&dart::dynamics::InverseKinematics::ErrorMethod::setLinearErrorWeights), (::boost::python::arg("_weights")))
.def("getLinearErrorWeights", static_cast<Eigen::Vector3d (dart::dynamics::InverseKinematics::ErrorMethod::*)() const>(&dart::dynamics::InverseKinematics::ErrorMethod::getLinearErrorWeights))
.def("getErrorMethodProperties", static_cast<dart::dynamics::InverseKinematics::ErrorMethod::Properties (dart::dynamics::InverseKinematics::ErrorMethod::*)() const>(&dart::dynamics::InverseKinematics::ErrorMethod::getErrorMethodProperties))
.def("clearCache", static_cast<void (dart::dynamics::InverseKinematics::ErrorMethod::*)()>(&dart::dynamics::InverseKinematics::ErrorMethod::clearCache))
;
}

/* footer */
