#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics18TranslationalJoint10PropertiesE()
{
::boost::python::class_<dart::dynamics::TranslationalJoint::Properties, ::boost::python::bases<dart::dynamics::detail::MultiDofJointProperties<3> > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::MultiDofJoint<3>::Properties &>((::boost::python::arg("_properties"))))
;
}

/* footer */
