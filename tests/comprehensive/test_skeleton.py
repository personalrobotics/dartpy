import pytest

from tests.util import create_three_link_robot, get_unit_x, TypeOfDof, get_unit_y, get_unit_z


def test_configurations():
    skel = create_three_link_robot(get_unit_x(), TypeOfDof.DOF_X, get_unit_y(), TypeOfDof.DOF_Y, get_unit_z(), TypeOfDof.DOF_Z)
    assert skel is not None


if __name__ == "__main__":
    pytest.main()
