# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

import warnings

import numpy as np
import pyassimp as assimp
from vispy.scene.visuals import Mesh
from vispy.visuals.transforms import MatrixTransform

from dart.gui.vispy.refreshable_node import RefreshableNode
from dart.gui.vispy.shapes.assimp_mesh_node import AssimpMeshNode


def _fromAssimpMatrixToNumpyMatrix(assimpMat):
    # vispy uses row-major matrix, but not sure which convention Assimp uses
    # TODO(JS): Needs verification
    mat = np.array([
        [assimpMat.a1, assimpMat.a2, assimpMat.a3, assimpMat.a4],
        [assimpMat.b1, assimpMat.b2, assimpMat.b3, assimpMat.b4],
        [assimpMat.c1, assimpMat.c2, assimpMat.c3, assimpMat.c4],
        [assimpMat.d1, assimpMat.d2, assimpMat.d3, assimpMat.d4]
    ])

    return mat


class AssimpNodeNode(RefreshableNode):
    def __init__(self, assimpNode, assimpScene, parent=None):
        super().__init__(parent=parent)
        self.assimpScene = assimpScene
        self.assimpNode = assimpNode
        self.shapeVisualNode = None
        self.assimpChildNodes = []
        self.assimpMeshes = []
        self.assimpMeshNodes = []
        self._updateShapeData(firstTime=True)

    def refresh(self):
        self._updateShapeData(firstTime=False)
        self.markFresh()

    def _updateShapeData(self, firstTime):
        if firstTime:
            assimpMatrix = self.assimpNode.contents.mTransformation
            self.transform = MatrixTransform()  # TODO(JS): Necessary?
            self.transform.matrix = _fromAssimpMatrixToNumpyMatrix(assimpMatrix)
            for mesh in self.assimpNode.meshes:
                self.assimpMeshNodes += [AssimpMeshNode(assimpMesh=mesh, assimpScene=self.assimpScene, parent=self)]
            for child in self.assimpNode.children:
                self.assimpChildNodes += [AssimpNodeNode(child, assimpScene=self.assimpScene, parent=self)]
        else:
            for assimpChildNode in self.assimpChildNodes:
                assimpChildNode.refresh()


