#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail23RevoluteJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::RevoluteJointProperties, ::boost::python::bases<dart::dynamics::detail::SingleDofJointProperties, dart::dynamics::detail::RevoluteJointUniqueProperties > >("RevoluteJointProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::SingleDofJoint::Properties &, const dart::dynamics::detail::RevoluteJointUniqueProperties &>((::boost::python::arg("_singleDofJointProperties"), ::boost::python::arg("_revoluteProperties"))))
;
}

/* footer */
