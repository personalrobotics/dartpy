#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics8SkeletonE_docstring[] = R"CHIMERA_STRING( class Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton6createERKSs_docstring[] = R"CHIMERA_STRING( Create a new Skeleton inside of a shared_ptr
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton6createERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Create a new Skeleton inside of a shared_ptr
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton6getPtrEv_docstring[] = R"CHIMERA_STRING( Get the shared_ptr that manages this Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton11getSkeletonEv_docstring[] = R"CHIMERA_STRING( Same as getPtr(), but this allows Skeleton to have a similar interface as
 BodyNode and Joint for template programming.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton5cloneEv_docstring[] = R"CHIMERA_STRING( Create an identical clone of this Skeleton.
 Note: the state of the Skeleton will NOT be cloned, only the structure and
 properties will be [TODO(MXG): copy the state as well]
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton5cloneERKSs_docstring[] = R"CHIMERA_STRING( Create an identical clone of this Skeleton, except that it has a new name.
 Note: the state of the Skeleton will NOT be cloned, only the structure and
 properties will be [TODO(MXG): copy the state as well]
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton16setConfigurationERKNS1_13ConfigurationE_docstring[] = R"CHIMERA_STRING( Set the configuration of this Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16getConfigurationEi_docstring[] = R"CHIMERA_STRING( Get the configuration of this Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16getConfigurationERKSt6vectorImSaImEEi_docstring[] = R"CHIMERA_STRING( Get the configuration of the specified indices in this Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton13setPropertiesERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton21getSkeletonPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton7setNameERKSs_docstring[] = R"CHIMERA_STRING( Set name.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton7getNameEv_docstring[] = R"CHIMERA_STRING( Get name.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton19enableSelfCollisionEb_docstring[] = R"CHIMERA_STRING( Enable self collision check
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton20disableSelfCollisionEv_docstring[] = R"CHIMERA_STRING( Disable self collision check
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton27isEnabledSelfCollisionCheckEv_docstring[] = R"CHIMERA_STRING( Return true if self collision check is enabled
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton26isEnabledAdjacentBodyCheckEv_docstring[] = R"CHIMERA_STRING( Return true if self collision check is enabled including adjacent
 bodies
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton9setMobileEb_docstring[] = R"CHIMERA_STRING( Set whether this skeleton will be updated by forward dynamics.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton8isMobileEv_docstring[] = R"CHIMERA_STRING( Get whether this skeleton will be updated by forward dynamics.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton11setTimeStepEd_docstring[] = R"CHIMERA_STRING( Set time step. This timestep is used for implicit joint damping
 force.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton11getTimeStepEv_docstring[] = R"CHIMERA_STRING( Get time step.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton10setGravityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set 3-dim gravitational acceleration. The gravity is used for
 calculating gravity force vector of the skeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton10getGravityEv_docstring[] = R"CHIMERA_STRING( Get 3-dim gravitational acceleration.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton16incrementVersionEv_docstring[] = R"CHIMERA_STRING( Increment the version number of this Skeleton and return the resulting
 (new) version number.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton10getVersionEv_docstring[] = R"CHIMERA_STRING( Get the current version number of this Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton15getNumBodyNodesEv_docstring[] = R"CHIMERA_STRING( Get number of body nodes
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton20getNumRigidBodyNodesEv_docstring[] = R"CHIMERA_STRING( Get number of rigid body nodes.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton19getNumSoftBodyNodesEv_docstring[] = R"CHIMERA_STRING( Get number of soft body nodes.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton11getNumTreesEv_docstring[] = R"CHIMERA_STRING( Get the number of independent trees that this Skeleton contains
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton15getRootBodyNodeEm_docstring[] = R"CHIMERA_STRING( Get the root BodyNode of the tree whose index in this Skeleton is _treeIdx
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton11getBodyNodeEm_docstring[] = R"CHIMERA_STRING( Get BodyNode whose index is _idx
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton15getSoftBodyNodeEm_docstring[] = R"CHIMERA_STRING( Get SoftBodyNode whose index is _idx
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton11getBodyNodeERKSs_docstring[] = R"CHIMERA_STRING( Get body node whose name is _name
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton15getSoftBodyNodeERKSs_docstring[] = R"CHIMERA_STRING( Get soft body node whose name is _name
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton12getBodyNodesEv_docstring[] = R"CHIMERA_STRING( Get all the BodyNodes that are held by this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton10getIndexOfEPKNS0_8BodyNodeEb_docstring[] = R"CHIMERA_STRING( Get the index of a specific BodyNode within this ReferentialSkeleton.
 Returns INVALID_INDEX if it is not held in this ReferentialSkeleton.
 When _warning is true, a warning message will be printed if the BodyNode
 is not in the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton16getTreeBodyNodesEm_docstring[] = R"CHIMERA_STRING( Get the BodyNodes belonging to a tree in this Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton12getNumJointsEv_docstring[] = R"CHIMERA_STRING( Get number of Joints
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton8getJointEm_docstring[] = R"CHIMERA_STRING( Get Joint whose index is _idx
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton8getJointERKSs_docstring[] = R"CHIMERA_STRING( Get Joint whose name is _name
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton10getIndexOfEPKNS0_5JointEb_docstring[] = R"CHIMERA_STRING( Get the index of a specific Joint within this ReferentialSkeleton. Returns
 INVALID_INDEX if it is not held in this ReferentialSkeleton.
 When _warning is true, a warning message will be printed if the Joint is
 not in the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton10getNumDofsEv_docstring[] = R"CHIMERA_STRING( Return the number of degrees of freedom in this skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton6getDofEm_docstring[] = R"CHIMERA_STRING( Get degree of freedom (aka generalized coordinate) whose index is _idx
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton6getDofERKSs_docstring[] = R"CHIMERA_STRING( Get degree of freedom (aka generalized coordinate) whose name is _name
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton7getDofsEv_docstring[] = R"CHIMERA_STRING( Get the vector of DegreesOfFreedom for this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton7getDofsEv_docstring[] = R"CHIMERA_STRING( Get a vector of const DegreesOfFreedom for this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton10getIndexOfEPKNS0_15DegreeOfFreedomEb_docstring[] = R"CHIMERA_STRING( Get the index of a specific DegreeOfFreedom within this
 ReferentialSkeleton. Returns INVALID_INDEX if it is not held in this
 ReferentialSkeleton. When _warning is true, a warning message will be
 printed if the DegreeOfFreedom is not in the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton11getTreeDofsEm_docstring[] = R"CHIMERA_STRING( Get the DegreesOfFreedom belonging to a tree in this Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton24checkIndexingConsistencyEv_docstring[] = R"CHIMERA_STRING( This function is only meant for debugging purposes. It will verify that
 all objects held in the Skeleton have the correct information about their
 indexing.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton5getIKEb_docstring[] = R"CHIMERA_STRING( Get a pointer to a WholeBodyIK module for this Skeleton. If _createIfNull
 is true, then the IK module will be generated if one does not already
 exist.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton13getOrCreateIKEv_docstring[] = R"CHIMERA_STRING( Get a pointer to a WholeBodyIK module for this Skeleton. The IK module
 will be generated if one does not already exist. This function is actually
 the same as getIK(true).
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton5getIKEv_docstring[] = R"CHIMERA_STRING( Get a pointer to a WholeBodyIK module for this Skeleton. Because this is a
 const function, a new IK module cannot be created if one does not already
 exist.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton8createIKEv_docstring[] = R"CHIMERA_STRING( Create a new WholeBodyIK module for this Skeleton. If an IK module already
 exists in this Skeleton, it will be destroyed and replaced by a brand new
 one.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton7clearIKEv_docstring[] = R"CHIMERA_STRING( Wipe away the WholeBodyIK module for this Skeleton, leaving it as a
 nullptr
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton13getNumMarkersEv_docstring[] = R"CHIMERA_STRING( Get total number of markers in this Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton9getMarkerERKSs_docstring[] = R"CHIMERA_STRING( Get marker whose name is _name
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton18integratePositionsEd_docstring[] = R"CHIMERA_STRING( 
\
}
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton22getPositionDifferencesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES6__docstring[] = R"CHIMERA_STRING( Return the difference of two generalized positions which are measured in
 the configuration space of this Skeleton. If the configuration space is
 Euclidean space, this function returns _q2 - _q1. Otherwise, it depends on
 the type of the configuration space.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton22getVelocityDifferencesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES6__docstring[] = R"CHIMERA_STRING( Return the difference of two generalized velocities or accelerations which
 are measured in the tangent space at the identity. Since the tangent
 spaces are vector spaces, this function always returns _dq2 - _dq1.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton8setStateERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the state of this skeleton described in generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton8getStateEv_docstring[] = R"CHIMERA_STRING( Get the state of this skeleton described in generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getSupportPolygonEv_docstring[] = R"CHIMERA_STRING( Get the support polygon of this Skeleton, which is computed based on the
 gravitational projection of the support geometries of all EndEffectors
 in this Skeleton that are currently in support mode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getSupportPolygonEm_docstring[] = R"CHIMERA_STRING( Same as getSupportPolygon(), but it will only use EndEffectors within the
 specified tree within this Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getSupportIndicesEv_docstring[] = R"CHIMERA_STRING( Get a list of the EndEffector indices that correspond to each of the
 points in the support polygon.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getSupportIndicesEm_docstring[] = R"CHIMERA_STRING( Same as getSupportIndices(), but it corresponds to the support polygon of
 the specified tree within this Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton14getSupportAxesEv_docstring[] = R"CHIMERA_STRING( Get the axes that correspond to each component in the support polygon.
 These axes are needed in order to map the points on a support polygon
 into 3D space. If gravity is along the z-direction, then these axes will
 simply be 
<
1,0,0> and 
<
0,1,0>.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton14getSupportAxesEm_docstring[] = R"CHIMERA_STRING( Same as getSupportAxes(), but it corresponds to the support polygon of the
 specified tree within this Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton18getSupportCentroidEv_docstring[] = R"CHIMERA_STRING( Get the centroid of the support polygon for this Skeleton. If the support
 polygon is an empty set, the components of this vector will be nan.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton18getSupportCentroidEm_docstring[] = R"CHIMERA_STRING( Get the centroid of the support polygon for a tree in this Skeleton. If
 the support polygon is an empty set, the components of this vector will be
 nan.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getSupportVersionEv_docstring[] = R"CHIMERA_STRING( The version number of a support polygon will be incremented each time the
 support polygon needs to be recomputed. This number can be used to
 immediately determine whether the support polygon has changed since the
 last time you asked for it, allowing you to be more efficient in how you
 handle the data.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getSupportVersionEm_docstring[] = R"CHIMERA_STRING( Same as getSupportVersion(), but it corresponds to the support polygon of
 the specified tree within this Skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton24computeForwardKinematicsEbbb_docstring[] = R"CHIMERA_STRING( Compute forward kinematics
 In general, this function doesn't need to be called for forward kinematics
 to update. Forward kinematics will always be computed when it's needed and
 will only perform the computations that are necessary for what the user
 requests. This works by performing some bookkeeping internally with dirty
 flags whenever a position, velocity, or acceleration is set, either
 internally or by the user.
 On one hand, this results in some overhead due to the extra effort of
 bookkeeping, but on the other hand we have much greater code safety, and
 in some cases performance can be dramatically improved with the auto-
 updating. For example, this function is inefficient when only one portion
 of the BodyNodes needed to be updated rather than the entire Skeleton,
 which is common when performing inverse kinematics on a limb or on some
 subsection of a Skeleton.
 This function might be useful in a case where the user wants to perform
 all the forward kinematics computations during a particular time window
 rather than waiting for it to be computed at the exact time that it's
 needed.
 One example would be a real time controller. Let's say a controller gets
 encoder data at time t0 but needs to wait until t1 before it receives the
 force-torque sensor data that it needs in order to compute the output for
 an operational space controller. Instead of being idle from t0 to t1, it
 could use that time to compute the forward kinematics by calling this
 function.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton22computeForwardDynamicsEv_docstring[] = R"CHIMERA_STRING( Compute forward dynamics
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton22computeInverseDynamicsEbbb_docstring[] = R"CHIMERA_STRING( Compute inverse dynamics
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton23clearConstraintImpulsesEv_docstring[] = R"CHIMERA_STRING( Clear constraint impulses and cache data used for impulse-based forward
 dynamics algorithm, where the constraint impulses are spatial constraints
 on the BodyNodes and generalized constraints on the Joints.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton17updateBiasImpulseEPNS0_8BodyNodeE_docstring[] = R"CHIMERA_STRING( Update bias impulses
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton17updateBiasImpulseEPNS0_8BodyNodeERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton17updateBiasImpulseEPNS0_8BodyNodeERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES3_S8__docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton17updateBiasImpulseEPNS0_12SoftBodyNodeEPNS0_9PointMassERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton20updateVelocityChangeEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton17setImpulseAppliedEb_docstring[] = R"CHIMERA_STRING( Set whether this skeleton is constrained. ConstraintSolver will
  mark this.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16isImpulseAppliedEv_docstring[] = R"CHIMERA_STRING( Get whether this skeleton is constrained
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton29computeImpulseForwardDynamicsEv_docstring[] = R"CHIMERA_STRING( Compute impulse-based forward dynamics
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton11getJacobianEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( 
\
{ 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton11getJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting the origin of a BodyNode. You can
 specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. The Jacobian is expressed
 in the Frame of the BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. You can specify a
 coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16getWorldJacobianEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting the origin of a BodyNode. The Jacobian
 is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16getWorldJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. The Jacobian is expressed
 in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getLinearJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian targeting the origin of a BodyNode. You can
 specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getLinearJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. You can specify a
 coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton18getAngularJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the angular Jacobian of a BodyNode. You can specify a coordinate Frame
 to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin of a
 BodyNode. The Jacobian is expressed in the Frame of the BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin of a
 BodyNode. You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting an offset in a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 The Jacobian is expressed in the Frame of the BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting an offset in a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin of a
 BodyNode. The Jacobian is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting an offset in a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian (classical) time derivative targeting the origin
 of a BodyNode. The _offset is expected in coordinates of the BodyNode
 Frame. You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian (classical) time derivative targeting an offset in
 a BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton23getAngularJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the angular Jacobian time derivative of a BodyNode. You can specify a
 coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton7getMassEv_docstring[] = R"CHIMERA_STRING( Get total mass of the skeleton. The total mass is calculated as BodyNodes
 are added and is updated as BodyNode mass is changed, so this is a
 constant-time O(1) operation for the Skeleton class.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton13getMassMatrixEm_docstring[] = R"CHIMERA_STRING( Get the mass matrix of a specific tree in the Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton13getMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get the Mass Matrix of the MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16getAugMassMatrixEm_docstring[] = R"CHIMERA_STRING( Get the augmented mass matrix of a specific tree in the Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16getAugMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get augmented mass matrix of the skeleton. This matrix is used in
 ConstraintDynamics to compute constraint forces. The matrix is
 M + h*D + h*h*K where D is diagonal joint damping coefficient matrix, K is
 diagonal joint stiffness matrix, and h is simulation time step.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16getInvMassMatrixEm_docstring[] = R"CHIMERA_STRING( Get the inverse mass matrix of a specific tree in the Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16getInvMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get inverse of Mass Matrix of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton19getInvAugMassMatrixEm_docstring[] = R"CHIMERA_STRING( Get the inverse augmented mass matrix of a tree
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton19getInvAugMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get inverse of augmented Mass Matrix of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getCoriolisForcesEm_docstring[] = R"CHIMERA_STRING( Get the Coriolis force vector of a tree in this Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getCoriolisForcesEv_docstring[] = R"CHIMERA_STRING( Get Coriolis force vector of the MetaSkeleton's BodyNodes.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16getGravityForcesEm_docstring[] = R"CHIMERA_STRING( Get the gravity forces for a tree in this Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16getGravityForcesEv_docstring[] = R"CHIMERA_STRING( Get gravity force vector of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton27getCoriolisAndGravityForcesEm_docstring[] = R"CHIMERA_STRING( Get the combined vector of Coriolis force and gravity force of a tree
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton27getCoriolisAndGravityForcesEv_docstring[] = R"CHIMERA_STRING( Get combined vector of Coriolis force and gravity force of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getExternalForcesEm_docstring[] = R"CHIMERA_STRING( Get the external force vector of a tree in the Skeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton17getExternalForcesEv_docstring[] = R"CHIMERA_STRING( Get external force vector of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton19getConstraintForcesEm_docstring[] = R"CHIMERA_STRING( Get constraint force vector for a tree
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton19getConstraintForcesEv_docstring[] = R"CHIMERA_STRING( Get constraint force vector
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton19clearExternalForcesEv_docstring[] = R"CHIMERA_STRING( Clear the external forces of the BodyNodes in this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton19clearInternalForcesEv_docstring[] = R"CHIMERA_STRING( Clear the internal forces of the BodyNodes in this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton30notifyArticulatedInertiaUpdateEm_docstring[] = R"CHIMERA_STRING( Notify that the articulated inertia and everything that depends on it
 needs to be updated
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics8Skeleton19notifySupportUpdateEm_docstring[] = R"CHIMERA_STRING( Notify that the support polygon of a tree needs to be updated
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton16getKineticEnergyEv_docstring[] = R"CHIMERA_STRING( Get the kinetic energy of this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton18getPotentialEnergyEv_docstring[] = R"CHIMERA_STRING( Get the potential energy of this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton6getCOMEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM with respect to any Frame (default is World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM spatial velocity in terms of any Frame (default is
 World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM linear velocity in terms of any Frame (default is
 World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM spatial acceleration in terms of any Frame (default
 is World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM linear acceleration in terms of any Frame (default
 is World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton14getCOMJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM Jacobian in terms of any Frame (default is World
 Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton20getCOMLinearJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM Linear Jacobian in terms of any Frame (default is
 World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton26getCOMJacobianSpatialDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM Jacobian spatial time derivative in terms of any
 Frame (default is World Frame).
 NOTE: Since this is a spatial time derivative, it is only meant to be used
 with spatial acceleration vectors. If you are using classical linear
 vectors, then use getCOMLinearJacobianDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics8Skeleton25getCOMLinearJacobianDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM Linear Jacobian time derivative in terms of any
 Frame (default is World Frame).
 NOTE: Since this is a classical time derivative, it is only meant to be
 used with classical acceleration vectors. If you are using spatial
 vectors, then use getCOMJacobianSpatialDeriv() instead.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics8SkeletonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Skeleton, ::boost::noncopyable, dart::dynamics::SkeletonPtr, ::boost::python::bases<dart::common::VersionCounter, dart::common::AddonManager, dart::dynamics::MetaSkeleton, dart::dynamics::SkeletonSpecializedFor<dart::dynamics::ShapeNode, dart::dynamics::EndEffector> > >("Skeleton", _ZN4dart8dynamics8SkeletonE_docstring, boost::python::no_init)
.def("getPtr", [](dart::dynamics::Skeleton *self) -> dart::dynamics::SkeletonPtr { return self->getPtr(); }, _ZN4dart8dynamics8Skeleton6getPtrEv_docstring)
.def("getSkeleton", [](dart::dynamics::Skeleton *self) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(); }, _ZN4dart8dynamics8Skeleton11getSkeletonEv_docstring)
.def("clone", [](const dart::dynamics::Skeleton *self) -> dart::dynamics::SkeletonPtr { return self->clone(); }, _ZNK4dart8dynamics8Skeleton5cloneEv_docstring)
.def("clone", [](const dart::dynamics::Skeleton *self, const std::string & cloneName) -> dart::dynamics::SkeletonPtr { return self->clone(cloneName); }, _ZNK4dart8dynamics8Skeleton5cloneERKSs_docstring, (::boost::python::arg("cloneName")))
.def("setConfiguration", [](dart::dynamics::Skeleton *self, const dart::dynamics::Skeleton::Configuration & configuration) -> void { return self->setConfiguration(configuration); }, _ZN4dart8dynamics8Skeleton16setConfigurationERKNS1_13ConfigurationE_docstring, (::boost::python::arg("configuration")))
.def("getConfiguration", [](const dart::dynamics::Skeleton *self) -> dart::dynamics::Skeleton::Configuration { return self->getConfiguration(); }, _ZNK4dart8dynamics8Skeleton16getConfigurationEi_docstring)
.def("getConfiguration", [](const dart::dynamics::Skeleton *self, int flags) -> dart::dynamics::Skeleton::Configuration { return self->getConfiguration(flags); }, _ZNK4dart8dynamics8Skeleton16getConfigurationEi_docstring, (::boost::python::arg("flags")))
.def("getConfiguration", [](const dart::dynamics::Skeleton *self, const std::vector<std::size_t> & indices) -> dart::dynamics::Skeleton::Configuration { return self->getConfiguration(indices); }, _ZNK4dart8dynamics8Skeleton16getConfigurationERKSt6vectorImSaImEEi_docstring, (::boost::python::arg("indices")))
.def("getConfiguration", [](const dart::dynamics::Skeleton *self, const std::vector<std::size_t> & indices, int flags) -> dart::dynamics::Skeleton::Configuration { return self->getConfiguration(indices, flags); }, _ZNK4dart8dynamics8Skeleton16getConfigurationERKSt6vectorImSaImEEi_docstring, (::boost::python::arg("indices"), ::boost::python::arg("flags")))
.def("setProperties", [](dart::dynamics::Skeleton *self, const dart::dynamics::Skeleton::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics8Skeleton13setPropertiesERKNS1_10PropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getSkeletonProperties", [](const dart::dynamics::Skeleton *self) -> const dart::dynamics::Skeleton::Properties & { return self->getSkeletonProperties(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton21getSkeletonPropertiesEv_docstring)
.def("setName", [](dart::dynamics::Skeleton *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics8Skeleton7setNameERKSs_docstring, (::boost::python::arg("_name")))
.def("getName", [](const dart::dynamics::Skeleton *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton7getNameEv_docstring)
.def("enableSelfCollision", [](dart::dynamics::Skeleton *self) -> void { return self->enableSelfCollision(); }, _ZN4dart8dynamics8Skeleton19enableSelfCollisionEb_docstring)
.def("enableSelfCollision", [](dart::dynamics::Skeleton *self, bool _enableAdjacentBodyCheck) -> void { return self->enableSelfCollision(_enableAdjacentBodyCheck); }, _ZN4dart8dynamics8Skeleton19enableSelfCollisionEb_docstring, (::boost::python::arg("_enableAdjacentBodyCheck")))
.def("disableSelfCollision", [](dart::dynamics::Skeleton *self) -> void { return self->disableSelfCollision(); }, _ZN4dart8dynamics8Skeleton20disableSelfCollisionEv_docstring)
.def("isEnabledSelfCollisionCheck", [](const dart::dynamics::Skeleton *self) -> bool { return self->isEnabledSelfCollisionCheck(); }, _ZNK4dart8dynamics8Skeleton27isEnabledSelfCollisionCheckEv_docstring)
.def("isEnabledAdjacentBodyCheck", [](const dart::dynamics::Skeleton *self) -> bool { return self->isEnabledAdjacentBodyCheck(); }, _ZNK4dart8dynamics8Skeleton26isEnabledAdjacentBodyCheckEv_docstring)
.def("setMobile", [](dart::dynamics::Skeleton *self, bool _isMobile) -> void { return self->setMobile(_isMobile); }, _ZN4dart8dynamics8Skeleton9setMobileEb_docstring, (::boost::python::arg("_isMobile")))
.def("isMobile", [](const dart::dynamics::Skeleton *self) -> bool { return self->isMobile(); }, _ZNK4dart8dynamics8Skeleton8isMobileEv_docstring)
.def("setTimeStep", [](dart::dynamics::Skeleton *self, double _timeStep) -> void { return self->setTimeStep(_timeStep); }, _ZN4dart8dynamics8Skeleton11setTimeStepEd_docstring, (::boost::python::arg("_timeStep")))
.def("getTimeStep", [](const dart::dynamics::Skeleton *self) -> double { return self->getTimeStep(); }, _ZNK4dart8dynamics8Skeleton11getTimeStepEv_docstring)
.def("setGravity", [](dart::dynamics::Skeleton *self, const Eigen::Vector3d & _gravity) -> void { return self->setGravity(_gravity); }, _ZN4dart8dynamics8Skeleton10setGravityERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_gravity")))
.def("getGravity", [](const dart::dynamics::Skeleton *self) -> const Eigen::Vector3d & { return self->getGravity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton10getGravityEv_docstring)
.def("incrementVersion", [](dart::dynamics::Skeleton *self) -> std::size_t { return self->incrementVersion(); }, _ZN4dart8dynamics8Skeleton16incrementVersionEv_docstring)
.def("getVersion", [](const dart::dynamics::Skeleton *self) -> std::size_t { return self->getVersion(); }, _ZNK4dart8dynamics8Skeleton10getVersionEv_docstring)
.def("getNumBodyNodes", [](const dart::dynamics::Skeleton *self) -> std::size_t { return self->getNumBodyNodes(); }, _ZNK4dart8dynamics8Skeleton15getNumBodyNodesEv_docstring)
.def("getNumRigidBodyNodes", [](const dart::dynamics::Skeleton *self) -> std::size_t { return self->getNumRigidBodyNodes(); }, _ZNK4dart8dynamics8Skeleton20getNumRigidBodyNodesEv_docstring)
.def("getNumSoftBodyNodes", [](const dart::dynamics::Skeleton *self) -> std::size_t { return self->getNumSoftBodyNodes(); }, _ZNK4dart8dynamics8Skeleton19getNumSoftBodyNodesEv_docstring)
.def("getNumTrees", [](const dart::dynamics::Skeleton *self) -> std::size_t { return self->getNumTrees(); }, _ZNK4dart8dynamics8Skeleton11getNumTreesEv_docstring)
.def("getRootBodyNode", [](dart::dynamics::Skeleton *self) -> dart::dynamics::BodyNode * { return self->getRootBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics8Skeleton15getRootBodyNodeEm_docstring)
.def("getRootBodyNode", [](dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> dart::dynamics::BodyNode * { return self->getRootBodyNode(_treeIdx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics8Skeleton15getRootBodyNodeEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getBodyNode", [](dart::dynamics::Skeleton *self, std::size_t _idx) -> dart::dynamics::BodyNode * { return self->getBodyNode(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics8Skeleton11getBodyNodeEm_docstring, (::boost::python::arg("_idx")))
.def("getSoftBodyNode", [](dart::dynamics::Skeleton *self, std::size_t _idx) -> dart::dynamics::SoftBodyNode * { return self->getSoftBodyNode(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::SoftBodyNodePtr> >(), _ZN4dart8dynamics8Skeleton15getSoftBodyNodeEm_docstring, (::boost::python::arg("_idx")))
.def("getBodyNode", [](dart::dynamics::Skeleton *self, const std::string & _name) -> dart::dynamics::BodyNode * { return self->getBodyNode(_name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics8Skeleton11getBodyNodeERKSs_docstring, (::boost::python::arg("_name")))
.def("getSoftBodyNode", [](dart::dynamics::Skeleton *self, const std::string & _name) -> dart::dynamics::SoftBodyNode * { return self->getSoftBodyNode(_name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::SoftBodyNodePtr> >(), _ZN4dart8dynamics8Skeleton15getSoftBodyNodeERKSs_docstring, (::boost::python::arg("_name")))
.def("getBodyNodes", [](dart::dynamics::Skeleton *self) -> const std::vector<dart::dynamics::BodyNode *> & { return self->getBodyNodes(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics8Skeleton12getBodyNodesEv_docstring)
.def("getIndexOf", [](const dart::dynamics::Skeleton *self, const dart::dynamics::BodyNode * _bn) -> std::size_t { return self->getIndexOf(_bn); }, _ZNK4dart8dynamics8Skeleton10getIndexOfEPKNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn")))
.def("getIndexOf", [](const dart::dynamics::Skeleton *self, const dart::dynamics::BodyNode * _bn, bool _warning) -> std::size_t { return self->getIndexOf(_bn, _warning); }, _ZNK4dart8dynamics8Skeleton10getIndexOfEPKNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("getTreeBodyNodes", [](dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const std::vector<dart::dynamics::BodyNode *> & { return self->getTreeBodyNodes(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics8Skeleton16getTreeBodyNodesEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getNumJoints", [](const dart::dynamics::Skeleton *self) -> std::size_t { return self->getNumJoints(); }, _ZNK4dart8dynamics8Skeleton12getNumJointsEv_docstring)
.def("getJoint", [](dart::dynamics::Skeleton *self, std::size_t _idx) -> dart::dynamics::Joint * { return self->getJoint(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), _ZN4dart8dynamics8Skeleton8getJointEm_docstring, (::boost::python::arg("_idx")))
.def("getJoint", [](dart::dynamics::Skeleton *self, const std::string & _name) -> dart::dynamics::Joint * { return self->getJoint(_name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), _ZN4dart8dynamics8Skeleton8getJointERKSs_docstring, (::boost::python::arg("_name")))
.def("getIndexOf", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Joint * _joint) -> std::size_t { return self->getIndexOf(_joint); }, _ZNK4dart8dynamics8Skeleton10getIndexOfEPKNS0_5JointEb_docstring, (::boost::python::arg("_joint")))
.def("getIndexOf", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Joint * _joint, bool _warning) -> std::size_t { return self->getIndexOf(_joint, _warning); }, _ZNK4dart8dynamics8Skeleton10getIndexOfEPKNS0_5JointEb_docstring, (::boost::python::arg("_joint"), ::boost::python::arg("_warning")))
.def("getNumDofs", [](const dart::dynamics::Skeleton *self) -> std::size_t { return self->getNumDofs(); }, _ZNK4dart8dynamics8Skeleton10getNumDofsEv_docstring)
.def("getDof", [](dart::dynamics::Skeleton *self, std::size_t _idx) -> dart::dynamics::DegreeOfFreedom * { return self->getDof(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), _ZN4dart8dynamics8Skeleton6getDofEm_docstring, (::boost::python::arg("_idx")))
.def("getDof", [](dart::dynamics::Skeleton *self, const std::string & _name) -> dart::dynamics::DegreeOfFreedom * { return self->getDof(_name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), _ZN4dart8dynamics8Skeleton6getDofERKSs_docstring, (::boost::python::arg("_name")))
.def("getDofs", [](dart::dynamics::Skeleton *self) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics8Skeleton7getDofsEv_docstring)
.def("getDofs", [](const dart::dynamics::Skeleton *self) -> std::vector<const dart::dynamics::DegreeOfFreedom *> { return self->getDofs(); }, _ZNK4dart8dynamics8Skeleton7getDofsEv_docstring)
.def("getIndexOf", [](const dart::dynamics::Skeleton *self, const dart::dynamics::DegreeOfFreedom * _dof) -> std::size_t { return self->getIndexOf(_dof); }, _ZNK4dart8dynamics8Skeleton10getIndexOfEPKNS0_15DegreeOfFreedomEb_docstring, (::boost::python::arg("_dof")))
.def("getIndexOf", [](const dart::dynamics::Skeleton *self, const dart::dynamics::DegreeOfFreedom * _dof, bool _warning) -> std::size_t { return self->getIndexOf(_dof, _warning); }, _ZNK4dart8dynamics8Skeleton10getIndexOfEPKNS0_15DegreeOfFreedomEb_docstring, (::boost::python::arg("_dof"), ::boost::python::arg("_warning")))
.def("getTreeDofs", [](dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getTreeDofs(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics8Skeleton11getTreeDofsEm_docstring, (::boost::python::arg("_treeIdx")))
.def("checkIndexingConsistency", [](const dart::dynamics::Skeleton *self) -> bool { return self->checkIndexingConsistency(); }, _ZNK4dart8dynamics8Skeleton24checkIndexingConsistencyEv_docstring)
.def("getIK", [](dart::dynamics::Skeleton *self) -> const std::shared_ptr<dart::dynamics::WholeBodyIK> & { return self->getIK(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics8Skeleton5getIKEb_docstring)
.def("getIK", [](dart::dynamics::Skeleton *self, bool _createIfNull) -> const std::shared_ptr<dart::dynamics::WholeBodyIK> & { return self->getIK(_createIfNull); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics8Skeleton5getIKEb_docstring, (::boost::python::arg("_createIfNull")))
.def("getOrCreateIK", [](dart::dynamics::Skeleton *self) -> const std::shared_ptr<dart::dynamics::WholeBodyIK> & { return self->getOrCreateIK(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics8Skeleton13getOrCreateIKEv_docstring)
.def("getIK", [](const dart::dynamics::Skeleton *self) -> std::shared_ptr<const dart::dynamics::WholeBodyIK> { return self->getIK(); }, _ZNK4dart8dynamics8Skeleton5getIKEv_docstring)
.def("createIK", [](dart::dynamics::Skeleton *self) -> const std::shared_ptr<dart::dynamics::WholeBodyIK> & { return self->createIK(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics8Skeleton8createIKEv_docstring)
.def("clearIK", [](dart::dynamics::Skeleton *self) -> void { return self->clearIK(); }, _ZN4dart8dynamics8Skeleton7clearIKEv_docstring)
.def("getNumMarkers", [](const dart::dynamics::Skeleton *self) -> std::size_t { return self->getNumMarkers(); }, _ZNK4dart8dynamics8Skeleton13getNumMarkersEv_docstring)
.def("getMarker", [](dart::dynamics::Skeleton *self, const std::string & _name) -> dart::dynamics::Marker * { return self->getMarker(_name); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics8Skeleton9getMarkerERKSs_docstring, (::boost::python::arg("_name")))
.def("getNumShapeNodes", [](const dart::dynamics::Skeleton *self) -> std::size_t { return self->getNumShapeNodes(); })
.def("getShapeNode", [](dart::dynamics::Skeleton *self, std::size_t index) -> dart::dynamics::ShapeNode * { return self->getShapeNode(index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), (::boost::python::arg("index")))
.def("getNumShapeNodes", [](const dart::dynamics::Skeleton *self, std::size_t treeIndex) -> std::size_t { return self->getNumShapeNodes(treeIndex); }, (::boost::python::arg("treeIndex")))
.def("getShapeNode", [](dart::dynamics::Skeleton *self, std::size_t treeIndex, std::size_t nodeIndex) -> dart::dynamics::ShapeNode * { return self->getShapeNode(treeIndex, nodeIndex); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), (::boost::python::arg("treeIndex"), ::boost::python::arg("nodeIndex")))
.def("getShapeNode", [](dart::dynamics::Skeleton *self, const std::string & name) -> dart::dynamics::ShapeNode * { return self->getShapeNode(name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >(), (::boost::python::arg("name")))
.def("getNumEndEffectors", [](const dart::dynamics::Skeleton *self) -> std::size_t { return self->getNumEndEffectors(); })
.def("getEndEffector", [](dart::dynamics::Skeleton *self, std::size_t index) -> dart::dynamics::EndEffector * { return self->getEndEffector(index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("index")))
.def("getNumEndEffectors", [](const dart::dynamics::Skeleton *self, std::size_t treeIndex) -> std::size_t { return self->getNumEndEffectors(treeIndex); }, (::boost::python::arg("treeIndex")))
.def("getEndEffector", [](dart::dynamics::Skeleton *self, std::size_t treeIndex, std::size_t nodeIndex) -> dart::dynamics::EndEffector * { return self->getEndEffector(treeIndex, nodeIndex); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("treeIndex"), ::boost::python::arg("nodeIndex")))
.def("getEndEffector", [](dart::dynamics::Skeleton *self, const std::string & name) -> dart::dynamics::EndEffector * { return self->getEndEffector(name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("name")))
.def("integratePositions", [](dart::dynamics::Skeleton *self, double _dt) -> void { return self->integratePositions(_dt); }, _ZN4dart8dynamics8Skeleton18integratePositionsEd_docstring, (::boost::python::arg("_dt")))
.def("integrateVelocities", [](dart::dynamics::Skeleton *self, double _dt) -> void { return self->integrateVelocities(_dt); }, (::boost::python::arg("_dt")))
.def("getPositionDifferences", [](const dart::dynamics::Skeleton *self, const Eigen::VectorXd & _q2, const Eigen::VectorXd & _q1) -> Eigen::VectorXd { return self->getPositionDifferences(_q2, _q1); }, _ZNK4dart8dynamics8Skeleton22getPositionDifferencesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES6__docstring, (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("getVelocityDifferences", [](const dart::dynamics::Skeleton *self, const Eigen::VectorXd & _dq2, const Eigen::VectorXd & _dq1) -> Eigen::VectorXd { return self->getVelocityDifferences(_dq2, _dq1); }, _ZNK4dart8dynamics8Skeleton22getVelocityDifferencesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES6__docstring, (::boost::python::arg("_dq2"), ::boost::python::arg("_dq1")))
.def("setState", [](dart::dynamics::Skeleton *self, const Eigen::VectorXd & _state) -> void { return self->setState(_state); }, _ZN4dart8dynamics8Skeleton8setStateERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_state")))
.def("getState", [](const dart::dynamics::Skeleton *self) -> Eigen::VectorXd { return self->getState(); }, _ZNK4dart8dynamics8Skeleton8getStateEv_docstring)
.def("getSupportPolygon", [](const dart::dynamics::Skeleton *self) -> const dart::math::SupportPolygon & { return self->getSupportPolygon(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton17getSupportPolygonEv_docstring)
.def("getSupportPolygon", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const dart::math::SupportPolygon & { return self->getSupportPolygon(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton17getSupportPolygonEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getSupportIndices", [](const dart::dynamics::Skeleton *self) -> const std::vector<std::size_t> & { return self->getSupportIndices(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton17getSupportIndicesEv_docstring)
.def("getSupportIndices", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const std::vector<std::size_t> & { return self->getSupportIndices(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton17getSupportIndicesEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getSupportAxes", [](const dart::dynamics::Skeleton *self) -> const std::pair<Eigen::Vector3d, Eigen::Vector3d> & { return self->getSupportAxes(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton14getSupportAxesEv_docstring)
.def("getSupportAxes", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const std::pair<Eigen::Vector3d, Eigen::Vector3d> & { return self->getSupportAxes(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton14getSupportAxesEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getSupportCentroid", [](const dart::dynamics::Skeleton *self) -> const Eigen::Vector2d & { return self->getSupportCentroid(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton18getSupportCentroidEv_docstring)
.def("getSupportCentroid", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const Eigen::Vector2d & { return self->getSupportCentroid(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton18getSupportCentroidEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getSupportVersion", [](const dart::dynamics::Skeleton *self) -> std::size_t { return self->getSupportVersion(); }, _ZNK4dart8dynamics8Skeleton17getSupportVersionEv_docstring)
.def("getSupportVersion", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> std::size_t { return self->getSupportVersion(_treeIdx); }, _ZNK4dart8dynamics8Skeleton17getSupportVersionEm_docstring, (::boost::python::arg("_treeIdx")))
.def("computeForwardKinematics", [](dart::dynamics::Skeleton *self) -> void { return self->computeForwardKinematics(); }, _ZN4dart8dynamics8Skeleton24computeForwardKinematicsEbbb_docstring)
.def("computeForwardKinematics", [](dart::dynamics::Skeleton *self, bool _updateTransforms) -> void { return self->computeForwardKinematics(_updateTransforms); }, _ZN4dart8dynamics8Skeleton24computeForwardKinematicsEbbb_docstring, (::boost::python::arg("_updateTransforms")))
.def("computeForwardKinematics", [](dart::dynamics::Skeleton *self, bool _updateTransforms, bool _updateVels) -> void { return self->computeForwardKinematics(_updateTransforms, _updateVels); }, _ZN4dart8dynamics8Skeleton24computeForwardKinematicsEbbb_docstring, (::boost::python::arg("_updateTransforms"), ::boost::python::arg("_updateVels")))
.def("computeForwardKinematics", [](dart::dynamics::Skeleton *self, bool _updateTransforms, bool _updateVels, bool _updateAccs) -> void { return self->computeForwardKinematics(_updateTransforms, _updateVels, _updateAccs); }, _ZN4dart8dynamics8Skeleton24computeForwardKinematicsEbbb_docstring, (::boost::python::arg("_updateTransforms"), ::boost::python::arg("_updateVels"), ::boost::python::arg("_updateAccs")))
.def("computeForwardDynamics", [](dart::dynamics::Skeleton *self) -> void { return self->computeForwardDynamics(); }, _ZN4dart8dynamics8Skeleton22computeForwardDynamicsEv_docstring)
.def("computeInverseDynamics", [](dart::dynamics::Skeleton *self) -> void { return self->computeInverseDynamics(); }, _ZN4dart8dynamics8Skeleton22computeInverseDynamicsEbbb_docstring)
.def("computeInverseDynamics", [](dart::dynamics::Skeleton *self, bool _withExternalForces) -> void { return self->computeInverseDynamics(_withExternalForces); }, _ZN4dart8dynamics8Skeleton22computeInverseDynamicsEbbb_docstring, (::boost::python::arg("_withExternalForces")))
.def("computeInverseDynamics", [](dart::dynamics::Skeleton *self, bool _withExternalForces, bool _withDampingForces) -> void { return self->computeInverseDynamics(_withExternalForces, _withDampingForces); }, _ZN4dart8dynamics8Skeleton22computeInverseDynamicsEbbb_docstring, (::boost::python::arg("_withExternalForces"), ::boost::python::arg("_withDampingForces")))
.def("computeInverseDynamics", [](dart::dynamics::Skeleton *self, bool _withExternalForces, bool _withDampingForces, bool _withSpringForces) -> void { return self->computeInverseDynamics(_withExternalForces, _withDampingForces, _withSpringForces); }, _ZN4dart8dynamics8Skeleton22computeInverseDynamicsEbbb_docstring, (::boost::python::arg("_withExternalForces"), ::boost::python::arg("_withDampingForces"), ::boost::python::arg("_withSpringForces")))
.def("clearConstraintImpulses", [](dart::dynamics::Skeleton *self) -> void { return self->clearConstraintImpulses(); }, _ZN4dart8dynamics8Skeleton23clearConstraintImpulsesEv_docstring)
.def("updateBiasImpulse", [](dart::dynamics::Skeleton *self, dart::dynamics::BodyNode * _bodyNode) -> void { return self->updateBiasImpulse(_bodyNode); }, _ZN4dart8dynamics8Skeleton17updateBiasImpulseEPNS0_8BodyNodeE_docstring, (::boost::python::arg("_bodyNode")))
.def("updateBiasImpulse", [](dart::dynamics::Skeleton *self, dart::dynamics::BodyNode * _bodyNode, const Eigen::Vector6d & _imp) -> void { return self->updateBiasImpulse(_bodyNode, _imp); }, _ZN4dart8dynamics8Skeleton17updateBiasImpulseEPNS0_8BodyNodeERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEE_docstring, (::boost::python::arg("_bodyNode"), ::boost::python::arg("_imp")))
.def("updateBiasImpulse", [](dart::dynamics::Skeleton *self, dart::dynamics::BodyNode * _bodyNode1, const Eigen::Vector6d & _imp1, dart::dynamics::BodyNode * _bodyNode2, const Eigen::Vector6d & _imp2) -> void { return self->updateBiasImpulse(_bodyNode1, _imp1, _bodyNode2, _imp2); }, _ZN4dart8dynamics8Skeleton17updateBiasImpulseEPNS0_8BodyNodeERKN5Eigen6MatrixIdLi6ELi1ELi0ELi6ELi1EEES3_S8__docstring, (::boost::python::arg("_bodyNode1"), ::boost::python::arg("_imp1"), ::boost::python::arg("_bodyNode2"), ::boost::python::arg("_imp2")))
.def("updateBiasImpulse", [](dart::dynamics::Skeleton *self, dart::dynamics::SoftBodyNode * _softBodyNode, dart::dynamics::PointMass * _pointMass, const Eigen::Vector3d & _imp) -> void { return self->updateBiasImpulse(_softBodyNode, _pointMass, _imp); }, _ZN4dart8dynamics8Skeleton17updateBiasImpulseEPNS0_12SoftBodyNodeEPNS0_9PointMassERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_softBodyNode"), ::boost::python::arg("_pointMass"), ::boost::python::arg("_imp")))
.def("updateVelocityChange", [](dart::dynamics::Skeleton *self) -> void { return self->updateVelocityChange(); }, _ZN4dart8dynamics8Skeleton20updateVelocityChangeEv_docstring)
.def("setImpulseApplied", [](dart::dynamics::Skeleton *self, bool _val) -> void { return self->setImpulseApplied(_val); }, _ZN4dart8dynamics8Skeleton17setImpulseAppliedEb_docstring, (::boost::python::arg("_val")))
.def("isImpulseApplied", [](const dart::dynamics::Skeleton *self) -> bool { return self->isImpulseApplied(); }, _ZNK4dart8dynamics8Skeleton16isImpulseAppliedEv_docstring)
.def("computeImpulseForwardDynamics", [](dart::dynamics::Skeleton *self) -> void { return self->computeImpulseForwardDynamics(); }, _ZN4dart8dynamics8Skeleton29computeImpulseForwardDynamicsEv_docstring)
.def("getJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobian(_node); }, _ZNK4dart8dynamics8Skeleton11getJacobianEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton11getJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobian(_node, _localOffset); }, _ZNK4dart8dynamics8Skeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getWorldJacobian(_node); }, _ZNK4dart8dynamics8Skeleton16getWorldJacobianEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getWorldJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getWorldJacobian(_node, _localOffset); }, _ZNK4dart8dynamics8Skeleton16getWorldJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node); }, _ZNK4dart8dynamics8Skeleton17getLinearJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getLinearJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton17getLinearJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _localOffset); }, _ZNK4dart8dynamics8Skeleton17getLinearJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton17getLinearJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::AngularJacobian { return self->getAngularJacobian(_node); }, _ZNK4dart8dynamics8Skeleton18getAngularJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getAngularJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobian(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton18getAngularJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node); }, _ZNK4dart8dynamics8Skeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _localOffset); }, _ZNK4dart8dynamics8Skeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node); }, _ZNK4dart8dynamics8Skeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _localOffset); }, _ZNK4dart8dynamics8Skeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node); }, _ZNK4dart8dynamics8Skeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _localOffset); }, _ZNK4dart8dynamics8Skeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_node); }, _ZNK4dart8dynamics8Skeleton23getAngularJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton23getAngularJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getMass", [](const dart::dynamics::Skeleton *self) -> double { return self->getMass(); }, _ZNK4dart8dynamics8Skeleton7getMassEv_docstring)
.def("getMassMatrix", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const Eigen::MatrixXd & { return self->getMassMatrix(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton13getMassMatrixEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getMassMatrix", [](const dart::dynamics::Skeleton *self) -> const Eigen::MatrixXd & { return self->getMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton13getMassMatrixEv_docstring)
.def("getAugMassMatrix", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const Eigen::MatrixXd & { return self->getAugMassMatrix(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton16getAugMassMatrixEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getAugMassMatrix", [](const dart::dynamics::Skeleton *self) -> const Eigen::MatrixXd & { return self->getAugMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton16getAugMassMatrixEv_docstring)
.def("getInvMassMatrix", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const Eigen::MatrixXd & { return self->getInvMassMatrix(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton16getInvMassMatrixEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getInvMassMatrix", [](const dart::dynamics::Skeleton *self) -> const Eigen::MatrixXd & { return self->getInvMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton16getInvMassMatrixEv_docstring)
.def("getInvAugMassMatrix", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const Eigen::MatrixXd & { return self->getInvAugMassMatrix(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton19getInvAugMassMatrixEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getInvAugMassMatrix", [](const dart::dynamics::Skeleton *self) -> const Eigen::MatrixXd & { return self->getInvAugMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton19getInvAugMassMatrixEv_docstring)
.def("getCoriolisForces", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const Eigen::VectorXd & { return self->getCoriolisForces(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton17getCoriolisForcesEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getCoriolisForces", [](const dart::dynamics::Skeleton *self) -> const Eigen::VectorXd & { return self->getCoriolisForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton17getCoriolisForcesEv_docstring)
.def("getGravityForces", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const Eigen::VectorXd & { return self->getGravityForces(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton16getGravityForcesEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getGravityForces", [](const dart::dynamics::Skeleton *self) -> const Eigen::VectorXd & { return self->getGravityForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton16getGravityForcesEv_docstring)
.def("getCoriolisAndGravityForces", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const Eigen::VectorXd & { return self->getCoriolisAndGravityForces(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton27getCoriolisAndGravityForcesEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getCoriolisAndGravityForces", [](const dart::dynamics::Skeleton *self) -> const Eigen::VectorXd & { return self->getCoriolisAndGravityForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton27getCoriolisAndGravityForcesEv_docstring)
.def("getExternalForces", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const Eigen::VectorXd & { return self->getExternalForces(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton17getExternalForcesEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getExternalForces", [](const dart::dynamics::Skeleton *self) -> const Eigen::VectorXd & { return self->getExternalForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton17getExternalForcesEv_docstring)
.def("getConstraintForces", [](const dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> const Eigen::VectorXd & { return self->getConstraintForces(_treeIdx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton19getConstraintForcesEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getConstraintForces", [](const dart::dynamics::Skeleton *self) -> const Eigen::VectorXd & { return self->getConstraintForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics8Skeleton19getConstraintForcesEv_docstring)
.def("clearExternalForces", [](dart::dynamics::Skeleton *self) -> void { return self->clearExternalForces(); }, _ZN4dart8dynamics8Skeleton19clearExternalForcesEv_docstring)
.def("clearInternalForces", [](dart::dynamics::Skeleton *self) -> void { return self->clearInternalForces(); }, _ZN4dart8dynamics8Skeleton19clearInternalForcesEv_docstring)
.def("notifyArticulatedInertiaUpdate", [](dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> void { return self->notifyArticulatedInertiaUpdate(_treeIdx); }, _ZN4dart8dynamics8Skeleton30notifyArticulatedInertiaUpdateEm_docstring, (::boost::python::arg("_treeIdx")))
.def("notifySupportUpdate", [](dart::dynamics::Skeleton *self, std::size_t _treeIdx) -> void { return self->notifySupportUpdate(_treeIdx); }, _ZN4dart8dynamics8Skeleton19notifySupportUpdateEm_docstring, (::boost::python::arg("_treeIdx")))
.def("getKineticEnergy", [](const dart::dynamics::Skeleton *self) -> double { return self->getKineticEnergy(); }, _ZNK4dart8dynamics8Skeleton16getKineticEnergyEv_docstring)
.def("getPotentialEnergy", [](const dart::dynamics::Skeleton *self) -> double { return self->getPotentialEnergy(); }, _ZNK4dart8dynamics8Skeleton18getPotentialEnergyEv_docstring)
.def("getCOM", [](const dart::dynamics::Skeleton *self) -> Eigen::Vector3d { return self->getCOM(); }, _ZNK4dart8dynamics8Skeleton6getCOMEPKNS0_5FrameE_docstring)
.def("getCOM", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _withRespectTo) -> Eigen::Vector3d { return self->getCOM(_withRespectTo); }, _ZNK4dart8dynamics8Skeleton6getCOMEPKNS0_5FrameE_docstring, (::boost::python::arg("_withRespectTo")))
.def("getCOMSpatialVelocity", [](const dart::dynamics::Skeleton *self) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(); }, _ZNK4dart8dynamics8Skeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring)
.def("getCOMSpatialVelocity", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(_relativeTo); }, _ZNK4dart8dynamics8Skeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMSpatialVelocity", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearVelocity", [](const dart::dynamics::Skeleton *self) -> Eigen::Vector3d { return self->getCOMLinearVelocity(); }, _ZNK4dart8dynamics8Skeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring)
.def("getCOMLinearVelocity", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo); }, _ZNK4dart8dynamics8Skeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearVelocity", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMSpatialAcceleration", [](const dart::dynamics::Skeleton *self) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(); }, _ZNK4dart8dynamics8Skeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring)
.def("getCOMSpatialAcceleration", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(_relativeTo); }, _ZNK4dart8dynamics8Skeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMSpatialAcceleration", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::Skeleton *self) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(); }, _ZNK4dart8dynamics8Skeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring)
.def("getCOMLinearAcceleration", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo); }, _ZNK4dart8dynamics8Skeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMJacobian", [](const dart::dynamics::Skeleton *self) -> dart::math::Jacobian { return self->getCOMJacobian(); }, _ZNK4dart8dynamics8Skeleton14getCOMJacobianEPKNS0_5FrameE_docstring)
.def("getCOMJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getCOMJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton14getCOMJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearJacobian", [](const dart::dynamics::Skeleton *self) -> dart::math::LinearJacobian { return self->getCOMLinearJacobian(); }, _ZNK4dart8dynamics8Skeleton20getCOMLinearJacobianEPKNS0_5FrameE_docstring)
.def("getCOMLinearJacobian", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getCOMLinearJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton20getCOMLinearJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMJacobianSpatialDeriv", [](const dart::dynamics::Skeleton *self) -> dart::math::Jacobian { return self->getCOMJacobianSpatialDeriv(); }, _ZNK4dart8dynamics8Skeleton26getCOMJacobianSpatialDerivEPKNS0_5FrameE_docstring)
.def("getCOMJacobianSpatialDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getCOMJacobianSpatialDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton26getCOMJacobianSpatialDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearJacobianDeriv", [](const dart::dynamics::Skeleton *self) -> dart::math::LinearJacobian { return self->getCOMLinearJacobianDeriv(); }, _ZNK4dart8dynamics8Skeleton25getCOMLinearJacobianDerivEPKNS0_5FrameE_docstring)
.def("getCOMLinearJacobianDeriv", [](const dart::dynamics::Skeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getCOMLinearJacobianDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics8Skeleton25getCOMLinearJacobianDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("resetUnion", [](dart::dynamics::Skeleton *self) -> void { return self->resetUnion(); })
.def("create", []() -> dart::dynamics::SkeletonPtr { return dart::dynamics::Skeleton::create(); })
.def("create", [](const std::string & _name) -> dart::dynamics::SkeletonPtr { return dart::dynamics::Skeleton::create(_name); }, (::boost::python::arg("_name")))
.def("create", [](const dart::dynamics::Skeleton::Properties & _properties) -> dart::dynamics::SkeletonPtr { return dart::dynamics::Skeleton::create(_properties); }, (::boost::python::arg("_properties")))
.staticmethod("create")
.def_readwrite("mUnionRootSkeleton", &dart::dynamics::Skeleton::mUnionRootSkeleton)
.def_readwrite("mUnionSize", &dart::dynamics::Skeleton::mUnionSize)
.def_readwrite("mUnionIndex", &dart::dynamics::Skeleton::mUnionIndex)
;
}

/* footer */
