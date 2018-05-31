# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

from collections import deque
from dart.gui.vispy.refreshable_node import RefreshableNode
from dart.gui.vispy.shape_frame_node import ShapeFrameNode


class SkeletonNode(RefreshableNode):
    def __init__(self, skeleton, parent=None):
        super().__init__(parent=parent)
        if skeleton is None:
            raise ValueError("World is None.")
        self.skeleton = skeleton

        self.utilized = False

        self.shapeFrameNameToNode = {}

        self.refresh()

    def refresh(self):
        # self._markSkeletonNodesStale()
        self._refreshFrames()
        # self._removeStaleSkeletonNodes()
        self.markFresh()

    def _unutilizeAllChildren(self):
        pass
        # for shapeFrameNode in self.shapeFrameNameToNode.values():
        #     shapeFrameNode.markToRemove()

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
        if shapeFrame.getShape().getID() in self.shapeFrameNameToNode:
            self.shapeFrameNameToNode[shapeFrame.getShape().getID()].refresh()
        else:
            self.isModifyingShapeFrameNode = True
            node = ShapeFrameNode(shapeFrame, parent=self)
            self.shapeFrameNameToNode[shapeFrame.getShape().getID()] = node
            self.isModifyingShapeFrameNode = False

    def _removeNotUtilizedChildren(self):
        pass
        # unusedSkeletonNames = []
        # for skeletonName, skeletonNode in self.skeletonNameToNode.items():
        #     if not skeletonNode.needsToRemove():
        #         unusedSkeletonNames += [skeletonName]
        #
        # self.isModifyingSkeletonNode = True
        # for unusedSkeletonName in unusedSkeletonNames:
        #     skeletonNode = self.skeletonNameToNode[unusedSkeletonName]
        #     skeletonNode.parent = None
        #     del self.skeletonNameToNode[unusedSkeletonName]
        # self.isModifyingSkeletonNode = False
