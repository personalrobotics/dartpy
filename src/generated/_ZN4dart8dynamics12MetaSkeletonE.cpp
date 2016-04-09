#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics12MetaSkeletonE_docstring[] = R"CHIMERA_STRING( MetaSkeleton is a pure abstract base class that provides a common interface
 for obtaining data (such as Jacobians and Mass Matrices) from groups of
 BodyNodes.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton7setNameERKSs_docstring[] = R"CHIMERA_STRING( Set the name of this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton7getNameEv_docstring[] = R"CHIMERA_STRING( Get the name of this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton15getNumBodyNodesEv_docstring[] = R"CHIMERA_STRING( Get number of body nodes
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton11getBodyNodeEm_docstring[] = R"CHIMERA_STRING( Get BodyNode whose index is _idx
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton12getBodyNodesEv_docstring[] = R"CHIMERA_STRING( Get all the BodyNodes that are held by this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton10getIndexOfEPKNS0_8BodyNodeEb_docstring[] = R"CHIMERA_STRING( Get the index of a specific BodyNode within this ReferentialSkeleton.
 Returns INVALID_INDEX if it is not held in this ReferentialSkeleton.
 When _warning is true, a warning message will be printed if the BodyNode
 is not in the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton12getNumJointsEv_docstring[] = R"CHIMERA_STRING( Get number of Joints
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton8getJointEm_docstring[] = R"CHIMERA_STRING( Get Joint whose index is _idx
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton10getIndexOfEPKNS0_5JointEb_docstring[] = R"CHIMERA_STRING( Get the index of a specific Joint within this ReferentialSkeleton. Returns
 INVALID_INDEX if it is not held in this ReferentialSkeleton.
 When _warning is true, a warning message will be printed if the Joint is
 not in the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton10getNumDofsEv_docstring[] = R"CHIMERA_STRING( Return the number of degrees of freedom in this skeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton6getDofEm_docstring[] = R"CHIMERA_STRING( Get degree of freedom (aka generalized coordinate) whose index is _idx
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton7getDofsEv_docstring[] = R"CHIMERA_STRING( Get the vector of DegreesOfFreedom for this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton7getDofsEv_docstring[] = R"CHIMERA_STRING( Get a vector of const DegreesOfFreedom for this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton10getIndexOfEPKNS0_15DegreeOfFreedomEb_docstring[] = R"CHIMERA_STRING( Get the index of a specific DegreeOfFreedom within this
 ReferentialSkeleton. Returns INVALID_INDEX if it is not held in this
 ReferentialSkeleton. When _warning is true, a warning message will be
 printed if the DegreeOfFreedom is not in the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton10setCommandEmd_docstring[] = R"CHIMERA_STRING( Set a single command
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton10getCommandEm_docstring[] = R"CHIMERA_STRING( Get a single command
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton11setCommandsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set commands for all generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton11setCommandsERKSt6vectorImSaImEERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set commands for a subset of the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton11getCommandsEv_docstring[] = R"CHIMERA_STRING( Get commands for all generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton11getCommandsERKSt6vectorImSaImEE_docstring[] = R"CHIMERA_STRING( Get commands for a subset of the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton13resetCommandsEv_docstring[] = R"CHIMERA_STRING( Set all commands to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton11setPositionEmd_docstring[] = R"CHIMERA_STRING( Set the position of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton11getPositionEm_docstring[] = R"CHIMERA_STRING( Get the position of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the positions for all generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton12setPositionsERKSt6vectorImSaImEERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the positions for a subset of the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton12getPositionsEv_docstring[] = R"CHIMERA_STRING( Get the positions for all generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton12getPositionsERKSt6vectorImSaImEE_docstring[] = R"CHIMERA_STRING( Get the positions for a subset of the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton14resetPositionsEv_docstring[] = R"CHIMERA_STRING( Set all positions to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton21setPositionLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set the lower limit of a generalized coordinate's position
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton21getPositionLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get the lower limit of a generalized coordinate's position
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton21setPositionUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set the upper limit of a generalized coordainte's position
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton21getPositionUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get the upper limit of a generalized coordinate's position
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton11setVelocityEmd_docstring[] = R"CHIMERA_STRING( Set the velocity of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton11getVelocityEm_docstring[] = R"CHIMERA_STRING( Get the velocity of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton13setVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the velocities of all generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton13setVelocitiesERKSt6vectorImSaImEERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the velocities of a subset of the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton13getVelocitiesEv_docstring[] = R"CHIMERA_STRING( Get the velocities for all generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton13getVelocitiesERKSt6vectorImSaImEE_docstring[] = R"CHIMERA_STRING( Get the velocities for a subset of the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton15resetVelocitiesEv_docstring[] = R"CHIMERA_STRING( Set all velocities to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton21setVelocityLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set the lower limit of a generalized coordinate's velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton21getVelocityLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get the lower limit of a generalized coordinate's velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton21setVelocityUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set the upper limit of a generalized coordinate's velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton21getVelocityUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get the upper limit of a generalized coordinate's velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton15setAccelerationEmd_docstring[] = R"CHIMERA_STRING( Set the acceleration of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton15getAccelerationEm_docstring[] = R"CHIMERA_STRING( Get the acceleration of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton16setAccelerationsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the accelerations of all generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton16setAccelerationsERKSt6vectorImSaImEERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the accelerations of a subset of the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton16getAccelerationsEv_docstring[] = R"CHIMERA_STRING( Get the accelerations for all generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton16getAccelerationsERKSt6vectorImSaImEE_docstring[] = R"CHIMERA_STRING( Get the accelerations for a subset of the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton18resetAccelerationsEv_docstring[] = R"CHIMERA_STRING( Set all accelerations to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton25setAccelerationLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set the lower limit of a generalized coordinate's acceleration
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton25getAccelerationLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get the lower limit of a generalized coordinate's acceleration
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton25setAccelerationUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set the upper limit of a generalized coordinate's acceleration
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton25getAccelerationUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get the upper limit of a generalized coordinate's acceleration
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton8setForceEmd_docstring[] = R"CHIMERA_STRING( Set the force of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton8getForceEm_docstring[] = R"CHIMERA_STRING( Get the force of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton9setForcesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the forces of all generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton9setForcesERKSt6vectorImSaImEERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the forces of a subset of the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton9getForcesEv_docstring[] = R"CHIMERA_STRING( Get the forces for all generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton9getForcesERKSt6vectorImSaImEE_docstring[] = R"CHIMERA_STRING( Get the forces for a subset of the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton22resetGeneralizedForcesEv_docstring[] = R"CHIMERA_STRING( Set all forces of the generalized coordinates to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton18setForceLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set the lower limit of a generalized coordinate's force
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton18getForceLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get the lower limit of a generalized coordinate's force
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton18setForceUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set the upper limit of a generalized coordinate's force
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton18getForceUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get the upper limit of a generalized coordinate's force
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton18getVelocityChangesEv_docstring[] = R"CHIMERA_STRING( Get the velocity changes for all the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton26setJointConstraintImpulsesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the constraint impulses for the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton26getJointConstraintImpulsesEv_docstring[] = R"CHIMERA_STRING( Get the constraint impulses for the generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton11getJacobianEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting the origin of a BodyNode. The Jacobian
 is expressed in the Frame of the BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton11getJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting the origin of a BodyNode. You can
 specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. The Jacobian is expressed
 in the Frame of the BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. You can specify a
 coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton16getWorldJacobianEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting the origin of a BodyNode. The Jacobian
 is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton16getWorldJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. The Jacobian is expressed
 in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton17getLinearJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian targeting the origin of a BodyNode. You can
 specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton17getLinearJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian targeting an offset in a BodyNode. The _offset is
 expected in coordinates of the BodyNode Frame. You can specify a
 coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton18getAngularJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the angular Jacobian of a BodyNode. You can specify a coordinate Frame
 to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin of a
 BodyNode. The Jacobian is expressed in the Frame of the BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin of a
 BodyNode. You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting an offset in a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 The Jacobian is expressed in the Frame of the BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting an offset in a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin of a
 BodyNode. The Jacobian is expressed in the World Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting the origin a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the spatial Jacobian time derivative targeting an offset in a
 BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian (classical) time derivative targeting the origin
 of a BodyNode. The _offset is expected in coordinates of the BodyNode
 Frame. You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the linear Jacobian (classical) time derivative targeting an offset in
 a BodyNode. The _offset is expected in coordinates of the BodyNode Frame.
 You can specify a coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton23getAngularJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the angular Jacobian time derivative of a BodyNode. You can specify a
 coordinate Frame to express the Jabocian in.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton7getMassEv_docstring[] = R"CHIMERA_STRING( Get the total mass of all BodyNodes in this MetaSkeleton. Note that
 for the ReferentialSkeleton extension of MetaSkeleton, this will be an
 O(n) operation, while the Skeleton extension will be O(1).
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton13getMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get the Mass Matrix of the MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton16getAugMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get augmented mass matrix of the skeleton. This matrix is used in
 ConstraintDynamics to compute constraint forces. The matrix is
 M + h*D + h*h*K where D is diagonal joint damping coefficient matrix, K is
 diagonal joint stiffness matrix, and h is simulation time step.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton16getInvMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get inverse of Mass Matrix of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton19getInvAugMassMatrixEv_docstring[] = R"CHIMERA_STRING( Get inverse of augmented Mass Matrix of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton17getCoriolisForcesEv_docstring[] = R"CHIMERA_STRING( Get Coriolis force vector of the MetaSkeleton's BodyNodes.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton16getGravityForcesEv_docstring[] = R"CHIMERA_STRING( Get gravity force vector of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton27getCoriolisAndGravityForcesEv_docstring[] = R"CHIMERA_STRING( Get combined vector of Coriolis force and gravity force of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton17getExternalForcesEv_docstring[] = R"CHIMERA_STRING( Get external force vector of the MetaSkeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton19getConstraintForcesEv_docstring[] = R"CHIMERA_STRING( Get constraint force vector.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton19clearExternalForcesEv_docstring[] = R"CHIMERA_STRING( Clear the external forces of the BodyNodes in this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12MetaSkeleton19clearInternalForcesEv_docstring[] = R"CHIMERA_STRING( Clear the internal forces of the BodyNodes in this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton16getKineticEnergyEv_docstring[] = R"CHIMERA_STRING( Get the kinetic energy of this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton18getPotentialEnergyEv_docstring[] = R"CHIMERA_STRING( Get the potential energy of this MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton6getCOMEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the MetaSkeleton's COM with respect to any Frame (default is World
 Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM spatial velocity in terms of any Frame (default is
 World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM linear velocity in terms of any Frame (default is
 World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM spatial acceleration in terms of any Frame (default
 is World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring[] = R"CHIMERA_STRING( Get the MetaSkeleton's COM linear acceleration in terms of any Frame
 (default is World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton14getCOMJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the MetaSkeleton's COM Jacobian in terms of any Frame (default is
 World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton20getCOMLinearJacobianEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the MetaSkeleton's COM Linear Jacobian in terms of any Frame (default is
 World Frame)
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton26getCOMJacobianSpatialDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM Jacobian spatial time derivative in terms of any
 Frame (default is World Frame).
 NOTE: Since this is a spatial time derivative, it is only meant to be used
 with spatial acceleration vectors. If you are using classical linear
 vectors, then use getCOMLinearJacobianDeriv() instead.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12MetaSkeleton25getCOMLinearJacobianDerivEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( Get the Skeleton's COM Linear Jacobian time derivative in terms of any
 Frame (default is World Frame).
 NOTE: Since this is a classical time derivative, it is only meant to be
 used with classical acceleration vectors. If you are using spatial
 vectors, then use getCOMJacobianSpatialDeriv() instead.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics12MetaSkeletonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::MetaSkeleton, ::boost::noncopyable, dart::dynamics::MetaSkeletonPtr, ::boost::python::bases<dart::common::Subject > >("MetaSkeleton", _ZN4dart8dynamics12MetaSkeletonE_docstring, boost::python::no_init)
.def("setName", [](dart::dynamics::MetaSkeleton *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics12MetaSkeleton7setNameERKSs_docstring, (::boost::python::arg("_name")))
.def("getName", [](const dart::dynamics::MetaSkeleton *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12MetaSkeleton7getNameEv_docstring)
.def("getNumBodyNodes", [](const dart::dynamics::MetaSkeleton *self) -> std::size_t { return self->getNumBodyNodes(); }, _ZNK4dart8dynamics12MetaSkeleton15getNumBodyNodesEv_docstring)
.def("getBodyNode", [](dart::dynamics::MetaSkeleton *self, std::size_t _idx) -> dart::dynamics::BodyNode * { return self->getBodyNode(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics12MetaSkeleton11getBodyNodeEm_docstring, (::boost::python::arg("_idx")))
.def("getBodyNodes", [](dart::dynamics::MetaSkeleton *self) -> const std::vector<dart::dynamics::BodyNode *> & { return self->getBodyNodes(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics12MetaSkeleton12getBodyNodesEv_docstring)
.def("getIndexOf", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::BodyNode * _bn) -> std::size_t { return self->getIndexOf(_bn); }, _ZNK4dart8dynamics12MetaSkeleton10getIndexOfEPKNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn")))
.def("getIndexOf", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::BodyNode * _bn, bool _warning) -> std::size_t { return self->getIndexOf(_bn, _warning); }, _ZNK4dart8dynamics12MetaSkeleton10getIndexOfEPKNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("getNumJoints", [](const dart::dynamics::MetaSkeleton *self) -> std::size_t { return self->getNumJoints(); }, _ZNK4dart8dynamics12MetaSkeleton12getNumJointsEv_docstring)
.def("getJoint", [](dart::dynamics::MetaSkeleton *self, std::size_t _idx) -> dart::dynamics::Joint * { return self->getJoint(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), _ZN4dart8dynamics12MetaSkeleton8getJointEm_docstring, (::boost::python::arg("_idx")))
.def("getIndexOf", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Joint * _joint) -> std::size_t { return self->getIndexOf(_joint); }, _ZNK4dart8dynamics12MetaSkeleton10getIndexOfEPKNS0_5JointEb_docstring, (::boost::python::arg("_joint")))
.def("getIndexOf", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Joint * _joint, bool _warning) -> std::size_t { return self->getIndexOf(_joint, _warning); }, _ZNK4dart8dynamics12MetaSkeleton10getIndexOfEPKNS0_5JointEb_docstring, (::boost::python::arg("_joint"), ::boost::python::arg("_warning")))
.def("getNumDofs", [](const dart::dynamics::MetaSkeleton *self) -> std::size_t { return self->getNumDofs(); }, _ZNK4dart8dynamics12MetaSkeleton10getNumDofsEv_docstring)
.def("getDof", [](dart::dynamics::MetaSkeleton *self, std::size_t _idx) -> dart::dynamics::DegreeOfFreedom * { return self->getDof(_idx); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), _ZN4dart8dynamics12MetaSkeleton6getDofEm_docstring, (::boost::python::arg("_idx")))
.def("getDofs", [](dart::dynamics::MetaSkeleton *self) -> const std::vector<dart::dynamics::DegreeOfFreedom *> & { return self->getDofs(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics12MetaSkeleton7getDofsEv_docstring)
.def("getDofs", [](const dart::dynamics::MetaSkeleton *self) -> std::vector<const dart::dynamics::DegreeOfFreedom *> { return self->getDofs(); }, _ZNK4dart8dynamics12MetaSkeleton7getDofsEv_docstring)
.def("getIndexOf", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::DegreeOfFreedom * _dof) -> std::size_t { return self->getIndexOf(_dof); }, _ZNK4dart8dynamics12MetaSkeleton10getIndexOfEPKNS0_15DegreeOfFreedomEb_docstring, (::boost::python::arg("_dof")))
.def("getIndexOf", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::DegreeOfFreedom * _dof, bool _warning) -> std::size_t { return self->getIndexOf(_dof, _warning); }, _ZNK4dart8dynamics12MetaSkeleton10getIndexOfEPKNS0_15DegreeOfFreedomEb_docstring, (::boost::python::arg("_dof"), ::boost::python::arg("_warning")))
.def("setCommand", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _command) -> void { return self->setCommand(_index, _command); }, _ZN4dart8dynamics12MetaSkeleton10setCommandEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_command")))
.def("getCommand", [](const dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getCommand(_index); }, _ZNK4dart8dynamics12MetaSkeleton10getCommandEm_docstring, (::boost::python::arg("_index")))
.def("setCommands", [](dart::dynamics::MetaSkeleton *self, const Eigen::VectorXd & _commands) -> void { return self->setCommands(_commands); }, _ZN4dart8dynamics12MetaSkeleton11setCommandsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_commands")))
.def("setCommands", [](dart::dynamics::MetaSkeleton *self, const std::vector<std::size_t> & _indices, const Eigen::VectorXd & _commands) -> void { return self->setCommands(_indices, _commands); }, _ZN4dart8dynamics12MetaSkeleton11setCommandsERKSt6vectorImSaImEERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_indices"), ::boost::python::arg("_commands")))
.def("getCommands", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::VectorXd { return self->getCommands(); }, _ZNK4dart8dynamics12MetaSkeleton11getCommandsEv_docstring)
.def("getCommands", [](const dart::dynamics::MetaSkeleton *self, const std::vector<std::size_t> & _indices) -> Eigen::VectorXd { return self->getCommands(_indices); }, _ZNK4dart8dynamics12MetaSkeleton11getCommandsERKSt6vectorImSaImEE_docstring, (::boost::python::arg("_indices")))
.def("resetCommands", [](dart::dynamics::MetaSkeleton *self) -> void { return self->resetCommands(); }, _ZN4dart8dynamics12MetaSkeleton13resetCommandsEv_docstring)
.def("setPosition", [](dart::dynamics::MetaSkeleton *self, std::size_t index, double _position) -> void { return self->setPosition(index, _position); }, _ZN4dart8dynamics12MetaSkeleton11setPositionEmd_docstring, (::boost::python::arg("index"), ::boost::python::arg("_position")))
.def("getPosition", [](const dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getPosition(_index); }, _ZNK4dart8dynamics12MetaSkeleton11getPositionEm_docstring, (::boost::python::arg("_index")))
.def("setPositions", [](dart::dynamics::MetaSkeleton *self, const Eigen::VectorXd & _positions) -> void { return self->setPositions(_positions); }, _ZN4dart8dynamics12MetaSkeleton12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("setPositions", [](dart::dynamics::MetaSkeleton *self, const std::vector<std::size_t> & _indices, const Eigen::VectorXd & _positions) -> void { return self->setPositions(_indices, _positions); }, _ZN4dart8dynamics12MetaSkeleton12setPositionsERKSt6vectorImSaImEERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_indices"), ::boost::python::arg("_positions")))
.def("getPositions", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::VectorXd { return self->getPositions(); }, _ZNK4dart8dynamics12MetaSkeleton12getPositionsEv_docstring)
.def("getPositions", [](const dart::dynamics::MetaSkeleton *self, const std::vector<std::size_t> & _indices) -> Eigen::VectorXd { return self->getPositions(_indices); }, _ZNK4dart8dynamics12MetaSkeleton12getPositionsERKSt6vectorImSaImEE_docstring, (::boost::python::arg("_indices")))
.def("resetPositions", [](dart::dynamics::MetaSkeleton *self) -> void { return self->resetPositions(); }, _ZN4dart8dynamics12MetaSkeleton14resetPositionsEv_docstring)
.def("setPositionLowerLimit", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _position) -> void { return self->setPositionLowerLimit(_index, _position); }, _ZN4dart8dynamics12MetaSkeleton21setPositionLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionLowerLimit", [](const dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getPositionLowerLimit(_index); }, _ZNK4dart8dynamics12MetaSkeleton21getPositionLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setPositionUpperLimit", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _position) -> void { return self->setPositionUpperLimit(_index, _position); }, _ZN4dart8dynamics12MetaSkeleton21setPositionUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionUpperLimit", [](const dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getPositionUpperLimit(_index); }, _ZNK4dart8dynamics12MetaSkeleton21getPositionUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("setVelocity", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _velocity) -> void { return self->setVelocity(_index, _velocity); }, _ZN4dart8dynamics12MetaSkeleton11setVelocityEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocity", [](const dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getVelocity(_index); }, _ZNK4dart8dynamics12MetaSkeleton11getVelocityEm_docstring, (::boost::python::arg("_index")))
.def("setVelocities", [](dart::dynamics::MetaSkeleton *self, const Eigen::VectorXd & _velocities) -> void { return self->setVelocities(_velocities); }, _ZN4dart8dynamics12MetaSkeleton13setVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_velocities")))
.def("setVelocities", [](dart::dynamics::MetaSkeleton *self, const std::vector<std::size_t> & _indices, const Eigen::VectorXd & _velocities) -> void { return self->setVelocities(_indices, _velocities); }, _ZN4dart8dynamics12MetaSkeleton13setVelocitiesERKSt6vectorImSaImEERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_indices"), ::boost::python::arg("_velocities")))
.def("getVelocities", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::VectorXd { return self->getVelocities(); }, _ZNK4dart8dynamics12MetaSkeleton13getVelocitiesEv_docstring)
.def("getVelocities", [](const dart::dynamics::MetaSkeleton *self, const std::vector<std::size_t> & _indices) -> Eigen::VectorXd { return self->getVelocities(_indices); }, _ZNK4dart8dynamics12MetaSkeleton13getVelocitiesERKSt6vectorImSaImEE_docstring, (::boost::python::arg("_indices")))
.def("resetVelocities", [](dart::dynamics::MetaSkeleton *self) -> void { return self->resetVelocities(); }, _ZN4dart8dynamics12MetaSkeleton15resetVelocitiesEv_docstring)
.def("setVelocityLowerLimit", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _velocity) -> void { return self->setVelocityLowerLimit(_index, _velocity); }, _ZN4dart8dynamics12MetaSkeleton21setVelocityLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityLowerLimit", [](dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getVelocityLowerLimit(_index); }, _ZN4dart8dynamics12MetaSkeleton21getVelocityLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setVelocityUpperLimit", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _velocity) -> void { return self->setVelocityUpperLimit(_index, _velocity); }, _ZN4dart8dynamics12MetaSkeleton21setVelocityUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityUpperLimit", [](dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getVelocityUpperLimit(_index); }, _ZN4dart8dynamics12MetaSkeleton21getVelocityUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("setAcceleration", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _acceleration) -> void { return self->setAcceleration(_index, _acceleration); }, _ZN4dart8dynamics12MetaSkeleton15setAccelerationEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAcceleration", [](const dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getAcceleration(_index); }, _ZNK4dart8dynamics12MetaSkeleton15getAccelerationEm_docstring, (::boost::python::arg("_index")))
.def("setAccelerations", [](dart::dynamics::MetaSkeleton *self, const Eigen::VectorXd & _accelerations) -> void { return self->setAccelerations(_accelerations); }, _ZN4dart8dynamics12MetaSkeleton16setAccelerationsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_accelerations")))
.def("setAccelerations", [](dart::dynamics::MetaSkeleton *self, const std::vector<std::size_t> & _indices, const Eigen::VectorXd & _accelerations) -> void { return self->setAccelerations(_indices, _accelerations); }, _ZN4dart8dynamics12MetaSkeleton16setAccelerationsERKSt6vectorImSaImEERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_indices"), ::boost::python::arg("_accelerations")))
.def("getAccelerations", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::VectorXd { return self->getAccelerations(); }, _ZNK4dart8dynamics12MetaSkeleton16getAccelerationsEv_docstring)
.def("getAccelerations", [](const dart::dynamics::MetaSkeleton *self, const std::vector<std::size_t> & _indices) -> Eigen::VectorXd { return self->getAccelerations(_indices); }, _ZNK4dart8dynamics12MetaSkeleton16getAccelerationsERKSt6vectorImSaImEE_docstring, (::boost::python::arg("_indices")))
.def("resetAccelerations", [](dart::dynamics::MetaSkeleton *self) -> void { return self->resetAccelerations(); }, _ZN4dart8dynamics12MetaSkeleton18resetAccelerationsEv_docstring)
.def("setAccelerationLowerLimit", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationLowerLimit(_index, _acceleration); }, _ZN4dart8dynamics12MetaSkeleton25setAccelerationLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationLowerLimit", [](const dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getAccelerationLowerLimit(_index); }, _ZNK4dart8dynamics12MetaSkeleton25getAccelerationLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setAccelerationUpperLimit", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationUpperLimit(_index, _acceleration); }, _ZN4dart8dynamics12MetaSkeleton25setAccelerationUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationUpperLimit", [](const dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getAccelerationUpperLimit(_index); }, _ZNK4dart8dynamics12MetaSkeleton25getAccelerationUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("setForce", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _force) -> void { return self->setForce(_index, _force); }, _ZN4dart8dynamics12MetaSkeleton8setForceEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForce", [](const dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getForce(_index); }, _ZNK4dart8dynamics12MetaSkeleton8getForceEm_docstring, (::boost::python::arg("_index")))
.def("setForces", [](dart::dynamics::MetaSkeleton *self, const Eigen::VectorXd & _forces) -> void { return self->setForces(_forces); }, _ZN4dart8dynamics12MetaSkeleton9setForcesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_forces")))
.def("setForces", [](dart::dynamics::MetaSkeleton *self, const std::vector<std::size_t> & _index, const Eigen::VectorXd & _forces) -> void { return self->setForces(_index, _forces); }, _ZN4dart8dynamics12MetaSkeleton9setForcesERKSt6vectorImSaImEERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_forces")))
.def("getForces", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::VectorXd { return self->getForces(); }, _ZNK4dart8dynamics12MetaSkeleton9getForcesEv_docstring)
.def("getForces", [](const dart::dynamics::MetaSkeleton *self, const std::vector<std::size_t> & _indices) -> Eigen::VectorXd { return self->getForces(_indices); }, _ZNK4dart8dynamics12MetaSkeleton9getForcesERKSt6vectorImSaImEE_docstring, (::boost::python::arg("_indices")))
.def("resetGeneralizedForces", [](dart::dynamics::MetaSkeleton *self) -> void { return self->resetGeneralizedForces(); }, _ZN4dart8dynamics12MetaSkeleton22resetGeneralizedForcesEv_docstring)
.def("setForceLowerLimit", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _force) -> void { return self->setForceLowerLimit(_index, _force); }, _ZN4dart8dynamics12MetaSkeleton18setForceLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceLowerLimit", [](const dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getForceLowerLimit(_index); }, _ZNK4dart8dynamics12MetaSkeleton18getForceLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setForceUpperLimit", [](dart::dynamics::MetaSkeleton *self, std::size_t _index, double _force) -> void { return self->setForceUpperLimit(_index, _force); }, _ZN4dart8dynamics12MetaSkeleton18setForceUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceUpperLimit", [](const dart::dynamics::MetaSkeleton *self, std::size_t _index) -> double { return self->getForceUpperLimit(_index); }, _ZNK4dart8dynamics12MetaSkeleton18getForceUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("getVelocityChanges", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::VectorXd { return self->getVelocityChanges(); }, _ZNK4dart8dynamics12MetaSkeleton18getVelocityChangesEv_docstring)
.def("setJointConstraintImpulses", [](dart::dynamics::MetaSkeleton *self, const Eigen::VectorXd & _impulses) -> void { return self->setJointConstraintImpulses(_impulses); }, _ZN4dart8dynamics12MetaSkeleton26setJointConstraintImpulsesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_impulses")))
.def("getJointConstraintImpulses", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::VectorXd { return self->getJointConstraintImpulses(); }, _ZNK4dart8dynamics12MetaSkeleton26getJointConstraintImpulsesEv_docstring)
.def("getJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobian(_node); }, _ZNK4dart8dynamics12MetaSkeleton11getJacobianEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton11getJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobian(_node, _localOffset); }, _ZNK4dart8dynamics12MetaSkeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobian(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton11getJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getWorldJacobian(_node); }, _ZNK4dart8dynamics12MetaSkeleton16getWorldJacobianEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getWorldJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getWorldJacobian(_node, _localOffset); }, _ZNK4dart8dynamics12MetaSkeleton16getWorldJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node); }, _ZNK4dart8dynamics12MetaSkeleton17getLinearJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getLinearJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton17getLinearJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _localOffset); }, _ZNK4dart8dynamics12MetaSkeleton17getLinearJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobian(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton17getLinearJacobianEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::AngularJacobian { return self->getAngularJacobian(_node); }, _ZNK4dart8dynamics12MetaSkeleton18getAngularJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getAngularJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobian(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton18getAngularJacobianEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node); }, _ZNK4dart8dynamics12MetaSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _localOffset); }, _ZNK4dart8dynamics12MetaSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobianSpatialDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianSpatialDeriv(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton23getJacobianSpatialDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node); }, _ZNK4dart8dynamics12MetaSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeE_docstring, (::boost::python::arg("_node")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _localOffset); }, _ZNK4dart8dynamics12MetaSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getJacobianClassicDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getJacobianClassicDeriv(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton23getJacobianClassicDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node); }, _ZNK4dart8dynamics12MetaSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _localOffset); }, _ZNK4dart8dynamics12MetaSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset")))
.def("getLinearJacobianDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const Eigen::Vector3d & _localOffset, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getLinearJacobianDeriv(_node, _localOffset, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton22getLinearJacobianDerivEPKNS0_12JacobianNodeERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_localOffset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_node); }, _ZNK4dart8dynamics12MetaSkeleton23getAngularJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node")))
.def("getAngularJacobianDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::JacobianNode * _node, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::AngularJacobian { return self->getAngularJacobianDeriv(_node, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton23getAngularJacobianDerivEPKNS0_12JacobianNodeEPKNS0_5FrameE_docstring, (::boost::python::arg("_node"), ::boost::python::arg("_inCoordinatesOf")))
.def("getMass", [](const dart::dynamics::MetaSkeleton *self) -> double { return self->getMass(); }, _ZNK4dart8dynamics12MetaSkeleton7getMassEv_docstring)
.def("getMassMatrix", [](const dart::dynamics::MetaSkeleton *self) -> const Eigen::MatrixXd & { return self->getMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12MetaSkeleton13getMassMatrixEv_docstring)
.def("getAugMassMatrix", [](const dart::dynamics::MetaSkeleton *self) -> const Eigen::MatrixXd & { return self->getAugMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12MetaSkeleton16getAugMassMatrixEv_docstring)
.def("getInvMassMatrix", [](const dart::dynamics::MetaSkeleton *self) -> const Eigen::MatrixXd & { return self->getInvMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12MetaSkeleton16getInvMassMatrixEv_docstring)
.def("getInvAugMassMatrix", [](const dart::dynamics::MetaSkeleton *self) -> const Eigen::MatrixXd & { return self->getInvAugMassMatrix(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12MetaSkeleton19getInvAugMassMatrixEv_docstring)
.def("getCoriolisForces", [](const dart::dynamics::MetaSkeleton *self) -> const Eigen::VectorXd & { return self->getCoriolisForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12MetaSkeleton17getCoriolisForcesEv_docstring)
.def("getGravityForces", [](const dart::dynamics::MetaSkeleton *self) -> const Eigen::VectorXd & { return self->getGravityForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12MetaSkeleton16getGravityForcesEv_docstring)
.def("getCoriolisAndGravityForces", [](const dart::dynamics::MetaSkeleton *self) -> const Eigen::VectorXd & { return self->getCoriolisAndGravityForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12MetaSkeleton27getCoriolisAndGravityForcesEv_docstring)
.def("getExternalForces", [](const dart::dynamics::MetaSkeleton *self) -> const Eigen::VectorXd & { return self->getExternalForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12MetaSkeleton17getExternalForcesEv_docstring)
.def("getConstraintForces", [](const dart::dynamics::MetaSkeleton *self) -> const Eigen::VectorXd & { return self->getConstraintForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12MetaSkeleton19getConstraintForcesEv_docstring)
.def("clearExternalForces", [](dart::dynamics::MetaSkeleton *self) -> void { return self->clearExternalForces(); }, _ZN4dart8dynamics12MetaSkeleton19clearExternalForcesEv_docstring)
.def("clearInternalForces", [](dart::dynamics::MetaSkeleton *self) -> void { return self->clearInternalForces(); }, _ZN4dart8dynamics12MetaSkeleton19clearInternalForcesEv_docstring)
.def("getKineticEnergy", [](const dart::dynamics::MetaSkeleton *self) -> double { return self->getKineticEnergy(); }, _ZNK4dart8dynamics12MetaSkeleton16getKineticEnergyEv_docstring)
.def("getPotentialEnergy", [](const dart::dynamics::MetaSkeleton *self) -> double { return self->getPotentialEnergy(); }, _ZNK4dart8dynamics12MetaSkeleton18getPotentialEnergyEv_docstring)
.def("getCOM", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::Vector3d { return self->getCOM(); }, _ZNK4dart8dynamics12MetaSkeleton6getCOMEPKNS0_5FrameE_docstring)
.def("getCOM", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _withRespectTo) -> Eigen::Vector3d { return self->getCOM(_withRespectTo); }, _ZNK4dart8dynamics12MetaSkeleton6getCOMEPKNS0_5FrameE_docstring, (::boost::python::arg("_withRespectTo")))
.def("getCOMSpatialVelocity", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(); }, _ZNK4dart8dynamics12MetaSkeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring)
.def("getCOMSpatialVelocity", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(_relativeTo); }, _ZNK4dart8dynamics12MetaSkeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMSpatialVelocity", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialVelocity(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton21getCOMSpatialVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearVelocity", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::Vector3d { return self->getCOMLinearVelocity(); }, _ZNK4dart8dynamics12MetaSkeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring)
.def("getCOMLinearVelocity", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo); }, _ZNK4dart8dynamics12MetaSkeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearVelocity", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearVelocity(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton20getCOMLinearVelocityEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMSpatialAcceleration", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(); }, _ZNK4dart8dynamics12MetaSkeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring)
.def("getCOMSpatialAcceleration", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(_relativeTo); }, _ZNK4dart8dynamics12MetaSkeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMSpatialAcceleration", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector6d { return self->getCOMSpatialAcceleration(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton25getCOMSpatialAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::MetaSkeleton *self) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(); }, _ZNK4dart8dynamics12MetaSkeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring)
.def("getCOMLinearAcceleration", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _relativeTo) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo); }, _ZNK4dart8dynamics12MetaSkeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo")))
.def("getCOMLinearAcceleration", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _relativeTo, const dart::dynamics::Frame * _inCoordinatesOf) -> Eigen::Vector3d { return self->getCOMLinearAcceleration(_relativeTo, _inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton24getCOMLinearAccelerationEPKNS0_5FrameES4__docstring, (::boost::python::arg("_relativeTo"), ::boost::python::arg("_inCoordinatesOf")))
.def("getCOMJacobian", [](const dart::dynamics::MetaSkeleton *self) -> dart::math::Jacobian { return self->getCOMJacobian(); }, _ZNK4dart8dynamics12MetaSkeleton14getCOMJacobianEPKNS0_5FrameE_docstring)
.def("getCOMJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getCOMJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton14getCOMJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearJacobian", [](const dart::dynamics::MetaSkeleton *self) -> dart::math::LinearJacobian { return self->getCOMLinearJacobian(); }, _ZNK4dart8dynamics12MetaSkeleton20getCOMLinearJacobianEPKNS0_5FrameE_docstring)
.def("getCOMLinearJacobian", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getCOMLinearJacobian(_inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton20getCOMLinearJacobianEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMJacobianSpatialDeriv", [](const dart::dynamics::MetaSkeleton *self) -> dart::math::Jacobian { return self->getCOMJacobianSpatialDeriv(); }, _ZNK4dart8dynamics12MetaSkeleton26getCOMJacobianSpatialDerivEPKNS0_5FrameE_docstring)
.def("getCOMJacobianSpatialDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::Jacobian { return self->getCOMJacobianSpatialDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton26getCOMJacobianSpatialDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
.def("getCOMLinearJacobianDeriv", [](const dart::dynamics::MetaSkeleton *self) -> dart::math::LinearJacobian { return self->getCOMLinearJacobianDeriv(); }, _ZNK4dart8dynamics12MetaSkeleton25getCOMLinearJacobianDerivEPKNS0_5FrameE_docstring)
.def("getCOMLinearJacobianDeriv", [](const dart::dynamics::MetaSkeleton *self, const dart::dynamics::Frame * _inCoordinatesOf) -> dart::math::LinearJacobian { return self->getCOMLinearJacobianDeriv(_inCoordinatesOf); }, _ZNK4dart8dynamics12MetaSkeleton25getCOMLinearJacobianDerivEPKNS0_5FrameE_docstring, (::boost::python::arg("_inCoordinatesOf")))
;
}

/* footer */
