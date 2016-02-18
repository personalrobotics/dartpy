#!/usr/bin/env python
from __future__ import division, print_function
import dartpy
import numpy
import os.path


WORKSPACE_BASE = '/home/mkoval/storage/dartpy-ws'
ROBOT_POSE = numpy.array([
    [ -2.220e-16,   1.000e+00,   0.000e+00,   2.050e+00],
    [ -1.000e+00,  -2.220e-16,  -0.000e+00,   3.050e+00],
    [ -0.000e+00,   0.000e+00,   1.000e+00,   0.000e+00],
    [  0.000e+00,   0.000e+00,   0.000e+00,   1.000e+00]])
TABLE_POSE = numpy.array([
    [ 1.,  0.,  0.,  2.],
    [ 0.,  0., -1.,  2.],
    [ 0.,  1.,  0.,  0.],
    [ 0.,  0.,  0.,  1.]])
BOTTLE_POSE = numpy.array([
    [ 1.   ,  0.   ,  0.   ,  2.   ],
    [ 0.   ,  1.   ,  0.   ,  2.228],
    [ 0.   ,  0.   ,  1.   ,  0.745],
    [ 0.   ,  0.   ,  0.   ,  1.   ]])
LEFT_RELAXED_POSITIONS = numpy.array(
    [ 0.64, -1.76,  0.26,  1.96,  1.16,  0.87,  1.43])
RIGHT_RELAXED_POSITIONS = numpy.array(
    [5.65, -1.76, -0.26,  1.96, -1.15,  0.87, -1.43])
RIGHT_GRASP_POSITIONS = numpy.array(
    [4.82 , -0.607, -0.1  ,  1.409, -0.031,  0.657, -0.035])


def set_pose(skeleton, pose):
    # TODO: We should check that these exist and that the joint is a FreeJoint.
    bodynode = skeleton.getRootBodyNode(0)
    joint = bodynode.getParentJoint()
    joint.setRelativeTransform(pose)


def attach(skeleton, target_bodynode):
    if skeleton.getNumTrees() != 1:
        raise ValueError('Only one root BodyNode is supported.')

    source_bodynode = skeleton.getRootBodyNode(0)

    # TODO: Change the type of the root joint to a FixedJoint.
    if not source_bodynode.moveTo(target_bodynode):
        raise ValueError('Failed moving BodyNode.')


def merge(skeleton, other_skeleton):
    critera = dartpy.dynamics.Linkage.Critera()
    critera.mStart = None # start at the root

    for itree in xrange(other_skeleton.getNumTrees):
        root_bodynode = other_skeleton.getRootBodyNode(itree)
        if not root_bodynode.moveTo(skeleton, None):
            raise ValueError(
                'Failed moving BodyNode "{:s}" to Skeleton "{:s}".'.format(
                    root_bodynode.getName(), skeleton.getName()))

def compute_aabb(bodynode):
    # TODO: This should be the default argument (#7).
    bodynode_pose = bodynode.getTransform(dartpy.dynamics.Frame.World())

    min_corner = numpy.array([numpy.PINF] * 3)
    max_corner = numpy.array([numpy.NINF] * 3)

    # TODO: Replace this with a getCollisionShapes() iterable (#10).
    # TODO: This should iterate over ShapeNodes in the future.
    for i in xrange(bodynode.getNumCollisionShapes()):
        shape = bodynode.getCollisionShape(i)
        shape_pose = numpy.dot(bodynode_pose, shape.getLocalTransform())

        shape_extents = numpy.zeros(4)
        # TODO: This should return a ndarray one-dimensional array (#8).
        # TODO: This should use getBoundingBox instead (#9).
        shape_extents[0:3] = shape.getBoundingBoxDim().reshape(3) 
        # TODO: It's awkward to use homogeneous coordinates here.
        shape_extents[3] = 1.

        shape_min_corner = numpy.dot(shape_pose, -0.5 * shape_extents)[0:3]
        min_corner = numpy.minimum(min_corner, shape_min_corner)

        shape_max_corner = numpy.dot(shape_pose, 0.5 * shape_extents)[0:3]
        max_corner = numpy.maximum(max_corner, shape_max_corner)

    return (min_corner, max_corner)


# TODO: All of this should be replaced by the the CatkinResourceRetriever.
local_retriever = dartpy.common.LocalResourceRetriever()
package_retriever = dartpy.utils.PackageResourceRetriever(local_retriever)
package_retriever.addPackageDirectory('herb_description',
    os.path.join(WORKSPACE_BASE, 'devel', 'share', 'herb_description'))
package_retriever.addPackageDirectory('herb_description',
    os.path.join(WORKSPACE_BASE, 'src','herb_description'))
package_retriever.addPackageDirectory('pr_ordata',
    os.path.join(WORKSPACE_BASE, 'src','pr_ordata'))

urdf_loader = dartpy.utils.DartLoader()

print('Loading the table.')
table = urdf_loader.parseSkeleton(
    'package://pr_ordata/data/furniture/table.urdf', package_retriever)
if not table:
    raise ValueError('Failed loading table model.')

table_pose = numpy.array([
    [1., 0.,  0., 2.0],
    [0., 0., -1., 2.0],
    [0., 1.,  0., 0.0], 
    [0., 0.,  0., 1.0]])
set_pose(table, table_pose)

print('Loading a Fuze bottle.')
bottle = urdf_loader.parseSkeleton(
    'package://pr_ordata/data/objects/fuze_bottle.urdf', package_retriever)
if not bottle:
    raise ValueError('Failed loading bottle model.')

# TODO: This assumes that there is only one BodyNode in the Skeleton.
table_min, table_max = compute_aabb(table.getRootBodyNode(0))
table_center = (table_min + table_max) / 2.

bottle_pose = numpy.eye(4)
bottle_pose[0, 3] = table_center[0]
bottle_pose[1, 3] = table_center[1] + 0.3 * (table_max[1] - table_min[1])
bottle_pose[2, 3] = table_max[2] + 0.01
set_pose(bottle, bottle_pose)

print('Loading HERB.')
robot = urdf_loader.parseSkeleton(
    'package://herb_description/robots/herb.urdf', package_retriever)
if not robot:
    raise ValueError('Failed loading HERB model.')

robot_in_table = numpy.array([
    [0., 1., 0.,  0.000], 
    [0., 0., 1.,  0.000],
    [1., 0., 0., -1.025],
    [0., 0., 0.,  1.000]])
robot_pose = numpy.dot(table_pose, robot_in_table)
robot_pose[2, 3] = 0
set_pose(robot, robot_pose)

# TODO: The IncludeBoth_t() type-tag is awkward (#11).
# TODO: It's counter-intuitive that this includes j1, the parent of wam1.
left_arm = dartpy.dynamics.Chain.create(
    robot.getBodyNode('/left/wam1'), robot.getBodyNode('/left/wam7'),
    dartpy.dynamics.Chain.IncludeBoth_t(), 'left_arm')
right_arm = dartpy.dynamics.Chain.create(
    robot.getBodyNode('/right/wam1'), robot.getBodyNode('/right/wam7'),
    dartpy.dynamics.Chain.IncludeBoth_t(), 'right_arm')
head = dartpy.dynamics.Chain.create(
    robot.getBodyNode('/head/wam1'), robot.getBodyNode('/head/wam2'),
    dartpy.dynamics.Chain.IncludeBoth_t(), 'head')

# Move HERB to the home configuration.
left_arm.setPositions(LEFT_RELAXED_POSITIONS)
right_arm.setPositions(RIGHT_RELAXED_POSITIONS)

# Find an IK solution.
right_ee = right_arm.getBodyNode(right_arm.getNumBodyNodes() - 1)
right_ee_ik = right_ee.getOrCreateIK()
# TODO: I should call setDofs(right_arm.getDofs()), but I can't because
# support for std::vector is not finished.

# Find an IK solution.
right_ee_ik.getTarget().setRelativeTransform(numpy.array([
    [  1.091e-01,   3.633e-06,   9.940e-01,   1.771e+00],
    [  9.940e-01,   3.287e-06,  -1.091e-01,   2.253e+00],
    [ -3.664e-06,   1.000e+00,  -3.253e-06,   8.655e-01],
    [  0.000e+00,   0.000e+00,   0.000e+00,   1.000e+00]
]))

if not right_ee_ik.solve(False):
    raise ValueError('Failed to find IK solution.')
right_ee_positions = right_ee_ik.getPositions()

# TODO: Plan to right_ee_positions, instead of teleporting to them.
right_arm.setPositions(right_ee_positions)

# TODO: Close the hand.

# Grab the bottle
attach(bottle, right_ee)

"""
import aikido_rviz
aikido_rviz.init_node('dartpy_grasp_fuze_bottle')
viewer = aikido_rviz.InteractiveMarkerViewer('aikido_markers')
viewer.addSkeleton(robot)
viewer.addSkeleton(bottle)
viewer.addSkeleton(table)
viewer.update()
"""
