#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math16transformInertiaERKN5Eigen9TransformIdLi3ELi1ELi0EEERKNS1_6MatrixIdLi6ELi6ELi0ELi6ELi6EEE()
{
boost::python::def("transformInertia", static_cast<dart::math::Inertia (*)(const Eigen::Isometry3d &, const dart::math::Inertia &)>(&dart::math::transformInertia), (::boost::python::arg("_T"), ::boost::python::arg("_AI")))
;}

/* footer */
