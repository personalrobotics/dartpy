#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics10AnalyticalE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::Analytical, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod > >("Analytical", boost::python::no_init)
.def("getSolutions", static_cast<const std::vector<dart::dynamics::InverseKinematics::Analytical::Solution> &(dart::dynamics::InverseKinematics::Analytical::*)()>(&dart::dynamics::InverseKinematics::Analytical::getSolutions), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getSolutions", static_cast<const std::vector<dart::dynamics::InverseKinematics::Analytical::Solution> &(dart::dynamics::InverseKinematics::Analytical::*)(const Eigen::Isometry3d &)>(&dart::dynamics::InverseKinematics::Analytical::getSolutions), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_desiredTf")))
.def("computeGradient", static_cast<void (dart::dynamics::InverseKinematics::Analytical::*)(const Eigen::Vector6d &, Eigen::VectorXd &)>(&dart::dynamics::InverseKinematics::Analytical::computeGradient), (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
.def("computeSolutions", static_cast<const std::vector<dart::dynamics::InverseKinematics::Analytical::Solution> &(dart::dynamics::InverseKinematics::Analytical::*)(const Eigen::Isometry3d &)>(&dart::dynamics::InverseKinematics::Analytical::computeSolutions), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_desiredBodyTf")))
.def("getDofs", static_cast<const std::vector<std::size_t> &(dart::dynamics::InverseKinematics::Analytical::*)() const>(&dart::dynamics::InverseKinematics::Analytical::getDofs), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
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
