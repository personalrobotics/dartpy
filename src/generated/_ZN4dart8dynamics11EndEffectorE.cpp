#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics11EndEffectorE_docstring[] = R"CHIMERA_STRING( The FixedFrame class represents a Frame with zero relative velocity and
 zero relative acceleration. It does not move within its parent Frame after
 its relative transform is set. However, classes that inherit the FixedFrame
 class may alter its relative transform or change what its parent Frame is.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector8setStateERKNS1_9StateDataE_docstring[] = R"CHIMERA_STRING( Set the State of this EndEffector.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector19getEndEffectorStateEv_docstring[] = R"CHIMERA_STRING( Get the State of this EndEffector
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector13setPropertiesERKNS1_14PropertiesDataEb_docstring[] = R"CHIMERA_STRING( Set the Properties of this EndEffector. If _useNow is true, the current
 Transform will be set to the new default transform.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector13setPropertiesERKNS1_16UniquePropertiesEb_docstring[] = R"CHIMERA_STRING( Set the Properties of this EndEffector. If _useNow is true, the current
 Transform will be set to the new default transform.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector24getEndEffectorPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this EndEffector
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the State and Properties of another EndEffector
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the State and Properties of another EndEffector
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector7setNameERKSs_docstring[] = R"CHIMERA_STRING( Set name. If the name is already taken, this will return an altered
 version which will be used by the Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector12setNodeStateERKNS0_4Node5StateE_docstring[] = R"CHIMERA_STRING( Set the State of this Node. By default, this does nothing.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector12getNodeStateEv_docstring[] = R"CHIMERA_STRING( Get the State of this Node. By default, this returns a nullptr which
 implies that the Node is stateless.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector15copyNodeStateToERSt10unique_ptrINS0_4Node5StateESt14default_deleteIS4_EE_docstring[] = R"CHIMERA_STRING( Copy the State of this Node into a unique_ptr. By default, this simply
 calls getNodeState() and passes the result into the outputState, but this
 function can be overriden to be more performant by avoiding allocations.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector17setNodePropertiesERKNS0_4Node10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this Node. By default, this does nothing.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector17getNodePropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this Node. By default, this returns a nullptr which
 implies that the Node has no properties.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector20copyNodePropertiesToERSt10unique_ptrINS0_4Node10PropertiesESt14default_deleteIS4_EE_docstring[] = R"CHIMERA_STRING( Copy the Properties of this Node into a unique_ptr. By default, this
 simply calls getNodeProperties() and passes the result into the
 outputProperties, but this function can be overriden to be more
 performant.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector20setRelativeTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Set the current relative transform of this EndEffector
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector27setDefaultRelativeTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEEb_docstring[] = R"CHIMERA_STRING( Set the default relative transform of this EndEffector. The relative
 transform of this EndEffector will be set to _newDefaultTf the next time
 resetRelativeTransform() is called. If _useNow is set to true, then
 resetRelativeTransform() will be called at the end of this function.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector22resetRelativeTransformEv_docstring[] = R"CHIMERA_STRING( Set the current relative transform of this EndEffector to the default
 relative transform of this EndEffector. The default relative transform can
 be set with setDefaultRelativeTransform()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector9dependsOnEm_docstring[] = R"CHIMERA_STRING( Return true if _genCoordIndex-th generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector24getNumDependentGenCoordsEv_docstring[] = R"CHIMERA_STRING( The number of the generalized coordinates which affect this JacobianNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector25getDependentGenCoordIndexEm_docstring[] = R"CHIMERA_STRING( Return a generalized coordinate index from the array index
 (
<
 getNumDependentDofs)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector27getDependentGenCoordIndicesEv_docstring[] = R"CHIMERA_STRING( Indices of the generalized coordinates which affect this JacobianNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector19getNumDependentDofsEv_docstring[] = R"CHIMERA_STRING( Same as getNumDependentGenCoords()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector15getDependentDofEm_docstring[] = R"CHIMERA_STRING( Get a pointer to the _indexth dependent DegreeOfFreedom for this BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector16getDependentDofsEv_docstring[] = R"CHIMERA_STRING( Return a std::vector of DegreeOfFreedom pointers that this Node depends on
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector12getChainDofsEv_docstring[] = R"CHIMERA_STRING( Returns a DegreeOfFreedom vector containing the dofs that form a Chain
 leading up to this JacobianNode from the root of the Skeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector11getJacobianEv_docstring[] = R"CHIMERA_STRING( 
\
{ 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector16getWorldJacobianEv_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting the origin of this JacobianNode.
 The Jacobian is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector23getJacobianSpatialDerivEv_docstring[] = R"CHIMERA_STRING( Return the spatial time derivative of the generalized Jacobian targeting
 the origin of this BodyNode. The Jacobian is expressed in this BodyNode's
 coordinate Frame.
 NOTE: Since this is a spatial time derivative, it should be used with
 spatial vectors. If you are using classical linear and angular
 acceleration vectors, then use getJacobianClassicDeriv(),
 getLinearJacobianDeriv(), or getAngularJacobianDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11EndEffector23getJacobianClassicDerivEv_docstring[] = R"CHIMERA_STRING( Return the classical time derivative of the generalized Jacobian targeting
 the origin of this BodyNode. The Jacobian is expressed in the World
 coordinate Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear and angular vectors. If you are using spatial vectors,
 use getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector21notifyTransformUpdateEv_docstring[] = R"CHIMERA_STRING( 
\
{ 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11EndEffector20notifyVelocityUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Frame and all its children that its velocity has changed
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics11EndEffectorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EndEffector, ::boost::noncopyable, dart::dynamics::TemplateNodePtr<dart::dynamics::EndEffector, dart::dynamics::BodyNode>, ::boost::python::bases<dart::dynamics::FixedFrame, dart::common::SpecializedForAddon<dart::dynamics::Support>, dart::dynamics::AccessoryNode<dart::dynamics::EndEffector>, dart::dynamics::TemplatedJacobianNode<dart::dynamics::EndEffector> > >("EndEffector", _ZN4dart8dynamics11EndEffectorE_docstring, boost::python::no_init)
.def("setState", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector::StateData & _state) -> void { return self->setState(_state); }, _ZN4dart8dynamics11EndEffector8setStateERKNS1_9StateDataE_docstring, (::boost::python::arg("_state")))
.def("getEndEffectorState", [](const dart::dynamics::EndEffector *self) -> dart::dynamics::EndEffector::StateData { return self->getEndEffectorState(); }, _ZNK4dart8dynamics11EndEffector19getEndEffectorStateEv_docstring)
.def("setProperties", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector::PropertiesData & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics11EndEffector13setPropertiesERKNS1_14PropertiesDataEb_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector::PropertiesData & _properties, bool _useNow) -> void { return self->setProperties(_properties, _useNow); }, _ZN4dart8dynamics11EndEffector13setPropertiesERKNS1_14PropertiesDataEb_docstring, (::boost::python::arg("_properties"), ::boost::python::arg("_useNow")))
.def("setProperties", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics11EndEffector13setPropertiesERKNS1_16UniquePropertiesEb_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector::UniqueProperties & _properties, bool _useNow) -> void { return self->setProperties(_properties, _useNow); }, _ZN4dart8dynamics11EndEffector13setPropertiesERKNS1_16UniquePropertiesEb_docstring, (::boost::python::arg("_properties"), ::boost::python::arg("_useNow")))
.def("getEndEffectorProperties", [](const dart::dynamics::EndEffector *self) -> dart::dynamics::EndEffector::PropertiesData { return self->getEndEffectorProperties(); }, _ZNK4dart8dynamics11EndEffector24getEndEffectorPropertiesEv_docstring)
.def("copy", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector & _otherEndEffector) -> void { return self->copy(_otherEndEffector); }, _ZN4dart8dynamics11EndEffector4copyERKS1__docstring, (::boost::python::arg("_otherEndEffector")))
.def("copy", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector * _otherEndEffector) -> void { return self->copy(_otherEndEffector); }, _ZN4dart8dynamics11EndEffector4copyEPKS1__docstring, (::boost::python::arg("_otherEndEffector")))
.def("setName", [](dart::dynamics::EndEffector *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics11EndEffector7setNameERKSs_docstring, (::boost::python::arg("_name")))
.def("setNodeState", [](dart::dynamics::EndEffector *self, const dart::dynamics::Node::State & otherState) -> void { return self->setNodeState(otherState); }, _ZN4dart8dynamics11EndEffector12setNodeStateERKNS0_4Node5StateE_docstring, (::boost::python::arg("otherState")))
.def("getNodeState", [](const dart::dynamics::EndEffector *self) -> std::unique_ptr<dart::dynamics::Node::State> { return self->getNodeState(); }, _ZNK4dart8dynamics11EndEffector12getNodeStateEv_docstring)
.def("copyNodeStateTo", [](const dart::dynamics::EndEffector *self, std::unique_ptr<dart::dynamics::Node::State> & outputState) -> void { return self->copyNodeStateTo(outputState); }, _ZNK4dart8dynamics11EndEffector15copyNodeStateToERSt10unique_ptrINS0_4Node5StateESt14default_deleteIS4_EE_docstring, (::boost::python::arg("outputState")))
.def("setNodeProperties", [](dart::dynamics::EndEffector *self, const dart::dynamics::Node::Properties & otherProperties) -> void { return self->setNodeProperties(otherProperties); }, _ZN4dart8dynamics11EndEffector17setNodePropertiesERKNS0_4Node10PropertiesE_docstring, (::boost::python::arg("otherProperties")))
.def("getNodeProperties", [](const dart::dynamics::EndEffector *self) -> std::unique_ptr<dart::dynamics::Node::Properties> { return self->getNodeProperties(); }, _ZNK4dart8dynamics11EndEffector17getNodePropertiesEv_docstring)
.def("copyNodePropertiesTo", [](const dart::dynamics::EndEffector *self, std::unique_ptr<dart::dynamics::Node::Properties> & outputProperties) -> void { return self->copyNodePropertiesTo(outputProperties); }, _ZNK4dart8dynamics11EndEffector20copyNodePropertiesToERSt10unique_ptrINS0_4Node10PropertiesESt14default_deleteIS4_EE_docstring, (::boost::python::arg("outputProperties")))
.def("setRelativeTransform", [](dart::dynamics::EndEffector *self, const Eigen::Isometry3d & _newRelativeTf) -> void { return self->setRelativeTransform(_newRelativeTf); }, _ZN4dart8dynamics11EndEffector20setRelativeTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("_newRelativeTf")))
.def("setDefaultRelativeTransform", [](dart::dynamics::EndEffector *self, const Eigen::Isometry3d & _newDefaultTf, bool _useNow) -> void { return self->setDefaultRelativeTransform(_newDefaultTf, _useNow); }, _ZN4dart8dynamics11EndEffector27setDefaultRelativeTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEEb_docstring, (::boost::python::arg("_newDefaultTf"), ::boost::python::arg("_useNow")))
.def("resetRelativeTransform", [](dart::dynamics::EndEffector *self) -> void { return self->resetRelativeTransform(); }, _ZN4dart8dynamics11EndEffector22resetRelativeTransformEv_docstring)
.def("hasSupport", [](const dart::dynamics::EndEffector *self) -> bool { return self->hasSupport(); })
.def("getSupport", [](dart::dynamics::EndEffector *self) -> dart::dynamics::Support * { return self->getSupport(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getSupport", [](dart::dynamics::EndEffector *self, const bool createIfNull) -> dart::dynamics::Support * { return self->getSupport(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setSupport", [](dart::dynamics::EndEffector *self, const dart::dynamics::Support * addon) -> void { return self->setSupport(addon); }, (::boost::python::arg("addon")))
.def("eraseSupport", [](dart::dynamics::EndEffector *self) -> void { return self->eraseSupport(); })
.def("releaseSupport", [](dart::dynamics::EndEffector *self) -> std::unique_ptr<dart::dynamics::Support> { return self->releaseSupport(); })
.def("dependsOn", [](const dart::dynamics::EndEffector *self, std::size_t _genCoordIndex) -> bool { return self->dependsOn(_genCoordIndex); }, _ZNK4dart8dynamics11EndEffector9dependsOnEm_docstring, (::boost::python::arg("_genCoordIndex")))
.def("getNumDependentGenCoords", [](const dart::dynamics::EndEffector *self) -> std::size_t { return self->getNumDependentGenCoords(); }, _ZNK4dart8dynamics11EndEffector24getNumDependentGenCoordsEv_docstring)
.def("getDependentGenCoordIndex", [](const dart::dynamics::EndEffector *self, std::size_t _arrayIndex) -> std::size_t { return self->getDependentGenCoordIndex(_arrayIndex); }, _ZNK4dart8dynamics11EndEffector25getDependentGenCoordIndexEm_docstring, (::boost::python::arg("_arrayIndex")))
.def("getDependentGenCoordIndices", [](const dart::dynamics::EndEffector *self) -> const std::vector<std::size_t> & { return self->getDependentGenCoordIndices(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11EndEffector27getDependentGenCoordIndicesEv_docstring)
.def("getNumDependentDofs", [](const dart::dynamics::EndEffector *self) -> std::size_t { return self->getNumDependentDofs(); }, _ZNK4dart8dynamics11EndEffector19getNumDependentDofsEv_docstring)
.def("getDependentDof", [](dart::dynamics::EndEffector *self, std::size_t _index) -> dart::dynamics::DegreeOfFreedom * { return self->getDependentDof(_index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), _ZN4dart8dynamics11EndEffector15getDependentDofEm_docstring, (::boost::python::arg("_index")))
.def("getDependentDofs", [](dart::dynamics::EndEffector *self) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getDependentDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics11EndEffector16getDependentDofsEv_docstring)
.def("getChainDofs", [](const dart::dynamics::EndEffector *self) -> const std::vector<const dart::dynamics::DegreeOfFreedom *> { return self->getChainDofs(); }, _ZNK4dart8dynamics11EndEffector12getChainDofsEv_docstring)
.def("getJacobian", [](const dart::dynamics::EndEffector *self) -> const dart::math::Jacobian & { return self->getJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11EndEffector11getJacobianEv_docstring)
.def("getWorldJacobian", [](const dart::dynamics::EndEffector *self) -> const dart::math::Jacobian & { return self->getWorldJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11EndEffector16getWorldJacobianEv_docstring)
.def("getJacobianSpatialDeriv", [](const dart::dynamics::EndEffector *self) -> const dart::math::Jacobian & { return self->getJacobianSpatialDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11EndEffector23getJacobianSpatialDerivEv_docstring)
.def("getJacobianClassicDeriv", [](const dart::dynamics::EndEffector *self) -> const dart::math::Jacobian & { return self->getJacobianClassicDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11EndEffector23getJacobianClassicDerivEv_docstring)
.def("notifyTransformUpdate", [](dart::dynamics::EndEffector *self) -> void { return self->notifyTransformUpdate(); }, _ZN4dart8dynamics11EndEffector21notifyTransformUpdateEv_docstring)
.def("notifyVelocityUpdate", [](dart::dynamics::EndEffector *self) -> void { return self->notifyVelocityUpdate(); }, _ZN4dart8dynamics11EndEffector20notifyVelocityUpdateEv_docstring)
;
}

/* footer */
