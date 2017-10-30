#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics21TemplatedJacobianNodeINS0_8BodyNodeEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>, ::boost::noncopyable, dart::dynamics::TemplateNodePtr<dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode>, dart::dynamics::BodyNode>, ::boost::python::bases<dart::dynamics::JacobianNode > >("TemplatedJacobianBodyNode", boost::python::no_init)
.def("getJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobian(_offset); }, (::boost::python::arg("_offset")))
.def("getJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_offset, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getWorldJacobian(_offset); }, (::boost::python::arg("_offset")))
.def("getLinearJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self) -> dart::math::LinearJacobian { return self->getLinearJacobian(); })
.def("getLinearJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const Eigen::Vector3d & _offset) -> dart::math::LinearJacobian { return self->getLinearJacobian(_offset); }, (::boost::python::arg("_offset")))
.def("getLinearJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_offset, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self) -> dart::math::AngularJacobian { return self->getAngularJacobian(); })
.def("getAngularJacobian", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobian(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_offset); }, (::boost::python::arg("_offset")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_offset, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_offset); }, (::boost::python::arg("_offset")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_offset, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(); })
.def("getLinearJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const Eigen::Vector3d & _offset) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_offset); }, (::boost::python::arg("_offset")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_offset, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(); })
.def("getAngularJacobianDeriv", [](const dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
;
}

/* footer */
