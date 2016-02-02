#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math11BoundingBoxE()
{
::boost::python::class_<dart::math::BoundingBox >("BoundingBox", boost::python::no_init)
.def(::boost::python::init<>())
.def(::boost::python::init<const Eigen::Vector3d &, const Eigen::Vector3d &>((::boost::python::arg("min"), ::boost::python::arg("max"))))
.def("getMin", static_cast<const Eigen::Vector3d &(dart::math::BoundingBox::*)() const>(&dart::math::BoundingBox::getMin), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getMax", static_cast<const Eigen::Vector3d &(dart::math::BoundingBox::*)() const>(&dart::math::BoundingBox::getMax), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setMin", static_cast<void (dart::math::BoundingBox::*)(const Eigen::Vector3d &)>(&dart::math::BoundingBox::setMin), (::boost::python::arg("min")))
.def("setMax", static_cast<void (dart::math::BoundingBox::*)(const Eigen::Vector3d &)>(&dart::math::BoundingBox::setMax), (::boost::python::arg("max")))
.def("computeCenter", static_cast<Eigen::Vector3d (dart::math::BoundingBox::*)() const>(&dart::math::BoundingBox::computeCenter))
.def("computeHalfExtents", static_cast<Eigen::Vector3d (dart::math::BoundingBox::*)() const>(&dart::math::BoundingBox::computeHalfExtents))
.def("computeFullExtents", static_cast<Eigen::Vector3d (dart::math::BoundingBox::*)() const>(&dart::math::BoundingBox::computeFullExtents))
;
}

/* footer */
