#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics8BodyNode18ExtendedPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("BodyNode"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BodyNode::ExtendedProperties, ::boost::python::bases<dart::dynamics::BodyNode::Properties > >("ExtendedProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::BodyNode::Properties &, const dart::dynamics::BodyNode::NodeProperties &, const dart::dynamics::BodyNode::AddonProperties &>((::boost::python::arg("standardProperties"), ::boost::python::arg("nodeProperties"), ::boost::python::arg("addonProperties"))))
.def_readwrite("mNodeProperties", &dart::dynamics::BodyNode::ExtendedProperties::mNodeProperties)
.def_readwrite("mAddonProperties", &dart::dynamics::BodyNode::ExtendedProperties::mAddonProperties)
;
}

/* footer */
