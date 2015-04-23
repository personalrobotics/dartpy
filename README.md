# dartpy #

Python bindings for the Dynamic Animation and Robotics Toolkit

### Compiling from source ###

> :warning: Currently, dartpy is under heavy development.  The following instructions are primarily for developers.

First, compile or install:
* Boost.Python
* [Boost.Numpy][1]
* [Boost.Numpy/Eigen][2]
* DART

Then, follow standard `CMake` procedure to build the bindings:
```bash
$ mkdir build && cd build
$ cmake ..
$ make
$ make install
```

### Authors ###
@mkoval and @psigen

Developed at the Personal Robotics Laboratory at Carnegie Mellon.

[1]: https://github.com/personalrobotics/Boost.NumPy
[2]: https://github.com/personalrobotics/Boost.NumPy_Eigen
