#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics11JacobianDLS16UniquePropertiesE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<double>((::boost::python::arg("damping") = 5.000000e-02)))
.def_readwrite("mDamping", &dart::dynamics::InverseKinematics::JacobianDLS::UniqueProperties::mDamping)
;
}

/* footer */
