#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics10AnalyticalE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::Analytical, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod > >("Analytical", boost::python::no_init)
.def("computeGradient", static_cast<void (dart::dynamics::InverseKinematics::Analytical::*)(const Eigen::Vector6d &, Eigen::VectorXd &)>(&dart::dynamics::InverseKinematics::Analytical::computeGradient), (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
.def("setPositions", static_cast<void (dart::dynamics::InverseKinematics::Analytical::*)(const Eigen::VectorXd &)>(&dart::dynamics::InverseKinematics::Analytical::setPositions), (::boost::python::arg("_config")))
.def("getPositions", static_cast<Eigen::VectorXd (dart::dynamics::InverseKinematics::Analytical::*)() const>(&dart::dynamics::InverseKinematics::Analytical::getPositions))
.def("setExtraDofUtilization", static_cast<void (dart::dynamics::InverseKinematics::Analytical::*)(dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t)>(&dart::dynamics::InverseKinematics::Analytical::setExtraDofUtilization), (::boost::python::arg("_utilization")))
.def("getExtraDofUtilization", static_cast<dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t (dart::dynamics::InverseKinematics::Analytical::*)() const>(&dart::dynamics::InverseKinematics::Analytical::getExtraDofUtilization))
.def("setExtraErrorLengthClamp", static_cast<void (dart::dynamics::InverseKinematics::Analytical::*)(double)>(&dart::dynamics::InverseKinematics::Analytical::setExtraErrorLengthClamp), (::boost::python::arg("_clamp")))
.def("getExtraErrorLengthClamp", static_cast<double (dart::dynamics::InverseKinematics::Analytical::*)() const>(&dart::dynamics::InverseKinematics::Analytical::getExtraErrorLengthClamp))
.def("setQualityComparisonFunction", static_cast<void (dart::dynamics::InverseKinematics::Analytical::*)(const dart::dynamics::InverseKinematics::Analytical::QualityComparison &)>(&dart::dynamics::InverseKinematics::Analytical::setQualityComparisonFunction), (::boost::python::arg("_func")))
.def("resetQualityComparisonFunction", static_cast<void (dart::dynamics::InverseKinematics::Analytical::*)()>(&dart::dynamics::InverseKinematics::Analytical::resetQualityComparisonFunction))
.def("getAnalyticalProperties", static_cast<dart::dynamics::InverseKinematics::Analytical::Properties (dart::dynamics::InverseKinematics::Analytical::*)() const>(&dart::dynamics::InverseKinematics::Analytical::getAnalyticalProperties))
.def("constructDofMap", static_cast<void (dart::dynamics::InverseKinematics::Analytical::*)()>(&dart::dynamics::InverseKinematics::Analytical::constructDofMap))
;
}

/* footer */
