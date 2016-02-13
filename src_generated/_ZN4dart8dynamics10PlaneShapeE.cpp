#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics10PlaneShapeE()
{
::boost::python::class_<dart::dynamics::PlaneShape, std::shared_ptr<dart::dynamics::PlaneShape>, ::boost::python::bases<dart::dynamics::Shape > >("PlaneShape", boost::python::no_init)
.def(::boost::python::init<const Eigen::Vector3d &, double>((::boost::python::arg("_normal"), ::boost::python::arg("_offset"))))
.def(::boost::python::init<const Eigen::Vector3d &, const Eigen::Vector3d &>((::boost::python::arg("_normal"), ::boost::python::arg("_point"))))
.def("draw", static_cast<void (dart::dynamics::PlaneShape::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool) const>(&dart::dynamics::PlaneShape::draw), (::boost::python::arg("_ri"), ::boost::python::arg("_col"), ::boost::python::arg("_default") = true))
.def("computeInertia", static_cast<Eigen::Matrix3d (dart::dynamics::PlaneShape::*)(double) const>(&dart::dynamics::PlaneShape::computeInertia), (::boost::python::arg("mass")))
.def("setNormal", static_cast<void (dart::dynamics::PlaneShape::*)(const Eigen::Vector3d &)>(&dart::dynamics::PlaneShape::setNormal), (::boost::python::arg("_normal")))
.def("getNormal", static_cast<const Eigen::Vector3d &(dart::dynamics::PlaneShape::*)() const>(&dart::dynamics::PlaneShape::getNormal), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setOffset", static_cast<void (dart::dynamics::PlaneShape::*)(double)>(&dart::dynamics::PlaneShape::setOffset), (::boost::python::arg("_offset")))
.def("getOffset", static_cast<double (dart::dynamics::PlaneShape::*)() const>(&dart::dynamics::PlaneShape::getOffset))
.def("setNormalAndOffset", static_cast<void (dart::dynamics::PlaneShape::*)(const Eigen::Vector3d &, double)>(&dart::dynamics::PlaneShape::setNormalAndOffset), (::boost::python::arg("_normal"), ::boost::python::arg("_offset")))
.def("setNormalAndPoint", static_cast<void (dart::dynamics::PlaneShape::*)(const Eigen::Vector3d &, const Eigen::Vector3d &)>(&dart::dynamics::PlaneShape::setNormalAndPoint), (::boost::python::arg("_normal"), ::boost::python::arg("_point")))
.def("computeDistance", static_cast<double (dart::dynamics::PlaneShape::*)(const Eigen::Vector3d &) const>(&dart::dynamics::PlaneShape::computeDistance), (::boost::python::arg("_point")))
.def("computeSignedDistance", static_cast<double (dart::dynamics::PlaneShape::*)(const Eigen::Vector3d &) const>(&dart::dynamics::PlaneShape::computeSignedDistance), (::boost::python::arg("_point")))
;
}

/* footer */
