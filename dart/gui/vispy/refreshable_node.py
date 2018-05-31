# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

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