#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics14PrismaticJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PrismaticJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::SingleDofJoint, dart::common::SpecializedAddonManager<dart::dynamics::detail::PrismaticJointAddon> > > >("PrismaticJoint", boost::python::no_init)
.def("hasPrismaticJointAddon", static_cast<bool (dart::dynamics::PrismaticJoint::*)() const>(&dart::dynamics::PrismaticJoint::hasPrismaticJointAddon))
.def("setPrismaticJointAddon", static_cast<void (dart::dynamics::PrismaticJoint::*)(const dart::dynamics::PrismaticJoint::Addon *)>(&dart::dynamics::PrismaticJoint::setPrismaticJointAddon), (::boost::python::arg("addon")))
.def("erasePrismaticJointAddon", static_cast<void (dart::dynamics::PrismaticJoint::*)()>(&dart::dynamics::PrismaticJoint::erasePrismaticJointAddon))
.def("releasePrismaticJointAddon", static_cast<std::unique_ptr<dart::dynamics::PrismaticJoint::Addon> (dart::dynamics::PrismaticJoint::*)()>(&dart::dynamics::PrismaticJoint::releasePrismaticJointAddon))
.def("setProperties", static_cast<void (dart::dynamics::PrismaticJoint::*)(const dart::dynamics::PrismaticJoint::Properties &)>(&dart::dynamics::PrismaticJoint::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::PrismaticJoint::*)(const dart::dynamics::PrismaticJoint::UniqueProperties &)>(&dart::dynamics::PrismaticJoint::setProperties), (::boost::python::arg("_properties")))
.def("getPrismaticJointProperties", static_cast<dart::dynamics::PrismaticJoint::Properties (dart::dynamics::PrismaticJoint::*)() const>(&dart::dynamics::PrismaticJoint::getPrismaticJointProperties))
.def("copy", static_cast<void (dart::dynamics::PrismaticJoint::*)(const dart::dynamics::PrismaticJoint &)>(&dart::dynamics::PrismaticJoint::copy), (::boost::python::arg("_otherJoint")))
.def("copy", static_cast<void (dart::dynamics::PrismaticJoint::*)(const dart::dynamics::PrismaticJoint *)>(&dart::dynamics::PrismaticJoint::copy), (::boost::python::arg("_otherJoint")))
.def("getType", static_cast<const std::string &(dart::dynamics::PrismaticJoint::*)() const>(&dart::dynamics::PrismaticJoint::getType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getStaticType", static_cast<const std::string &(*)()>(&dart::dynamics::PrismaticJoint::getStaticType), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", static_cast<bool (dart::dynamics::PrismaticJoint::*)(std::size_t) const>(&dart::dynamics::PrismaticJoint::isCyclic), (::boost::python::arg("_index")))
.def("setAxis", static_cast<void (dart::dynamics::PrismaticJoint::*)(const Eigen::Vector3d &)>(&dart::dynamics::PrismaticJoint::setAxis), (::boost::python::arg("_axis")))
.def("getAxis", static_cast<const Eigen::Vector3d &(dart::dynamics::PrismaticJoint::*)() const>(&dart::dynamics::PrismaticJoint::getAxis), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
