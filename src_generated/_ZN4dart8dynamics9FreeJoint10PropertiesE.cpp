#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics9FreeJoint10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("FreeJoint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::FreeJoint::Properties, ::boost::python::bases<dart::dynamics::detail::MultiDofJointProperties<6> > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::MultiDofJoint<6>::Properties &>((::boost::python::arg("_properties"))))
;
}

/* footer */
