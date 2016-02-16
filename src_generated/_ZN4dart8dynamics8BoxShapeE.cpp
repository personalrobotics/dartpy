#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics8BoxShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BoxShape, std::shared_ptr<dart::dynamics::BoxShape>, ::boost::python::bases<dart::dynamics::Shape > >("BoxShape", boost::python::no_init)
.def(::boost::python::init<const Eigen::Vector3d &>((::boost::python::arg("_size"))))
.def("setSize", static_cast<void (dart::dynamics::BoxShape::*)(const Eigen::Vector3d &)>(&dart::dynamics::BoxShape::setSize), (::boost::python::arg("_size")))
.def("getSize", static_cast<const Eigen::Vector3d &(dart::dynamics::BoxShape::*)() const>(&dart::dynamics::BoxShape::getSize), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("draw", static_cast<void (dart::dynamics::BoxShape::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool) const>(&dart::dynamics::BoxShape::draw), (::boost::python::arg("_ri"), ::boost::python::arg("_col"), ::boost::python::arg("_default") = true))
.def("computeVolume", static_cast<double (*)(const Eigen::Vector3d &)>(&dart::dynamics::BoxShape::computeVolume), (::boost::python::arg("size")))
.def("computeInertia", static_cast<Eigen::Matrix3d (*)(const Eigen::Vector3d &, double)>(&dart::dynamics::BoxShape::computeInertia), (::boost::python::arg("size"), ::boost::python::arg("mass")))
.def("computeInertia", static_cast<Eigen::Matrix3d (dart::dynamics::BoxShape::*)(double) const>(&dart::dynamics::BoxShape::computeInertia), (::boost::python::arg("mass")))
.staticmethod("computeInertia")
.staticmethod("computeVolume")
;
}

/* footer */
