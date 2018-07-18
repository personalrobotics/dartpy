import os
import sys

import dart
from dart.gui.vispy.viewer import Viewer


def main():
    file_path = os.path.join(os.path.dirname(__file__), 'cubes.skel')
    world = dart.utils.skel.readWorld(file_path)
    # world = World.create()
    viewer = Viewer(world)

    if sys.flags.interactive == 0:
        viewer.app.run()


if __name__ == '__main__':
    main()
