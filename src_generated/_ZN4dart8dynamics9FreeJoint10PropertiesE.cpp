#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics9FreeJoint10PropertiesE()
{
::boost::python::class_<dart::dynamics::FreeJoint::Properties, ::boost::python::bases<dart::dynamics::detail::MultiDofJointProperties<6> > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::MultiDofJoint<6>::Properties &>((::boost::python::arg("_properties"))))
;
}

/* footer */
