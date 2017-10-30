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

void _ZN4dart8dynamics12JacobianNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::JacobianNode, ::boost::noncopyable, dart::dynamics::TemplateNodePtr<dart::dynamics::JacobianNode, dart::dynamics::BodyNode>, ::boost::python::bases<dart::dynamics::Node, dart::dynamics::Frame > >("JacobianNode", boost::python::no_init)
.def("getIK", [](dart::dynamics::JacobianNode *self) -> const std::shared_ptr<dart::dynamics::InverseKinematics> & { return self->getIK(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getIK", [](dart::dynamics::JacobianNode *self, bool _createIfNull) -> const std::shared_ptr<dart::dynamics::InverseKinematics> & { return self->getIK(_createIfNull); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_createIfNull")))
.def("getOrCreateIK", [](dart::dynamics::JacobianNode *self) -> const std::shared_ptr<dart::dynamics::InverseKinematics> & { return self->getOrCreateIK(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getIK", [](const dart::dynamics::JacobianNode *self) -> std::shared_ptr<const dart::dynamics::InverseKinematics> { return self->getIK(); })
.def("createIK", [](dart::dynamics::JacobianNode *self) -> const std::shared_ptr<dart::dynamics::InverseKinematics> & { return self->createIK(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("clearIK", [](dart::dynamics::JacobianNode *self) -> void { return self->clearIK(); })
.def("dependsOn", [](const dart::dynamics::JacobianNode *self, std::size_t _genCoordIndex) -> bool { return self->dependsOn(_genCoordIndex); }, (::boost::python::arg("_genCoordIndex")))
.def("getNumDependentGenCoords", [](const dart::dynamics::JacobianNode *self) -> std::size_t { return self->getNumDependentGenCoords(); })
.def("getDependentGenCoordIndex", [](const dart::dynamics::JacobianNode *self, std::size_t _arrayIndex) -> std::size_t { return self->getDependentGenCoordIndex(_arrayIndex); }, (::boost::python::arg("_arrayIndex")))
.def("getDependentGenCoordIndices", [](const dart::dynamics::JacobianNode *self) -> const std::vector<std::size_t> & { return self->getDependentGenCoordIndices(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getNumDependentDofs", [](const dart::dynamics::JacobianNode *self) -> std::size_t { return self->getNumDependentDofs(); })
.def("getDependentDof", [](dart::dynamics::JacobianNode *self, std::size_t _index) -> dart::dynamics::DegreeOfFreedom * { return self->getDependentDof(_index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_index")))
.def("getDependentDofs", [](dart::dynamics::JacobianNode *self) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getDependentDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getChainDofs", [](const dart::dynamics::JacobianNode *self) -> const std::vector<const dart::dynamics::DegreeOfFreedom *> { return self->getChainDofs(); })
.def("getJacobian", [](const dart::dynamics::JacobianNode *self) -> const dart::math::Jacobian & { return self->getJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobian", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobian(_offset); }, (::boost::python::arg("_offset")))
.def("getJacobian", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_offset, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", [](const dart::dynamics::JacobianNode *self) -> const dart::math::Jacobian & { return self->getWorldJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getWorldJacobian", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getWorldJacobian(_offset); }, (::boost::python::arg("_offset")))
.def("getLinearJacobian", [](const dart::dynamics::JacobianNode *self) -> dart::math::LinearJacobian { return self->getLinearJacobian(); })
.def("getLinearJacobian", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::LinearJacobian { return self->getLinearJacobian(_offset); }, (::boost::python::arg("_offset")))
.def("getLinearJacobian", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_offset, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", [](const dart::dynamics::JacobianNode *self) -> dart::math::AngularJacobian { return self->getAngularJacobian(); })
.def("getAngularJacobian", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobian(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::JacobianNode *self) -> const dart::math::Jacobian & { return self->getJacobianSpatialDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobianSpatialDeriv", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_offset); }, (::boost::python::arg("_offset")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_offset, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::JacobianNode *self) -> const dart::math::Jacobian & { return self->getJacobianClassicDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobianClassicDeriv", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_offset); }, (::boost::python::arg("_offset")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_offset, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::JacobianNode *self) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(); })
.def("getLinearJacobianDeriv", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_offset); }, (::boost::python::arg("_offset")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_offset, _inCoordinatesOf); }, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::JacobianNode *self) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(); })
.def("getAngularJacobianDeriv", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("notifyJacobianUpdate", [](dart::dynamics::JacobianNode *self) -> void { return self->notifyJacobianUpdate(); })
.def("dirtyJacobian", [](dart::dynamics::JacobianNode *self) -> void { return self->dirtyJacobian(); })
.def("notifyJacobianDerivUpdate", [](dart::dynamics::JacobianNode *self) -> void { return self->notifyJacobianDerivUpdate(); })
.def("dirtyJacobianDeriv", [](dart::dynamics::JacobianNode *self) -> void { return self->dirtyJacobianDeriv(); })
;
}

/* footer */
