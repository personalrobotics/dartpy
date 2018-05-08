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

void _ZN4dart8dynamics19ReferentialSkeletonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ReferentialSkeleton, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::MetaSkeleton > >("ReferentialSkeleton", boost::python::no_init)
.def("setName", [](dart::dynamics::ReferentialSkeleton *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("getName", [](const dart::dynamics::ReferentialSkeleton *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getNumBodyNodes", [](const dart::dynamics::ReferentialSkeleton *self) -> std::size_t { return self->getNumBodyNodes(); })
.def("getBodyNode", [](dart::dynamics::ReferentialSkeleton *self, std::size_t _idx) -> dart::dynamics::BodyNode * { return self->getBodyNode(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), (::boost::python::arg("_idx")))
.def("getBodyNode", [](dart::dynamics::ReferentialSkeleton *self, const std::string & name) -> dart::dynamics::BodyNode * { return self->getBodyNode(name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), (::boost::python::arg("name")))
.def("getBodyNodes", [](dart::dynamics::ReferentialSkeleton *self) -> const std::vector<dart::dynamics::BodyNode *> & { return self->getBodyNodes(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getBodyNodes", [](dart::dynamics::ReferentialSkeleton *self, const std::string & name) -> std::vector<dart::dynamics::BodyNode *> { return self->getBodyNodes(name); }, (::boost::python::arg("name")))
.def("hasBodyNode", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::BodyNode * bodyNode) -> bool { return self->hasBodyNode(bodyNode); }, (::boost::python::arg("bodyNode")))
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::BodyNode * _bn) -> std::size_t { return self->getIndexOf(_bn); }, (::boost::python::arg("_bn")))
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::BodyNode * _bn, bool _warning) -> std::size_t { return self->getIndexOf(_bn, _warning); }, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("getNumJoints", [](const dart::dynamics::ReferentialSkeleton *self) -> std::size_t { return self->getNumJoints(); })
.def("getJoint", [](dart::dynamics::ReferentialSkeleton *self, std::size_t _idx) -> dart::dynamics::Joint * { return self->getJoint(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), (::boost::python::arg("_idx")))
.def("getJoint", [](dart::dynamics::ReferentialSkeleton *self, const std::string & name) -> dart::dynamics::Joint * { return self->getJoint(name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), (::boost::python::arg("name")))
.def("getJoints", [](dart::dynamics::ReferentialSkeleton *self) -> std::vector<dart::dynamics::Joint *> { return self->getJoints(); })
.def("getJoints", [](const dart::dynamics::ReferentialSkeleton *self) -> std::vector<const dart::dynamics::Joint *> { return self->getJoints(); })
.def("getJoints", [](dart::dynamics::ReferentialSkeleton *self, const std::string & name) -> std::vector<dart::dynamics::Joint *> { return self->getJoints(name); }, (::boost::python::arg("name")))
.def("getJoints", [](const dart::dynamics::ReferentialSkeleton *self, const std::string & name) -> std::vector<const dart::dynamics::Joint *> { return self->getJoints(name); }, (::boost::python::arg("name")))
.def("hasJoint", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Joint * joint) -> bool { return self->hasJoint(joint); }, (::boost::python::arg("joint")))
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Joint * _joint) -> std::size_t { return self->getIndexOf(_joint); }, (::boost::python::arg("_joint")))
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Joint * _joint, bool _warning) -> std::size_t { return self->getIndexOf(_joint, _warning); }, (::boost::python::arg("_joint"), ::boost::python::arg("_warning")))
.def("getNumDofs", [](const dart::dynamics::ReferentialSkeleton *self) -> std::size_t { return self->getNumDofs(); })
.def("getDof", [](dart::dynamics::ReferentialSkeleton *self, std::size_t _idx) -> dart::dynamics::DegreeOfFreedom * { return self->getDof(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_idx")))
.def("getDofs", [](dart::dynamics::ReferentialSkeleton *self) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getDofs", [](const dart::dynamics::ReferentialSkeleton *self) -> std::vector<const dart::dynamics::DegreeOfFreedom *> { return self->getDofs(); })
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::DegreeOfFreedom * _dof) -> std::size_t { return self->getIndexOf(_dof); }, (::boost::python::arg("_dof")))
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::DegreeOfFreedom * _dof, bool _warning) -> std::size_t { return self->getIndexOf(_dof, _warning); }, (::boost::python::arg("_dof"), ::boost::python::arg("_warning")))
.def("getJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobian(_node); }, (::boost::python::arg("_node")))
.def("getJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_node, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobian(_node, _localOffset); }, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_node, _localOffset, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getWorldJacobian(_node); }, (::boost::python::arg("_node")))
.def("getWorldJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getWorldJacobian(_node, _localOffset); }, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node); }, (::boost::python::arg("_node")))
.def("getLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _localOffset); }, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _localOffset, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::AngularJacobian { return self->getAngularJacobian(_node); }, (::boost::python::arg("_node")))
.def("getAngularJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobian(_node, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node); }, (::boost::python::arg("_node")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _localOffset); }, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _localOffset, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node); }, (::boost::python::arg("_node")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _localOffset); }, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _localOffset, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node); }, (::boost::python::arg("_node")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _localOffset); }, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _localOffset, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_node); }, (::boost::python::arg("_node")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_node, _inCoordinatesOf); }, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getMass", [](const dart::dynamics::ReferentialSkeleton *self) -> double { return self->getMass(); })
.def("getMassMatrix", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::MatrixXd & { return self->getMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getAugMassMatrix", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::MatrixXd & { return self->getAugMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getInvMassMatrix", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::MatrixXd & { return self->getInvMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getInvAugMassMatrix", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::MatrixXd & { return self->getInvAugMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getCoriolisForces", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::VectorXd & { return self->getCoriolisForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getGravityForces", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::VectorXd & { return self->getGravityForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getCoriolisAndGravityForces", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::VectorXd & { return self->getCoriolisAndGravityForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getExternalForces", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::VectorXd & { return self->getExternalForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getConstraintForces", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::VectorXd & { return self->getConstraintForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("clearExternalForces", [](dart::dynamics::ReferentialSkeleton *self) -> void { return self->clearExternalForces(); })
.def("clearInternalForces", [](dart::dynamics::ReferentialSkeleton *self) -> void { return self->clearInternalForces(); })
.def("computeKineticEnergy", [](const dart::dynamics::ReferentialSkeleton *self) -> double { return self->computeKineticEnergy(); })
.def("computePotentialEnergy", [](const dart::dynamics::ReferentialSkeleton *self) -> double { return self->computePotentialEnergy(); })
.def("clearCollidingBodies", [](dart::dynamics::ReferentialSkeleton *self) -> void { return self->clearCollidingBodies(); })
.def("getCOM", [](const dart::dynamics::ReferentialSkeleton *self) -> Eigen::Vector3d { return self->getCOM(); })
.def("getCOM", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _withRespectTo) -> Eigen::Vector3d { return self->getCOM(_withRespectTo); }, (::boost::python::arg("_withRespectTo")))
.def("getCOMSpatialVelocity", [](const dart::dynamics::ReferentialSkeleton *self) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(); })
.def("getCOMSpatialVelocity", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(_relativeTo); }, (::boost::python::arg("_relativeTo")))
.def("getCOMSpatialVelocity", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearVelocity", [](const dart::dynamics::ReferentialSkeleton *self) -> Eigen::Vector3d { return self->getCOMLinearVelocity(); })
.def("getCOMLinearVelocity", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo); }, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearVelocity", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMSpatialAcceleration", [](const dart::dynamics::ReferentialSkeleton *self) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(); })
.def("getCOMSpatialAcceleration", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(_relativeTo); }, (::boost::python::arg("_relativeTo")))
.def("getCOMSpatialAcceleration", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::ReferentialSkeleton *self) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(); })
.def("getCOMLinearAcceleration", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo); }, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMJacobian", [](const dart::dynamics::ReferentialSkeleton *self) -> dart::math::Jacobian { return self->getCOMJacobian(); })
.def("getCOMJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getCOMJacobian(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self) -> dart::math::LinearJacobian { return self->getCOMLinearJacobian(); })
.def("getCOMLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getCOMLinearJacobian(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self) -> dart::math::Jacobian { return self->getCOMJacobianSpatialDeriv(); })
.def("getCOMJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getCOMJacobianSpatialDeriv(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self) -> dart::math::LinearJacobian { return self->getCOMLinearJacobianDeriv(); })
.def("getCOMLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getCOMLinearJacobianDeriv(_inCoordinatesOf); }, (::boost::python::arg("_inCoordinatesOf")))
;
}

/* footer */
