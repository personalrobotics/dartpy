#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics12JacobianNodeE_docstring[] = R"CHIMERA_STRING( The JacobianNode class serves as a common interface for BodyNodes and
 EndEffectors to both be used as references for IK modules. This is a pure
 abstract class.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12JacobianNode5getIKEb_docstring[] = R"CHIMERA_STRING( Get a pointer to an IK module for this JacobianNode. If _createIfNull is
 true, then the IK module will be generated if one does not already exist.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12JacobianNode13getOrCreateIKEv_docstring[] = R"CHIMERA_STRING( Get a pointer to an IK module for this JacobianNode. The IK module will be
 generated if one does not already exist. This function is actually the
 same as getIK(true).
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode5getIKEv_docstring[] = R"CHIMERA_STRING( Get a pointer to an IK module for this JacobianNode. Because this is a
 const function, a new IK module cannot be created if one does not already
 exist.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12JacobianNode8createIKEv_docstring[] = R"CHIMERA_STRING( Create a new IK module for this JacobianNode. If an IK module already
 exists in this JacobianNode, it will be destroyed and replaced by a brand
 new one.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12JacobianNode7clearIKEv_docstring[] = R"CHIMERA_STRING( Wipe away the IK module for this JacobianNode, leaving it as a nullptr.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12JacobianNode7setNameERKSs_docstring[] = R"CHIMERA_STRING( 
\
{ 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode7getNameEv_docstring[] = R"CHIMERA_STRING( Return the name of this Entity
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode9dependsOnEm_docstring[] = R"CHIMERA_STRING( Return true if _genCoordIndex-th generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode24getNumDependentGenCoordsEv_docstring[] = R"CHIMERA_STRING( The number of the generalized coordinates which affect this JacobianNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode25getDependentGenCoordIndexEm_docstring[] = R"CHIMERA_STRING( Return a generalized coordinate index from the array index
 (
<
 getNumDependentDofs)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode27getDependentGenCoordIndicesEv_docstring[] = R"CHIMERA_STRING( Indices of the generalized coordinates which affect this JacobianNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode19getNumDependentDofsEv_docstring[] = R"CHIMERA_STRING( Same as getNumDependentGenCoords()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12JacobianNode15getDependentDofEm_docstring[] = R"CHIMERA_STRING( Get a pointer to the _indexth dependent DegreeOfFreedom for this BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12JacobianNode16getDependentDofsEv_docstring[] = R"CHIMERA_STRING( Return a std::vector of DegreeOfFreedom pointers that this Node depends on
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode12getChainDofsEv_docstring[] = R"CHIMERA_STRING( Returns a DegreeOfFreedom vector containing the dofs that form a Chain
 leading up to this JacobianNode from the root of the Skeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode11getJacobianEv_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting the origin of this JacobianNode.
 The Jacobian is expressed in the Frame of this JacobianNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode11getJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobian() that lets you specify a coordinate Frame to
 express the Jacobian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode11getJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting an offset within the Frame of
 this JacobianNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode11getJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobian(const Eigen::Vector3d
&
) that lets you specify a
 coordinate Frame to express the Jacobian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode16getWorldJacobianEv_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting the origin of this JacobianNode.
 The Jacobian is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode16getWorldJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting an offset in this JacobianNode.
 The _offset is expected in coordinates of this BodyNode Frame. The
 Jacobian is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode17getLinearJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Return the linear Jacobian targeting the origin of this BodyNode. You can
 specify a coordinate Frame to express the Jacobian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode17getLinearJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting an offset within the Frame of
 this BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode18getAngularJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Return the angular Jacobian targeting the origin of this BodyNode. You can
 specify a coordinate Frame to express the Jacobian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode23getJacobianSpatialDerivEv_docstring[] = R"CHIMERA_STRING( Return the spatial time derivative of the generalized Jacobian targeting
 the origin of this BodyNode. The Jacobian is expressed in this BodyNode's
 coordinate Frame.
 NOTE: Since this is a spatial time derivative, it should be used with
 spatial vectors. If you are using classical linear and angular
 acceleration vectors, then use getJacobianClassicDeriv(),
 getLinearJacobianDeriv(), or getAngularJacobianDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode23getJacobianSpatialDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobianSpatialDeriv() that can return the Jacobian in
 coordinates of any Frame.
 NOTE: This Jacobian Derivative is only for use with spatial vectors. If
 you are using classical linear and angular vectors, then use
 getJacobianClassicDeriv(), getLinearJacobianDeriv(), or
 getAngularJacobianDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode23getJacobianSpatialDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Return the spatial time derivative of the generalized Jacobian targeting
 an offset in the Frame of this BodyNode. The Jacobian is expressed in
 this BodyNode's coordinate Frame.
 NOTE: This Jacobian Derivative is only for use with spatial vectors. If
 you are using classic linear and angular vectors, then use
 getJacobianClassicDeriv(), getLinearJacobianDeriv(), or
 getAngularJacobianDeriv() instead.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode23getJacobianSpatialDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobianSpatialDeriv(const Eigen::Vector3d
&
) that allows
 an arbitrary coordinate Frame to be specified.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode23getJacobianClassicDerivEv_docstring[] = R"CHIMERA_STRING( Return the classical time derivative of the generalized Jacobian targeting
 the origin of this BodyNode. The Jacobian is expressed in the World
 coordinate Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear and angular vectors. If you are using spatial vectors,
 use getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode23getJacobianClassicDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobianClassicDeriv() that can return the Jacobian in
 coordinates of any Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear and angular vectors. If you are using spatial vectors,
 use getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode23getJacobianClassicDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getJacobianClassicDeriv() that can compute the Jacobian for
 an offset within the Frame of this BodyNode. The offset must be expressed
 in the coordinates of this BodyNode Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear and angular vectors. If you are using spatial vectors,
 use getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode22getLinearJacobianDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Return the linear Jacobian (classical) time derivative, in terms of any
 coordinate Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear vectors. If you are using spatial vectors, use
 getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode22getLinearJacobianDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( A version of getLinearJacobianDeriv() that can compute the Jacobian for
 an offset within the Frame of this BodyNode. The offset must be expressed
 in coordinates of this BodyNode Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear vectors. If you are using spatial vectors, use
 getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12JacobianNode23getAngularJacobianDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Return the angular Jacobian time derivative, in terms of any coordinate
 Frame.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12JacobianNode20notifyJacobianUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this BodyNode and all its descendents that their Jacobians need to
 be updated.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12JacobianNode25notifyJacobianDerivUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this BodyNode and all its descendents that their Jacobian
 derivatives need to be updated.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics12JacobianNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::JacobianNode, ::boost::noncopyable, dart::dynamics::TemplateNodePtr<dart::dynamics::JacobianNode, dart::dynamics::BodyNode>, ::boost::python::bases<dart::dynamics::Node, dart::dynamics::Frame > >("JacobianNode", _ZN4dart8dynamics12JacobianNodeE_docstring, boost::python::no_init)
.def("getIK", [](dart::dynamics::JacobianNode *self) -> const std::shared_ptr<dart::dynamics::InverseKinematics> & { return self->getIK(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics12JacobianNode5getIKEb_docstring)
.def("getIK", [](dart::dynamics::JacobianNode *self, bool _createIfNull) -> const std::shared_ptr<dart::dynamics::InverseKinematics> & { return self->getIK(_createIfNull); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics12JacobianNode5getIKEb_docstring, (::boost::python::arg("_createIfNull")))
.def("getOrCreateIK", [](dart::dynamics::JacobianNode *self) -> const std::shared_ptr<dart::dynamics::InverseKinematics> & { return self->getOrCreateIK(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics12JacobianNode13getOrCreateIKEv_docstring)
.def("getIK", [](const dart::dynamics::JacobianNode *self) -> std::shared_ptr<const dart::dynamics::InverseKinematics> { return self->getIK(); }, _ZNK4dart8dynamics12JacobianNode5getIKEv_docstring)
.def("createIK", [](dart::dynamics::JacobianNode *self) -> const std::shared_ptr<dart::dynamics::InverseKinematics> & { return self->createIK(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics12JacobianNode8createIKEv_docstring)
.def("clearIK", [](dart::dynamics::JacobianNode *self) -> void { return self->clearIK(); }, _ZN4dart8dynamics12JacobianNode7clearIKEv_docstring)
.def("setName", [](dart::dynamics::JacobianNode *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics12JacobianNode7setNameERKSs_docstring, (::boost::python::arg("_name")))
.def("getName", [](const dart::dynamics::JacobianNode *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12JacobianNode7getNameEv_docstring)
.def("dependsOn", [](const dart::dynamics::JacobianNode *self, std::size_t _genCoordIndex) -> bool { return self->dependsOn(_genCoordIndex); }, _ZNK4dart8dynamics12JacobianNode9dependsOnEm_docstring, (::boost::python::arg("_genCoordIndex")))
.def("getNumDependentGenCoords", [](const dart::dynamics::JacobianNode *self) -> std::size_t { return self->getNumDependentGenCoords(); }, _ZNK4dart8dynamics12JacobianNode24getNumDependentGenCoordsEv_docstring)
.def("getDependentGenCoordIndex", [](const dart::dynamics::JacobianNode *self, std::size_t _arrayIndex) -> std::size_t { return self->getDependentGenCoordIndex(_arrayIndex); }, _ZNK4dart8dynamics12JacobianNode25getDependentGenCoordIndexEm_docstring, (::boost::python::arg("_arrayIndex")))
.def("getDependentGenCoordIndices", [](const dart::dynamics::JacobianNode *self) -> const std::vector<std::size_t> & { return self->getDependentGenCoordIndices(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12JacobianNode27getDependentGenCoordIndicesEv_docstring)
.def("getNumDependentDofs", [](const dart::dynamics::JacobianNode *self) -> std::size_t { return self->getNumDependentDofs(); }, _ZNK4dart8dynamics12JacobianNode19getNumDependentDofsEv_docstring)
.def("getDependentDof", [](dart::dynamics::JacobianNode *self, std::size_t _index) -> dart::dynamics::DegreeOfFreedom * { return self->getDependentDof(_index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), _ZN4dart8dynamics12JacobianNode15getDependentDofEm_docstring, (::boost::python::arg("_index")))
.def("getDependentDofs", [](dart::dynamics::JacobianNode *self) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getDependentDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics12JacobianNode16getDependentDofsEv_docstring)
.def("getChainDofs", [](const dart::dynamics::JacobianNode *self) -> const std::vector<const dart::dynamics::DegreeOfFreedom *> { return self->getChainDofs(); }, _ZNK4dart8dynamics12JacobianNode12getChainDofsEv_docstring)
.def("getJacobian", [](const dart::dynamics::JacobianNode *self) -> const dart::math::Jacobian & { return self->getJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12JacobianNode11getJacobianEv_docstring)
.def("getJacobian", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode11getJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobian(_offset); }, _ZNK4dart8dynamics12JacobianNode11getJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_offset")))
.def("getJacobian", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_offset, _inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode11getJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", [](const dart::dynamics::JacobianNode *self) -> const dart::math::Jacobian & { return self->getWorldJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12JacobianNode16getWorldJacobianEv_docstring)
.def("getWorldJacobian", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getWorldJacobian(_offset); }, _ZNK4dart8dynamics12JacobianNode16getWorldJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_offset")))
.def("getLinearJacobian", [](const dart::dynamics::JacobianNode *self) -> dart::math::LinearJacobian { return self->getLinearJacobian(); }, _ZNK4dart8dynamics12JacobianNode17getLinearJacobianEPKNS0_5FrameE_docstring)
.def("getLinearJacobian", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode17getLinearJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::LinearJacobian { return self->getLinearJacobian(_offset); }, _ZNK4dart8dynamics12JacobianNode17getLinearJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset")))
.def("getLinearJacobian", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_offset, _inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode17getLinearJacobianERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", [](const dart::dynamics::JacobianNode *self) -> dart::math::AngularJacobian { return self->getAngularJacobian(); }, _ZNK4dart8dynamics12JacobianNode18getAngularJacobianEPKNS0_5FrameE_docstring)
.def("getAngularJacobian", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode18getAngularJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::JacobianNode *self) -> const dart::math::Jacobian & { return self->getJacobianSpatialDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12JacobianNode23getJacobianSpatialDerivEv_docstring)
.def("getJacobianSpatialDeriv", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode23getJacobianSpatialDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_offset); }, _ZNK4dart8dynamics12JacobianNode23getJacobianSpatialDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_offset")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_offset, _inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode23getJacobianSpatialDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::JacobianNode *self) -> const dart::math::Jacobian & { return self->getJacobianClassicDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12JacobianNode23getJacobianClassicDerivEv_docstring)
.def("getJacobianClassicDeriv", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode23getJacobianClassicDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_offset); }, _ZNK4dart8dynamics12JacobianNode23getJacobianClassicDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_offset, _inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode23getJacobianClassicDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::JacobianNode *self) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(); }, _ZNK4dart8dynamics12JacobianNode22getLinearJacobianDerivEPKNS0_5FrameE_docstring)
.def("getLinearJacobianDeriv", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode22getLinearJacobianDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_offset); }, _ZNK4dart8dynamics12JacobianNode22getLinearJacobianDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::JacobianNode *self, const Eigen::Vector3d & _offset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_offset, _inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode22getLinearJacobianDerivERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::JacobianNode *self) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(); }, _ZNK4dart8dynamics12JacobianNode23getAngularJacobianDerivEPKNS0_5FrameE_docstring)
.def("getAngularJacobianDeriv", [](const dart::dynamics::JacobianNode *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics12JacobianNode23getAngularJacobianDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("notifyJacobianUpdate", [](dart::dynamics::JacobianNode *self) -> void { return self->notifyJacobianUpdate(); }, _ZN4dart8dynamics12JacobianNode20notifyJacobianUpdateEv_docstring)
.def("notifyJacobianDerivUpdate", [](dart::dynamics::JacobianNode *self) -> void { return self->notifyJacobianDerivUpdate(); }, _ZN4dart8dynamics12JacobianNode25notifyJacobianDerivUpdateEv_docstring)
;
}

/* footer */
