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

void _ZN4dart8dynamics8BodyNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BodyNode, ::boost::noncopyable, dart::dynamics::BodyNodePtr, ::boost::python::bases<dart::dynamics::SkeletonRefCountingBase, dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> > >("BodyNode", boost::python::no_init)
.def("asSoftBodyNode", [](dart::dynamics::BodyNode *self) -> dart::dynamics::SoftBodyNode * { return self->asSoftBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::SoftBodyNodePtr> >())
.def("setAllNodeStates", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode::AllNodeStates & states) -> void { return self->setAllNodeStates(states); }, (::boost::python::arg("states")))
.def("getAllNodeStates", [](const dart::dynamics::BodyNode *self) -> dart::dynamics::BodyNode::AllNodeStates { return self->getAllNodeStates(); })
.def("setAllNodeProperties", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode::AllNodeProperties & properties) -> void { return self->setAllNodeProperties(properties); }, (::boost::python::arg("properties")))
.def("getAllNodeProperties", [](const dart::dynamics::BodyNode *self) -> dart::dynamics::BodyNode::AllNodeProperties { return self->getAllNodeProperties(); })
.def("setProperties", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode::CompositeProperties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode::AspectProperties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setAspectState", [](dart::dynamics::BodyNode *self, const dart::common::EmbedStateAndPropertiesOnTopOf<dart::dynamics::BodyNode, dart::dynamics::detail::BodyNodeState, dart::dynamics::detail::BodyNodeAspectProperties, dart::common::RequiresAspect<dart::common::ProxyStateAndPropertiesAspect<dart::dynamics::BodyNode, dart::common::ProxyCloneable<dart::common::Aspect::State, dart::dynamics::BodyNode, dart::common::CloneableMap<std::map<std::type_index, std::unique_ptr<dart::common::CloneableVector<std::unique_ptr<dart::dynamics::Node::State, std::default_delete<dart::dynamics::Node::State> > >, std::default_delete<dart::common::CloneableVector<std::unique_ptr<dart::dynamics::Node::State, std::default_delete<dart::dynamics::Node::State> > > > >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::CloneableVector<std::unique_ptr<dart::dynamics::Node::State, std::default_delete<dart::dynamics::Node::State> > >, std::default_delete<dart::common::CloneableVector<std::unique_ptr<dart::dynamics::Node::State, std::default_delete<dart::dynamics::Node::State> > > > > > > > >, &dart::dynamics::detail::setAllNodeStates, &dart::dynamics::detail::getAllNodeStates>, dart::common::ProxyCloneable<dart::common::Aspect::Properties, dart::dynamics::BodyNode, dart::common::CloneableMap<std::map<std::type_index, std::unique_ptr<dart::common::CloneableVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > >, std::default_delete<dart::common::CloneableVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > > > >, std::less<std::type_index>, std::allocator<std::pair<const std::type_index, std::unique_ptr<dart::common::CloneableVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > >, std::default_delete<dart::common::CloneableVector<std::unique_ptr<dart::dynamics::Node::Properties, std::default_delete<dart::dynamics::Node::Properties> > > > > > > > >, &dart::dynamics::detail::setAllNodeProperties, &dart::dynamics::detail::getAllNodeProperties> > > >::AspectState & state) -> void { return self->setAspectState(state); }, (::boost::python::arg("state")))
.def("setAspectProperties", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getBodyNodeProperties", [](const dart::dynamics::BodyNode *self) -> dart::dynamics::BodyNode::Properties { return self->getBodyNodeProperties(); })
.def("copy", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode & otherBodyNode) -> void { return self->copy(otherBodyNode); }, (::boost::python::arg("otherBodyNode")))
.def("copy", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode * otherBodyNode) -> void { return self->copy(otherBodyNode); }, (::boost::python::arg("otherBodyNode")))
.def("duplicateNodes", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode * otherBodyNode) -> void { return self->duplicateNodes(otherBodyNode); }, (::boost::python::arg("otherBodyNode")))
.def("matchNodes", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode * otherBodyNode) -> void { return self->matchNodes(otherBodyNode); }, (::boost::python::arg("otherBodyNode")))
.def("setName", [](dart::dynamics::BodyNode *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("getName", [](const dart::dynamics::BodyNode *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setGravityMode", [](dart::dynamics::BodyNode *self, bool _gravityMode) -> void { return self->setGravityMode(_gravityMode); }, (::boost::python::arg("_gravityMode")))
.def("getGravityMode", [](const dart::dynamics::BodyNode *self) -> bool { return self->getGravityMode(); })
.def("isCollidable", [](const dart::dynamics::BodyNode *self) -> bool { return self->isCollidable(); })
.def("setCollidable", [](dart::dynamics::BodyNode *self, bool _isCollidable) -> void { return self->setCollidable(_isCollidable); }, (::boost::python::arg("_isCollidable")))
.def("setMass", [](dart::dynamics::BodyNode *self, double _mass) -> void { return self->setMass(_mass); }, (::boost::python::arg("_mass")))
.def("getMass", [](const dart::dynamics::BodyNode *self) -> double { return self->getMass(); })
.def("setMomentOfInertia", [](dart::dynamics::BodyNode *self, double _Ixx, double _Iyy, double _Izz) -> void { return self->setMomentOfInertia(_Ixx, _Iyy, _Izz); }, (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz")))
.def("setMomentOfInertia", [](dart::dynamics::BodyNode *self, double _Ixx, double _Iyy, double _Izz, double _Ixy) -> void { return self->setMomentOfInertia(_Ixx, _Iyy, _Izz, _Ixy); }, (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy")))
.def("setMomentOfInertia", [](dart::dynamics::BodyNode *self, double _Ixx, double _Iyy, double _Izz, double _Ixy, double _Ixz) -> void { return self->setMomentOfInertia(_Ixx, _Iyy, _Izz, _Ixy, _Ixz); }, (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz")))
.def("setMomentOfInertia", [](dart::dynamics::BodyNode *self, double _Ixx, double _Iyy, double _Izz, double _Ixy, double _Ixz, double _Iyz) -> void { return self->setMomentOfInertia(_Ixx, _Iyy, _Izz, _Ixy, _Ixz, _Iyz); }, (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz"), ::boost::python::arg("_Iyz")))
.def("getMomentOfInertia", [](const dart::dynamics::BodyNode *self, double & _Ixx, double & _Iyy, double & _Izz, double & _Ixy, double & _Ixz, double & _Iyz) -> void { return self->getMomentOfInertia(_Ixx, _Iyy, _Izz, _Ixy, _Ixz, _Iyz); }, (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz"), ::boost::python::arg("_Iyz")))
.def("getSpatialInertia", [](const dart::dynamics::BodyNode *self) -> const Eigen::Matrix6d & { return self->getSpatialInertia(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setInertia", [](dart::dynamics::BodyNode *self, const dart::dynamics::Inertia & _inertia) -> void { return self->setInertia(_inertia); }, (::boost::python::arg("_inertia")))
.def("getInertia", [](const dart::dynamics::BodyNode *self) -> const dart::dynamics::Inertia & { return self->getInertia(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getArticulatedInertia", [](const dart::dynamics::BodyNode *self) -> const dart::math::Inertia & { return self->getArticulatedInertia(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getArticulatedInertiaImplicit", [](const dart::dynamics::BodyNode *self) -> const dart::math::Inertia & { return self->getArticulatedInertiaImplicit(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setLocalCOM", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _com) -> void { return self->setLocalCOM(_com); }, (::boost::python::arg("_com")))
.def("getLocalCOM", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector3d & { return self->getLocalCOM(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getCOM", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector3d { return self->getCOM(); })
.def("getCOM", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _withRespectTo) -> Eigen::Vector3d { return self->getCOM(_withRespectTo); }, (::boost::python::arg("_withRespectTo")))
.def("getCOMLinearVelocity", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector3d { return self->getCOMLinearVelocity(); })
.def("getCOMLinearVelocity", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo); }, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearVelocity", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMSpatialVelocity", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(); })
.def("getCOMSpatialVelocity", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(); })
.def("getCOMLinearAcceleration", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo); }, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMSpatialAcceleration", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(); })
.def("getCOMSpatialAcceleration", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(_relativeTo, _inCoordinatesOf); }, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("setFrictionCoeff", [](dart::dynamics::BodyNode *self, double _coeff) -> void { return self->setFrictionCoeff(_coeff); }, (::boost::python::arg("_coeff")))
.def("getFrictionCoeff", [](const dart::dynamics::BodyNode *self) -> double { return self->getFrictionCoeff(); })
.def("setRestitutionCoeff", [](dart::dynamics::BodyNode *self, double _coeff) -> void { return self->setRestitutionCoeff(_coeff); }, (::boost::python::arg("_coeff")))
.def("getRestitutionCoeff", [](const dart::dynamics::BodyNode *self) -> double { return self->getRestitutionCoeff(); })
.def("getIndexInSkeleton", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getIndexInSkeleton(); })
.def("getIndexInTree", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getIndexInTree(); })
.def("getTreeIndex", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getTreeIndex(); })
.def("remove", [](dart::dynamics::BodyNode *self) -> dart::dynamics::SkeletonPtr { return self->remove(); })
.def("remove", [](dart::dynamics::BodyNode *self, const std::string & _name) -> dart::dynamics::SkeletonPtr { return self->remove(_name); }, (::boost::python::arg("_name")))
.def("moveTo", [](dart::dynamics::BodyNode *self, dart::dynamics::BodyNode * _newParent) -> bool { return self->moveTo(_newParent); }, (::boost::python::arg("_newParent")))
.def("moveTo", [](dart::dynamics::BodyNode *self, const dart::dynamics::SkeletonPtr & _newSkeleton, dart::dynamics::BodyNode * _newParent) -> bool { return self->moveTo(_newSkeleton, _newParent); }, (::boost::python::arg("_newSkeleton"), ::boost::python::arg("_newParent")))
.def("split", [](dart::dynamics::BodyNode *self, const std::string & _skeletonName) -> dart::dynamics::SkeletonPtr { return self->split(_skeletonName); }, (::boost::python::arg("_skeletonName")))
.def("copyTo", [](dart::dynamics::BodyNode *self, dart::dynamics::BodyNode * _newParent) -> std::pair<dart::dynamics::Joint *, dart::dynamics::BodyNode *> { return self->copyTo(_newParent); }, (::boost::python::arg("_newParent")))
.def("copyTo", [](dart::dynamics::BodyNode *self, dart::dynamics::BodyNode * _newParent, bool _recursive) -> std::pair<dart::dynamics::Joint *, dart::dynamics::BodyNode *> { return self->copyTo(_newParent, _recursive); }, (::boost::python::arg("_newParent"), ::boost::python::arg("_recursive")))
.def("copyTo", [](const dart::dynamics::BodyNode *self, const dart::dynamics::SkeletonPtr & _newSkeleton, dart::dynamics::BodyNode * _newParent) -> std::pair<dart::dynamics::Joint *, dart::dynamics::BodyNode *> { return self->copyTo(_newSkeleton, _newParent); }, (::boost::python::arg("_newSkeleton"), ::boost::python::arg("_newParent")))
.def("copyTo", [](const dart::dynamics::BodyNode *self, const dart::dynamics::SkeletonPtr & _newSkeleton, dart::dynamics::BodyNode * _newParent, bool _recursive) -> std::pair<dart::dynamics::Joint *, dart::dynamics::BodyNode *> { return self->copyTo(_newSkeleton, _newParent, _recursive); }, (::boost::python::arg("_newSkeleton"), ::boost::python::arg("_newParent"), ::boost::python::arg("_recursive")))
.def("copyAs", [](const dart::dynamics::BodyNode *self, const std::string & _skeletonName) -> dart::dynamics::SkeletonPtr { return self->copyAs(_skeletonName); }, (::boost::python::arg("_skeletonName")))
.def("copyAs", [](const dart::dynamics::BodyNode *self, const std::string & _skeletonName, bool _recursive) -> dart::dynamics::SkeletonPtr { return self->copyAs(_skeletonName, _recursive); }, (::boost::python::arg("_skeletonName"), ::boost::python::arg("_recursive")))
.def("getSkeleton", [](dart::dynamics::BodyNode *self) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(); })
.def("getParentJoint", [](dart::dynamics::BodyNode *self) -> dart::dynamics::Joint * { return self->getParentJoint(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >())
.def("getParentBodyNode", [](dart::dynamics::BodyNode *self) -> dart::dynamics::BodyNode * { return self->getParentBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("getNumChildBodyNodes", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumChildBodyNodes(); })
.def("getChildBodyNode", [](dart::dynamics::BodyNode *self, std::size_t _index) -> dart::dynamics::BodyNode * { return self->getChildBodyNode(_index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), (::boost::python::arg("_index")))
.def("getNumChildJoints", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumChildJoints(); })
.def("getChildJoint", [](dart::dynamics::BodyNode *self, std::size_t _index) -> dart::dynamics::Joint * { return self->getChildJoint(_index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), (::boost::python::arg("_index")))
.def("getNumShapeNodes", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumShapeNodes(); })
.def("getShapeNode", [](dart::dynamics::BodyNode *self, std::size_t index) -> dart::dynamics::ShapeNode * { return self->getShapeNode(index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), (::boost::python::arg("index")))
.def("createShapeNode", [](dart::dynamics::BodyNode *self, const dart::dynamics::ShapePtr & shape) -> dart::dynamics::ShapeNode * { return self->createShapeNode(shape); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), (::boost::python::arg("shape")))
.def("createShapeNode", [](dart::dynamics::BodyNode *self, const dart::dynamics::ShapePtr & shape, const std::string & name) -> dart::dynamics::ShapeNode * { return self->createShapeNode(shape, name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), (::boost::python::arg("shape"), ::boost::python::arg("name")))
.def("createShapeNode", [](dart::dynamics::BodyNode *self, const dart::dynamics::ShapePtr & shape, const char * name) -> dart::dynamics::ShapeNode * { return self->createShapeNode(shape, name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), (::boost::python::arg("shape"), ::boost::python::arg("name")))
.def("getShapeNodes", [](dart::dynamics::BodyNode *self) -> const std::vector<dart::dynamics::ShapeNode *> { return self->getShapeNodes(); })
.def("getShapeNodes", [](const dart::dynamics::BodyNode *self) -> const std::vector<const dart::dynamics::ShapeNode *> { return self->getShapeNodes(); })
.def("removeAllShapeNodes", [](dart::dynamics::BodyNode *self) -> void { return self->removeAllShapeNodes(); })
.def("getNumEndEffectors", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumEndEffectors(); })
.def("getEndEffector", [](dart::dynamics::BodyNode *self, std::size_t index) -> dart::dynamics::EndEffector * { return self->getEndEffector(index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("index")))
.def("createEndEffector", [](dart::dynamics::BodyNode *self, const dart::dynamics::EndEffector::BasicProperties & _properties) -> dart::dynamics::EndEffector * { return self->createEndEffector(_properties); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("_properties")))
.def("createEndEffector", [](dart::dynamics::BodyNode *self) -> dart::dynamics::EndEffector * { return self->createEndEffector(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >())
.def("createEndEffector", [](dart::dynamics::BodyNode *self, const std::string & _name) -> dart::dynamics::EndEffector * { return self->createEndEffector(_name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("_name")))
.def("createEndEffector", [](dart::dynamics::BodyNode *self, const char * _name) -> dart::dynamics::EndEffector * { return self->createEndEffector(_name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("_name")))
.def("getNumMarkers", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumMarkers(); })
.def("getMarker", [](dart::dynamics::BodyNode *self, std::size_t index) -> dart::dynamics::Marker * { return self->getMarker(index); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("index")))
.def("createMarker", [](dart::dynamics::BodyNode *self) -> dart::dynamics::Marker * { return self->createMarker(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("createMarker", [](dart::dynamics::BodyNode *self, const std::string & name) -> dart::dynamics::Marker * { return self->createMarker(name); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("name")))
.def("createMarker", [](dart::dynamics::BodyNode *self, const std::string & name, const Eigen::Vector3d & position) -> dart::dynamics::Marker * { return self->createMarker(name, position); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("name"), ::boost::python::arg("position")))
.def("createMarker", [](dart::dynamics::BodyNode *self, const std::string & name, const Eigen::Vector3d & position, const Eigen::Vector4d & color) -> dart::dynamics::Marker * { return self->createMarker(name, position, color); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("name"), ::boost::python::arg("position"), ::boost::python::arg("color")))
.def("createMarker", [](dart::dynamics::BodyNode *self, const dart::dynamics::Marker::BasicProperties & properties) -> dart::dynamics::Marker * { return self->createMarker(properties); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("properties")))
.def("dependsOn", [](const dart::dynamics::BodyNode *self, std::size_t _genCoordIndex) -> bool { return self->dependsOn(_genCoordIndex); }, (::boost::python::arg("_genCoordIndex")))
.def("getNumDependentGenCoords", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumDependentGenCoords(); })
.def("getDependentGenCoordIndex", [](const dart::dynamics::BodyNode *self, std::size_t _arrayIndex) -> std::size_t { return self->getDependentGenCoordIndex(_arrayIndex); }, (::boost::python::arg("_arrayIndex")))
.def("getDependentGenCoordIndices", [](const dart::dynamics::BodyNode *self) -> const std::vector<std::size_t> & { return self->getDependentGenCoordIndices(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getNumDependentDofs", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumDependentDofs(); })
.def("getDependentDof", [](dart::dynamics::BodyNode *self, std::size_t _index) -> dart::dynamics::DegreeOfFreedom * { return self->getDependentDof(_index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_index")))
.def("getDependentDofs", [](dart::dynamics::BodyNode *self) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getDependentDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getChainDofs", [](const dart::dynamics::BodyNode *self) -> const std::vector<const dart::dynamics::DegreeOfFreedom *> { return self->getChainDofs(); })
.def("getRelativeTransform", [](const dart::dynamics::BodyNode *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeSpatialVelocity", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeSpatialAcceleration", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPrimaryRelativeAcceleration", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getPrimaryRelativeAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPartialAcceleration", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getPartialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobian", [](const dart::dynamics::BodyNode *self) -> const dart::math::Jacobian & { return self->getJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getWorldJacobian", [](const dart::dynamics::BodyNode *self) -> const dart::math::Jacobian & { return self->getWorldJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobianSpatialDeriv", [](const dart::dynamics::BodyNode *self) -> const dart::math::Jacobian & { return self->getJacobianSpatialDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobianClassicDeriv", [](const dart::dynamics::BodyNode *self) -> const dart::math::Jacobian & { return self->getJacobianClassicDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getBodyVelocityChange", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getBodyVelocityChange(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setColliding", [](dart::dynamics::BodyNode *self, bool _isColliding) -> void { return self->setColliding(_isColliding); }, (::boost::python::arg("_isColliding")))
.def("isColliding", [](dart::dynamics::BodyNode *self) -> bool { return self->isColliding(); })
.def("addExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force) -> void { return self->addExtForce(_force); }, (::boost::python::arg("_force")))
.def("addExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset) -> void { return self->addExtForce(_force, _offset); }, (::boost::python::arg("_force"), ::boost::python::arg("_offset")))
.def("addExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset, bool _isForceLocal) -> void { return self->addExtForce(_force, _offset, _isForceLocal); }, (::boost::python::arg("_force"), ::boost::python::arg("_offset"), ::boost::python::arg("_isForceLocal")))
.def("addExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset, bool _isForceLocal, bool _isOffsetLocal) -> void { return self->addExtForce(_force, _offset, _isForceLocal, _isOffsetLocal); }, (::boost::python::arg("_force"), ::boost::python::arg("_offset"), ::boost::python::arg("_isForceLocal"), ::boost::python::arg("_isOffsetLocal")))
.def("setExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force) -> void { return self->setExtForce(_force); }, (::boost::python::arg("_force")))
.def("setExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset) -> void { return self->setExtForce(_force, _offset); }, (::boost::python::arg("_force"), ::boost::python::arg("_offset")))
.def("setExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset, bool _isForceLocal) -> void { return self->setExtForce(_force, _offset, _isForceLocal); }, (::boost::python::arg("_force"), ::boost::python::arg("_offset"), ::boost::python::arg("_isForceLocal")))
.def("setExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset, bool _isForceLocal, bool _isOffsetLocal) -> void { return self->setExtForce(_force, _offset, _isForceLocal, _isOffsetLocal); }, (::boost::python::arg("_force"), ::boost::python::arg("_offset"), ::boost::python::arg("_isForceLocal"), ::boost::python::arg("_isOffsetLocal")))
.def("addExtTorque", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _torque) -> void { return self->addExtTorque(_torque); }, (::boost::python::arg("_torque")))
.def("addExtTorque", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _torque, bool _isLocal) -> void { return self->addExtTorque(_torque, _isLocal); }, (::boost::python::arg("_torque"), ::boost::python::arg("_isLocal")))
.def("setExtTorque", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _torque) -> void { return self->setExtTorque(_torque); }, (::boost::python::arg("_torque")))
.def("setExtTorque", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _torque, bool _isLocal) -> void { return self->setExtTorque(_torque, _isLocal); }, (::boost::python::arg("_torque"), ::boost::python::arg("_isLocal")))
.def("clearExternalForces", [](dart::dynamics::BodyNode *self) -> void { return self->clearExternalForces(); })
.def("clearInternalForces", [](dart::dynamics::BodyNode *self) -> void { return self->clearInternalForces(); })
.def("getExternalForceLocal", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getExternalForceLocal(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getExternalForceGlobal", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector6d { return self->getExternalForceGlobal(); })
.def("getBodyForce", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getBodyForce(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isReactive", [](const dart::dynamics::BodyNode *self) -> bool { return self->isReactive(); })
.def("setConstraintImpulse", [](dart::dynamics::BodyNode *self, const Eigen::Vector6d & _constImp) -> void { return self->setConstraintImpulse(_constImp); }, (::boost::python::arg("_constImp")))
.def("addConstraintImpulse", [](dart::dynamics::BodyNode *self, const Eigen::Vector6d & _constImp) -> void { return self->addConstraintImpulse(_constImp); }, (::boost::python::arg("_constImp")))
.def("addConstraintImpulse", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _constImp, const Eigen::Vector3d & _offset) -> void { return self->addConstraintImpulse(_constImp, _offset); }, (::boost::python::arg("_constImp"), ::boost::python::arg("_offset")))
.def("addConstraintImpulse", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _constImp, const Eigen::Vector3d & _offset, bool _isImpulseLocal) -> void { return self->addConstraintImpulse(_constImp, _offset, _isImpulseLocal); }, (::boost::python::arg("_constImp"), ::boost::python::arg("_offset"), ::boost::python::arg("_isImpulseLocal")))
.def("addConstraintImpulse", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _constImp, const Eigen::Vector3d & _offset, bool _isImpulseLocal, bool _isOffsetLocal) -> void { return self->addConstraintImpulse(_constImp, _offset, _isImpulseLocal, _isOffsetLocal); }, (::boost::python::arg("_constImp"), ::boost::python::arg("_offset"), ::boost::python::arg("_isImpulseLocal"), ::boost::python::arg("_isOffsetLocal")))
.def("clearConstraintImpulse", [](dart::dynamics::BodyNode *self) -> void { return self->clearConstraintImpulse(); })
.def("getConstraintImpulse", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getConstraintImpulse(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("computeLagrangian", [](const dart::dynamics::BodyNode *self, const Eigen::Vector3d & gravity) -> double { return self->computeLagrangian(gravity); }, (::boost::python::arg("gravity")))
.def("getKineticEnergy", [](const dart::dynamics::BodyNode *self) -> double { return self->getKineticEnergy(); })
.def("computeKineticEnergy", [](const dart::dynamics::BodyNode *self) -> double { return self->computeKineticEnergy(); })
.def("getPotentialEnergy", [](const dart::dynamics::BodyNode *self, const Eigen::Vector3d & _gravity) -> double { return self->getPotentialEnergy(_gravity); }, (::boost::python::arg("_gravity")))
.def("computePotentialEnergy", [](const dart::dynamics::BodyNode *self, const Eigen::Vector3d & gravity) -> double { return self->computePotentialEnergy(gravity); }, (::boost::python::arg("gravity")))
.def("getLinearMomentum", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector3d { return self->getLinearMomentum(); })
.def("getAngularMomentum", [](dart::dynamics::BodyNode *self) -> Eigen::Vector3d { return self->getAngularMomentum(); })
.def("getAngularMomentum", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _pivot) -> Eigen::Vector3d { return self->getAngularMomentum(_pivot); }, (::boost::python::arg("_pivot")))
.def("dirtyTransform", [](dart::dynamics::BodyNode *self) -> void { return self->dirtyTransform(); })
.def("dirtyVelocity", [](dart::dynamics::BodyNode *self) -> void { return self->dirtyVelocity(); })
.def("dirtyAcceleration", [](dart::dynamics::BodyNode *self) -> void { return self->dirtyAcceleration(); })
.def("notifyArticulatedInertiaUpdate", [](dart::dynamics::BodyNode *self) -> void { return self->notifyArticulatedInertiaUpdate(); })
.def("dirtyArticulatedInertia", [](dart::dynamics::BodyNode *self) -> void { return self->dirtyArticulatedInertia(); })
.def("notifyExternalForcesUpdate", [](dart::dynamics::BodyNode *self) -> void { return self->notifyExternalForcesUpdate(); })
.def("dirtyExternalForces", [](dart::dynamics::BodyNode *self) -> void { return self->dirtyExternalForces(); })
.def("notifyCoriolisUpdate", [](dart::dynamics::BodyNode *self) -> void { return self->notifyCoriolisUpdate(); })
.def("dirtyCoriolisForces", [](dart::dynamics::BodyNode *self) -> void { return self->dirtyCoriolisForces(); })
;
}

/* footer */
