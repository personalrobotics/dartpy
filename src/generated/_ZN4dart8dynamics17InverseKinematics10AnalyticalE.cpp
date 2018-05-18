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

void _ZN4dart8dynamics17InverseKinematics10AnalyticalE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::Analytical, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::InverseKinematics::GradientMethod > >("Analytical", boost::python::no_init)
.def("getSolutions", [](dart::dynamics::InverseKinematics::Analytical *self) -> const std::vector<dart::dynamics::InverseKinematics::Analytical::Solution> & { return self->getSolutions(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getSolutions", [](dart::dynamics::InverseKinematics::Analytical *self, const Eigen::Isometry3d & _desiredTf) -> const std::vector<dart::dynamics::InverseKinematics::Analytical::Solution> & { return self->getSolutions(_desiredTf); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_desiredTf")))
.def("computeGradient", [](dart::dynamics::InverseKinematics::Analytical *self, const Eigen::Vector6d & _error, Eigen::VectorXd & _grad) -> void { return self->computeGradient(_error, _grad); }, (::boost::python::arg("_error"), ::boost::python::arg("_grad")))
.def("computeSolutions", [](dart::dynamics::InverseKinematics::Analytical *self, const Eigen::Isometry3d & _desiredBodyTf) -> const std::vector<dart::dynamics::InverseKinematics::Analytical::Solution> & { return self->computeSolutions(_desiredBodyTf); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_desiredBodyTf")))
.def("getDofs", [](const dart::dynamics::InverseKinematics::Analytical *self) -> const std::vector<std::size_t> & { return self->getDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPositions", [](dart::dynamics::InverseKinematics::Analytical *self, const Eigen::VectorXd & _config) -> void { return self->setPositions(_config); }, (::boost::python::arg("_config")))
.def("getPositions", [](const dart::dynamics::InverseKinematics::Analytical *self) -> Eigen::VectorXd { return self->getPositions(); })
.def("setExtraDofUtilization", [](dart::dynamics::InverseKinematics::Analytical *self, dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization _utilization) -> void { return self->setExtraDofUtilization(_utilization); }, (::boost::python::arg("_utilization")))
.def("getExtraDofUtilization", [](const dart::dynamics::InverseKinematics::Analytical *self) -> dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization { return self->getExtraDofUtilization(); })
.def("setExtraErrorLengthClamp", [](dart::dynamics::InverseKinematics::Analytical *self, double _clamp) -> void { return self->setExtraErrorLengthClamp(_clamp); }, (::boost::python::arg("_clamp")))
.def("getExtraErrorLengthClamp", [](const dart::dynamics::InverseKinematics::Analytical *self) -> double { return self->getExtraErrorLengthClamp(); })
.def("setQualityComparisonFunction", [](dart::dynamics::InverseKinematics::Analytical *self, const dart::dynamics::InverseKinematics::Analytical::QualityComparison & _func) -> void { return self->setQualityComparisonFunction(_func); }, (::boost::python::arg("_func")))
.def("resetQualityComparisonFunction", [](dart::dynamics::InverseKinematics::Analytical *self) -> void { return self->resetQualityComparisonFunction(); })
.def("getAnalyticalProperties", [](const dart::dynamics::InverseKinematics::Analytical *self) -> dart::dynamics::InverseKinematics::Analytical::Properties { return self->getAnalyticalProperties(); })
.def("constructDofMap", [](dart::dynamics::InverseKinematics::Analytical *self) -> void { return self->constructDofMap(); })
;
}

/* footer */
