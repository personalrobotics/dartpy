#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics12SoftBodyNodeE()
{
::boost::python::class_<dart::dynamics::SoftBodyNode, ::boost::noncopyable, dart::dynamics::SoftBodyNode *, ::boost::python::bases<dart::dynamics::BodyNode > >("SoftBodyNode", boost::python::no_init)
.def("setProperties", static_cast<void (dart::dynamics::SoftBodyNode::*)(const dart::dynamics::SoftBodyNode::Properties &)>(&dart::dynamics::SoftBodyNode::setProperties), (::boost::python::arg("_properties")))
.def("setProperties", static_cast<void (dart::dynamics::SoftBodyNode::*)(const dart::dynamics::SoftBodyNode::UniqueProperties &)>(&dart::dynamics::SoftBodyNode::setProperties), (::boost::python::arg("_properties")))
.def("removeSoftBodyShapes", static_cast<dart::dynamics::ShapePtr (dart::dynamics::SoftBodyNode::*)()>(&dart::dynamics::SoftBodyNode::removeSoftBodyShapes))
.def("getSoftBodyNodeProperties", static_cast<dart::dynamics::SoftBodyNode::Properties (dart::dynamics::SoftBodyNode::*)() const>(&dart::dynamics::SoftBodyNode::getSoftBodyNodeProperties))
.def("copy", static_cast<void (dart::dynamics::SoftBodyNode::*)(const dart::dynamics::SoftBodyNode &)>(&dart::dynamics::SoftBodyNode::copy), (::boost::python::arg("_otherSoftBodyNode")))
.def("copy", static_cast<void (dart::dynamics::SoftBodyNode::*)(const dart::dynamics::SoftBodyNode *)>(&dart::dynamics::SoftBodyNode::copy), (::boost::python::arg("_otherSoftBodyNode")))
.def("getMass", static_cast<double (dart::dynamics::SoftBodyNode::*)() const>(&dart::dynamics::SoftBodyNode::getMass))
.def("setVertexSpringStiffness", static_cast<void (dart::dynamics::SoftBodyNode::*)(double)>(&dart::dynamics::SoftBodyNode::setVertexSpringStiffness), (::boost::python::arg("_kv")))
.def("getVertexSpringStiffness", static_cast<double (dart::dynamics::SoftBodyNode::*)() const>(&dart::dynamics::SoftBodyNode::getVertexSpringStiffness))
.def("setEdgeSpringStiffness", static_cast<void (dart::dynamics::SoftBodyNode::*)(double)>(&dart::dynamics::SoftBodyNode::setEdgeSpringStiffness), (::boost::python::arg("_ke")))
.def("getEdgeSpringStiffness", static_cast<double (dart::dynamics::SoftBodyNode::*)() const>(&dart::dynamics::SoftBodyNode::getEdgeSpringStiffness))
.def("setDampingCoefficient", static_cast<void (dart::dynamics::SoftBodyNode::*)(double)>(&dart::dynamics::SoftBodyNode::setDampingCoefficient), (::boost::python::arg("_damp")))
.def("getDampingCoefficient", static_cast<double (dart::dynamics::SoftBodyNode::*)() const>(&dart::dynamics::SoftBodyNode::getDampingCoefficient))
.def("removeAllPointMasses", static_cast<void (dart::dynamics::SoftBodyNode::*)()>(&dart::dynamics::SoftBodyNode::removeAllPointMasses))
.def("getNumPointMasses", static_cast<std::size_t (dart::dynamics::SoftBodyNode::*)() const>(&dart::dynamics::SoftBodyNode::getNumPointMasses))
.def("connectPointMasses", static_cast<void (dart::dynamics::SoftBodyNode::*)(std::size_t, std::size_t)>(&dart::dynamics::SoftBodyNode::connectPointMasses), (::boost::python::arg("_idx1"), ::boost::python::arg("_idx2")))
.def("addFace", static_cast<void (dart::dynamics::SoftBodyNode::*)(const Eigen::Vector3i &)>(&dart::dynamics::SoftBodyNode::addFace), (::boost::python::arg("_face")))
.def("getFace", static_cast<const Eigen::Vector3i &(dart::dynamics::SoftBodyNode::*)(std::size_t) const>(&dart::dynamics::SoftBodyNode::getFace), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_idx")))
.def("getNumFaces", static_cast<std::size_t (dart::dynamics::SoftBodyNode::*)() const>(&dart::dynamics::SoftBodyNode::getNumFaces))
.def("clearConstraintImpulse", static_cast<void (dart::dynamics::SoftBodyNode::*)()>(&dart::dynamics::SoftBodyNode::clearConstraintImpulse))
;
}

/* footer */