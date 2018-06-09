import pytest
import dartpy

from tests.util import get_asset_path


def test_shape_is_accessible_from_shape_frame():
    world = dartpy.utils.skel.readWorld(get_asset_path('skel/cubes.skel'))
    assert world is not None
    assert hasattr(world, 'getNumSkeletons')
    assert world.getNumSkeletons() > 0

    assert hasattr(world, 'getSkeleton')
    skel = world.getSkeleton(0)
    assert skel is not None

    assert hasattr(skel, 'getJoints')
    joints = skel.getJoints()
    assert len(joints) is 1


if __name__ == "__main__":
    pytest.main()
