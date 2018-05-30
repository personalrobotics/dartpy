# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------

import re
import weakref

from vispy.geometry import create_cylinder
from vispy.scene import visuals
from vispy.visuals import CompoundVisual, MeshVisual
from vispy.scene.visuals import create_visual_node


class CylinderVisual(CompoundVisual):
    """Visual that displays a box.

    Parameters
    ----------
    rows : int
        Number of rows.
    cols : int
        Number of columns.
    radius : tuple of float
        Cylinder radii.
    length : float
        Length of the cylinder.
    offset : bool
        Rotate each row by half a column.
    vertex_colors : ndarray
        Same as for `MeshVisual` class. See `create_plane` for vertex ordering.
    face_colors : ndarray
        Same as for `MeshVisual` class. See `create_plane` for vertex ordering.
    color : Color
        The `Color` to use when drawing the cube faces.
    edge_color : tuple or Color
        The `Color` to use when drawing the cube edges. If `None`, then no
        cube edges are drawn.
    """

    def __init__(self, radius, length, rows=8, cols=8,
                 vertex_colors=None, face_colors=None,
                 color=(0.5, 0.5, 1, 1), edge_color=None, **kwargs):
        mesh_data = create_cylinder(
            rows, cols, radius, length, offset=False)

        self._mesh = MeshVisual(
            mesh_data.get_vertices(),
            mesh_data.get_faces(),
            vertex_colors,
            face_colors,
            color
        )
        if edge_color:
            self._border = MeshVisual(
                mesh_data.get_vertices(),
                mesh_data.get_faces(),
                color=edge_color,
                mode='lines'
            )
        else:
            self._border = MeshVisual()

        CompoundVisual.__init__(self, [self._mesh, self._border], **kwargs)
        self.mesh.set_gl_state(polygon_offset_fill=True,
                               polygon_offset=(1, 1), depth_test=True)

    @property
    def mesh(self):
        """The vispy.visuals.MeshVisual that used to fill in.
        """
        return self._mesh

    @mesh.setter
    def mesh(self, mesh):
        self._mesh = mesh

    @property
    def border(self):
        """The vispy.visuals.MeshVisual that used to draw the border.
        """
        return self._border

    @border.setter
    def border(self, border):
        self._border = border


Cylinder = create_visual_node(CylinderVisual)
