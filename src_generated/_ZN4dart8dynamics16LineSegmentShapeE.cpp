#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics16LineSegmentShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::LineSegmentShape, std::shared_ptr<dart::dynamics::LineSegmentShape>, ::boost::python::bases<dart::dynamics::Shape > >("LineSegmentShape", boost::python::no_init)
.def(::boost::python::init<float>((::boost::python::arg("_thickness") = 1.000000e+00)))
.def(::boost::python::init<const Eigen::Vector3d &, const Eigen::Vector3d &, float>((::boost::python::arg("_v1"), ::boost::python::arg("_v2"), ::boost::python::arg("_thickness") = 1.000000e+00)))
.def("setThickness", static_cast<void (dart::dynamics::LineSegmentShape::*)(float)>(&dart::dynamics::LineSegmentShape::setThickness), (::boost::python::arg("_thickness")))
.def("getThickness", static_cast<float (dart::dynamics::LineSegmentShape::*)() const>(&dart::dynamics::LineSegmentShape::getThickness))
.def("addVertex", static_cast<std::size_t (dart::dynamics::LineSegmentShape::*)(const Eigen::Vector3d &)>(&dart::dynamics::LineSegmentShape::addVertex), (::boost::python::arg("_v")))
.def("addVertex", static_cast<std::size_t (dart::dynamics::LineSegmentShape::*)(const Eigen::Vector3d &, std::size_t)>(&dart::dynamics::LineSegmentShape::addVertex), (::boost::python::arg("_v"), ::boost::python::arg("_parent")))
.def("removeVertex", static_cast<void (dart::dynamics::LineSegmentShape::*)(std::size_t)>(&dart::dynamics::LineSegmentShape::removeVertex), (::boost::python::arg("_idx")))
.def("setVertex", static_cast<void (dart::dynamics::LineSegmentShape::*)(std::size_t, const Eigen::Vector3d &)>(&dart::dynamics::LineSegmentShape::setVertex), (::boost::python::arg("_idx"), ::boost::python::arg("_v")))
.def("getVertex", static_cast<const Eigen::Vector3d &(dart::dynamics::LineSegmentShape::*)(std::size_t) const>(&dart::dynamics::LineSegmentShape::getVertex), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_idx")))
.def("addConnection", static_cast<void (dart::dynamics::LineSegmentShape::*)(std::size_t, std::size_t)>(&dart::dynamics::LineSegmentShape::addConnection), (::boost::python::arg("_idx1"), ::boost::python::arg("_idx2")))
.def("removeConnection", static_cast<void (dart::dynamics::LineSegmentShape::*)(std::size_t, std::size_t)>(&dart::dynamics::LineSegmentShape::removeConnection), (::boost::python::arg("_vertexIdx1"), ::boost::python::arg("_vertexIdx2")))
.def("removeConnection", static_cast<void (dart::dynamics::LineSegmentShape::*)(std::size_t)>(&dart::dynamics::LineSegmentShape::removeConnection), (::boost::python::arg("_connectionIdx")))
.def("draw", static_cast<void (dart::dynamics::LineSegmentShape::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool) const>(&dart::dynamics::LineSegmentShape::draw), (::boost::python::arg("_ri"), ::boost::python::arg("_color"), ::boost::python::arg("_useDefaultColor")))
.def("computeInertia", static_cast<Eigen::Matrix3d (dart::dynamics::LineSegmentShape::*)(double) const>(&dart::dynamics::LineSegmentShape::computeInertia), (::boost::python::arg("mass")))
;
}

/* footer */
