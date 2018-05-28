from vispy.scene import Node


class FrameNode(Node):
    utilized: bool

    def __init__(self, frame, parent=None):
        self.index = 0
        super().__init__(parent=parent)
        if frame is None:
            raise ValueError("ShapeFrame is None.")
        self._frame = frame

        self.name = self._frame.getName()
        self.utilized = False

    def refresh(self):
        if self.utilized:
            return
        self.utilized = True
        print('A shape frame has been utilized')

    def wasUtilized(self):
        return self.utilized

    def clearUtilization(self):
        self.utilized = False