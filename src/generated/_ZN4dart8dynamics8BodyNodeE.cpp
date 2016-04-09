#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics8BodyNodeE_docstring[] = R"CHIMERA_STRING( BodyNode class represents a single node of the skeleton.
 BodyNode is a basic element of the skeleton. BodyNodes are hierarchically
 connected and have a set of core functions for calculating derivatives.
 BodyNode inherits Frame, and a parent Frame of a BodyNode is the parent
 BodyNode of the BodyNode.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode13setPropertiesERKNS0_6detail26BodyNodeExtendedPropertiesE_docstring[] = R"CHIMERA_STRING( Set the ExtendedProperties of this BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode13setPropertiesERKNS_6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS2_16ExtensibleVectorIS6_INS0_4Node10PropertiesESt14default_deleteIS9_EEEESA_ISD_EESt4lessIS5_ESaISt4pairIKS5_SF_EEEEE_docstring[] = R"CHIMERA_STRING( Set the Properties of the attached Nodes
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode13setPropertiesERKNS_6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS2_5Addon10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEEEE_docstring[] = R"CHIMERA_STRING( Same as setAddonProperties()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode13setPropertiesERKNS0_6detail18BodyNodePropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode13setPropertiesERKNS0_6detail24BodyNodeUniquePropertiesE_docstring[] = R"CHIMERA_STRING( Set the UniqueProperties of this BodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode21getBodyNodePropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this BodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode25getAttachedNodePropertiesEv_docstring[] = R"CHIMERA_STRING( Get the the Properties of the Nodes attached to this BodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode21getExtendedPropertiesEv_docstring[] = R"CHIMERA_STRING( The the full extended Properties of this BodyNode, including the
 Properties of its Addons, its attached Nodes, and the BodyNode itself.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode14duplicateNodesEPKS1__docstring[] = R"CHIMERA_STRING( Give this BodyNode a copy of each Node from otherBodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode10matchNodesEPKS1__docstring[] = R"CHIMERA_STRING( Make the Nodes of this BodyNode match the Nodes of otherBodyNode. All
 existing Nodes in this BodyNode will be removed.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode7setNameERKSs_docstring[] = R"CHIMERA_STRING( Set name. If the name is already taken, this will return an altered
 version which will be used by the Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode14setGravityModeEb_docstring[] = R"CHIMERA_STRING( Set whether gravity affects this body
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode14getGravityModeEv_docstring[] = R"CHIMERA_STRING( Return true if gravity mode is enabled
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode12isCollidableEv_docstring[] = R"CHIMERA_STRING( Return true if this body can collide with others bodies
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode13setCollidableEb_docstring[] = R"CHIMERA_STRING( Set whether this body node will collide with others in the world
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode7setMassEd_docstring[] = R"CHIMERA_STRING( Set the mass of the bodynode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode7getMassEv_docstring[] = R"CHIMERA_STRING( Return the mass of the bodynode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode18setMomentOfInertiaEdddddd_docstring[] = R"CHIMERA_STRING( Set moment of inertia defined around the center of mass
 Principal moments of inertia (_Ixx, _Iyy, _Izz) must be positive or zero
 values.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode18getMomentOfInertiaERdS2_S2_S2_S2_S2__docstring[] = R"CHIMERA_STRING( Return moment of inertia defined around the center of mass
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode17getSpatialInertiaEv_docstring[] = R"CHIMERA_STRING( Return spatial inertia
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode10setInertiaERKNS0_7InertiaE_docstring[] = R"CHIMERA_STRING( Set the inertia data for this BodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode10getInertiaEv_docstring[] = R"CHIMERA_STRING( Get the inertia data for this BodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode21getArticulatedInertiaEv_docstring[] = R"CHIMERA_STRING( Return the articulated body inertia
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode29getArticulatedInertiaImplicitEv_docstring[] = R"CHIMERA_STRING( Return the articulated body inertia for implicit joint damping and spring
 forces
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode11setLocalCOMERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set center of mass expressed in body frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode11getLocalCOMEv_docstring[] = R"CHIMERA_STRING( Return center of mass expressed in body frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode6getCOMEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Return the center of mass with respect to an arbitrary Frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode20getCOMLinearVelocityEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Return the linear velocity of the center of mass, expressed in terms of
 arbitrary Frames
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode21getCOMSpatialVelocityEv_docstring[] = R"CHIMERA_STRING( Return the spatial velocity of the center of mass, expressed in
 coordinates of this Frame and relative to the World Frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Return the spatial velocity of the center of mass, expressed in terms of
 arbitrary Frames
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Return the linear acceleration of the center of mass, expressed in terms
 of arbitary Frames
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode25getCOMSpatialAccelerationEv_docstring[] = R"CHIMERA_STRING( Return the acceleration of the center of mass expressed in coordinates of
 this BodyNode Frame and relative to the World Frame
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Return the spatial acceleration of the center of mass, expressed in terms
 of arbitrary Frames
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode16setFrictionCoeffEd_docstring[] = R"CHIMERA_STRING( Set coefficient of friction in range of [0, ~]
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode16getFrictionCoeffEv_docstring[] = R"CHIMERA_STRING( Return frictional coefficient.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode19setRestitutionCoeffEd_docstring[] = R"CHIMERA_STRING( Set coefficient of restitution in range of [0, 1]
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode19getRestitutionCoeffEv_docstring[] = R"CHIMERA_STRING( Return coefficient of restitution
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode18getIndexInSkeletonEv_docstring[] = R"CHIMERA_STRING( Return the index of this BodyNode within its Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode14getIndexInTreeEv_docstring[] = R"CHIMERA_STRING( Return the index of this BodyNode within its tree
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode12getTreeIndexEv_docstring[] = R"CHIMERA_STRING( Return the index of the tree that this BodyNode belongs to
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode6removeERKSs_docstring[] = R"CHIMERA_STRING( Remove this BodyNode and all of its children (recursively) from their
 Skeleton. If a BodyNodePtr that references this BodyNode (or any of its
 children) still exists, the subtree will be moved into a new Skeleton
 with the given name. If the returned SkeletonPtr goes unused and no
 relevant BodyNodePtrs are held anywhere, then this BodyNode and all its
 children will be deleted.
 Note that this function is actually the same as split(), but given a
 different name for semantic reasons.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode6moveToEPS1__docstring[] = R"CHIMERA_STRING( Remove this BodyNode and all of its children (recursively) from their
 current parent BodyNode, and move them to another parent BodyNode. The new
 parent BodyNode can either be in a new Skeleton or the current one. If you
 pass in a nullptr, this BodyNode will become a new root BodyNode for its
 current Skeleton.
 Using this function will result in changes to the indexing of
 (potentially) all BodyNodes and Joints in the current Skeleton, even if
 the BodyNodes are kept within the same Skeleton.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode6moveToERKSt10shared_ptrINS0_8SkeletonEEPS1__docstring[] = R"CHIMERA_STRING( This is a version of moveTo(BodyNode*) that allows you to explicitly move
 this BodyNode into a different Skeleton. The key difference for this
 version of the function is that you can make this BodyNode a root node in
 a different Skeleton, which is not something that can be done by the other
 version.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode5splitERKSs_docstring[] = R"CHIMERA_STRING( Remove this BodyNode and all of its children (recursively) from their
 current Skeleton and move them into a newly created Skeleton. The newly
 created Skeleton will have the same Skeleton::Properties as the current
 Skeleton, except it will use the specified name. The return value is a
 shared_ptr to the newly created Skeleton.
 Note that the parent Joint of this BodyNode will remain the same. If you
 want to change the Joint type of this BodyNode's parent Joint (for
 example, make it a FreeJoint), then use the templated split
<JointType
>()
 function.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode6copyToEPS1_b_docstring[] = R"CHIMERA_STRING( Create clones of this BodyNode and all of its children recursively (unless
 _recursive is set to false) and attach the clones to the specified
 BodyNode. The specified BodyNode can be in this Skeleton or a different
 Skeleton. Passing in nullptr will set the copy as a root node of the
 current Skeleton.
 The return value is a pair of pointers to the root of the newly created
 BodyNode tree.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode6copyToERKSt10shared_ptrINS0_8SkeletonEEPS1_b_docstring[] = R"CHIMERA_STRING( Create clones of this BodyNode and all of its children recursively (unless
 recursive is set to false) and attach the clones to the specified BodyNode
 of the specified Skeleton.
 The key differences between this function and the copyTo(BodyNode*)
 version is that this one allows the copied BodyNode to be const and allows
 you to copy it as a root node of another Skeleton.
 The return value is a pair of pointers to the root of the newly created
 BodyNode tree.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode6copyAsERKSsb_docstring[] = R"CHIMERA_STRING( Create clones of this BodyNode and all of its children (recursively) and
 create a new Skeleton with the specified name to attach them to. The
 Skeleton::Properties of the current Skeleton will also be copied into the
 new Skeleton that gets created.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode11getSkeletonEv_docstring[] = R"CHIMERA_STRING( Return the Skeleton that this Node is attached to
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode14getParentJointEv_docstring[] = R"CHIMERA_STRING( Return the parent Joint of this BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode17getParentBodyNodeEv_docstring[] = R"CHIMERA_STRING( Return the parent BodyNdoe of this BodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode20getNumChildBodyNodesEv_docstring[] = R"CHIMERA_STRING( Return the number of child BodyNodes
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode16getChildBodyNodeEm_docstring[] = R"CHIMERA_STRING( Return the _index-th child BodyNode of this BodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode17getNumChildJointsEv_docstring[] = R"CHIMERA_STRING( Return the number of child Joints
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode13getChildJointEm_docstring[] = R"CHIMERA_STRING( Return the _index-th child Joint of this BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode15createShapeNodeERKSt10shared_ptrINS0_5ShapeEE_docstring[] = R"CHIMERA_STRING( Create a ShapeNode with an automatically assigned name:
 
<BodyNodeName
>_ShapeNode_
<
#>.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode15createShapeNodeERKSt10shared_ptrINS0_5ShapeEERKSs_docstring[] = R"CHIMERA_STRING( Create an ShapeNode with the specified name
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode15createShapeNodeERKSt10shared_ptrINS0_5ShapeEEPKc_docstring[] = R"CHIMERA_STRING( Create an ShapeNode with the specified name
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode16getNumShapeNodesEv_docstring[] = R"CHIMERA_STRING( Return the number of all the ShapeNodes in this BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode12getShapeNodeEm_docstring[] = R"CHIMERA_STRING( Return the index-th ShapeNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode13getShapeNodesEv_docstring[] = R"CHIMERA_STRING( Return the list of ShapeNodes
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode13getShapeNodesEv_docstring[] = R"CHIMERA_STRING( Return the list of (const) ShapeNodes
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode19removeAllShapeNodesEv_docstring[] = R"CHIMERA_STRING( Remove all ShapeNodes from this BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode17createEndEffectorERKSs_docstring[] = R"CHIMERA_STRING( Create an EndEffector with the specified name
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode17createEndEffectorEPKc_docstring[] = R"CHIMERA_STRING( Create an EndEffector with the specified name
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode9addMarkerEPNS0_6MarkerE_docstring[] = R"CHIMERA_STRING( Add a marker into the bodynode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode13getNumMarkersEv_docstring[] = R"CHIMERA_STRING( Return the number of markers of the bodynode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode9getMarkerEm_docstring[] = R"CHIMERA_STRING( Return _index-th marker of the bodynode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode9dependsOnEm_docstring[] = R"CHIMERA_STRING( Return true if _genCoordIndex-th generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode24getNumDependentGenCoordsEv_docstring[] = R"CHIMERA_STRING( The number of the generalized coordinates which affect this JacobianNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode25getDependentGenCoordIndexEm_docstring[] = R"CHIMERA_STRING( Return a generalized coordinate index from the array index
 (
<
 getNumDependentDofs)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode27getDependentGenCoordIndicesEv_docstring[] = R"CHIMERA_STRING( Indices of the generalized coordinates which affect this JacobianNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode19getNumDependentDofsEv_docstring[] = R"CHIMERA_STRING( Same as getNumDependentGenCoords()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode15getDependentDofEm_docstring[] = R"CHIMERA_STRING( Get a pointer to the _indexth dependent DegreeOfFreedom for this BodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode16getDependentDofsEv_docstring[] = R"CHIMERA_STRING( Return a std::vector of DegreeOfFreedom pointers that this Node depends on
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode12getChainDofsEv_docstring[] = R"CHIMERA_STRING( Returns a DegreeOfFreedom vector containing the dofs that form a Chain
 leading up to this JacobianNode from the root of the Skeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode20getRelativeTransformEv_docstring[] = R"CHIMERA_STRING( Get the transform of this BodyNode with respect to its parent BodyNode,
 which is also its parent Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode26getRelativeSpatialVelocityEv_docstring[] = R"CHIMERA_STRING( Get the spatial velocity of this Frame relative to its parent Frame, in
 its own coordinates.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode30getRelativeSpatialAccelerationEv_docstring[] = R"CHIMERA_STRING( Get the spatial acceleration of this Frame relative to its parent Frame,
 in the coordinates of this Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode30getPrimaryRelativeAccelerationEv_docstring[] = R"CHIMERA_STRING( The Featherstone ABI algorithm exploits a component of the spatial
 acceleration which we refer to as the partial acceleration, accessible
 by getPartialAcceleration(). We save operations during our forward
 kinematics by computing and storing the partial acceleration separately
 from the rest of the Frame's acceleration. getPrimaryRelativeAcceleration()
 will return the portion of the relative spatial acceleration that is not
 contained in the partial acceleration. To get the full spatial
 acceleration of this Frame relative to its parent Frame, use
 getRelativeSpatialAcceleration(). To get the full spatial acceleration
 of this Frame relative to the World Frame, use getSpatialAcceleration().
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode22getPartialAccelerationEv_docstring[] = R"CHIMERA_STRING( Return the partial acceleration of this body
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode11getJacobianEv_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting the origin of this BodyNode. The
 Jacobian is expressed in the Frame of this BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode16getWorldJacobianEv_docstring[] = R"CHIMERA_STRING( Return the generalized Jacobian targeting the origin of this BodyNode. The
 Jacobian is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode23getJacobianSpatialDerivEv_docstring[] = R"CHIMERA_STRING( Return the spatial time derivative of the generalized Jacobian targeting
 the origin of this BodyNode. The Jacobian is expressed in this BodyNode's
 coordinate Frame.
 NOTE: Since this is a spatial time derivative, it should be used with
 spatial vectors. If you are using classical linear and angular
 acceleration vectors, then use getJacobianClassicDeriv(),
 getLinearJacobianDeriv(), or getAngularJacobianDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode23getJacobianClassicDerivEv_docstring[] = R"CHIMERA_STRING( Return the classical time derivative of the generalized Jacobian targeting
 the origin of this BodyNode. The Jacobian is expressed in the World
 coordinate Frame.
 NOTE: Since this is a classical time derivative, it should be used with
 classical linear and angular vectors. If you are using spatial vectors,
 use getJacobianSpatialDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode21getBodyVelocityChangeEv_docstring[] = R"CHIMERA_STRING( Return the velocity change due to the constraint impulse
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode12setCollidingEb_docstring[] = R"CHIMERA_STRING( Set whether this body node is colliding with others. This is called by
 collision detector.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode11isCollidingEv_docstring[] = R"CHIMERA_STRING( Return whether this body node is colliding with others
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode11addExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring[] = R"CHIMERA_STRING( Add applying linear Cartesian forces to this node
 A force is defined by a point of application and a force vector. The
 last two parameters specify frames of the first two parameters.
 Coordinate transformations are applied when needed. The point of
 application and the force in local coordinates are stored in mContacts.
 When conversion is needed, make sure the transformations are avaialble.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode11setExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring[] = R"CHIMERA_STRING( Set Applying linear Cartesian forces to this node.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode12addExtTorqueERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring[] = R"CHIMERA_STRING( Add applying Cartesian torque to the node.
 The torque in local coordinates is accumulated in mExtTorqueBody.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode12setExtTorqueERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring[] = R"CHIMERA_STRING( Set applying Cartesian torque to the node.
 The torque in local coordinates is accumulated in mExtTorqueBody.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode19clearExternalForcesEv_docstring[] = R"CHIMERA_STRING( Clean up structures that store external forces: mContacts, mFext,
 mExtForceBody and mExtTorqueBody.
 Called by Skeleton::clearExternalForces.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode19clearInternalForcesEv_docstring[] = R"CHIMERA_STRING( Clear out the generalized forces of the parent Joint and any other forces
 related to this BodyNode that are internal to the Skeleton. For example,
 the point mass forces for SoftBodyNodes.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode12getBodyForceEv_docstring[] = R"CHIMERA_STRING( Get spatial body force transmitted from the parent joint.
 The spatial body force is transmitted to this BodyNode from the parent
 body through the connecting joint. It is expressed in this BodyNode's
 frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode10isReactiveEv_docstring[] = R"CHIMERA_STRING( Return true if the body can react to force or constraint impulse.
 A body node is reactive if the skeleton is mobile and the number of
 dependent generalized coordinates is non zero.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode20setConstraintImpulseERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( Set constraint impulse
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode20addConstraintImpulseERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( Add constraint impulse
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode20addConstraintImpulseERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring[] = R"CHIMERA_STRING( Add constraint impulse
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode22clearConstraintImpulseEv_docstring[] = R"CHIMERA_STRING( Clear constraint impulses and cache data used for impulse-based forward
 dynamics algorithm
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode20getConstraintImpulseEv_docstring[] = R"CHIMERA_STRING( Return constraint impulse
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode16getKineticEnergyEv_docstring[] = R"CHIMERA_STRING( Return kinetic energy.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode18getPotentialEnergyERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Return potential energy.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8BodyNode17getLinearMomentumEv_docstring[] = R"CHIMERA_STRING( Return linear momentum.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode18getAngularMomentumERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Return angular momentum.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode21notifyTransformUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Frame and all its children that its pose has changed
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode20notifyVelocityUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Frame and all its children that its velocity has changed
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode24notifyAccelerationUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Frame and all its children that its acceleration has changed
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode30notifyArticulatedInertiaUpdateEv_docstring[] = R"CHIMERA_STRING( Notify the Skeleton that the tree of this BodyNode needs an articulated
 inertia update
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode26notifyExternalForcesUpdateEv_docstring[] = R"CHIMERA_STRING( Tell the Skeleton that the external forces need to be updated
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8BodyNode20notifyCoriolisUpdateEv_docstring[] = R"CHIMERA_STRING( Tell the Skeleton that the coriolis forces need to be update
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics8BodyNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BodyNode, ::boost::noncopyable, dart::dynamics::BodyNodePtr, ::boost::python::bases<dart::dynamics::SkeletonRefCountingBase, dart::common::AddonManager, dart::dynamics::BodyNodeSpecializedFor<dart::dynamics::ShapeNode, dart::dynamics::EndEffector>, dart::dynamics::TemplatedJacobianNode<dart::dynamics::BodyNode> > >("BodyNode", _ZN4dart8dynamics8BodyNodeE_docstring, boost::python::no_init)
.def("setProperties", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode::ExtendedProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics8BodyNode13setPropertiesERKNS0_6detail26BodyNodeExtendedPropertiesE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode::NodeProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics8BodyNode13setPropertiesERKNS_6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS2_16ExtensibleVectorIS6_INS0_4Node10PropertiesESt14default_deleteIS9_EEEESA_ISD_EESt4lessIS5_ESaISt4pairIKS5_SF_EEEEE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode::AddonProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics8BodyNode13setPropertiesERKNS_6common19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS2_5Addon10PropertiesESt14default_deleteIS8_EESt4lessIS5_ESaISt4pairIKS5_SB_EEEEE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics8BodyNode13setPropertiesERKNS0_6detail18BodyNodePropertiesE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics8BodyNode13setPropertiesERKNS0_6detail24BodyNodeUniquePropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getBodyNodeProperties", [](const dart::dynamics::BodyNode *self) -> dart::dynamics::BodyNode::Properties { return self->getBodyNodeProperties(); }, _ZNK4dart8dynamics8BodyNode21getBodyNodePropertiesEv_docstring)
.def("getAttachedNodeProperties", [](const dart::dynamics::BodyNode *self) -> dart::dynamics::BodyNode::NodeProperties { return self->getAttachedNodeProperties(); }, _ZNK4dart8dynamics8BodyNode25getAttachedNodePropertiesEv_docstring)
.def("getExtendedProperties", [](const dart::dynamics::BodyNode *self) -> dart::dynamics::BodyNode::ExtendedProperties { return self->getExtendedProperties(); }, _ZNK4dart8dynamics8BodyNode21getExtendedPropertiesEv_docstring)
.def("copy", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode & _otherBodyNode) -> void { return self->copy(_otherBodyNode); }, _ZN4dart8dynamics8BodyNode4copyERKS1__docstring, (::boost::python::arg("_otherBodyNode")))
.def("copy", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode * _otherBodyNode) -> void { return self->copy(_otherBodyNode); }, _ZN4dart8dynamics8BodyNode4copyEPKS1__docstring, (::boost::python::arg("_otherBodyNode")))
.def("duplicateNodes", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode * otherBodyNode) -> void { return self->duplicateNodes(otherBodyNode); }, _ZN4dart8dynamics8BodyNode14duplicateNodesEPKS1__docstring, (::boost::python::arg("otherBodyNode")))
.def("matchNodes", [](dart::dynamics::BodyNode *self, const dart::dynamics::BodyNode * otherBodyNode) -> void { return self->matchNodes(otherBodyNode); }, _ZN4dart8dynamics8BodyNode10matchNodesEPKS1__docstring, (::boost::python::arg("otherBodyNode")))
.def("setName", [](dart::dynamics::BodyNode *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics8BodyNode7setNameERKSs_docstring, (::boost::python::arg("_name")))
.def("setGravityMode", [](dart::dynamics::BodyNode *self, bool _gravityMode) -> void { return self->setGravityMode(_gravityMode); }, _ZN4dart8dynamics8BodyNode14setGravityModeEb_docstring, (::boost::python::arg("_gravityMode")))
.def("getGravityMode", [](const dart::dynamics::BodyNode *self) -> bool { return self->getGravityMode(); }, _ZNK4dart8dynamics8BodyNode14getGravityModeEv_docstring)
.def("isCollidable", [](const dart::dynamics::BodyNode *self) -> bool { return self->isCollidable(); }, _ZNK4dart8dynamics8BodyNode12isCollidableEv_docstring)
.def("setCollidable", [](dart::dynamics::BodyNode *self, bool _isCollidable) -> void { return self->setCollidable(_isCollidable); }, _ZN4dart8dynamics8BodyNode13setCollidableEb_docstring, (::boost::python::arg("_isCollidable")))
.def("setMass", [](dart::dynamics::BodyNode *self, double _mass) -> void { return self->setMass(_mass); }, _ZN4dart8dynamics8BodyNode7setMassEd_docstring, (::boost::python::arg("_mass")))
.def("getMass", [](const dart::dynamics::BodyNode *self) -> double { return self->getMass(); }, _ZNK4dart8dynamics8BodyNode7getMassEv_docstring)
.def("setMomentOfInertia", [](dart::dynamics::BodyNode *self, double _Ixx, double _Iyy, double _Izz) -> void { return self->setMomentOfInertia(_Ixx, _Iyy, _Izz); }, _ZN4dart8dynamics8BodyNode18setMomentOfInertiaEdddddd_docstring, (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz")))
.def("setMomentOfInertia", [](dart::dynamics::BodyNode *self, double _Ixx, double _Iyy, double _Izz, double _Ixy) -> void { return self->setMomentOfInertia(_Ixx, _Iyy, _Izz, _Ixy); }, _ZN4dart8dynamics8BodyNode18setMomentOfInertiaEdddddd_docstring, (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy")))
.def("setMomentOfInertia", [](dart::dynamics::BodyNode *self, double _Ixx, double _Iyy, double _Izz, double _Ixy, double _Ixz) -> void { return self->setMomentOfInertia(_Ixx, _Iyy, _Izz, _Ixy, _Ixz); }, _ZN4dart8dynamics8BodyNode18setMomentOfInertiaEdddddd_docstring, (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz")))
.def("setMomentOfInertia", [](dart::dynamics::BodyNode *self, double _Ixx, double _Iyy, double _Izz, double _Ixy, double _Ixz, double _Iyz) -> void { return self->setMomentOfInertia(_Ixx, _Iyy, _Izz, _Ixy, _Ixz, _Iyz); }, _ZN4dart8dynamics8BodyNode18setMomentOfInertiaEdddddd_docstring, (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz"), ::boost::python::arg("_Iyz")))
.def("getMomentOfInertia", [](const dart::dynamics::BodyNode *self, double & _Ixx, double & _Iyy, double & _Izz, double & _Ixy, double & _Ixz, double & _Iyz) -> void { return self->getMomentOfInertia(_Ixx, _Iyy, _Izz, _Ixy, _Ixz, _Iyz); }, _ZNK4dart8dynamics8BodyNode18getMomentOfInertiaERdS2_S2_S2_S2_S2__docstring, (::boost::python::arg("_Ixx"), ::boost::python::arg("_Iyy"), ::boost::python::arg("_Izz"), ::boost::python::arg("_Ixy"), ::boost::python::arg("_Ixz"), ::boost::python::arg("_Iyz")))
.def("getSpatialInertia", [](const dart::dynamics::BodyNode *self) -> const Eigen::Matrix6d & { return self->getSpatialInertia(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode17getSpatialInertiaEv_docstring)
.def("setInertia", [](dart::dynamics::BodyNode *self, const dart::dynamics::Inertia & _inertia) -> void { return self->setInertia(_inertia); }, _ZN4dart8dynamics8BodyNode10setInertiaERKNS0_7InertiaE_docstring, (::boost::python::arg("_inertia")))
.def("getInertia", [](const dart::dynamics::BodyNode *self) -> const dart::dynamics::Inertia & { return self->getInertia(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode10getInertiaEv_docstring)
.def("getArticulatedInertia", [](const dart::dynamics::BodyNode *self) -> const dart::math::Inertia & { return self->getArticulatedInertia(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode21getArticulatedInertiaEv_docstring)
.def("getArticulatedInertiaImplicit", [](const dart::dynamics::BodyNode *self) -> const dart::math::Inertia & { return self->getArticulatedInertiaImplicit(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode29getArticulatedInertiaImplicitEv_docstring)
.def("setLocalCOM", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _com) -> void { return self->setLocalCOM(_com); }, _ZN4dart8dynamics8BodyNode11setLocalCOMERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_com")))
.def("getLocalCOM", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector3d & { return self->getLocalCOM(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode11getLocalCOMEv_docstring)
.def("getCOM", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector3d { return self->getCOM(); }, _ZNK4dart8dynamics8BodyNode6getCOMEPKNS0_5FrameE_docstring)
.def("getCOM", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _withRespectTo) -> Eigen::Vector3d { return self->getCOM(_withRespectTo); }, _ZNK4dart8dynamics8BodyNode6getCOMEPKNS0_5FrameE_docstring, (::boost::python::arg("_withRespectTo")))
.def("getCOMLinearVelocity", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector3d { return self->getCOMLinearVelocity(); }, _ZNK4dart8dynamics8BodyNode20getCOMLinearVelocityEPKNS0_5FrameES4__docstring)
.def("getCOMLinearVelocity", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo); }, _ZNK4dart8dynamics8BodyNode20getCOMLinearVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearVelocity", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics8BodyNode20getCOMLinearVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMSpatialVelocity", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(); }, _ZNK4dart8dynamics8BodyNode21getCOMSpatialVelocityEv_docstring)
.def("getCOMSpatialVelocity", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics8BodyNode21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(); }, _ZNK4dart8dynamics8BodyNode24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring)
.def("getCOMLinearAcceleration", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo); }, _ZNK4dart8dynamics8BodyNode24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics8BodyNode24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMSpatialAcceleration", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(); }, _ZNK4dart8dynamics8BodyNode25getCOMSpatialAccelerationEv_docstring)
.def("getCOMSpatialAcceleration", [](const dart::dynamics::BodyNode *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics8BodyNode25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("setFrictionCoeff", [](dart::dynamics::BodyNode *self, double _coeff) -> void { return self->setFrictionCoeff(_coeff); }, _ZN4dart8dynamics8BodyNode16setFrictionCoeffEd_docstring, (::boost::python::arg("_coeff")))
.def("getFrictionCoeff", [](const dart::dynamics::BodyNode *self) -> double { return self->getFrictionCoeff(); }, _ZNK4dart8dynamics8BodyNode16getFrictionCoeffEv_docstring)
.def("setRestitutionCoeff", [](dart::dynamics::BodyNode *self, double _coeff) -> void { return self->setRestitutionCoeff(_coeff); }, _ZN4dart8dynamics8BodyNode19setRestitutionCoeffEd_docstring, (::boost::python::arg("_coeff")))
.def("getRestitutionCoeff", [](const dart::dynamics::BodyNode *self) -> double { return self->getRestitutionCoeff(); }, _ZNK4dart8dynamics8BodyNode19getRestitutionCoeffEv_docstring)
.def("getIndexInSkeleton", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getIndexInSkeleton(); }, _ZNK4dart8dynamics8BodyNode18getIndexInSkeletonEv_docstring)
.def("getIndexInTree", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getIndexInTree(); }, _ZNK4dart8dynamics8BodyNode14getIndexInTreeEv_docstring)
.def("getTreeIndex", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getTreeIndex(); }, _ZNK4dart8dynamics8BodyNode12getTreeIndexEv_docstring)
.def("remove", [](dart::dynamics::BodyNode *self) -> dart::dynamics::SkeletonPtr { return self->remove(); }, _ZN4dart8dynamics8BodyNode6removeERKSs_docstring)
.def("remove", [](dart::dynamics::BodyNode *self, const std::string & _name) -> dart::dynamics::SkeletonPtr { return self->remove(_name); }, _ZN4dart8dynamics8BodyNode6removeERKSs_docstring, (::boost::python::arg("_name")))
.def("moveTo", [](dart::dynamics::BodyNode *self, dart::dynamics::BodyNode * _newParent) -> bool { return self->moveTo(_newParent); }, _ZN4dart8dynamics8BodyNode6moveToEPS1__docstring, (::boost::python::arg("_newParent")))
.def("moveTo", [](dart::dynamics::BodyNode *self, const dart::dynamics::SkeletonPtr & _newSkeleton, dart::dynamics::BodyNode * _newParent) -> bool { return self->moveTo(_newSkeleton, _newParent); }, _ZN4dart8dynamics8BodyNode6moveToERKSt10shared_ptrINS0_8SkeletonEEPS1__docstring, (::boost::python::arg("_newSkeleton"), ::boost::python::arg("_newParent")))
.def("split", [](dart::dynamics::BodyNode *self, const std::string & _skeletonName) -> dart::dynamics::SkeletonPtr { return self->split(_skeletonName); }, _ZN4dart8dynamics8BodyNode5splitERKSs_docstring, (::boost::python::arg("_skeletonName")))
.def("copyTo", [](dart::dynamics::BodyNode *self, dart::dynamics::BodyNode * _newParent) -> std::pair<dart::dynamics::Joint *, dart::dynamics::BodyNode *> { return self->copyTo(_newParent); }, _ZN4dart8dynamics8BodyNode6copyToEPS1_b_docstring, (::boost::python::arg("_newParent")))
.def("copyTo", [](dart::dynamics::BodyNode *self, dart::dynamics::BodyNode * _newParent, bool _recursive) -> std::pair<dart::dynamics::Joint *, dart::dynamics::BodyNode *> { return self->copyTo(_newParent, _recursive); }, _ZN4dart8dynamics8BodyNode6copyToEPS1_b_docstring, (::boost::python::arg("_newParent"), ::boost::python::arg("_recursive")))
.def("copyTo", [](const dart::dynamics::BodyNode *self, const dart::dynamics::SkeletonPtr & _newSkeleton, dart::dynamics::BodyNode * _newParent) -> std::pair<dart::dynamics::Joint *, dart::dynamics::BodyNode *> { return self->copyTo(_newSkeleton, _newParent); }, _ZNK4dart8dynamics8BodyNode6copyToERKSt10shared_ptrINS0_8SkeletonEEPS1_b_docstring, (::boost::python::arg("_newSkeleton"), ::boost::python::arg("_newParent")))
.def("copyTo", [](const dart::dynamics::BodyNode *self, const dart::dynamics::SkeletonPtr & _newSkeleton, dart::dynamics::BodyNode * _newParent, bool _recursive) -> std::pair<dart::dynamics::Joint *, dart::dynamics::BodyNode *> { return self->copyTo(_newSkeleton, _newParent, _recursive); }, _ZNK4dart8dynamics8BodyNode6copyToERKSt10shared_ptrINS0_8SkeletonEEPS1_b_docstring, (::boost::python::arg("_newSkeleton"), ::boost::python::arg("_newParent"), ::boost::python::arg("_recursive")))
.def("copyAs", [](const dart::dynamics::BodyNode *self, const std::string & _skeletonName) -> dart::dynamics::SkeletonPtr { return self->copyAs(_skeletonName); }, _ZNK4dart8dynamics8BodyNode6copyAsERKSsb_docstring, (::boost::python::arg("_skeletonName")))
.def("copyAs", [](const dart::dynamics::BodyNode *self, const std::string & _skeletonName, bool _recursive) -> dart::dynamics::SkeletonPtr { return self->copyAs(_skeletonName, _recursive); }, _ZNK4dart8dynamics8BodyNode6copyAsERKSsb_docstring, (::boost::python::arg("_skeletonName"), ::boost::python::arg("_recursive")))
.def("getSkeleton", [](dart::dynamics::BodyNode *self) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(); }, _ZN4dart8dynamics8BodyNode11getSkeletonEv_docstring)
.def("getParentJoint", [](dart::dynamics::BodyNode *self) -> dart::dynamics::Joint * { return self->getParentJoint(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), _ZN4dart8dynamics8BodyNode14getParentJointEv_docstring)
.def("getParentBodyNode", [](dart::dynamics::BodyNode *self) -> dart::dynamics::BodyNode * { return self->getParentBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics8BodyNode17getParentBodyNodeEv_docstring)
.def("getNumChildBodyNodes", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumChildBodyNodes(); }, _ZNK4dart8dynamics8BodyNode20getNumChildBodyNodesEv_docstring)
.def("getChildBodyNode", [](dart::dynamics::BodyNode *self, std::size_t _index) -> dart::dynamics::BodyNode * { return self->getChildBodyNode(_index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics8BodyNode16getChildBodyNodeEm_docstring, (::boost::python::arg("_index")))
.def("getNumChildJoints", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumChildJoints(); }, _ZNK4dart8dynamics8BodyNode17getNumChildJointsEv_docstring)
.def("getChildJoint", [](dart::dynamics::BodyNode *self, std::size_t _index) -> dart::dynamics::Joint * { return self->getChildJoint(_index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), _ZN4dart8dynamics8BodyNode13getChildJointEm_docstring, (::boost::python::arg("_index")))
.def("createShapeNode", [](dart::dynamics::BodyNode *self, const dart::dynamics::ShapePtr & shape) -> dart::dynamics::ShapeNode * { return self->createShapeNode(shape); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), _ZN4dart8dynamics8BodyNode15createShapeNodeERKSt10shared_ptrINS0_5ShapeEE_docstring, (::boost::python::arg("shape")))
.def("createShapeNode", [](dart::dynamics::BodyNode *self, const dart::dynamics::ShapePtr & shape, const std::string & name) -> dart::dynamics::ShapeNode * { return self->createShapeNode(shape, name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), _ZN4dart8dynamics8BodyNode15createShapeNodeERKSt10shared_ptrINS0_5ShapeEERKSs_docstring, (::boost::python::arg("shape"), ::boost::python::arg("name")))
.def("createShapeNode", [](dart::dynamics::BodyNode *self, const dart::dynamics::ShapePtr & shape, const char * name) -> dart::dynamics::ShapeNode * { return self->createShapeNode(shape, name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), _ZN4dart8dynamics8BodyNode15createShapeNodeERKSt10shared_ptrINS0_5ShapeEEPKc_docstring, (::boost::python::arg("shape"), ::boost::python::arg("name")))
.def("getNumShapeNodes", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumShapeNodes(); }, _ZNK4dart8dynamics8BodyNode16getNumShapeNodesEv_docstring)
.def("getShapeNode", [](dart::dynamics::BodyNode *self, std::size_t index) -> dart::dynamics::ShapeNode * { return self->getShapeNode(index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), _ZN4dart8dynamics8BodyNode12getShapeNodeEm_docstring, (::boost::python::arg("index")))
.def("getShapeNodes", [](dart::dynamics::BodyNode *self) -> const std::vector<dart::dynamics::ShapeNode *> { return self->getShapeNodes(); }, _ZN4dart8dynamics8BodyNode13getShapeNodesEv_docstring)
.def("getShapeNodes", [](const dart::dynamics::BodyNode *self) -> const std::vector<const dart::dynamics::ShapeNode *> { return self->getShapeNodes(); }, _ZNK4dart8dynamics8BodyNode13getShapeNodesEv_docstring)
.def("removeAllShapeNodes", [](dart::dynamics::BodyNode *self) -> void { return self->removeAllShapeNodes(); }, _ZN4dart8dynamics8BodyNode19removeAllShapeNodesEv_docstring)
.def("createEndEffector", [](dart::dynamics::BodyNode *self) -> dart::dynamics::EndEffector * { return self->createEndEffector(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), _ZN4dart8dynamics8BodyNode17createEndEffectorERKSs_docstring)
.def("createEndEffector", [](dart::dynamics::BodyNode *self, const std::string & _name) -> dart::dynamics::EndEffector * { return self->createEndEffector(_name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), _ZN4dart8dynamics8BodyNode17createEndEffectorERKSs_docstring, (::boost::python::arg("_name")))
.def("createEndEffector", [](dart::dynamics::BodyNode *self, const char * _name) -> dart::dynamics::EndEffector * { return self->createEndEffector(_name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), _ZN4dart8dynamics8BodyNode17createEndEffectorEPKc_docstring, (::boost::python::arg("_name")))
.def("addMarker", [](dart::dynamics::BodyNode *self, dart::dynamics::Marker * _marker) -> void { return self->addMarker(_marker); }, _ZN4dart8dynamics8BodyNode9addMarkerEPNS0_6MarkerE_docstring, (::boost::python::arg("_marker")))
.def("getNumMarkers", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumMarkers(); }, _ZNK4dart8dynamics8BodyNode13getNumMarkersEv_docstring)
.def("getMarker", [](dart::dynamics::BodyNode *self, std::size_t _index) -> dart::dynamics::Marker * { return self->getMarker(_index); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics8BodyNode9getMarkerEm_docstring, (::boost::python::arg("_index")))
.def("dependsOn", [](const dart::dynamics::BodyNode *self, std::size_t _genCoordIndex) -> bool { return self->dependsOn(_genCoordIndex); }, _ZNK4dart8dynamics8BodyNode9dependsOnEm_docstring, (::boost::python::arg("_genCoordIndex")))
.def("getNumDependentGenCoords", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumDependentGenCoords(); }, _ZNK4dart8dynamics8BodyNode24getNumDependentGenCoordsEv_docstring)
.def("getDependentGenCoordIndex", [](const dart::dynamics::BodyNode *self, std::size_t _arrayIndex) -> std::size_t { return self->getDependentGenCoordIndex(_arrayIndex); }, _ZNK4dart8dynamics8BodyNode25getDependentGenCoordIndexEm_docstring, (::boost::python::arg("_arrayIndex")))
.def("getDependentGenCoordIndices", [](const dart::dynamics::BodyNode *self) -> const std::vector<std::size_t> & { return self->getDependentGenCoordIndices(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode27getDependentGenCoordIndicesEv_docstring)
.def("getNumDependentDofs", [](const dart::dynamics::BodyNode *self) -> std::size_t { return self->getNumDependentDofs(); }, _ZNK4dart8dynamics8BodyNode19getNumDependentDofsEv_docstring)
.def("getDependentDof", [](dart::dynamics::BodyNode *self, std::size_t _index) -> dart::dynamics::DegreeOfFreedom * { return self->getDependentDof(_index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), _ZN4dart8dynamics8BodyNode15getDependentDofEm_docstring, (::boost::python::arg("_index")))
.def("getDependentDofs", [](dart::dynamics::BodyNode *self) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getDependentDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics8BodyNode16getDependentDofsEv_docstring)
.def("getChainDofs", [](const dart::dynamics::BodyNode *self) -> const std::vector<const dart::dynamics::DegreeOfFreedom *> { return self->getChainDofs(); }, _ZNK4dart8dynamics8BodyNode12getChainDofsEv_docstring)
.def("getRelativeTransform", [](const dart::dynamics::BodyNode *self) -> const Eigen::Isometry3d & { return self->getRelativeTransform(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode20getRelativeTransformEv_docstring)
.def("getRelativeSpatialVelocity", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode26getRelativeSpatialVelocityEv_docstring)
.def("getRelativeSpatialAcceleration", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getRelativeSpatialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode30getRelativeSpatialAccelerationEv_docstring)
.def("getPrimaryRelativeAcceleration", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getPrimaryRelativeAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode30getPrimaryRelativeAccelerationEv_docstring)
.def("getPartialAcceleration", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getPartialAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode22getPartialAccelerationEv_docstring)
.def("getJacobian", [](const dart::dynamics::BodyNode *self) -> const dart::math::Jacobian & { return self->getJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode11getJacobianEv_docstring)
.def("getWorldJacobian", [](const dart::dynamics::BodyNode *self) -> const dart::math::Jacobian & { return self->getWorldJacobian(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode16getWorldJacobianEv_docstring)
.def("getJacobianSpatialDeriv", [](const dart::dynamics::BodyNode *self) -> const dart::math::Jacobian & { return self->getJacobianSpatialDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode23getJacobianSpatialDerivEv_docstring)
.def("getJacobianClassicDeriv", [](const dart::dynamics::BodyNode *self) -> const dart::math::Jacobian & { return self->getJacobianClassicDeriv(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode23getJacobianClassicDerivEv_docstring)
.def("getBodyVelocityChange", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getBodyVelocityChange(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode21getBodyVelocityChangeEv_docstring)
.def("setColliding", [](dart::dynamics::BodyNode *self, bool _isColliding) -> void { return self->setColliding(_isColliding); }, _ZN4dart8dynamics8BodyNode12setCollidingEb_docstring, (::boost::python::arg("_isColliding")))
.def("isColliding", [](dart::dynamics::BodyNode *self) -> bool { return self->isColliding(); }, _ZN4dart8dynamics8BodyNode11isCollidingEv_docstring)
.def("addExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force) -> void { return self->addExtForce(_force); }, _ZN4dart8dynamics8BodyNode11addExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring, (::boost::python::arg("_force")))
.def("addExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset) -> void { return self->addExtForce(_force, _offset); }, _ZN4dart8dynamics8BodyNode11addExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring, (::boost::python::arg("_force"), ::boost::python::arg("_offset")))
.def("addExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset, bool _isForceLocal) -> void { return self->addExtForce(_force, _offset, _isForceLocal); }, _ZN4dart8dynamics8BodyNode11addExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring, (::boost::python::arg("_force"), ::boost::python::arg("_offset"), ::boost::python::arg("_isForceLocal")))
.def("addExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset, bool _isForceLocal, bool _isOffsetLocal) -> void { return self->addExtForce(_force, _offset, _isForceLocal, _isOffsetLocal); }, _ZN4dart8dynamics8BodyNode11addExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring, (::boost::python::arg("_force"), ::boost::python::arg("_offset"), ::boost::python::arg("_isForceLocal"), ::boost::python::arg("_isOffsetLocal")))
.def("setExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force) -> void { return self->setExtForce(_force); }, _ZN4dart8dynamics8BodyNode11setExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring, (::boost::python::arg("_force")))
.def("setExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset) -> void { return self->setExtForce(_force, _offset); }, _ZN4dart8dynamics8BodyNode11setExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring, (::boost::python::arg("_force"), ::boost::python::arg("_offset")))
.def("setExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset, bool _isForceLocal) -> void { return self->setExtForce(_force, _offset, _isForceLocal); }, _ZN4dart8dynamics8BodyNode11setExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring, (::boost::python::arg("_force"), ::boost::python::arg("_offset"), ::boost::python::arg("_isForceLocal")))
.def("setExtForce", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _force, const Eigen::Vector3d & _offset, bool _isForceLocal, bool _isOffsetLocal) -> void { return self->setExtForce(_force, _offset, _isForceLocal, _isOffsetLocal); }, _ZN4dart8dynamics8BodyNode11setExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring, (::boost::python::arg("_force"), ::boost::python::arg("_offset"), ::boost::python::arg("_isForceLocal"), ::boost::python::arg("_isOffsetLocal")))
.def("addExtTorque", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _torque) -> void { return self->addExtTorque(_torque); }, _ZN4dart8dynamics8BodyNode12addExtTorqueERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring, (::boost::python::arg("_torque")))
.def("addExtTorque", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _torque, bool _isLocal) -> void { return self->addExtTorque(_torque, _isLocal); }, _ZN4dart8dynamics8BodyNode12addExtTorqueERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring, (::boost::python::arg("_torque"), ::boost::python::arg("_isLocal")))
.def("setExtTorque", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _torque) -> void { return self->setExtTorque(_torque); }, _ZN4dart8dynamics8BodyNode12setExtTorqueERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring, (::boost::python::arg("_torque")))
.def("setExtTorque", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _torque, bool _isLocal) -> void { return self->setExtTorque(_torque, _isLocal); }, _ZN4dart8dynamics8BodyNode12setExtTorqueERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring, (::boost::python::arg("_torque"), ::boost::python::arg("_isLocal")))
.def("clearExternalForces", [](dart::dynamics::BodyNode *self) -> void { return self->clearExternalForces(); }, _ZN4dart8dynamics8BodyNode19clearExternalForcesEv_docstring)
.def("clearInternalForces", [](dart::dynamics::BodyNode *self) -> void { return self->clearInternalForces(); }, _ZN4dart8dynamics8BodyNode19clearInternalForcesEv_docstring)
.def("getExternalForceLocal", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getExternalForceLocal(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getExternalForceGlobal", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector6d { return self->getExternalForceGlobal(); })
.def("getBodyForce", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getBodyForce(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode12getBodyForceEv_docstring)
.def("isReactive", [](const dart::dynamics::BodyNode *self) -> bool { return self->isReactive(); }, _ZNK4dart8dynamics8BodyNode10isReactiveEv_docstring)
.def("setConstraintImpulse", [](dart::dynamics::BodyNode *self, const Eigen::Vector6d & _constImp) -> void { return self->setConstraintImpulse(_constImp); }, _ZN4dart8dynamics8BodyNode20setConstraintImpulseERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring, (::boost::python::arg("_constImp")))
.def("addConstraintImpulse", [](dart::dynamics::BodyNode *self, const Eigen::Vector6d & _constImp) -> void { return self->addConstraintImpulse(_constImp); }, _ZN4dart8dynamics8BodyNode20addConstraintImpulseERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring, (::boost::python::arg("_constImp")))
.def("addConstraintImpulse", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _constImp, const Eigen::Vector3d & _offset) -> void { return self->addConstraintImpulse(_constImp, _offset); }, _ZN4dart8dynamics8BodyNode20addConstraintImpulseERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring, (::boost::python::arg("_constImp"), ::boost::python::arg("_offset")))
.def("addConstraintImpulse", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _constImp, const Eigen::Vector3d & _offset, bool _isImpulseLocal) -> void { return self->addConstraintImpulse(_constImp, _offset, _isImpulseLocal); }, _ZN4dart8dynamics8BodyNode20addConstraintImpulseERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring, (::boost::python::arg("_constImp"), ::boost::python::arg("_offset"), ::boost::python::arg("_isImpulseLocal")))
.def("addConstraintImpulse", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _constImp, const Eigen::Vector3d & _offset, bool _isImpulseLocal, bool _isOffsetLocal) -> void { return self->addConstraintImpulse(_constImp, _offset, _isImpulseLocal, _isOffsetLocal); }, _ZN4dart8dynamics8BodyNode20addConstraintImpulseERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_bb_docstring, (::boost::python::arg("_constImp"), ::boost::python::arg("_offset"), ::boost::python::arg("_isImpulseLocal"), ::boost::python::arg("_isOffsetLocal")))
.def("clearConstraintImpulse", [](dart::dynamics::BodyNode *self) -> void { return self->clearConstraintImpulse(); }, _ZN4dart8dynamics8BodyNode22clearConstraintImpulseEv_docstring)
.def("getConstraintImpulse", [](const dart::dynamics::BodyNode *self) -> const Eigen::Vector6d & { return self->getConstraintImpulse(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8BodyNode20getConstraintImpulseEv_docstring)
.def("getKineticEnergy", [](const dart::dynamics::BodyNode *self) -> double { return self->getKineticEnergy(); }, _ZNK4dart8dynamics8BodyNode16getKineticEnergyEv_docstring)
.def("getPotentialEnergy", [](const dart::dynamics::BodyNode *self, const Eigen::Vector3d & _gravity) -> double { return self->getPotentialEnergy(_gravity); }, _ZNK4dart8dynamics8BodyNode18getPotentialEnergyERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_gravity")))
.def("getLinearMomentum", [](const dart::dynamics::BodyNode *self) -> Eigen::Vector3d { return self->getLinearMomentum(); }, _ZNK4dart8dynamics8BodyNode17getLinearMomentumEv_docstring)
.def("getAngularMomentum", [](dart::dynamics::BodyNode *self) -> Eigen::Vector3d { return self->getAngularMomentum(); }, _ZN4dart8dynamics8BodyNode18getAngularMomentumERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring)
.def("getAngularMomentum", [](dart::dynamics::BodyNode *self, const Eigen::Vector3d & _pivot) -> Eigen::Vector3d { return self->getAngularMomentum(_pivot); }, _ZN4dart8dynamics8BodyNode18getAngularMomentumERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_pivot")))
.def("notifyTransformUpdate", [](dart::dynamics::BodyNode *self) -> void { return self->notifyTransformUpdate(); }, _ZN4dart8dynamics8BodyNode21notifyTransformUpdateEv_docstring)
.def("notifyVelocityUpdate", [](dart::dynamics::BodyNode *self) -> void { return self->notifyVelocityUpdate(); }, _ZN4dart8dynamics8BodyNode20notifyVelocityUpdateEv_docstring)
.def("notifyAccelerationUpdate", [](dart::dynamics::BodyNode *self) -> void { return self->notifyAccelerationUpdate(); }, _ZN4dart8dynamics8BodyNode24notifyAccelerationUpdateEv_docstring)
.def("notifyArticulatedInertiaUpdate", [](dart::dynamics::BodyNode *self) -> void { return self->notifyArticulatedInertiaUpdate(); }, _ZN4dart8dynamics8BodyNode30notifyArticulatedInertiaUpdateEv_docstring)
.def("notifyExternalForcesUpdate", [](dart::dynamics::BodyNode *self) -> void { return self->notifyExternalForcesUpdate(); }, _ZN4dart8dynamics8BodyNode26notifyExternalForcesUpdateEv_docstring)
.def("notifyCoriolisUpdate", [](dart::dynamics::BodyNode *self) -> void { return self->notifyCoriolisUpdate(); }, _ZN4dart8dynamics8BodyNode20notifyCoriolisUpdateEv_docstring)
;
}

/* footer */
