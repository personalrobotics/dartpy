# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

from dart.gui.vispy.shapes.visuals.cylinder_visual import Cylinder
from dart.gui.vispy.shapes.shape_node import ShapeNode


class CapsuleShapeNode(ShapeNode):
    def __init__(self, capsuleShape, parent=None):
        super().__init__(shape=capsuleShape, parent=parent)
        self.capsuleShape = capsuleShape
        self.shapeVisualNode = None
        self.refresh()

    def refresh(self):
        if self.shapeVisualNode:
            pass
        else:
            radius = self.capsuleShape.getRadius()
            length = self.capsuleShape.getHeight()
            color = self.visualAspect.getRGBA().flat

            # TODO(JS): Change this to Capsule
            self.shapeVisualNode = Cylinder(
                parent=self,
                radius=[radius, radius],
                length=length,
                color=color,
                edge_color="black",
            )

        self.markFresh()
