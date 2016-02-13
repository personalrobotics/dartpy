#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics9BallJoint10PropertiesE()
{
::boost::python::class_<dart::dynamics::BallJoint::Properties, ::boost::python::bases<dart::dynamics::detail::MultiDofJointProperties<3> > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::MultiDofJoint<3>::Properties &>((::boost::python::arg("_properties"))))
;
}

/* footer */
