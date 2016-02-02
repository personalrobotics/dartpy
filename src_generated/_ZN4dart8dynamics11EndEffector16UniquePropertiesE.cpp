#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics11EndEffector16UniquePropertiesE()
{
::boost::python::class_<dart::dynamics::EndEffector::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<const Eigen::Isometry3d &>((::boost::python::arg("_defaultTransform"))))
.def_readwrite("mDefaultTransform", &dart::dynamics::EndEffector::UniqueProperties::mDefaultTransform)
;
}

/* footer */