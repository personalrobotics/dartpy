#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail20ScrewJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::ScrewJointProperties, ::boost::python::bases<dart::dynamics::detail::SingleDofJointProperties, dart::dynamics::detail::ScrewJointUniqueProperties > >("ScrewJointProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::SingleDofJoint::Properties &, const dart::dynamics::detail::ScrewJointUniqueProperties &>((::boost::python::arg("_singleDofProperties"), ::boost::python::arg("_screwProperties"))))
;
}

/* footer */
