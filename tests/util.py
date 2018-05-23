import os
import os.path
from enum import Enum

import numpy as np
from dartpy.dynamics import Skeleton
from dartpy.utils import DartLoader

TypeOfDof = Enum('TypeOfDof', 'DOF_X, DOF_Y, DOF_Z, DOF_ROLL, DOF_PITCH, DOF_YAW')


def _get_unit(index):
    unit_x = np.zeros(3)
    unit_x[index] = 1
    return unit_x


def get_unit_x():
    return _get_unit(0)


def get_unit_y():
    return _get_unit(0)


def get_unit_z():
    return _get_unit(0)


def get_current_file_path():
    return os.path.dirname(__file__)


def get_asset_path(rel_path, check_existing=False):
    if rel_path.startswith("/"):
        full_path = rel_path
    else:
        full_path = os.path.join(os.path.dirname(__file__), "assets", rel_path)
    if check_existing and not os.path.exists(full_path):
        raise IOError("File %s does not exist" % full_path)

    return full_path


def get_skeleton_paths():
    skeleton_list = []
    skeleton_list += ['skel/chainwhipa.skel']
    skeleton_list += ['skel/single_pendulum.skel']
    skeleton_list += ['skel/single_pendulum_euler_joint.skel']
    skeleton_list += ['skel/single_pendulum_ball_joint.skel']
    skeleton_list += ['skel/double_pendulum.skel']
    skeleton_list += ['skel/double_pendulum_euler_joint.skel']
    skeleton_list += ['skel/double_pendulum_ball_joint.skel']
    skeleton_list += ['skel/serial_chain_revolute_joint.skel']
    skeleton_list += ['skel/serial_chain_eulerxyz_joint.skel']
    skeleton_list += ['skel/serial_chain_ball_joint.skel']
    skeleton_list += ['skel/serial_chain_ball_joint_20.skel']
    skeleton_list += ['skel/serial_chain_ball_joint_40.skel']
    skeleton_list += ['skel/simple_tree_structure.skel']
    skeleton_list += ['skel/simple_tree_structure_euler_joint.skel']
    skeleton_list += ['skel/simple_tree_structure_ball_joint.skel']
    skeleton_list += ['skel/tree_structure.skel']
    skeleton_list += ['skel/tree_structure_euler_joint.skel']
    skeleton_list += ['skel/tree_structure_ball_joint.skel']
    # skeleton_list += ['skelbody1.skel']

    return skeleton_list


def get_skeletons():
    loader = DartLoader()
    paths = get_skeleton_paths()

    skeletons = []
    for path in paths:
        world = loader.parseWorld(path)
        for i in range(world.getNumSkeletons()):
            skeletons += [world.getSkeleton(i)]

    return skeletons


def create_three_link_robot(dim1, type1, dim2, type2, dim3, type3):
    skel = Skeleton.create()
    dim_ee = dim1
    return skel
