from OpenGL.GLUT import *
from OpenGL.GL import *
from dartpy.utils import DartLoader

from examples.rigid_cubes.my_window import MyWindow


def main():
    urdf_loader = DartLoader()
    world = urdf_loader.parseWorld()
    window = MyWindow()

    # glutInit(sys.argv)
    #
    # # Create a double-buffer RGBA window.   (Single-buffering is possible.
    # # So is creating an index-mode window.)
    # glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH)
    #
    # # Create a window, setting its title
    # glutCreateWindow(b'interactive')
    #
    # # Set the display callback.  You can set other callbacks for keyboard and
    # # mouse events.
    # # glutDisplayFunc(display)
    #
    # # Run the GLUT main loop until the user closes the window.
    # glutMainLoop()


if __name__ == '__main__':
    main()
