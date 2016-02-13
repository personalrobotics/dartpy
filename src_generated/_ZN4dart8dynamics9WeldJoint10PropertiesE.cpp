#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics9WeldJoint10PropertiesE()
{
::boost::python::class_<dart::dynamics::WeldJoint::Properties, ::boost::python::bases<dart::dynamics::ZeroDofJoint::Properties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::Joint::Properties &>((::boost::python::arg("_properties"))))
;
}

/* footer */
