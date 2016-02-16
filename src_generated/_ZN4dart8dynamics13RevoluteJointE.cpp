#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics13RevoluteJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::RevoluteJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::SingleDofJoint, dart::common::SpecializedAddonManager<dart::dynamics::detail::RevoluteJointAddon> > > >("RevoluteJoint", boost::python::no_init)
.def("hasRevoluteJointAddon", static_cast<bool (dart::dynamics::RevoluteJoint::*)() const>(&dart::dynamics::RevoluteJoint::hasRevoluteJointAddon))
.def("setRevoluteJointAddon", static_cast<void (dart::dynamics::RevoluteJoint::*)(const dart::dynamics::RevoluteJoint::Addon *)>(&dart::dynamics::RevoluteJoint::setRevoluteJointAddon), (::boost::python::arg("addon")))
.def("eraseRevoluteJointAddon", static_cast<void (dart::dynamics::RevoluteJoint::*)()>(&dart::dynamics::RevoluteJoint::eraseRevoluteJointAddon))
.def("releaseRevoluteJointAddon", static_cast<std::unique_ptr<dart::dynamics::RevoluteJoint::Addon> (dart::dynamics::RevoluteJoint::*)()>(&dart::dynamics::RevoluteJoint::releaseRevoluteJointAddon))
.def("setProperties", static_cast<void (dart::dynamics::RevoluteJoint::*)(const dart::dynamics::RevoluteJoint::Properties &)>(&dart::dynamics::RevoluteJoint::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::RevoluteJoint::*)(const dart::dynamics::RevoluteJoint::UniqueProperties &)>(&dart::dynamics::RevoluteJoint::setProperties), (::boost::python::arg("_properties")))
.def("getRevoluteJointProperties", static_cast<dart::dynamics::RevoluteJoint::Properties (dart::dynamics::RevoluteJoint::*)() const>(&dart::dynamics::RevoluteJoint::getRevoluteJointProperties))
.def("copy", static_cast<void (dart::dynamics::RevoluteJoint::*)(const dart::dynamics::RevoluteJoint &)>(&dart::dynamics::RevoluteJoint::copy), (::boost::python::arg("_otherJoint")))
.def("copy", static_cast<void (dart::dynamics::RevoluteJoint::*)(const dart::dynamics::RevoluteJoint *)>(&dart::dynamics::RevoluteJoint::copy), (::boost::python::arg("_otherJoint")))
.def("getType", static_cast<const std::string &(dart::dynamics::RevoluteJoint::*)() const>(&dart::dynamics::RevoluteJoint::getType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", static_cast<bool (dart::dynamics::RevoluteJoint::*)(std::size_t) const>(&dart::dynamics::RevoluteJoint::isCyclic), (::boost::python::arg("_index")))
.def("getStaticType", static_cast<const std::string &(*)()>(&dart::dynamics::RevoluteJoint::getStaticType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAxis", static_cast<void (dart::dynamics::RevoluteJoint::*)(const Eigen::Vector3d &)>(&dart::dynamics::RevoluteJoint::setAxis), (::boost::python::arg("_axis")))
.def("getAxis", static_cast<const Eigen::Vector3d &(dart::dynamics::RevoluteJoint::*)() const>(&dart::dynamics::RevoluteJoint::getAxis), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
