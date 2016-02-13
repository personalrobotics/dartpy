#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics4NodeE()
{
::boost::python::class_<dart::dynamics::Node, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("Node", boost::python::no_init)
.def("setName", static_cast<const std::string &(dart::dynamics::Node::*)(const std::string &)>(&dart::dynamics::Node::setName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("newName")))
.def("getName", static_cast<const std::string &(dart::dynamics::Node::*)() const>(&dart::dynamics::Node::getName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setNodeState", static_cast<void (dart::dynamics::Node::*)(const dart::dynamics::Node::State &)>(&dart::dynamics::Node::setNodeState), (::boost::python::arg("otherState")))
.def("getNodeState", static_cast<std::unique_ptr<dart::dynamics::Node::State> (dart::dynamics::Node::*)() const>(&dart::dynamics::Node::getNodeState))
.def("setNodeProperties", static_cast<void (dart::dynamics::Node::*)(const dart::dynamics::Node::Properties &)>(&dart::dynamics::Node::setNodeProperties), (::boost::python::arg("properties")))
.def("getNodeProperties", static_cast<std::unique_ptr<dart::dynamics::Node::Properties> (dart::dynamics::Node::*)() const>(&dart::dynamics::Node::getNodeProperties))
.def("getBodyNodePtr", static_cast<dart::dynamics::BodyNodePtr (dart::dynamics::Node::*)()>(&dart::dynamics::Node::getBodyNodePtr))
.def("getBodyNodePtr", static_cast<dart::dynamics::ConstBodyNodePtr (dart::dynamics::Node::*)() const>(&dart::dynamics::Node::getBodyNodePtr))
.def("isRemoved", static_cast<bool (dart::dynamics::Node::*)() const>(&dart::dynamics::Node::isRemoved))
;
}

/* footer */
