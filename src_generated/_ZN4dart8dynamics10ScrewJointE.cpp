#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics10ScrewJointE()
{
::boost::python::class_<dart::dynamics::ScrewJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::SingleDofJoint, dart::common::SpecializedAddonManager<dart::dynamics::detail::ScrewJointAddon> > > >("ScrewJoint", boost::python::no_init)
.def("hasScrewJointAddon", static_cast<bool (dart::dynamics::ScrewJoint::*)() const>(&dart::dynamics::ScrewJoint::hasScrewJointAddon))
.def("setScrewJointAddon", static_cast<void (dart::dynamics::ScrewJoint::*)(const dart::dynamics::ScrewJoint::Addon *)>(&dart::dynamics::ScrewJoint::setScrewJointAddon), (::boost::python::arg("addon")))
.def("eraseScrewJointAddon", static_cast<void (dart::dynamics::ScrewJoint::*)()>(&dart::dynamics::ScrewJoint::eraseScrewJointAddon))
.def("releaseScrewJointAddon", static_cast<std::unique_ptr<dart::dynamics::ScrewJoint::Addon> (dart::dynamics::ScrewJoint::*)()>(&dart::dynamics::ScrewJoint::releaseScrewJointAddon))
.def("setProperties", static_cast<void (dart::dynamics::ScrewJoint::*)(const dart::dynamics::ScrewJoint::Properties &)>(&dart::dynamics::ScrewJoint::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::ScrewJoint::*)(const dart::dynamics::ScrewJoint::UniqueProperties &)>(&dart::dynamics::ScrewJoint::setProperties), (::boost::python::arg("_properties")))
.def("getScrewJointProperties", static_cast<dart::dynamics::ScrewJoint::Properties (dart::dynamics::ScrewJoint::*)() const>(&dart::dynamics::ScrewJoint::getScrewJointProperties))
.def("copy", static_cast<void (dart::dynamics::ScrewJoint::*)(const dart::dynamics::ScrewJoint &)>(&dart::dynamics::ScrewJoint::copy), (::boost::python::arg("_otherJoint")))
.def("copy", static_cast<void (dart::dynamics::ScrewJoint::*)(const dart::dynamics::ScrewJoint *)>(&dart::dynamics::ScrewJoint::copy), (::boost::python::arg("_otherJoint")))
.def("getType", static_cast<const std::string &(dart::dynamics::ScrewJoint::*)() const>(&dart::dynamics::ScrewJoint::getType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getStaticType", static_cast<const std::string &(*)()>(&dart::dynamics::ScrewJoint::getStaticType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", static_cast<bool (dart::dynamics::ScrewJoint::*)(std::size_t) const>(&dart::dynamics::ScrewJoint::isCyclic), (::boost::python::arg("_index")))
.def("setAxis", static_cast<void (dart::dynamics::ScrewJoint::*)(const Eigen::Vector3d &)>(&dart::dynamics::ScrewJoint::setAxis), (::boost::python::arg("_axis")))
.def("getAxis", static_cast<const Eigen::Vector3d &(dart::dynamics::ScrewJoint::*)() const>(&dart::dynamics::ScrewJoint::getAxis), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPitch", static_cast<void (dart::dynamics::ScrewJoint::*)(double)>(&dart::dynamics::ScrewJoint::setPitch), (::boost::python::arg("_pitch")))
.def("getPitch", static_cast<double (dart::dynamics::ScrewJoint::*)() const>(&dart::dynamics::ScrewJoint::getPitch))
.staticmethod("getStaticType")
;
}

/* footer */
