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

    assert hasattr(skel, 'getRootBodyNode')
    body = skel.getRootBodyNode()
    assert body is not None

    assert hasattr(body, 'getShapeNode')
    shapeNode = body.getShapeNode(0)
    assert shapeNode is not None

    assert hasattr(shapeNode, 'getShape')
    shape = shapeNode.getShape()
    assert shape is not None


if __name__ == "__main__":
    pytest.main()
