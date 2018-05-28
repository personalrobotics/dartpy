from vispy.color import Color
from vispy.scene import Node, Cube

from dart.gui.vispy.skeleton_node import SkeletonNode


class WorldNode(Node):
    def __init__(self, world, parent=None):
        self.index = 0
        super().__init__(parent=parent)

        if world is None:
            raise ValueError("World is None.")
        self._world = world

        self.name = self.world.getName()

        # For debug
        self.cube = Cube(size=1, color=Color("#3f51b5"), edge_color="black",
                         parent=self)

        self._simulating = False
        self.num_steps_per_cycle = 10

        self.isModifyingSkeletonNode = False

        self.skeletonNameToNode = {}

    @property
    def world(self):
        return self._world

    def isSimulating(self):
        return self._simulating

    def refresh(self):
        if self.isModifyingSkeletonNode:
            return

        self._unutilizeAllChildren()

        if self._simulating:
            for _ in range(self.num_steps_per_cycle):
                self.world.step()

        self._refreshSkeletons()

        self._removeNotUtilizedChildren()

    def _refreshSkeletons(self):
        for i in range(self.world.getNumSkeletons()):
            skeleton = self.world.getSkeleton(i)
            skeletonName = skeleton.getName()
            if skeletonName in self.skeletonNameToNode:
                self.skeletonNameToNode[skeletonName].refresh()
            else:
                self.isModifyingSkeletonNode = True
                node = SkeletonNode(skeleton, parent=self)
                self.skeletonNameToNode[skeletonName] = node
                self.isModifyingSkeletonNode = False

    def _unutilizeAllChildren(self):
        for skeletonNode in self.skeletonNameToNode.values():
            skeletonNode.unutilize()

    def _removeNotUtilizedChildren(self):
        unusedSkeletonNames = []
        for skeletonName, skeletonNode in self.skeletonNameToNode.items():
            if not skeletonNode.wasUtilized():
                unusedSkeletonNames += [skeletonName]

        self.isModifyingSkeletonNode = True
        for unusedSkeletonName in unusedSkeletonNames:
            skeletonNode = self.skeletonNameToNode[unusedSkeletonName]
            skeletonNode.parent = None
            del self.skeletonNameToNode[unusedSkeletonName]
        self.isModifyingSkeletonNode = False
