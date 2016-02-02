#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics9BallJointE()
{
::boost::python::class_<dart::dynamics::BallJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::MultiDofJoint<3> > >("BallJoint", boost::python::no_init)
.def("getType", static_cast<const std::string &(dart::dynamics::BallJoint::*)() const>(&dart::dynamics::BallJoint::getType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getStaticType", static_cast<const std::string &(*)()>(&dart::dynamics::BallJoint::getStaticType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", static_cast<bool (dart::dynamics::BallJoint::*)(std::size_t) const>(&dart::dynamics::BallJoint::isCyclic), (::boost::python::arg("_index")))
.def("getBallJointProperties", static_cast<dart::dynamics::BallJoint::Properties (dart::dynamics::BallJoint::*)() const>(&dart::dynamics::BallJoint::getBallJointProperties))
.def("convertToTransform", static_cast<Eigen::Isometry3d (*)(const Eigen::Vector3d &)>(&dart::dynamics::BallJoint::convertToTransform), (::boost::python::arg("_positions")))
.def("convertToRotation", static_cast<Eigen::Matrix3d (*)(const Eigen::Vector3d &)>(&dart::dynamics::BallJoint::convertToRotation), (::boost::python::arg("_positions")))
.def("getLocalJacobianStatic", static_cast<Eigen::Matrix<double, 6, 3> (dart::dynamics::BallJoint::*)(const Eigen::Vector3d &) const>(&dart::dynamics::BallJoint::getLocalJacobianStatic), (::boost::python::arg("_positions")))
.def("getPositionDifferencesStatic", static_cast<Eigen::Vector3d (dart::dynamics::BallJoint::*)(const Eigen::Vector3d &, const Eigen::Vector3d &) const>(&dart::dynamics::BallJoint::getPositionDifferencesStatic), (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.staticmethod("convertToRotation")
.staticmethod("convertToTransform")
.staticmethod("getStaticType")
;
}

/* footer */
