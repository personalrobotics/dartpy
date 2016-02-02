#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail23RevoluteJointPropertiesE()
{
::boost::python::class_<dart::dynamics::detail::RevoluteJointProperties, ::boost::python::bases<dart::dynamics::detail::SingleDofJointProperties, dart::dynamics::detail::RevoluteJointUniqueProperties > >("RevoluteJointProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::SingleDofJoint::Properties &, const dart::dynamics::detail::RevoluteJointUniqueProperties &>((::boost::python::arg("_singleDofJointProperties"), ::boost::python::arg("_revoluteProperties"))))
;
}

/* footer */