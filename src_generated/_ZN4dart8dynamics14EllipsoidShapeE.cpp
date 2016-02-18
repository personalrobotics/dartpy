#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics14EllipsoidShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EllipsoidShape, std::shared_ptr<dart::dynamics::EllipsoidShape>, ::boost::python::bases<dart::dynamics::Shape > >("EllipsoidShape", boost::python::no_init)
.def(::boost::python::init<const Eigen::Vector3d &>((::boost::python::arg("_size"))))
.def("setSize", static_cast<void (dart::dynamics::EllipsoidShape::*)(const Eigen::Vector3d &)>(&dart::dynamics::EllipsoidShape::setSize), (::boost::python::arg("_size")))
.def("getSize", static_cast<const Eigen::Vector3d &(dart::dynamics::EllipsoidShape::*)() const>(&dart::dynamics::EllipsoidShape::getSize), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("draw", static_cast<void (dart::dynamics::EllipsoidShape::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool) const>(&dart::dynamics::EllipsoidShape::draw), (::boost::python::arg("_ri"), ::boost::python::arg("_col"), ::boost::python::arg("_useDefaultColor")))
.def("computeVolume", static_cast<double (*)(const Eigen::Vector3d &)>(&dart::dynamics::EllipsoidShape::computeVolume), (::boost::python::arg("size")))
.def("computeInertia", static_cast<Eigen::Matrix3d (*)(const Eigen::Vector3d &, double)>(&dart::dynamics::EllipsoidShape::computeInertia), (::boost::python::arg("size"), ::boost::python::arg("mass")))
.def("computeInertia", static_cast<Eigen::Matrix3d (dart::dynamics::EllipsoidShape::*)(double) const>(&dart::dynamics::EllipsoidShape::computeInertia), (::boost::python::arg("mass")))
.def("isSphere", static_cast<bool (dart::dynamics::EllipsoidShape::*)() const>(&dart::dynamics::EllipsoidShape::isSphere))
.staticmethod("computeInertia")
.staticmethod("computeVolume")
;
}

/* footer */
