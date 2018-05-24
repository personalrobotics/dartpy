import dartpy as dart
from OpenGL.GLUT import *
from dartpy.gui import SimWindow


def main():
    file_path = os.path.join(os.path.dirname(__file__), 'cubes.skel')
    world = dart.utils.skel.readWorld(file_path)

    window = SimWindow()
    window.setWorld(world)

    glutInit(sys.argv)
    window.initWindow(640, 480, "Rigid Cubes")
    glutMainLoop()


if __name__ == '__main__':
    main()
