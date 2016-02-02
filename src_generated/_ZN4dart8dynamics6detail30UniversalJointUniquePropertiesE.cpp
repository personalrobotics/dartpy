#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail30UniversalJointUniquePropertiesE()
{
::boost::python::class_<dart::dynamics::detail::UniversalJointUniqueProperties >("UniversalJointUniqueProperties", boost::python::no_init)
.def(::boost::python::init<const Eigen::Vector3d &, const Eigen::Vector3d &>((::boost::python::arg("_axis1"), ::boost::python::arg("_axis2"))))
.def_readwrite("mAxis", &dart::dynamics::detail::UniversalJointUniqueProperties::mAxis)
;
}

/* footer */
