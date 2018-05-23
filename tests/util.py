import os
import os.path


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


def get_skeleton_list():
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
