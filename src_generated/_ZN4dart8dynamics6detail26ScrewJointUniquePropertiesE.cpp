#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail26ScrewJointUniquePropertiesE()
{
::boost::python::class_<dart::dynamics::detail::ScrewJointUniqueProperties >("ScrewJointUniqueProperties", boost::python::no_init)
.def(::boost::python::init<const Eigen::Vector3d &, double>((::boost::python::arg("_axis"), ::boost::python::arg("_pitch") = 1.000000e-01)))
.def_readwrite("mAxis", &dart::dynamics::detail::ScrewJointUniqueProperties::mAxis)
.def_readwrite("mPitch", &dart::dynamics::detail::ScrewJointUniqueProperties::mPitch)
;
}

/* footer */