# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

import warnings

import numpy as np
import pyassimp as assimp
from vispy.geometry import MeshData
from vispy.scene.visuals import Mesh
from vispy.visuals.transforms import MatrixTransform

from dart.gui.vispy.refreshable_node import RefreshableNode


class AssimpMeshNode(RefreshableNode):
    def __init__(self, assimpMesh, assimpScene, parent=None):
        super().__init__(parent=parent)
        self.assimpMesh = assimpMesh
        self.assimpScene = assimpScene
        self.shapeVisualNode = None
        self._updateShapeData(firstTime=True)

    def refresh(self):
        self._updateShapeData(firstTime=False)
        self.markFresh()

    def _updateShapeData(self, firstTime):
        if firstTime:
            self.shapeVisualNode = Mesh(
                parent=self,
                vertices=self.assimpMesh.vertices,
                faces=self.assimpMesh.faces,
                # vertex_colors=self.assimpMesh.colors,
                shading='flat'
            )
            material = self.assimpScene.materials[self.assimpMesh.materialindex]

            if material.properties['ambient']:
                self.shapeVisualNode.ambient_light_color = material.properties['ambient']
            # if material.properties['shininess']:
            #     self.shapeVisualNode.shininess = material.properties['shininess']
            # if material.properties['diffuse']:
            #     self.shapeVisualNode.color = material.properties['diffuse']
        else:
            pass

