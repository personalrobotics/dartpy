# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

from vispy.scene.visuals import Sphere

from dart.gui.vispy.shapes.shape_node import ShapeNode


class SphereShapeNode(ShapeNode):
    def __init__(self, sphereShape, parent=None):
        super().__init__(shape=sphereShape, parent=parent)
        self.sphereShape = sphereShape
        self.shapeVisualNode = None
        self.refresh()

    def refresh(self):
        if self.shapeVisualNode:
            pass
        else:
            radius = self.sphereShape.getRadius()
            color = self.visualAspect.getRGBA().flat

            self.shapeVisualNode = Sphere(
                parent=self,
                radius=radius,
                color=color,
                method='ico',
                edge_color="black",
            )

        self.markFresh()
