import os
import sys

import dart
from dart.gui.vispy.viewer import Viewer


def main():
    file_path = os.path.join(os.path.dirname(__file__), 'cubes.skel')
    world = dart.utils.skel.readWorld(file_path)
    # world = World.create()
    viewer = Viewer(world, show=False)

    # viewer.update()
    size = viewer.size
    image = viewer.getFrame()

    # Now, we display this image with matplotlib to check.
    import matplotlib.pyplot as plt
    plt.figure(figsize=(size[0] / 100., size[1] / 100.), dpi=100)
    plt.imshow(image, interpolation='none')
    plt.show()

    print(image)

    if sys.flags.interactive == 0:
        viewer.app.run()


if __name__ == '__main__':
    main()
