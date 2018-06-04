# -----------------------------------------------------------------------------
# Copyright (c) 2015-2018, The dartpy development contributors
# All Rights Reserved.
# Distributed under the BSD 2-Clause License. See LICENSE for more info.
# -----------------------------------------------------------------------------
import numpy as np
from dart.gui.vispy.shapes.visuals.generation import create_hemisphere
from vispy.geometry import create_cylinder
from vispy.scene.visuals import create_visual_node
from vispy.visuals import CompoundVisual, MeshVisual
from vispy.visuals.transforms import MatrixTransform


class CapsuleVisual(CompoundVisual):
    """Visual that displays a box.

    Parameters
    ----------
    rows : int
        Number of rows.
    cols : int
        Number of columns.
    radius : tuple of float
        Capsule radii.
    length : float
        Length of the capsule.
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

    def __init__(self, radius, length, rows=16, cols=16,
                 vertex_colors=None, face_colors=None,
                 color=(0.5, 0.5, 1, 1), edge_color=None, **kwargs):
        if type(radius) is not list: radius = [radius, radius]
        cylinder_mesh_data = create_cylinder(
            rows, cols, radius, length, offset=False)
        top_hemisphere_mesh_data = create_hemisphere(
            rows, cols, radius[1], offset=False, flip_z=False
        )
        bottom_hemisphere_mesh_data = create_hemisphere(
            rows, cols, radius[0], offset=False, flip_z=True
        )

        self._cylinder_mesh = MeshVisual(
            cylinder_mesh_data.get_vertices() + np.array([0, 0, -length * 0.5]),
            cylinder_mesh_data.get_faces(),
            vertex_colors,
            face_colors,
            color
        )
        self._top_hemisphere_mesh = MeshVisual(
            top_hemisphere_mesh_data.get_vertices() + np.array([0, 0, +length * 0.5]),
            top_hemisphere_mesh_data.get_faces(),
            vertex_colors,
            face_colors,
            color
        )
        self._bottom_hemisphere_mesh = MeshVisual(
            bottom_hemisphere_mesh_data.get_vertices() + np.array([0, 0, -length * 0.5]),
            bottom_hemisphere_mesh_data.get_faces(),
            vertex_colors,
            face_colors,
            color
        )
        if edge_color:
            self._border = MeshVisual(
                cylinder_mesh_data.get_vertices() + np.array([0, 0, -length * 0.5]),
                cylinder_mesh_data.get_faces(),
                color=edge_color,
                mode='lines'
            )
        else:
            self._border = MeshVisual()

        CompoundVisual.__init__(self, [self._cylinder_mesh, self._top_hemisphere_mesh, self._bottom_hemisphere_mesh,
                                       self._border], **kwargs)
        self.mesh.set_gl_state(polygon_offset_fill=True,
                               polygon_offset=(1, 1), depth_test=True)

    @property
    def mesh(self):
        """The vispy.visuals.MeshVisual that used to fill in.
        """
        return self._cylinder_mesh

    @mesh.setter
    def mesh(self, mesh):
        self._cylinder_mesh = mesh

    @property
    def border(self):
        """The vispy.visuals.MeshVisual that used to draw the border.
        """
        return self._border

    @border.setter
    def border(self, border):
        self._border = border


Capsule = create_visual_node(CapsuleVisual)
