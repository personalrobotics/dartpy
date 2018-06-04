# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

from dart.gui.vispy.shapes.visuals.cylinder_visual import Cylinder
from dart.gui.vispy.shapes.shape_node import ShapeNode


class CylinderShapeNode(ShapeNode):
    def __init__(self, cylinderShape, parent=None):
        super().__init__(shape=cylinderShape, parent=parent)
        self.cylinderShape = cylinderShape
        self.shapeVisualNode = None
        self.refresh()

    def refresh(self):
        if self.shapeVisualNode:
            pass
        else:
            radius = self.cylinderShape.getRadius()
            length = self.cylinderShape.getHeight()
            color = self.visualAspect.getRGBA().flat

            self.shapeVisualNode = Cylinder(
                parent=self,
                radius=radius,
                length=length,
                color=color,
                # edge_color="black",
            )

        self.markFresh()
