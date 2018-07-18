# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

import warnings
import pyassimp as assimp

import dartpy

from dart.gui.vispy.shapes.material import Material
from dart.gui.vispy.shapes.assimp_node_node import AssimpNodeNode
from dart.gui.vispy.shapes.shape_node import ShapeNode
from dart.gui.vispy.shapes.texture import Texture


class MeshShapeNode(ShapeNode):
    def __init__(self, meshShape, parent=None):
        super().__init__(shape=meshShape, parent=parent)
        self.meshShape = meshShape
        self.rootAssimpNodeNode = None
        # self.materials = []
        # self.textureImages = []
        self._updateShapeData(True)

    def __del__(self):
        if self.rootAssimpNodeNode:
            assimp.release(self.rootAssimpNodeNode)

    def refresh(self):
        self.markFresh()
        if self.meshShape.getDataVariance() == dartpy.dynamics.Shape.DataVariance.STATIC:
            return
        self._updateShapeData(False)

    def _updateShapeData(self, firstTime):
        if firstTime:
            uri = self.meshShape.getMeshUri2()
            retriever = self.meshShape.getResourceRetriever()
            meshPath = retriever.getFilePath(uri)
            try:
                scene = assimp.load(meshPath)
            except:
                # TODO(JS): Better error handling
                warnings.warn("Failed to load a mesh '{}'.".format(uri))
                return

            # Materials
            # for material in scene.materials:
            #     self.materials += [Material(material)]
            #
            # # Texture images
            # for texture in scene.textures:
            #     self.textures += [Texture(texture)]

            self.rootAssimpNodeNode = AssimpNodeNode(scene.rootnode, assimpScene=scene, parent=self)
        else:
            self.rootAssimpNodeNode.refresh()
