from OpenGL.GLUT import *
from dartpy.simulation import World
from dartpy.utils import DartLoader

from dart.gui.vispy.viewer import Viewer


def main():
    root_path = os.path.join(os.path.dirname(__file__), 'assets')
    file_path = os.path.join(root_path, 'wam.urdf')
    urdfLoader = DartLoader()
    urdfLoader.addPackageDirectory("herb_description", root_path)
    wam = urdfLoader.parseSkeleton(file_path)

    world = World.create()
    world.addSkeleton(wam)

    viewer = Viewer(world)

    if sys.flags.interactive == 0:
        viewer.app.run()


if __name__ == '__main__':
    main()
