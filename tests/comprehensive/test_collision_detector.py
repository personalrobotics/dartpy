import platform

import pytest
from dartpy.utils import DartLoader
from dartpy.simulation import World

from tests.util import get_asset_path


def test_parse_joint_properties():
    loader = DartLoader()
    robot = loader.parseSkeleton(get_asset_path('urdf/joint_properties.urdf'))
    assert robot is not None

    world = World.create()
    world.addSkeleton(robot)

    cs = world.getConstraintSolver()
    assert cs is not None

    cd = cs.getCollisionDetector()
    assert cd is not None

if __name__ == "__main__":
    pytest.main()
