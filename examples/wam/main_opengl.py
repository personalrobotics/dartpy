from OpenGL.GLUT import *
from dartpy.gui import SimWindow
from dartpy.simulation import World
from dartpy.utils import DartLoader


def main():
    root_path = os.path.join(os.path.dirname(__file__), 'assets')
    file_path = os.path.join(root_path, 'wam.urdf')
    urdfLoader = DartLoader()
    urdfLoader.addPackageDirectory("herb_description", root_path)
    wam = urdfLoader.parseSkeleton(file_path)

    world = World.create()
    world.addSkeleton(wam)

    window = SimWindow()
    window.setWorld(world)

    glutInit(sys.argv)
    window.initWindow(640, 480, "Rigid Cubes")
    glutMainLoop()


if __name__ == '__main__':
    main()
