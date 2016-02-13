#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics10EulerJointE()
{
::boost::python::class_<dart::dynamics::EulerJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::MultiDofJoint<3>, dart::common::SpecializedAddonManager<dart::dynamics::detail::EulerJointAddon> > > >("EulerJoint", boost::python::no_init)
.def("hasEulerJointAddon", static_cast<bool (dart::dynamics::EulerJoint::*)() const>(&dart::dynamics::EulerJoint::hasEulerJointAddon))
.def("setEulerJointAddon", static_cast<void (dart::dynamics::EulerJoint::*)(const dart::dynamics::EulerJoint::Addon *)>(&dart::dynamics::EulerJoint::setEulerJointAddon), (::boost::python::arg("addon")))
.def("eraseEulerJointAddon", static_cast<void (dart::dynamics::EulerJoint::*)()>(&dart::dynamics::EulerJoint::eraseEulerJointAddon))
.def("releaseEulerJointAddon", static_cast<std::unique_ptr<dart::dynamics::EulerJoint::Addon> (dart::dynamics::EulerJoint::*)()>(&dart::dynamics::EulerJoint::releaseEulerJointAddon))
.def("setProperties", static_cast<void (dart::dynamics::EulerJoint::*)(const dart::dynamics::EulerJoint::Properties &)>(&dart::dynamics::EulerJoint::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::EulerJoint::*)(const dart::dynamics::EulerJoint::UniqueProperties &)>(&dart::dynamics::EulerJoint::setProperties), (::boost::python::arg("_properties")))
.def("getEulerJointProperties", static_cast<dart::dynamics::EulerJoint::Properties (dart::dynamics::EulerJoint::*)() const>(&dart::dynamics::EulerJoint::getEulerJointProperties))
.def("copy", static_cast<void (dart::dynamics::EulerJoint::*)(const dart::dynamics::EulerJoint &)>(&dart::dynamics::EulerJoint::copy), (::boost::python::arg("_otherJoint")))
.def("copy", static_cast<void (dart::dynamics::EulerJoint::*)(const dart::dynamics::EulerJoint *)>(&dart::dynamics::EulerJoint::copy), (::boost::python::arg("_otherJoint")))
.def("getType", static_cast<const std::string &(dart::dynamics::EulerJoint::*)() const>(&dart::dynamics::EulerJoint::getType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getStaticType", static_cast<const std::string &(*)()>(&dart::dynamics::EulerJoint::getStaticType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", static_cast<bool (dart::dynamics::EulerJoint::*)(std::size_t) const>(&dart::dynamics::EulerJoint::isCyclic), (::boost::python::arg("_index")))
.def("setAxisOrder", static_cast<void (dart::dynamics::EulerJoint::*)(dart::dynamics::EulerJoint::AxisOrder, bool)>(&dart::dynamics::EulerJoint::setAxisOrder), (::boost::python::arg("_order"), ::boost::python::arg("_renameDofs") = true))
.def("getAxisOrder", static_cast<dart::dynamics::EulerJoint::AxisOrder (dart::dynamics::EulerJoint::*)() const>(&dart::dynamics::EulerJoint::getAxisOrder))
.def("convertToTransform", static_cast<Eigen::Isometry3d (*)(const Eigen::Vector3d &, dart::dynamics::EulerJoint::AxisOrder)>(&dart::dynamics::EulerJoint::convertToTransform), (::boost::python::arg("_positions"), ::boost::python::arg("_ordering")))
.def("convertToTransform", static_cast<Eigen::Isometry3d (dart::dynamics::EulerJoint::*)(const Eigen::Vector3d &) const>(&dart::dynamics::EulerJoint::convertToTransform), (::boost::python::arg("_positions")))
.def("convertToRotation", static_cast<Eigen::Matrix3d (*)(const Eigen::Vector3d &, dart::dynamics::EulerJoint::AxisOrder)>(&dart::dynamics::EulerJoint::convertToRotation), (::boost::python::arg("_positions"), ::boost::python::arg("_ordering")))
.def("convertToRotation", static_cast<Eigen::Matrix3d (dart::dynamics::EulerJoint::*)(const Eigen::Vector3d &) const>(&dart::dynamics::EulerJoint::convertToRotation), (::boost::python::arg("_positions")))
.def("getLocalJacobianStatic", static_cast<Eigen::Matrix<double, 6, 3> (dart::dynamics::EulerJoint::*)(const Eigen::Vector3d &) const>(&dart::dynamics::EulerJoint::getLocalJacobianStatic), (::boost::python::arg("_positions")))
.staticmethod("convertToRotation")
.staticmethod("convertToTransform")
.staticmethod("getStaticType")
;
}

/* footer */
