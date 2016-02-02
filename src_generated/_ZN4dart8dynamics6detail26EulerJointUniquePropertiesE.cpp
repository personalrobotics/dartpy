#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail26EulerJointUniquePropertiesE()
{
::boost::python::class_<dart::dynamics::detail::EulerJointUniqueProperties >("EulerJointUniqueProperties", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::detail::AxisOrder>((::boost::python::arg("_axisOrder") = 1)))
.def_readwrite("mAxisOrder", &dart::dynamics::detail::EulerJointUniqueProperties::mAxisOrder)
;
}

/* footer */
