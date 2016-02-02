#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics12SoftBodyNode16UniquePropertiesE()
{
::boost::python::class_<dart::dynamics::SoftBodyNode::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<double, double, double, const std::vector<dart::dynamics::PointMass::Properties> &, const std::vector<Eigen::Vector3i> &>((::boost::python::arg("_Kv"), ::boost::python::arg("_Ke"), ::boost::python::arg("_DampCoeff"), ::boost::python::arg("_points"), ::boost::python::arg("_faces"))))
.def("addPointMass", static_cast<void (dart::dynamics::SoftBodyNode::UniqueProperties::*)(const dart::dynamics::PointMass::Properties &)>(&dart::dynamics::SoftBodyNode::UniqueProperties::addPointMass), (::boost::python::arg("_properties")))
.def("connectPointMasses", static_cast<bool (dart::dynamics::SoftBodyNode::UniqueProperties::*)(std::size_t, std::size_t)>(&dart::dynamics::SoftBodyNode::UniqueProperties::connectPointMasses), (::boost::python::arg("i1"), ::boost::python::arg("i2")))
.def("addFace", static_cast<void (dart::dynamics::SoftBodyNode::UniqueProperties::*)(const Eigen::Vector3i &)>(&dart::dynamics::SoftBodyNode::UniqueProperties::addFace), (::boost::python::arg("_newFace")))
.def_readwrite("mKv", &dart::dynamics::SoftBodyNode::UniqueProperties::mKv)
.def_readwrite("mKe", &dart::dynamics::SoftBodyNode::UniqueProperties::mKe)
.def_readwrite("mDampCoeff", &dart::dynamics::SoftBodyNode::UniqueProperties::mDampCoeff)
.def_readwrite("mPointProps", &dart::dynamics::SoftBodyNode::UniqueProperties::mPointProps)
.def_readwrite("mFaces", &dart::dynamics::SoftBodyNode::UniqueProperties::mFaces)
;
}

/* footer */
