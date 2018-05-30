# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

from dart.gui.vispy.refreshable_node import RefreshableNode


class FrameNode(RefreshableNode):
    def __init__(self, frame, parent=None):
        self.index = 0
        super().__init__(parent=parent)
        if frame is None:
            raise ValueError("ShapeFrame is None.")
        self._frame = frame

        self.name = self._frame.getName()

    def refresh(self):
        if self.utilized:
            return
        self.utilized = True
        print('A shape frame has been toRemove')
