#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics11PlanarJointE()
{
::boost::python::class_<dart::dynamics::PlanarJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::MultiDofJoint<3>, dart::common::SpecializedAddonManager<dart::dynamics::detail::PlanarJointAddon> > > >("PlanarJoint", boost::python::no_init)
.def("hasPlanarJointAddon", static_cast<bool (dart::dynamics::PlanarJoint::*)() const>(&dart::dynamics::PlanarJoint::hasPlanarJointAddon))
.def("setPlanarJointAddon", static_cast<void (dart::dynamics::PlanarJoint::*)(const dart::dynamics::PlanarJoint::Addon *)>(&dart::dynamics::PlanarJoint::setPlanarJointAddon), (::boost::python::arg("addon")))
.def("erasePlanarJointAddon", static_cast<void (dart::dynamics::PlanarJoint::*)()>(&dart::dynamics::PlanarJoint::erasePlanarJointAddon))
.def("releasePlanarJointAddon", static_cast<std::unique_ptr<dart::dynamics::PlanarJoint::Addon> (dart::dynamics::PlanarJoint::*)()>(&dart::dynamics::PlanarJoint::releasePlanarJointAddon))
.def("setProperties", static_cast<void (dart::dynamics::PlanarJoint::*)(const dart::dynamics::PlanarJoint::Properties &)>(&dart::dynamics::PlanarJoint::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::PlanarJoint::*)(const dart::dynamics::PlanarJoint::UniqueProperties &)>(&dart::dynamics::PlanarJoint::setProperties), (::boost::python::arg("_properties")))
.def("getPlanarJointProperties", static_cast<dart::dynamics::PlanarJoint::Properties (dart::dynamics::PlanarJoint::*)() const>(&dart::dynamics::PlanarJoint::getPlanarJointProperties))
.def("copy", static_cast<void (dart::dynamics::PlanarJoint::*)(const dart::dynamics::PlanarJoint &)>(&dart::dynamics::PlanarJoint::copy), (::boost::python::arg("_otherJoint")))
.def("copy", static_cast<void (dart::dynamics::PlanarJoint::*)(const dart::dynamics::PlanarJoint *)>(&dart::dynamics::PlanarJoint::copy), (::boost::python::arg("_otherJoint")))
.def("getType", static_cast<const std::string &(dart::dynamics::PlanarJoint::*)() const>(&dart::dynamics::PlanarJoint::getType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getStaticType", static_cast<const std::string &(*)()>(&dart::dynamics::PlanarJoint::getStaticType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", static_cast<bool (dart::dynamics::PlanarJoint::*)(std::size_t) const>(&dart::dynamics::PlanarJoint::isCyclic), (::boost::python::arg("_index")))
.def("setXYPlane", static_cast<void (dart::dynamics::PlanarJoint::*)(bool)>(&dart::dynamics::PlanarJoint::setXYPlane), (::boost::python::arg("_renameDofs") = true))
.def("setYZPlane", static_cast<void (dart::dynamics::PlanarJoint::*)(bool)>(&dart::dynamics::PlanarJoint::setYZPlane), (::boost::python::arg("_renameDofs") = true))
.def("setZXPlane", static_cast<void (dart::dynamics::PlanarJoint::*)(bool)>(&dart::dynamics::PlanarJoint::setZXPlane), (::boost::python::arg("_renameDofs") = true))
.def("setArbitraryPlane", static_cast<void (dart::dynamics::PlanarJoint::*)(const Eigen::Vector3d &, const Eigen::Vector3d &, bool)>(&dart::dynamics::PlanarJoint::setArbitraryPlane), (::boost::python::arg("_transAxis1"), ::boost::python::arg("_transAxis2"), ::boost::python::arg("_renameDofs") = true))
.def("getPlaneType", static_cast<dart::dynamics::PlanarJoint::PlaneType (dart::dynamics::PlanarJoint::*)() const>(&dart::dynamics::PlanarJoint::getPlaneType))
.def("getRotationalAxis", static_cast<const Eigen::Vector3d &(dart::dynamics::PlanarJoint::*)() const>(&dart::dynamics::PlanarJoint::getRotationalAxis), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getTranslationalAxis1", static_cast<const Eigen::Vector3d &(dart::dynamics::PlanarJoint::*)() const>(&dart::dynamics::PlanarJoint::getTranslationalAxis1), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getTranslationalAxis2", static_cast<const Eigen::Vector3d &(dart::dynamics::PlanarJoint::*)() const>(&dart::dynamics::PlanarJoint::getTranslationalAxis2), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalJacobianStatic", static_cast<Eigen::Matrix<double, 6, 3> (dart::dynamics::PlanarJoint::*)(const Eigen::Vector3d &) const>(&dart::dynamics::PlanarJoint::getLocalJacobianStatic), (::boost::python::arg("_positions")))
.staticmethod("getStaticType")
;
}

/* footer */
