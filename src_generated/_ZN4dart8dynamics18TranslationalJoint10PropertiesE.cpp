#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics18TranslationalJoint10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("TranslationalJoint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::TranslationalJoint::Properties, ::boost::python::bases<dart::dynamics::detail::MultiDofJointProperties<3> > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::MultiDofJoint<3>::Properties &>((::boost::python::arg("_properties"))))
;
}

/* footer */
