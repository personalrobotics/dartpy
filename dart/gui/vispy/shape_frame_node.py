# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

from dart import dynamics
from dart.gui.vispy.frame_node import FrameNode
from dart.gui.vispy.shapes.box_shape_node import BoxShapeNode
from dart.gui.vispy.shapes.mesh_shape_node import MeshShapeNode
from vispy.visuals.transforms import MatrixTransform


class ShapeFrameNode(FrameNode):
    def __init__(self, shapeFrame, parent=None):
        super().__init__(frame=shapeFrame, parent=parent)
        if shapeFrame is None:
            raise ValueError("ShapeFrame is None.")
        self.shapeFrame = shapeFrame

        self.shapeNode = None

        self.refresh()

    def getShapeFrame(self):
        return self.shapeFrame

    def refresh(self):
        self._refreshShapeNode(self.shapeFrame.getShape())
        self.markFresh()

    def _refreshShapeNode(self, shape):
        if self.shapeNode:
            # vispy uses row-major matrix while Eigen uses column-major matrix.
            self.shapeNode.transform.reset()
            self.shapeNode.transform.matrix = self.shapeFrame.getTransform().transpose()
            self.shapeNode.refresh()
        else:
            self._createShapeNode(shape)

    def _createShapeNode(self, shape):
        shapeType = shape.getType()
        if shapeType == dynamics.SphereShape.getStaticType():
            print(shapeType)
        elif shapeType == dynamics.BoxShape.getStaticType():
            self.shapeNode = BoxShapeNode(shape, parent=self)
        elif shapeType == dynamics.EllipsoidShape.getStaticType():
            print(shapeType)
        elif shapeType == dynamics.CylinderShape.getStaticType():
            print(shapeType)
        elif shapeType == dynamics.CapsuleShape.getStaticType():
            print(shapeType)
        elif shapeType == dynamics.ConeShape.getStaticType():
            print(shapeType)
        elif shapeType == dynamics.PlaneShape.getStaticType():
            print(shapeType)
        elif shapeType == dynamics.MultiSphereConvexHullShape.getStaticType():
            print(shapeType)
        elif shapeType == dynamics.MeshShape.getStaticType():
            self.shapeNode = MeshShapeNode(shape, parent=self)
        elif shapeType == dynamics.SoftMeshShape.getStaticType():
            print(shapeType)
        elif shapeType == dynamics.LineSegmentShape.getStaticType():
            print(shapeType)
        else:
            print("Unsupported shape!")

        self.shapeNode.transform = MatrixTransform()
