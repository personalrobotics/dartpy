#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail24PrismaticJointPropertiesE()
{
::boost::python::class_<dart::dynamics::detail::PrismaticJointProperties, ::boost::python::bases<dart::dynamics::detail::SingleDofJointProperties, dart::dynamics::detail::PrismaticJointUniqueProperties > >("PrismaticJointProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::SingleDofJoint::Properties &, const dart::dynamics::detail::PrismaticJointUniqueProperties &>((::boost::python::arg("_singleDofProperties"), ::boost::python::arg("_prismaticProperties"))))
;
}

/* footer */
