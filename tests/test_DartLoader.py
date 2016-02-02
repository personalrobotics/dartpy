import dartpy
import os.path
import unittest

class DartLoaderTest(unittest.TestCase):
    ROOT_PATH = os.path.join(os.path.dirname(__file__), '..', 'test_resources')
    URDF_PATH = os.path.join(ROOT_PATH, 'r2d2.urdf')

    def test_parseSkeleton(self):
        local_retriever = dartpy.LocalResourceRetriever()
        loader = dartpy.DartLoader()

        skeleton = loader.parseSkeleton(self.URDF_PATH, local_retriever)

        self.assertIsNotNone(skeleton)
        self.assertEqual(skeleton.getNumBodyNodes(), 3)
        self.assertEqual(skeleton.getNumJoints(), 3)
        self.assertEqual(skeleton.getNumDofs(), 6)
        self.assertIsNotNone(skeleton.getRootBodyNode(0))
