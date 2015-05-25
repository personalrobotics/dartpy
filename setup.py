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


# Build extension library using CMake.
class cmake_build_ext(build_ext):
    """ Wrapper class that builds the extension using CMake. """
    def build_extension(self, ext):
        build_ext.build_extension(self, ext)

# Set up the python package wrapping this extension.
setup(
    name='dartpy',
    version='0.0.1',
    description=description,
    long_description=long_description,
    ext_modules=[Extension('dartpy')],
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
    install_requires=[
        'boost_python',
    ],
    cmdclass={'build_ext': cmake_build_ext},
)
