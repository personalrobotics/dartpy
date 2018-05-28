from dartpy.dynamics import SphereShape, BoxShape, EllipsoidShape, CylinderShape, CapsuleShape, ConeShape, PlaneShape, \
    MultiSphereConvexHullShape, SoftMeshShape, LineSegmentShape

from dart.gui.vispy.frame_node import FrameNode


class ShapeFrameNode(FrameNode):
    utilized: bool

    def __init__(self, shapeFrame, parent=None):
        self.index = 0
        super().__init__(frame=shapeFrame, parent=parent)
        if shapeFrame is None:
            raise ValueError("ShapeFrame is None.")
        self.shapeFrame = shapeFrame

        self.name = self.shapeFrame.getName()
        self.shapeNode = None
        self.utilized = False

    def refresh(self):
        if self.utilized:
            return
        self.utilized = True

        shape = self.shapeFrame.getShape()

        if shape is not None:
            self._refreshShapeNode(shape)
        print('A shape frame has been utilized')

    def _refreshShapeNode(self, shape):
        if self.shapeNode:
            self.shapeNode.refresh()
        else:
            self._createShapeNode(shape)

    def _createShapeNode(self, shape):
        type = shape.getType()
        if type is SphereShape.getStaticType():
            print("it's a sphere!")
        elif type is BoxShape.getStaticType():
            print("it's a sphere!")
        elif type is EllipsoidShape.getStaticType():
            print("it's a sphere!")
        elif type is CylinderShape.getStaticType():
            print("it's a sphere!")
        elif type is CapsuleShape.getStaticType():
            print("it's a sphere!")
        elif type is ConeShape.getStaticType():
            print("it's a sphere!")
        elif type is PlaneShape.getStaticType():
            print("it's a sphere!")
        elif type is MultiSphereConvexHullShape.getStaticType():
            print("it's a sphere!")
        elif type is SoftMeshShape.getStaticType():
            print("it's a sphere!")
        elif type is LineSegmentShape.getStaticType():
            print("it's a sphere!")
        else:
            print("Unsupported shape!")

    def wasUtilized(self):
        return self.utilized

    def clearUtilization(self):
        self.utilized = False

