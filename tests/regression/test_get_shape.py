import pytest
import dartpy

from tests.util import get_asset_path


def test_shape_is_accessible_from_shape_frame():
    world = dartpy.utils.skel.readWorld(get_asset_path('skel/cubes.skel'))
    assert world is not None
    assert world.getNumSkeletons() > 0

    skel = world.getSkeleton(0)
    assert skel is not None

    body = skel.getRootBodyNode()
    assert body is not None

    shapeNode = body.getShapeNode(0)
    assert shapeNode is not None

    shape = shapeNode.getShape()
    assert shape is not None


if __name__ == "__main__":
    pytest.main()
