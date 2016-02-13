#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics21TemplatedJacobianNodeINS0_8BodyNodeEEE()
{
::boost::python::class_<dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::JacobianNode > >("_ZN4dart8dynamics21TemplatedJacobianNodeINS0_8BodyNodeEEE", boost::python::no_init)
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getJacobian), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const Eigen::Vector3d &) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getJacobian), (::boost::python::arg("_offset")))
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getJacobian), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const Eigen::Vector3d &) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getWorldJacobian), (::boost::python::arg("_offset")))
.def("getLinearJacobian", static_cast<dart::math::LinearJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getLinearJacobian), (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", static_cast<dart::math::LinearJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getLinearJacobian), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", static_cast<dart::math::AngularJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getAngularJacobian), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getJacobianSpatialDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const Eigen::Vector3d &) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getJacobianSpatialDeriv), (::boost::python::arg("_offset")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getJacobianSpatialDeriv), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getJacobianClassicDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", static_cast<dart::math::Jacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getJacobianClassicDeriv), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", static_cast<dart::math::LinearJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getLinearJacobianDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", static_cast<dart::math::LinearJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getLinearJacobianDeriv), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", static_cast<dart::math::AngularJacobian (dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>::getAngularJacobianDeriv), (::boost::python::arg("_inCoordinatesOf")))
;
}

/* footer */
