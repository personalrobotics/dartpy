#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics19ReferentialSkeletonE_docstring[] = R"CHIMERA_STRING( ReferentialSkeleton is a base class used to implement Linkage, Group, and
 other classes that are used to reference subsections of Skeletons.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics19ReferentialSkeleton7setNameERKSs_docstring[] = R"CHIMERA_STRING( 
\
{ 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton7getNameEv_docstring[] = R"CHIMERA_STRING( Get the name of this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton15getNumBodyNodesEv_docstring[] = R"CHIMERA_STRING( 
\
{ 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics19ReferentialSkeleton11getBodyNodeEm_docstring[] = R"CHIMERA_STRING( Get BodyNode whose index is _idx
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics19ReferentialSkeleton12getBodyNodesEv_docstring[] = R"CHIMERA_STRING( Get all the BodyNodes that are held by this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton10getIndexOfEPKNS0_8BodyNodeEb_docstring[] = R"CHIMERA_STRING( Get the index of a specific BodyNode within this ReferentialSkeleton.
 Returns INVALID_INDEX if it is not held in this ReferentialSkeleton.
 When _warning is true, a warning message will be printed if the BodyNode
 is not in the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton12getNumJointsEv_docstring[] = R"CHIMERA_STRING( Get number of Joints
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics19ReferentialSkeleton8getJointEm_docstring[] = R"CHIMERA_STRING( Get Joint whose index is _idx
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton10getIndexOfEPKNS0_5JointEb_docstring[] = R"CHIMERA_STRING( Get the index of a specific Joint within this ReferentialSkeleton. Returns
 INVALID_INDEX if it is not held in this ReferentialSkeleton.
 When _warning is true, a warning message will be printed if the Joint is
 not in the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton10getNumDofsEv_docstring[] = R"CHIMERA_STRING( Return the number of degrees of freedom in this skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics19ReferentialSkeleton6getDofEm_docstring[] = R"CHIMERA_STRING( Get degree of freedom (aka generalized coordinate) whose index is _idx
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics19ReferentialSkeleton7getDofsEv_docstring[] = R"CHIMERA_STRING( Get the vector of DegreesOfFreedom for this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton7getDofsEv_docstring[] = R"CHIMERA_STRING( Get a vector of const DegreesOfFreedom for this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton10getIndexOfEPKNS0_15DegreeOfFreedomEb_docstring[] = R"CHIMERA_STRING( Get the index of a specific DegreeOfFreedom within this
 ReferentialSkeleton. Returns INVALID_INDEX if it is not held in this
 ReferentialSkeleton. When _warning is true, a warning message will be
 printed if the DegreeOfFreedom is not in the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton11getJacobianEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( 
\
{ 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton11getJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting the origin of a BodyNode. You can
 specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. The Jacobian is expressed
 in the Frame of the BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. You can specify a
 coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton16getWorldJacobianEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting the origin of a BodyNode. The Jacobian
 is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton16getWorldJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. The Jacobian is expressed
 in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton17getLinearJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian targeting the origin of a BodyNode. You can
 specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton17getLinearJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. You can specify a
 coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton18getAngularJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the angular Jacobian of a BodyNode. You can specify a coordinate Frame
 to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin of a
 BodyNode. The Jacobian is expressed in the Frame of the BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin of a
 BodyNode. You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting an offset in a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 The Jacobian is expressed in the Frame of the BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting an offset in a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin of a
 BodyNode. The Jacobian is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting an offset in a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian (classical) time derivative targeting the origin
 of a BodyNode. The _offset is expected in coordinates of the BodyNode
 Frame. You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian (classical) time derivative targeting an offset in
 a BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton23getAngularJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the angular Jacobian time derivative of a BodyNode. You can specify a
 coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton7getMassEv_docstring[] = R"CHIMERA_STRING( Get the total mass of all BodyNodes in this ReferentialSkeleton. For
 ReferentialSkeleton::getMass(), the total mass is computed upon request,
 so this is a linear-time O(N) operation. The Skeleton::getMass() version,
 however, is constant-time.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton13getMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get the Mass Matrix of the MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton16getAugMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get augmented mass matrix of the skeleton. This matrix is used in
 ConstraintDynamics to compute constraint forces. The matrix is
 M + h*D + h*h*K where D is diagonal joint damping coefficient matrix, K is
 diagonal joint stiffness matrix, and h is simulation time step.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton16getInvMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get inverse of Mass Matrix of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton19getInvAugMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get inverse of augmented Mass Matrix of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton17getCoriolisForcesEv_docstring[] = R"CHIMERA_STRING( Get Coriolis force vector of the MetaSkeleton's BodyNodes.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton16getGravityForcesEv_docstring[] = R"CHIMERA_STRING( Get gravity force vector of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton27getCoriolisAndGravityForcesEv_docstring[] = R"CHIMERA_STRING( Get combined vector of Coriolis force and gravity force of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton17getExternalForcesEv_docstring[] = R"CHIMERA_STRING( Get external force vector of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton19getConstraintForcesEv_docstring[] = R"CHIMERA_STRING( Get constraint force vector.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics19ReferentialSkeleton19clearExternalForcesEv_docstring[] = R"CHIMERA_STRING( Clear the external forces of the BodyNodes in this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics19ReferentialSkeleton19clearInternalForcesEv_docstring[] = R"CHIMERA_STRING( Clear the internal forces of the BodyNodes in this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton16getKineticEnergyEv_docstring[] = R"CHIMERA_STRING( Get the kinetic energy of this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton18getPotentialEnergyEv_docstring[] = R"CHIMERA_STRING( Get the potential energy of this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton6getCOMEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( 
\
{ 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM spatial velocity in terms of any Frame (default is
 World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM linear velocity in terms of any Frame (default is
 World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM spatial acceleration in terms of any Frame (default
 is World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the MetaSkeleton's COM linear acceleration in terms of any Frame
 (default is World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton14getCOMJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the MetaSkeleton's COM Jacobian in terms of any Frame (default is
 World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton20getCOMLinearJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the MetaSkeleton's COM Linear Jacobian in terms of any Frame (default is
 World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton26getCOMJacobianSpatialDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM Jacobian spatial time derivative in terms of any
 Frame (default is World Frame).
 NOTE: Since this is a spatial time derivative, it is only meant to be used
 with spatial acceleration vectors. If you are using classical linear
 vectors, then use getCOMLinearJacobianDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics19ReferentialSkeleton25getCOMLinearJacobianDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM Linear Jacobian time derivative in terms of any
 Frame (default is World Frame).
 NOTE: Since this is a classical time derivative, it is only meant to be
 used with classical acceleration vectors. If you are using spatial
 vectors, then use getCOMJacobianSpatialDeriv() instead.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics19ReferentialSkeletonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ReferentialSkeleton, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::MetaSkeleton > >("ReferentialSkeleton", _ZN4dart8dynamics19ReferentialSkeletonE_docstring, boost::python::no_init)
.def("setName", [](dart::dynamics::ReferentialSkeleton *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics19ReferentialSkeleton7setNameERKSs_docstring, (::boost::python::arg("_name")))
.def("getName", [](const dart::dynamics::ReferentialSkeleton *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics19ReferentialSkeleton7getNameEv_docstring)
.def("getNumBodyNodes", [](const dart::dynamics::ReferentialSkeleton *self) -> std::size_t { return self->getNumBodyNodes(); }, _ZNK4dart8dynamics19ReferentialSkeleton15getNumBodyNodesEv_docstring)
.def("getBodyNode", [](dart::dynamics::ReferentialSkeleton *self, std::size_t _idx) -> dart::dynamics::BodyNode * { return self->getBodyNode(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics19ReferentialSkeleton11getBodyNodeEm_docstring, (::boost::python::arg("_idx")))
.def("getBodyNodes", [](dart::dynamics::ReferentialSkeleton *self) -> const std::vector<dart::dynamics::BodyNode *> & { return self->getBodyNodes(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics19ReferentialSkeleton12getBodyNodesEv_docstring)
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::BodyNode * _bn) -> std::size_t { return self->getIndexOf(_bn); }, _ZNK4dart8dynamics19ReferentialSkeleton10getIndexOfEPKNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn")))
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::BodyNode * _bn, bool _warning) -> std::size_t { return self->getIndexOf(_bn, _warning); }, _ZNK4dart8dynamics19ReferentialSkeleton10getIndexOfEPKNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("getNumJoints", [](const dart::dynamics::ReferentialSkeleton *self) -> std::size_t { return self->getNumJoints(); }, _ZNK4dart8dynamics19ReferentialSkeleton12getNumJointsEv_docstring)
.def("getJoint", [](dart::dynamics::ReferentialSkeleton *self, std::size_t _idx) -> dart::dynamics::Joint * { return self->getJoint(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), _ZN4dart8dynamics19ReferentialSkeleton8getJointEm_docstring, (::boost::python::arg("_idx")))
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Joint * _joint) -> std::size_t { return self->getIndexOf(_joint); }, _ZNK4dart8dynamics19ReferentialSkeleton10getIndexOfEPKNS0_5JointEb_docstring, (::boost::python::arg("_joint")))
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Joint * _joint, bool _warning) -> std::size_t { return self->getIndexOf(_joint, _warning); }, _ZNK4dart8dynamics19ReferentialSkeleton10getIndexOfEPKNS0_5JointEb_docstring, (::boost::python::arg("_joint"), ::boost::python::arg("_warning")))
.def("getNumDofs", [](const dart::dynamics::ReferentialSkeleton *self) -> std::size_t { return self->getNumDofs(); }, _ZNK4dart8dynamics19ReferentialSkeleton10getNumDofsEv_docstring)
.def("getDof", [](dart::dynamics::ReferentialSkeleton *self, std::size_t _idx) -> dart::dynamics::DegreeOfFreedom * { return self->getDof(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), _ZN4dart8dynamics19ReferentialSkeleton6getDofEm_docstring, (::boost::python::arg("_idx")))
.def("getDofs", [](dart::dynamics::ReferentialSkeleton *self) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics19ReferentialSkeleton7getDofsEv_docstring)
.def("getDofs", [](const dart::dynamics::ReferentialSkeleton *self) -> std::vector<const dart::dynamics::DegreeOfFreedom *> { return self->getDofs(); }, _ZNK4dart8dynamics19ReferentialSkeleton7getDofsEv_docstring)
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::DegreeOfFreedom * _dof) -> std::size_t { return self->getIndexOf(_dof); }, _ZNK4dart8dynamics19ReferentialSkeleton10getIndexOfEPKNS0_15DegreeOfFreedomEb_docstring, (::boost::python::arg("_dof")))
.def("getIndexOf", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::DegreeOfFreedom * _dof, bool _warning) -> std::size_t { return self->getIndexOf(_dof, _warning); }, _ZNK4dart8dynamics19ReferentialSkeleton10getIndexOfEPKNS0_15DegreeOfFreedomEb_docstring, (::boost::python::arg("_dof"), ::boost::python::arg("_warning")))
.def("getJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobian(_node); }, _ZNK4dart8dynamics19ReferentialSkeleton11getJacobianEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton11getJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobian(_node, _localOffset); }, _ZNK4dart8dynamics19ReferentialSkeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getWorldJacobian(_node); }, _ZNK4dart8dynamics19ReferentialSkeleton16getWorldJacobianEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getWorldJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getWorldJacobian(_node, _localOffset); }, _ZNK4dart8dynamics19ReferentialSkeleton16getWorldJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node); }, _ZNK4dart8dynamics19ReferentialSkeleton17getLinearJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton17getLinearJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _localOffset); }, _ZNK4dart8dynamics19ReferentialSkeleton17getLinearJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton17getLinearJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::AngularJacobian { return self->getAngularJacobian(_node); }, _ZNK4dart8dynamics19ReferentialSkeleton18getAngularJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getAngularJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobian(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton18getAngularJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node); }, _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _localOffset); }, _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node); }, _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _localOffset); }, _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node); }, _ZNK4dart8dynamics19ReferentialSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _localOffset); }, _ZNK4dart8dynamics19ReferentialSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_node); }, _ZNK4dart8dynamics19ReferentialSkeleton23getAngularJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton23getAngularJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getMass", [](const dart::dynamics::ReferentialSkeleton *self) -> double { return self->getMass(); }, _ZNK4dart8dynamics19ReferentialSkeleton7getMassEv_docstring)
.def("getMassMatrix", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::MatrixXd & { return self->getMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics19ReferentialSkeleton13getMassMatrixEv_docstring)
.def("getAugMassMatrix", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::MatrixXd & { return self->getAugMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics19ReferentialSkeleton16getAugMassMatrixEv_docstring)
.def("getInvMassMatrix", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::MatrixXd & { return self->getInvMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics19ReferentialSkeleton16getInvMassMatrixEv_docstring)
.def("getInvAugMassMatrix", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::MatrixXd & { return self->getInvAugMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics19ReferentialSkeleton19getInvAugMassMatrixEv_docstring)
.def("getCoriolisForces", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::VectorXd & { return self->getCoriolisForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics19ReferentialSkeleton17getCoriolisForcesEv_docstring)
.def("getGravityForces", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::VectorXd & { return self->getGravityForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics19ReferentialSkeleton16getGravityForcesEv_docstring)
.def("getCoriolisAndGravityForces", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::VectorXd & { return self->getCoriolisAndGravityForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics19ReferentialSkeleton27getCoriolisAndGravityForcesEv_docstring)
.def("getExternalForces", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::VectorXd & { return self->getExternalForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics19ReferentialSkeleton17getExternalForcesEv_docstring)
.def("getConstraintForces", [](const dart::dynamics::ReferentialSkeleton *self) -> const Eigen::VectorXd & { return self->getConstraintForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics19ReferentialSkeleton19getConstraintForcesEv_docstring)
.def("clearExternalForces", [](dart::dynamics::ReferentialSkeleton *self) -> void { return self->clearExternalForces(); }, _ZN4dart8dynamics19ReferentialSkeleton19clearExternalForcesEv_docstring)
.def("clearInternalForces", [](dart::dynamics::ReferentialSkeleton *self) -> void { return self->clearInternalForces(); }, _ZN4dart8dynamics19ReferentialSkeleton19clearInternalForcesEv_docstring)
.def("getKineticEnergy", [](const dart::dynamics::ReferentialSkeleton *self) -> double { return self->getKineticEnergy(); }, _ZNK4dart8dynamics19ReferentialSkeleton16getKineticEnergyEv_docstring)
.def("getPotentialEnergy", [](const dart::dynamics::ReferentialSkeleton *self) -> double { return self->getPotentialEnergy(); }, _ZNK4dart8dynamics19ReferentialSkeleton18getPotentialEnergyEv_docstring)
.def("getCOM", [](const dart::dynamics::ReferentialSkeleton *self) -> Eigen::Vector3d { return self->getCOM(); }, _ZNK4dart8dynamics19ReferentialSkeleton6getCOMEPKNS0_5FrameE_docstring)
.def("getCOM", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _withRespectTo) -> Eigen::Vector3d { return self->getCOM(_withRespectTo); }, _ZNK4dart8dynamics19ReferentialSkeleton6getCOMEPKNS0_5FrameE_docstring, (::boost::python::arg("_withRespectTo")))
.def("getCOMSpatialVelocity", [](const dart::dynamics::ReferentialSkeleton *self) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(); }, _ZNK4dart8dynamics19ReferentialSkeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring)
.def("getCOMSpatialVelocity", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(_relativeTo); }, _ZNK4dart8dynamics19ReferentialSkeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMSpatialVelocity", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearVelocity", [](const dart::dynamics::ReferentialSkeleton *self) -> Eigen::Vector3d { return self->getCOMLinearVelocity(); }, _ZNK4dart8dynamics19ReferentialSkeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring)
.def("getCOMLinearVelocity", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo); }, _ZNK4dart8dynamics19ReferentialSkeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearVelocity", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMSpatialAcceleration", [](const dart::dynamics::ReferentialSkeleton *self) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(); }, _ZNK4dart8dynamics19ReferentialSkeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring)
.def("getCOMSpatialAcceleration", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(_relativeTo); }, _ZNK4dart8dynamics19ReferentialSkeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMSpatialAcceleration", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::ReferentialSkeleton *self) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(); }, _ZNK4dart8dynamics19ReferentialSkeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring)
.def("getCOMLinearAcceleration", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo); }, _ZNK4dart8dynamics19ReferentialSkeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMJacobian", [](const dart::dynamics::ReferentialSkeleton *self) -> dart::math::Jacobian { return self->getCOMJacobian(); }, _ZNK4dart8dynamics19ReferentialSkeleton14getCOMJacobianEPKNS0_5FrameE_docstring)
.def("getCOMJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getCOMJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton14getCOMJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self) -> dart::math::LinearJacobian { return self->getCOMLinearJacobian(); }, _ZNK4dart8dynamics19ReferentialSkeleton20getCOMLinearJacobianEPKNS0_5FrameE_docstring)
.def("getCOMLinearJacobian", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getCOMLinearJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton20getCOMLinearJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self) -> dart::math::Jacobian { return self->getCOMJacobianSpatialDeriv(); }, _ZNK4dart8dynamics19ReferentialSkeleton26getCOMJacobianSpatialDerivEPKNS0_5FrameE_docstring)
.def("getCOMJacobianSpatialDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getCOMJacobianSpatialDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton26getCOMJacobianSpatialDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self) -> dart::math::LinearJacobian { return self->getCOMLinearJacobianDeriv(); }, _ZNK4dart8dynamics19ReferentialSkeleton25getCOMLinearJacobianDerivEPKNS0_5FrameE_docstring)
.def("getCOMLinearJacobianDeriv", [](const dart::dynamics::ReferentialSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getCOMLinearJacobianDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics19ReferentialSkeleton25getCOMLinearJacobianDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
;
}

/* footer */
