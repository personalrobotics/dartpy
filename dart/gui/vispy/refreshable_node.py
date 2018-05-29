from vispy.scene import Node


class RefreshableNode(Node):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.stale = True

    def refresh(self):
        self.stale = False

    def isStale(self):
        return self.stale

    def isFresh(self):
        return not self.stale

    def markStale(self):
        self.stale = True

    def markFresh(self):
        self.stale = False