#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics13CylinderShapeE()
{
::boost::python::class_<dart::dynamics::CylinderShape, dart::dynamics::CylinderShape *, ::boost::python::bases<dart::dynamics::Shape > >("CylinderShape", boost::python::no_init)
.def(::boost::python::init<double, double>((::boost::python::arg("_radius"), ::boost::python::arg("_height"))))
.def("getRadius", static_cast<double (dart::dynamics::CylinderShape::*)() const>(&dart::dynamics::CylinderShape::getRadius))
.def("setRadius", static_cast<void (dart::dynamics::CylinderShape::*)(double)>(&dart::dynamics::CylinderShape::setRadius), (::boost::python::arg("_radius")))
.def("getHeight", static_cast<double (dart::dynamics::CylinderShape::*)() const>(&dart::dynamics::CylinderShape::getHeight))
.def("setHeight", static_cast<void (dart::dynamics::CylinderShape::*)(double)>(&dart::dynamics::CylinderShape::setHeight), (::boost::python::arg("_height")))
.def("draw", static_cast<void (dart::dynamics::CylinderShape::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool) const>(&dart::dynamics::CylinderShape::draw), (::boost::python::arg("_ri"), ::boost::python::arg("_color"), ::boost::python::arg("_useDefaultColor") = true))
.def("computeVolume", static_cast<double (*)(double, double)>(&dart::dynamics::CylinderShape::computeVolume), (::boost::python::arg("radius"), ::boost::python::arg("height")))
.def("computeInertia", static_cast<Eigen::Matrix3d (*)(double, double, double)>(&dart::dynamics::CylinderShape::computeInertia), (::boost::python::arg("radius"), ::boost::python::arg("height"), ::boost::python::arg("mass")))
.def("computeInertia", static_cast<Eigen::Matrix3d (dart::dynamics::CylinderShape::*)(double) const>(&dart::dynamics::CylinderShape::computeInertia), (::boost::python::arg("mass")))
.staticmethod("computeInertia")
.staticmethod("computeVolume")
;
}

/* footer */
