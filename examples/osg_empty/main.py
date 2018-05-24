import dartpy as dart
from dartpy.simulation import World


def main():
    world = World.create()
    assert world is not None

    viewer = dart.gui.osg.Viewer()

    viewer.setUpViewInWindow(0, 0, 640, 480)

    viewer.run()


if __name__ == '__main__':
    main()
