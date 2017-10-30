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

void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegionE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::TaskSpaceRegion, ::boost::python::bases<dart::dynamics::InverseKinematics::ErrorMethod > >("TaskSpaceRegion", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik) -> dart::dynamics::InverseKinematics::TaskSpaceRegion * { return new dart::dynamics::InverseKinematics::TaskSpaceRegion(_ik); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"))))
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::InverseKinematics * _ik, const dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties & _properties) -> dart::dynamics::InverseKinematics::TaskSpaceRegion * { return new dart::dynamics::InverseKinematics::TaskSpaceRegion(_ik, _properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_ik"), ::boost::python::arg("_properties"))))
.def("clone", [](const dart::dynamics::InverseKinematics::TaskSpaceRegion *self, dart::dynamics::InverseKinematics * _newIK) -> std::unique_ptr<dart::dynamics::InverseKinematics::ErrorMethod> { return self->clone(_newIK); }, (::boost::python::arg("_newIK")))
.def("computeDesiredTransform", [](dart::dynamics::InverseKinematics::TaskSpaceRegion *self, const Eigen::Isometry3d & _currentTf, const Eigen::Vector6d & _error) -> Eigen::Isometry3d { return self->computeDesiredTransform(_currentTf, _error); }, (::boost::python::arg("_currentTf"), ::boost::python::arg("_error")))
.def("computeError", [](dart::dynamics::InverseKinematics::TaskSpaceRegion *self) -> Eigen::Vector6d { return self->computeError(); })
.def("setComputeFromCenter", [](dart::dynamics::InverseKinematics::TaskSpaceRegion *self, bool computeFromCenter) -> void { return self->setComputeFromCenter(computeFromCenter); }, (::boost::python::arg("computeFromCenter")))
.def("isComputingFromCenter", [](const dart::dynamics::InverseKinematics::TaskSpaceRegion *self) -> bool { return self->isComputingFromCenter(); })
.def("getTaskSpaceRegionProperties", [](const dart::dynamics::InverseKinematics::TaskSpaceRegion *self) -> dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties { return self->getTaskSpaceRegionProperties(); })
;
}

/* footer */
