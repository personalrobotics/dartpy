#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics10ArrowShapeE()
{
::boost::python::class_<dart::dynamics::ArrowShape, std::shared_ptr<dart::dynamics::ArrowShape>, ::boost::python::bases<dart::dynamics::MeshShape > >("ArrowShape", boost::python::no_init)
.def(::boost::python::init<const Eigen::Vector3d &, const Eigen::Vector3d &, const dart::dynamics::ArrowShape::Properties &, const Eigen::Vector4d &, std::size_t>((::boost::python::arg("_tail"), ::boost::python::arg("_head"), ::boost::python::arg("_properties"), ::boost::python::arg("_color"), ::boost::python::arg("_resolution") = 10)))
.def("setPositions", static_cast<void (dart::dynamics::ArrowShape::*)(const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::dynamics::ArrowShape::setPositions), (::boost::python::arg("_tail"), ::boost::python::arg("_head")))
.def("getTail", static_cast<const Eigen::Vector3d &(dart::dynamics::ArrowShape::*)() const>(&dart::dynamics::ArrowShape::getTail), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getHead", static_cast<const Eigen::Vector3d &(dart::dynamics::ArrowShape::*)() const>(&dart::dynamics::ArrowShape::getHead), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setProperties", static_cast<void (dart::dynamics::ArrowShape::*)(const dart::dynamics::ArrowShape::Properties &)>(&dart::dynamics::ArrowShape::setProperties), (::boost::python::arg("_properties")))
.def("setRGBA", static_cast<void (dart::dynamics::ArrowShape::*)(const Eigen::Vector4d &)>(&dart::dynamics::ArrowShape::setRGBA), (::boost::python::arg("_color")))
.def("getProperties", static_cast<const dart::dynamics::ArrowShape::Properties &(dart::dynamics::ArrowShape::*)() const>(&dart::dynamics::ArrowShape::getProperties), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("configureArrow", static_cast<void (dart::dynamics::ArrowShape::*)(const Eigen::Vector3d &, const Eigen::Vector3d &, const dart::dynamics::ArrowShape::Properties &)>(&dart::dynamics::ArrowShape::configureArrow), (::boost::python::arg("_tail"), ::boost::python::arg("_head"), ::boost::python::arg("_properties")))
;
}

/* footer */
