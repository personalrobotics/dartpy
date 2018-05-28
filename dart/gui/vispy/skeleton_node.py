from collections import deque

from vispy.scene import Node

from dart.gui.vispy.shape_frame_node import ShapeFrameNode


class SkeletonNode(Node):
    def __init__(self, skeleton, parent=None):
        self.isModifyingShapeFrameNode = False
        self.index = 0
        super().__init__(parent=parent)
        if skeleton is None:
            raise ValueError("World is None.")
        self.skeleton = skeleton

        self.name = self.skeleton.getName()
        self.utilized = False

        self.shapeFrameNameToNode = {}
        self.shapeFrames = []

        self.refresh()

    def wasUtilized(self):
        return self.utilized

    def unutilize(self):
        self.utilized = False

    def refresh(self):
        if self.isModifyingShapeFrameNode:
            return

        self.utilized = True

        self._unutilizeAllChildren()

        self._refreshFrames()

        self._removeNotUtilizedChildren()

    def _unutilizeAllChildren(self):
        pass

    def _refreshFrames(self):
        for i in range(self.skeleton.getNumTrees()):
            self._refreshFrameNodeFromRoot(self.skeleton.getRootBodyNode(i))

    def _refreshFrameNodeFromRoot(self, rootBodyNode):
        frames = deque([rootBodyNode])
        # rootBodyNode.getChildFrames() # TODO(JS): Fix binding
        # rootBodyNode.getShapeNodes()  # TODO(JS): Fix binding
        while frames:
            nextBodyNode = frames.pop()

            for i in range(nextBodyNode.getNumShapeNodes()):
                shapeFrame = nextBodyNode.getShapeNode(i)
                if shapeFrame.isShapeFrame() and shapeFrame.hasVisualAspect():
                    self._refreshFrameNode(shapeFrame)

            for i in range(nextBodyNode.getNumChildBodyNodes()):
                childBodyNode = nextBodyNode.getChildBodyNode(i)
                frames.append(childBodyNode)

        # frames = deque([rootBodyNode])
        # while frames:
        #     nextFrame = frames.pop()
        #     if nextFrame.isShapeFrame():
        #         self._refreshFrameNode(nextFrame)
        #     for i in range(nextFrame.getNumShapeNodes()):
        #         shapeNode = nextFrame.getShapeNode(i)
        #         frames.append(shapeNode)

            # for shapeNode in nextFrame.getShapeNodes():
            #     pass
            # TODO(JS): Waiting for https://github.com/personalrobotics/dartpy/pull/70
            # for child in nextFrame.getChildFrames():
            #     frames.append(child)

    def _refreshFrameNode(self, shapeFrame):
        # TODO(JS): Name uniqueness is assumed, which isn't true. Needs correct equality checking for ShapeFrame.
        # TODO(JS): Use shape.getID() instead of name.
        if shapeFrame.getName() in self.shapeFrameNameToNode:
            self.shapeFrameNameToNode[shapeFrame.getName()].refresh()
        else:
            self.isModifyingShapeFrameNode = True
            node = ShapeFrameNode(shapeFrame, parent=self)
            self.shapeFrameNameToNode[shapeFrame.getName()] = node
            self.isModifyingShapeFrameNode = False

    def _removeNotUtilizedChildren(self):
        pass
