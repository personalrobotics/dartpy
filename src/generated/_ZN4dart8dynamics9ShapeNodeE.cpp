#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics9ShapeNodeE_docstring[] = R"CHIMERA_STRING( This is the variadic version of the SpecializedForAddon class which
 allows you to include arbitrarily many specialized types in the
 specialization.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode13setPropertiesERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this ShapeNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode13setPropertiesERKNS1_16UniquePropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this ShapeNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode22getShapeNodePropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this ShapeNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the properties of another ShapeNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the properties of another ShapeNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode7setNameERKSs_docstring[] = R"CHIMERA_STRING( Set name. If the name is already taken, this will return an altered
 version which will be used by the Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode16incrementVersionEv_docstring[] = R"CHIMERA_STRING( Increment the version for this object
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode10getVersionEv_docstring[] = R"CHIMERA_STRING( Get the version number of this object
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode20setRelativeTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Set transformation of this shape node relative to the parent frame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode19setRelativeRotationERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE_docstring[] = R"CHIMERA_STRING( Set rotation of this shape node relative to the parent frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode19getRelativeRotationEv_docstring[] = R"CHIMERA_STRING( Get rotation of this shape node relative to the parent frame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode22setRelativeTranslationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set translation of this shape node relative to the parent frame
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode9setOffsetERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Same as setRelativeTranslation(offset)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode22getRelativeTranslationEv_docstring[] = R"CHIMERA_STRING( Get translation of this shape node relative to the parent frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode9getOffsetEv_docstring[] = R"CHIMERA_STRING( Same as getRelativeTranslation()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode11getSkeletonEv_docstring[] = R"CHIMERA_STRING( Return the Skeleton that this Node is attached to
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode9dependsOnEm_docstring[] = R"CHIMERA_STRING( Return true if _genCoordIndex-th generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode24getNumDependentGenCoordsEv_docstring[] = R"CHIMERA_STRING( The number of the generalized coordinates which affect this JacobianNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode25getDependentGenCoordIndexEm_docstring[] = R"CHIMERA_STRING( Return a generalized coordinate index from the array index
 (
<
 getNumDependentDofs)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode27getDependentGenCoordIndicesEv_docstring[] = R"CHIMERA_STRING( Indices of the generalized coordinates which affect this JacobianNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode19getNumDependentDofsEv_docstring[] = R"CHIMERA_STRING( Same as getNumDependentGenCoords()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode15getDependentDofEm_docstring[] = R"CHIMERA_STRING( Get a pointer to the _indexth dependent DegreeOfFreedom for this BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode16getDependentDofsEv_docstring[] = R"CHIMERA_STRING( Return a std::vector of DegreeOfFreedom pointers that this Node depends on
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode12getChainDofsEv_docstring[] = R"CHIMERA_STRING( Returns a DegreeOfFreedom vector containing the dofs that form a Chain
 leading up to this JacobianNode from the root of the Skeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode11getJacobianEv_docstring[] = R"CHIMERA_STRING( 
\
{ 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode16getWorldJacobianEv_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting the origin of this JacobianNode.
 The Jacobian is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode23getJacobianSpatialDerivEv_docstring[] = R"CHIMERA_STRING( Return the spatial time derivative of the generalized Jacobian targeting
 the origin of this BodyNode. The Jacobian is expressed in this BodyNode's
 coordinate Frame.
 NOTE: Since this is a spatial time derivative, it should be used with
 spatial vectors. If you are using classical linear and angular
 acceleration vectors, then use getJacobianClassicDeriv(),
 getLinearJacobianDeriv(), or getAngularJacobianDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9ShapeNode23getJacobianClassicDerivEv_docstring[] = R"CHIMERA_STRING( Return the classical time derivative of the generalized Jacobian targeting
 the origin of this BodyNode. The Jacobian is expressed in the World
 coordinate Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear and angular vectors. If you are using spatial vectors,
 use getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9ShapeNode11asShapeNodeEv_docstring[] = R"CHIMERA_STRING( 
\
}
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics9ShapeNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ShapeNode, ::boost::noncopyable, dart::dynamics::ShapeNodePtr, ::boost::python::bases<dart::dynamics::FixedFrame, dart::dynamics::ShapeFrame, dart::dynamics::AccessoryNode<dart::dynamics::ShapeNode>, dart::dynamics::TemplatedJacobianNode<dart::dynamics::ShapeNode> > >("ShapeNode", _ZN4dart8dynamics9ShapeNodeE_docstring, boost::python::no_init)
.def("setProperties", [](dart::dynamics::ShapeNode *self, const dart::dynamics::ShapeNode::Properties & properties) -> void { return self->setProperties(properties); }, _ZN4dart8dynamics9ShapeNode13setPropertiesERKNS1_10PropertiesE_docstring, (::boost::python::arg("properties")))
.def("setProperties", [](dart::dynamics::ShapeNode *self, const dart::dynamics::ShapeNode::UniqueProperties & properties) -> void { return self->setProperties(properties); }, _ZN4dart8dynamics9ShapeNode13setPropertiesERKNS1_16UniquePropertiesE_docstring, (::boost::python::arg("properties")))
.def("getShapeNodeProperties", [](const dart::dynamics::ShapeNode *self) -> const dart::dynamics::ShapeNode::Properties { return self->getShapeNodeProperties(); }, _ZNK4dart8dynamics9ShapeNode22getShapeNodePropertiesEv_docstring)
.def("copy", [](dart::dynamics::ShapeNode *self, const dart::dynamics::ShapeNode & other) -> void { return self->copy(other); }, _ZN4dart8dynamics9ShapeNode4copyERKS1__docstring, (::boost::python::arg("other")))
.def("copy", [](dart::dynamics::ShapeNode *self, const dart::dynamics::ShapeNode * other) -> void { return self->copy(other); }, _ZN4dart8dynamics9ShapeNode4copyEPKS1__docstring, (::boost::python::arg("other")))
.def("setName", [](dart::dynamics::ShapeNode *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics9ShapeNode7setNameERKSs_docstring, (::boost::python::arg("_name")))
.def("incrementVersion", [](dart::dynamics::ShapeNode *self) -> std::size_t { return self->incrementVersion(); }, _ZN4dart8dynamics9ShapeNode16incrementVersionEv_docstring)
.def("getVersion", [](const dart::dynamics::ShapeNode *self) -> std::size_t { return self->getVersion(); }, _ZNK4dart8dynamics9ShapeNode10getVersionEv_docstring)
.def("setRelativeTransform", [](dart::dynamics::ShapeNode *self, const Eigen::Isometry3d & transform) -> void { return self->setRelativeTransform(transform); }, _ZN4dart8dynamics9ShapeNode20setRelativeTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("transform")))
.def("setRelativeRotation", [](dart::dynamics::ShapeNode *self, const Eigen::Matrix3d & rotation) -> void { return self->setRelativeRotation(rotation); }, _ZN4dart8dynamics9ShapeNode19setRelativeRotationERKN5Eigen6MatrixIdLi3ELi3ELi0ELi3ELi3EEE_docstring, (::boost::python::arg("rotation")))
.def("getRelativeRotation", [](const dart::dynamics::ShapeNode *self) -> Eigen::Matrix3d { return self->getRelativeRotation(); }, _ZNK4dart8dynamics9ShapeNode19getRelativeRotationEv_docstring)
.def("setRelativeTranslation", [](dart::dynamics::ShapeNode *self, const Eigen::Vector3d & translation) -> void { return self->setRelativeTranslation(translation); }, _ZN4dart8dynamics9ShapeNode22setRelativeTranslationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("translation")))
.def("setOffset", [](dart::dynamics::ShapeNode *self, const Eigen::Vector3d & offset) -> void { return self->setOffset(offset); }, _ZN4dart8dynamics9ShapeNode9setOffsetERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("offset")))
.def("getRelativeTranslation", [](const dart::dynamics::ShapeNode *self) -> Eigen::Vector3d { return self->getRelativeTranslation(); }, _ZNK4dart8dynamics9ShapeNode22getRelativeTranslationEv_docstring)
.def("getOffset", [](const dart::dynamics::ShapeNode *self) -> Eigen::Vector3d { return self->getOffset(); }, _ZNK4dart8dynamics9ShapeNode9getOffsetEv_docstring)
.def("getSkeleton", [](dart::dynamics::ShapeNode *self) -> std::shared_ptr<dart::dynamics::Skeleton> { return self->getSkeleton(); }, _ZN4dart8dynamics9ShapeNode11getSkeletonEv_docstring)
.def("dependsOn", [](const dart::dynamics::ShapeNode *self, std::size_t genCoordIndex) -> bool { return self->dependsOn(genCoordIndex); }, _ZNK4dart8dynamics9ShapeNode9dependsOnEm_docstring, (::boost::python::arg("genCoordIndex")))
.def("getNumDependentGenCoords", [](const dart::dynamics::ShapeNode *self) -> std::size_t { return self->getNumDependentGenCoords(); }, _ZNK4dart8dynamics9ShapeNode24getNumDependentGenCoordsEv_docstring)
.def("getDependentGenCoordIndex", [](const dart::dynamics::ShapeNode *self, std::size_t arrayIndex) -> std::size_t { return self->getDependentGenCoordIndex(arrayIndex); }, _ZNK4dart8dynamics9ShapeNode25getDependentGenCoordIndexEm_docstring, (::boost::python::arg("arrayIndex")))
.def("getDependentGenCoordIndices", [](const dart::dynamics::ShapeNode *self) -> const std::vector<std::size_t> & { return self->getDependentGenCoordIndices(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9ShapeNode27getDependentGenCoordIndicesEv_docstring)
.def("getNumDependentDofs", [](const dart::dynamics::ShapeNode *self) -> std::size_t { return self->getNumDependentDofs(); }, _ZNK4dart8dynamics9ShapeNode19getNumDependentDofsEv_docstring)
.def("getDependentDof", [](dart::dynamics::ShapeNode *self, std::size_t index) -> dart::dynamics::DegreeOfFreedom * { return self->getDependentDof(index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), _ZN4dart8dynamics9ShapeNode15getDependentDofEm_docstring, (::boost::python::arg("index")))
.def("getDependentDofs", [](dart::dynamics::ShapeNode *self) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getDependentDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics9ShapeNode16getDependentDofsEv_docstring)
.def("getChainDofs", [](const dart::dynamics::ShapeNode *self) -> const std::vector<const dart::dynamics::DegreeOfFreedom *> { return self->getChainDofs(); }, _ZNK4dart8dynamics9ShapeNode12getChainDofsEv_docstring)
.def("getJacobian", [](const dart::dynamics::ShapeNode *self) -> const dart::math::Jacobian & { return self->getJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9ShapeNode11getJacobianEv_docstring)
.def("getWorldJacobian", [](const dart::dynamics::ShapeNode *self) -> const dart::math::Jacobian & { return self->getWorldJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9ShapeNode16getWorldJacobianEv_docstring)
.def("getJacobianSpatialDeriv", [](const dart::dynamics::ShapeNode *self) -> const dart::math::Jacobian & { return self->getJacobianSpatialDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9ShapeNode23getJacobianSpatialDerivEv_docstring)
.def("getJacobianClassicDeriv", [](const dart::dynamics::ShapeNode *self) -> const dart::math::Jacobian & { return self->getJacobianClassicDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9ShapeNode23getJacobianClassicDerivEv_docstring)
.def("asShapeNode", [](dart::dynamics::ShapeNode *self) -> dart::dynamics::ShapeNode * { return self->asShapeNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), _ZN4dart8dynamics9ShapeNode11asShapeNodeEv_docstring)
;
}

/* footer */
