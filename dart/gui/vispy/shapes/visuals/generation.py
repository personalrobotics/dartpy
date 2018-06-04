from vispy.geometry import create_cone, MeshData
import numpy as np


def create_disk(cols, radius=1.0):
    """Create a cone

    Parameters
    ----------
    cols : int
        Number of faces.
    radius : float
        Base cone radius.
    length : float
        Length of the cone.

    Returns
    -------
    cone : MeshData
        Vertices and faces computed for a cone surface.
    """
    return create_cone(cols, radius=radius, length=0.0)


def create_hemisphere(rows, cols, radius, offset, flip_z=False):
    if flip_z:
        mesh_data = create_hemisphere(rows, cols, radius, offset, False)
        vertices = mesh_data.get_vertices()
        vertices[:,2] = -vertices[:,2]
        mesh_data.set_vertices(vertices)
        return mesh_data

    vertices = np.empty((rows + 1, cols, 3), dtype=np.float32)

    # compute vertices
    phi = (np.arange(rows + 1) * np.pi / rows).reshape(rows + 1, 1)
    s = radius * np.sin(phi)
    vertices[..., 2] = radius * np.cos(phi)
    th = ((np.arange(cols) * 2 * np.pi / cols).reshape(1, cols))
    if offset:
        # rotate each row by 1/2 column
        th = th + ((np.pi / cols) * np.arange(rows + 1).reshape(rows + 1, 1))
    vertices[..., 0] = s * np.cos(th)
    vertices[..., 1] = s * np.sin(th)
    # remove redundant vertices from top and bottom
    vertices = vertices.reshape((rows + 1) * cols, 3)[cols - 1:-(cols - 1)]

    # compute faces
    faces = np.empty((rows * cols * 2, 3), dtype=np.uint32)
    row_template1 = (((np.arange(cols).reshape(cols, 1) +
                       np.array([[1, 0, 0]])) % cols) +
                     np.array([[0, 0, cols]]))
    row_template2 = (((np.arange(cols).reshape(cols, 1) +
                       np.array([[1, 0, 1]])) % cols) +
                     np.array([[0, cols, cols]]))
    for row in range(rows):
        start = row * cols * 2
        faces[start:start + cols] = row_template1 + row * cols
        faces[start + cols:start + (cols * 2)] = row_template2 + row * cols
    # cut off zero-area triangles at top and bottom
    faces = faces[cols:-cols]

    # adjust for redundant vertices that were removed from top and bottom
    vmin = cols - 1
    faces[faces < vmin] = vmin
    faces -= vmin
    vmax = vertices.shape[0] - 1
    faces[faces > vmax] = vmax

    return MeshData(vertices=vertices, faces=faces)
