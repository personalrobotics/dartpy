# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------


class Material(object):
    def __init__(self, assimpMaterial):
        self.assimpMaterial = assimpMaterial
        self._ambient = self.assimpMaterial.properties['ambient']
        self._diffuse = self.assimpMaterial.properties['diffuse']
        self._emission = self.assimpMaterial.properties['emissive']
        self._shininess = self.assimpMaterial.properties['shininess']
        self._name = self.assimpMaterial.properties['name']
        if 'file' in self.assimpMaterial.properties:
            self._file = self.assimpMaterial.properties['file']
        else:
            self._file = None

    @property
    def ambient(self):
        return self._ambient

    @property
    def diffuse(self):
        return self._diffuse

    @property
    def emissive(self):
        return self._emissive

    @property
    def shininess(self):
        return self._shininess

