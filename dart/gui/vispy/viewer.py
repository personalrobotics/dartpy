# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

from vispy import app
from vispy import scene

from dart.gui.vispy.world_node import WorldNode


class Viewer(scene.SceneCanvas):
    def __init__(self, world, title='Noname', show=True):
        if world is None:
            raise ValueError("World is None.")

        super().__init__(title=title, keys='interactive', size=(800, 550), show=show)

        self.unfreeze()

        self.viewBox = self.central_widget.add_view()
        self.viewBox.bgcolor = '#efefef'
        self.viewBox.camera = 'arcball'
        self.viewBox.camera.fov = 50
        print('current distance: {}'.format(self.viewBox.camera.distance))
        self.viewBox.camera.distance = 1
        self.viewBox.padding = 0

        self.axis = scene.visuals.XYZAxis(parent=self.viewBox.scene)

        self.world = None
        self.worldNode = None

        self.freeze()

        self.setWorld(world)

        self.unfreeze()
        self.events.key_press.connect(self.on_key_press)

        self.timer = app.Timer('auto', self.on_timer)
        self.timer.start()
        self.freeze()

    def on_timer(self, _):
        self.update()

    def on_draw(self, event):
        self._refreshWorldNode()

        super().on_draw(event=event)

    def on_key_press(self, event):
        print('a key pressed')

    def _refreshWorldNode(self):
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
