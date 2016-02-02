#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics14UniversalJointE()
{
::boost::python::class_<dart::dynamics::UniversalJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::MultiDofJoint<2>, dart::common::SpecializedAddonManager<dart::dynamics::detail::UniversalJointAddon> > > >("UniversalJoint", boost::python::no_init)
.def("hasUniversalJointAddon", static_cast<bool (dart::dynamics::UniversalJoint::*)() const>(&dart::dynamics::UniversalJoint::hasUniversalJointAddon))
.def("setUniversalJointAddon", static_cast<void (dart::dynamics::UniversalJoint::*)(const dart::dynamics::UniversalJoint::Addon *)>(&dart::dynamics::UniversalJoint::setUniversalJointAddon), (::boost::python::arg("addon")))
.def("eraseUniversalJointAddon", static_cast<void (dart::dynamics::UniversalJoint::*)()>(&dart::dynamics::UniversalJoint::eraseUniversalJointAddon))
.def("releaseUniversalJointAddon", static_cast<std::unique_ptr<dart::dynamics::UniversalJoint::Addon> (dart::dynamics::UniversalJoint::*)()>(&dart::dynamics::UniversalJoint::releaseUniversalJointAddon))
.def("setProperties", static_cast<void (dart::dynamics::UniversalJoint::*)(const dart::dynamics::UniversalJoint::Properties &)>(&dart::dynamics::UniversalJoint::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::UniversalJoint::*)(const dart::dynamics::UniversalJoint::UniqueProperties &)>(&dart::dynamics::UniversalJoint::setProperties), (::boost::python::arg("_properties")))
.def("getUniversalJointProperties", static_cast<dart::dynamics::UniversalJoint::Properties (dart::dynamics::UniversalJoint::*)() const>(&dart::dynamics::UniversalJoint::getUniversalJointProperties))
.def("copy", static_cast<void (dart::dynamics::UniversalJoint::*)(const dart::dynamics::UniversalJoint &)>(&dart::dynamics::UniversalJoint::copy), (::boost::python::arg("_otherJoint")))
.def("copy", static_cast<void (dart::dynamics::UniversalJoint::*)(const dart::dynamics::UniversalJoint *)>(&dart::dynamics::UniversalJoint::copy), (::boost::python::arg("_otherJoint")))
.def("getType", static_cast<const std::string &(dart::dynamics::UniversalJoint::*)() const>(&dart::dynamics::UniversalJoint::getType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getStaticType", static_cast<const std::string &(*)()>(&dart::dynamics::UniversalJoint::getStaticType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", static_cast<bool (dart::dynamics::UniversalJoint::*)(std::size_t) const>(&dart::dynamics::UniversalJoint::isCyclic), (::boost::python::arg("_index")))
.def("setAxis1", static_cast<void (dart::dynamics::UniversalJoint::*)(const Eigen::Vector3d &)>(&dart::dynamics::UniversalJoint::setAxis1), (::boost::python::arg("_axis")))
.def("setAxis2", static_cast<void (dart::dynamics::UniversalJoint::*)(const Eigen::Vector3d &)>(&dart::dynamics::UniversalJoint::setAxis2), (::boost::python::arg("_axis")))
.def("getAxis1", static_cast<const Eigen::Vector3d &(dart::dynamics::UniversalJoint::*)() const>(&dart::dynamics::UniversalJoint::getAxis1), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getAxis2", static_cast<const Eigen::Vector3d &(dart::dynamics::UniversalJoint::*)() const>(&dart::dynamics::UniversalJoint::getAxis2), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalJacobianStatic", static_cast<Eigen::Matrix<double, 6, 2> (dart::dynamics::UniversalJoint::*)(const Eigen::Vector2d &) const>(&dart::dynamics::UniversalJoint::getLocalJacobianStatic), (::boost::python::arg("_positions")))
.staticmethod("getStaticType")
;
}

/* footer */
