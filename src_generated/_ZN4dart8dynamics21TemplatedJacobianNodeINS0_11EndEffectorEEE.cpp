#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics21TemplatedJacobianNodeINS0_11EndEffectorEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::JacobianNode > >("EndEffectorJacobianNode", boost::python::no_init)
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getJacobian), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const Eigen::Vector3d &) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getJacobian), (::boost::python::arg("_offset")))
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getJacobian), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const Eigen::Vector3d &) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getWorldJacobian), (::boost::python::arg("_offset")))
.def("getLinearJacobian", static_cast<dart::math::LinearJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getLinearJacobian), (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", static_cast<dart::math::LinearJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getLinearJacobian), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", static_cast<dart::math::AngularJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getAngularJacobian), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getJacobianSpatialDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const Eigen::Vector3d &) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getJacobianSpatialDeriv), (::boost::python::arg("_offset")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getJacobianSpatialDeriv), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getJacobianClassicDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getJacobianClassicDeriv), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", static_cast<dart::math::LinearJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getLinearJacobianDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", static_cast<dart::math::LinearJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getLinearJacobianDeriv), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", static_cast<dart::math::AngularJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector>::getAngularJacobianDeriv), (::boost::python::arg("_inCoordinatesOf")))
;
}

/* footer */
