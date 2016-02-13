#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics12ZeroDofJoint10PropertiesE()
{
::boost::python::class_<dart::dynamics::ZeroDofJoint::Properties, ::boost::python::bases<dart::dynamics::Joint::Properties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::Joint::Properties &>((::boost::python::arg("_properties"))))
;
}

/* footer */
