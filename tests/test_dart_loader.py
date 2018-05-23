import dartpy as dart
import os.path

root_path = os.path.join(os.path.dirname(__file__), 'assets')
print(root_path)
urdf_path = os.path.join(root_path, 'ground.urdf')
print(urdf_path)


def test_parse_skeleton():
    loader = dart.utils.DartLoader()
    skeleton = loader.parseSkeleton(urdf_path)
    assert skeleton is not None
    assert skeleton.getRootBodyNode(0) is not None
