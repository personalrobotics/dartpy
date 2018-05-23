import dartpy
import os.path
import unittest

# Convert everything to full-path
def get_full_path(model_path):
    if model_path.startswith("/"):
        full_path = model_path
    else:
        full_path = os.path.join(os.path.dirname(__file__), "assets", model_path)
    if not path.exists(full_path):
        raise IOError("File %s does not exist" % full_path)
    
    return full_path
