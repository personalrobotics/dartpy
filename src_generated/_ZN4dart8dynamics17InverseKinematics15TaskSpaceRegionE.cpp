#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegionE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::TaskSpaceRegion, ::boost::python::bases<dart::dynamics::InverseKinematics::ErrorMethod > >("TaskSpaceRegion", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::InverseKinematics *, const dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties &>((::boost::python::arg("_ik"), ::boost::python::arg("_properties"))))
.def("clone", static_cast<std::unique_ptr<dart::dynamics::InverseKinematics::ErrorMethod> (dart::dynamics::InverseKinematics::TaskSpaceRegion::*)(dart::dynamics::InverseKinematics *) const>(&dart::dynamics::InverseKinematics::TaskSpaceRegion::clone), (::boost::python::arg("_newIK")))
.def("computeDesiredTransform", static_cast<Eigen::Isometry3d (dart::dynamics::InverseKinematics::TaskSpaceRegion::*)(const Eigen::Isometry3d &, const Eigen::Vector6d &)>(&dart::dynamics::InverseKinematics::TaskSpaceRegion::computeDesiredTransform), (::boost::python::arg("_currentTf"), ::boost::python::arg("_error")))
.def("computeError", static_cast<Eigen::Vector6d (dart::dynamics::InverseKinematics::TaskSpaceRegion::*)()>(&dart::dynamics::InverseKinematics::TaskSpaceRegion::computeError))
.def("setComputeFromCenter", static_cast<void (dart::dynamics::InverseKinematics::TaskSpaceRegion::*)(bool)>(&dart::dynamics::InverseKinematics::TaskSpaceRegion::setComputeFromCenter), (::boost::python::arg("computeFromCenter")))
.def("isComputingFromCenter", static_cast<bool (dart::dynamics::InverseKinematics::TaskSpaceRegion::*)() const>(&dart::dynamics::InverseKinematics::TaskSpaceRegion::isComputingFromCenter))
.def("getTaskSpaceRegionProperties", static_cast<dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties (dart::dynamics::InverseKinematics::TaskSpaceRegion::*)() const>(&dart::dynamics::InverseKinematics::TaskSpaceRegion::getTaskSpaceRegionProperties))
;
}

/* footer */
