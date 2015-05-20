import dartpy
import numpy
import time

# Create the environment.
PACKAGE_NAME = 'herb_description'
PACKAGE_PATH = '/home/parallels/ros-herb/src/herb_description'

ROBOT_PATH \
    = '/home/parallels/ros-herb/devel/share/herb_description/robots/herb.urdf'
ROBOT_POSE = numpy.array([
    [ 0.   ,  1.   ,  0.   , -0.915],
    [-1.   ,  0.   , -0.   ,  1.405],
    [-0.   ,  0.   ,  1.   ,  0.   ],
    [ 0.   ,  0.   ,  0.   ,  1.   ]])
ROBOT_DOF_NAMES = [
    '/right/j1', '/right/j2', '/right/j3', '/right/j4',
    '/right/j5', '/right/j6', '/right/j7' ]

START_CONFIG = numpy.array([ 3.68, -1.9 ,  0.  ,  2.2 ,  0.  ,  0.  ,  0. ])
GOAL_CONFIG = numpy.array([
     4.73498745, -1.05417933, -0.26      ,  1.52308093,
    -0.44203032, -0.52187769, -2.63664543 ])

OBJECT_PATH = '../urdf/fuze_bottle.urdf'
OBJECT_POSE = numpy.eye(4)
OBJECT_POSE[0:3, 3] = [ -1.46405,  0.4322 ,  0.735 ]

urdf_loader = dartpy.DartLoader()
urdf_loader.add_package_directory(PACKAGE_NAME, PACKAGE_PATH)

# Load the robot.
skel = urdf_loader.parse_skeleton(ROBOT_PATH)
robot = skel.get_root_body_node(0)

# load the bottle.
bottle_skel = urdf_loader.parse_skeleton(OBJECT_PATH)
bottle_skel.get_root_body_node(0).moveTo(skel, None, dartpy.JointType.FREE)
bottle = skel.get_root_body_node(1)


"""
env.pose = ROBOT_POSE

robot_dofs = [ robot.get_dof_by_name(name) for name in ROBOT_DOF_NAMES ]

right_hand = robot.get_body_node_by_name('/right/hand_base')

bottle.pose = OBJECT_POSE

bottle.get_root_body_node(0).moveTo(right_hand, dartpy.JointType.WELD)
"""

"""
world = dartpy.World()
robot = world.get_skeleton_by_name(world.add_skeleton(robot))
bottle = world.get_skeleton_by_name(world.add_skeleton(bottle))
window = dartpy.SimWindow(1600, 1200, 'ADA')
window.world = world
"""

"""
dofs = [ robot.get_dof_by_name(name) for name in DOF_NAMES ]
weights = numpy.ones(6)
resolutions = numpy.array([ 0.02, 0.02, 0.02, 0.02, 0.02, 0.02 ])
q_start = numpy.array([[ 1.486,  -1.570,  0.000,  2.034,  4.818,  1.934 ]])
q_goal = numpy.array([ 0.43135194, -1.25267446,  0.70220488,  0.2222944 ,
                      -0.92543907, -1.33936598 ])


for waypoint1, waypoint2 in zip(path[:-1], path[1:]):
    for r in numpy.linspace(0., 1., 200):
        values = (1 - r) * waypoint1 + (r) * waypoint2

        for dof, value in zip(dofs, values):
            dof.position = value

        time.sleep(0.02)
"""
