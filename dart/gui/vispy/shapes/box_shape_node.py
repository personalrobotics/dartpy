# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

from vispy.scene.visuals import Box

from dart.gui.vispy.shapes.shape_node import ShapeNode


class BoxShapeNode(ShapeNode):
    def __init__(self, boxShape, parent=None):
        super().__init__(shape=boxShape, parent=parent)
        self.boxShape = boxShape
        self.shapeVisualNode = None
        self.refresh()

    def refresh(self):
        if self.shapeVisualNode:
            pass
        else:
            size = self.boxShape.getSize()
            color = self.visualAspect.getRGBA()

            self.shapeVisualNode = Box(
                parent=self,
                width=size[0], height=size[2], depth=size[1],
                width_segments=1,
                height_segments=1,
                depth_segments=1,
                planes=None,
                vertex_colors=None,
                face_colors=None,
                color=color.flat,
                edge_color="black")

        self.markFresh()
