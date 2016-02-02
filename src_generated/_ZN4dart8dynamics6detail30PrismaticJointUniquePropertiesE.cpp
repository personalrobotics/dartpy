#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail30PrismaticJointUniquePropertiesE()
{
::boost::python::class_<dart::dynamics::detail::PrismaticJointUniqueProperties >("PrismaticJointUniqueProperties", boost::python::no_init)
.def(::boost::python::init<const Eigen::Vector3d &>((::boost::python::arg("_axis"))))
.def_readwrite("mAxis", &dart::dynamics::detail::PrismaticJointUniqueProperties::mAxis)
;
}

/* footer */
