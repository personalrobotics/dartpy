# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

from vispy.scene import Node

from dart.gui.vispy.skeleton_node import SkeletonNode


class WorldNode(Node):
    def __init__(self, world, parent=None):
        if world is None:
            raise ValueError("World is None.")
        self._world = world

        self._simulating = False
        self.num_steps_per_cycle = 10

        self.skeletonNameToNode = {}

        super().__init__(parent=parent)

        self.refresh()

    @property
    def world(self):
        return self._world

    def isSimulating(self):
        return self._simulating

    def refresh(self):
        self._markSkeletonNodesStale()

        if self._simulating:
            for _ in range(self.num_steps_per_cycle):
                self.world.step()

        self._refreshSkeletonNodes()

        self._removeStaleSkeletonNodes()

    def _markSkeletonNodesStale(self):
        for node in self.skeletonNameToNode.values():
            node.markStale()

    def _refreshSkeletonNodes(self):
        for i in range(self.world.getNumSkeletons()):
            skel = self.world.getSkeleton(i)
            name = skel.getName()  # assumed unique name
            if name in self.skeletonNameToNode:
                self.skeletonNameToNode[name].refresh()
            else:
                node = SkeletonNode(skel, parent=self)
                self.skeletonNameToNode[name] = node

    def _removeStaleSkeletonNodes(self):
        staleSkeletonNames = []
        for name, node in self.skeletonNameToNode.items():
            if node.isStale():
                staleSkeletonNames += [name]

        for name in staleSkeletonNames:
            node = self.skeletonNameToNode[name]
            node.parent = None
            del self.skeletonNameToNode[name]
