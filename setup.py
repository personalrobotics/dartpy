import contextlib
import os
from codecs import open  # To use a consistent encoding
from setuptools import setup, Extension
from setuptools.command.build_ext import build_ext

# Get the current directory path.
here = os.path.abspath(os.path.dirname(__file__))

# Extract the description from the top-level README.
with open(os.path.join(here, 'README.md'), encoding='utf-8') as f:
    long_description = f.read()
description = 'dartpy provides python bindings for DART.'


# See: http://www.astropython.org/snippet/2009/10/chdir-context-manager
@contextlib.contextmanager
def chdir(dirname=None):
    """ Context manager for changing directories. """
    curdir = os.getcwd()
    try:
        if dirname is not None:
            os.chdir(dirname)
        yield
    finally:
        os.chdir(curdir)


# See: https://github.com/libdynd/dynd-python/blob/master/setup.py
class cmake_build_ext(build_ext):
    """ Wrapper class that builds the extension using CMake. """
    def run(self):
        """ Build using CMake from the specified build directory. """
        self.mkpath(self.build_temp)
        with chdir(self.build_temp):
            self.spawn(['cmake', here])
            self.spawn(['make'])

# Set up the python package wrapping this extension.
setup(
    name='dart',
    version='0.0.1',
    description=description,
    long_description=long_description,
    ext_modules=[Extension('dart', sources=[])],
    url='https://github.com/personalrobotics/dartpy',
    author='Michael Koval',
    author_email='mkoval@cs.cmu.edu',
    license='BSD',
    keywords='dartsim robotics',
    classifiers=[
        'Development Status :: 1 - Planning',
        'License :: BSD',
        'Intended Audience :: Developers',
    ],
    # cmdclass={'build_ext': cmake_build_ext},
    install_requires=['numpy', 'vispy', 'PyQt5']
)
