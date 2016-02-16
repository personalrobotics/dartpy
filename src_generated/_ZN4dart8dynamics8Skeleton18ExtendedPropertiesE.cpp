#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics8Skeleton18ExtendedPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Skeleton"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Skeleton::ExtendedProperties, ::boost::python::bases<dart::dynamics::Skeleton::Properties > >("ExtendedProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::Skeleton::BodyNodeProperties &, const dart::dynamics::Skeleton::JointProperties &, const std::vector<std::string> &, const dart::dynamics::Skeleton::AddonProperties &>((::boost::python::arg("bodyNodeProperties"), ::boost::python::arg("jointProperties"), ::boost::python::arg("parentNames"), ::boost::python::arg("addonProperties"))))
.def_readwrite("mBodyNodeProperties", &dart::dynamics::Skeleton::ExtendedProperties::mBodyNodeProperties)
.def_readwrite("mJointProperties", &dart::dynamics::Skeleton::ExtendedProperties::mJointProperties)
.def_readwrite("mParentBodyNodeNames", &dart::dynamics::Skeleton::ExtendedProperties::mParentBodyNodeNames)
.def_readwrite("mAddonProperties", &dart::dynamics::Skeleton::ExtendedProperties::mAddonProperties)
;
}

/* footer */
