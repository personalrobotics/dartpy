import platform

import pytest

from dartpy.common import Uri

from tests.util import get_asset_path


def test_parse_skeleton_non_existing_path_returns_null():
    uri = Uri()
    assert uri.fromString("ftp://ftp.is.co.za/rfc/rfc1808.txt") is True


if __name__ == "__main__":
    pytest.main()
