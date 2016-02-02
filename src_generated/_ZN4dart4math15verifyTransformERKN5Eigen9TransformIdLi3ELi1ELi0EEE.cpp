#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math15verifyTransformERKN5Eigen9TransformIdLi3ELi1ELi0EEE()
{
boost::python::def("verifyTransform", static_cast<bool (*)(const Eigen::Isometry3d &)>(&dart::math::verifyTransform), (::boost::python::arg("_T")))
;}

/* footer */
