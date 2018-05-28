from vispy import scene
from vispy.color import Color

from dart.gui.vispy.world_node import WorldNode


class Viewer(scene.SceneCanvas):
    def __init__(self, world, title='Noname', show=True):
        if world is None:
            raise ValueError("World is None.")

        self.initialized = False

        super().__init__(title=title, keys='interactive', size=(800, 550), show=show)

        self.unfreeze()

        self.viewBox = self.central_widget.add_view()
        self.viewBox.bgcolor = '#efefef'
        self.viewBox.camera = 'arcball'
        self.viewBox.padding = 0

        self.world = None
        self.worldNode = None

        self.setWorld(world)

        self.initialized = True

        self.freeze()

    def update(self, node=None):
        self._refreshWorldNode()
        super().update(node=node)

    def _refreshWorldNode(self):
        if not self.initialized:
            return

        if not self.worldNode:
            return

        self.worldNode.refresh()

    def setWorld(self, world):
        if self.world == world:
            return

        self.unfreeze()
        self.world = world
        self.freeze()

        if not self.world:
            return

        self.unfreeze()
        self.worldNode = WorldNode(self.world, parent=self.viewBox.scene)
        self.freeze()
