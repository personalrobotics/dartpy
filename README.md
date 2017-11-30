# dartpy [![Build Status](https://travis-ci.org/personalrobotics/dartpy.svg?branch=master)](https://travis-ci.org/personalrobotics/dartpy) #

> :warning: **Warning:** `dartpy` is under heavy development. See the open
> issues on [`dartpy`](https://github.com/personalrobotics/dartpy/issues) and
> [Chimera](https://github.com/personalrobotics/chimera/issues) for insight
> into the current state of the project. Please report any issues you
> encounter on the appropriate repository.

Python bindings for [DART][dart], the Dynamic Animation and Robotics Toolkit.


## Dependencies

* Boost.Python
* [Chimera][chimera] (only for generating new bindings)
* [Boost.Numpy][boost_numpy] (build from source)
* [Boost.Numpy/Eigen][boost_numpy_eigen] (build from source)
* [DART][dart]

If [`wstool`][wstool] is available, you can use this `.rosinstall` file to
checkout Chimera, Boost.Python, Boost.NumPy/Eigen, and DART from source:
```yaml
- git:
    local-name: boost_numpy
    uri: https://github.com/personalrobotics/Boost.NumPy.git
    version: 0.0.1
- git:
    local-name: boost_numpy_eigen
    uri: https://github.com/personalrobotics/Boost.NumPy_Eigen.git
    version: 0.0.1
- git:
    local-name: chimera
    uri: https://github.com/personalrobotics/chimera.git
- git:
    local-name: dart
    uri: https://github.com/dartsim/dart.git
    version: release-6.3
- git:
    local-name: dartpy
    uri: https://github.com/personalrobotics/dartpy.git
```

If these packages are in a [Catkin workspace][catkin_workspace], you can follow
[these instructions][prl_dev] to use [`catkin-tools`][catkin_tools] to build
`dartpy` and its dependencies.

## Building

> :warning: **Warning:** The Boost.Python bindings generated by may not build
> in GCC. We suggest that you use [Clang][clang] 3.7 or above to avoid
> potential issues. If you are on [Ubuntu 14.04][ubuntu1404], builds of Clang
> are available in the [LLVM Apt repository][llvm_apt].

`dartpy` uses [CMake][cmake]. You should follow the standard CMake build
process:
```console
$ mkdir build
$ cd build
$ cmake ..
$ make
$ make install
```

If you are using `catkin_tools`, change your compiler to Clang 3.7 by running:
```console
$ catkin config -a --cmake-args -DCMAKE_C_COMPILER=$(which clang-3.7) -DCMAKE_CXX_COMPILER=$(which clang++-3.7)
```
Then, you follow the standard Catkin build process:
```console
$ catkin build
```

## Usage

Once `dartpy` is installed, you should be able to open a Python terminal and
`import dartpy`. Since `dartpy` is mostly auto-generated using Chimera, the
DART Python API mostly matches the DART C++ API.

There are a few exceptions:

### Template Functions

Template functions take the template parameters as regular arguments, e.g. the
C++ code:
```c++
auto joint = bodynode.moveTo<dart::dynamics::FreeJoint>(newParent);
```
becomes the Python code
```python
joint = bodynode.moveTo(dartpy.dynamics.FreeJoint, newParent)
```

Due to limitations of C++, this functionality requires the template arguments
to be registered with `dartpy`. Follow [the instructions below](#Template Member Functions)
to register your custom types for use as template arguments.


## Usage: Bindings for Extension Libraries

### Template Member Functions
DART uses template member functions to construct `Addon`, `BodyNode`, and
`Joint` instances. `dartpy` works around this limitation by wrapping these
functions for a *predefined set* of template arguments. You need to *register*
your classes with `dartpy` for these methods to work on custom types.

For custom `Joint`s:
```c++
JointTemplateRegistry::register_type<MyJoint1>();
JointTemplateRegistry::register_type<MyJoint2>();
// ...
```

For custom `BodyNode`s:
```c++
BodyNodeTemplateRegistry::register_type<MyBodyNode1>();
BodyNodeTemplateRegistry::register_type<MyBodyNode2>();
BodyNodeTemplateRegistry::register_type<MyBodyNode3>();
// ...
```

If you want to use the `createJointAndBodyNodePair()` method on `Skeleton`,
then you also need to register *all pairs* of `BodyNode` and `Joint` subclasses
that you intend to pass as template arguments. Typically, this includes:

1. each custom `BodyNode` paired with each custom `Joint`
2. each custom `BodyNode` paired with each default `Joint`
3. each default `BodyNode` paired with each custom` Joint`

`dartpy` provides the `register_all_types` helper function to register the
cartesian product of two lists of types. You can register all of the above
combinations using the three lines of code:
```c++
using MyJointTypes = typelist<MyJoint1, MyJoint2 /* ... */>;
using MyBodyNodeTypes = typelist<MyBodyNode1, MyBodyNode2, MyBodyNode3 /* ... */>;

JointAndNodeTemplateRegistry::register_all_types<MyJointTypes, AllNodeTypes>();
JointAndNodeTemplateRegistry::register_all_types<AllJointTypes, MyBodyNodeTypes>();
JointAndNodeTemplateRegistry::register_all_types<MyJointTypes, MyBodyNodeTypes>();
```

Note that this approach means that is is not generally possible to call
`createJointAndBodyNodePair` with `BodyNode` and `Joint` types defined in two
different extension libraries. If this is necessary, you need to modify one of
the libraries to call `register_type` on that pair of `BodyNode` and `Joint`
types.

### Authors ###

`dartpy` is developed by the [Personal Robotics Lab][prl] in the [Robotics
Institute][ri] at [Carnegie Mellon University][cmu] by [Michael Koval][mkoval]
([**@mkoval**][mkoval_github]) and [Pras Velagapudi][psigen]
([**@psigen**][psigen_github]).

## License

`dartpy` is licensed under [the BSD-2-Clause license](https://opensource.org/licenses/BSD-2-Clause). See [LICENSE](https://github.com/personalrobotics/dartpy/blob/master/LICENSE) for more information.


[boost_numpy]: https://github.com/personalrobotics/Boost.NumPy
[boost_numpy_eigen]: https://github.com/personalrobotics/Boost.NumPy_Eigen
[chimera]: https://github.com/personalrobotics/chimera
[cmake]: https://cmake.org/
[cmu]: http://www.cmu.edu
[dart]: http://dartsim.github.io/
[llvm_apt]: http://llvm.org/apt/
[mkoval]: http://mkoval.org
[mkoval_github]: https://github.com/mkoval
[prl]: https://personalrobotics.ri.cmu.edu
[prl_dev]: https://www.personalrobotics.ri.cmu.edu/software/development-environment
[psigen]: http://www.snowbotic.com/
[psigen_github]: http://github.com/psigen
[ri]: https://www.ri.cmu.edu
[ubuntu1404]: http://releases.ubuntu.com/14.04/
[wstool]: http://wiki.ros.org/wstool
[catkin_workspace]: http://wiki.ros.org/catkin/workspaces
[catkin_tools]: https://catkin-tools.readthedocs.org/en/latest/
