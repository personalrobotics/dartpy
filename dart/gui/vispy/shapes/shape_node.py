from dart.gui.vispy.refreshable_node import RefreshableNode


class ShapeNode(RefreshableNode):
    def __init__(self, shape, parent=None):
        super().__init__(parent=parent)
        if shape is None:
            raise ValueError("Shape is None.")
        self.shape = shape
        self.parentShapeFrameNode = parent
        self.shapeFrame = parent.getShapeFrame()
        self.visualAspect = self.shapeFrame.getVisualAspect()

    def refresh(self):
        self.markFresh()
