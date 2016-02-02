#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics9WeldJointE()
{
::boost::python::class_<dart::dynamics::WeldJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::ZeroDofJoint > >("WeldJoint", boost::python::no_init)
.def("getWeldJointProperties", static_cast<dart::dynamics::WeldJoint::Properties (dart::dynamics::WeldJoint::*)() const>(&dart::dynamics::WeldJoint::getWeldJointProperties))
.def("getType", static_cast<const std::string &(dart::dynamics::WeldJoint::*)() const>(&dart::dynamics::WeldJoint::getType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getStaticType", static_cast<const std::string &(*)()>(&dart::dynamics::WeldJoint::getStaticType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", static_cast<bool (dart::dynamics::WeldJoint::*)(std::size_t) const>(&dart::dynamics::WeldJoint::isCyclic), (::boost::python::arg("_index")))
.def("setTransformFromParentBodyNode", static_cast<void (dart::dynamics::WeldJoint::*)(const Eigen::Isometry3d &)>(&dart::dynamics::WeldJoint::setTransformFromParentBodyNode), (::boost::python::arg("_T")))
.def("setTransformFromChildBodyNode", static_cast<void (dart::dynamics::WeldJoint::*)(const Eigen::Isometry3d &)>(&dart::dynamics::WeldJoint::setTransformFromChildBodyNode), (::boost::python::arg("_T")))
.staticmethod("getStaticType")
;
}

/* footer */
