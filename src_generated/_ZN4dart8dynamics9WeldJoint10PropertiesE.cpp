#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics9WeldJoint10PropertiesE()
{
::boost::python::class_<dart::dynamics::WeldJoint::Properties, ::boost::python::bases<dart::dynamics::ZeroDofJoint::Properties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::Joint::Properties &>((::boost::python::arg("_properties"))))
;
}

/* footer */
