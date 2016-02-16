#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail20EulerJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::EulerJointProperties, ::boost::python::bases<dart::dynamics::detail::MultiDofJointProperties<3>, dart::dynamics::detail::EulerJointUniqueProperties > >("EulerJointProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::MultiDofJoint<3>::Properties &, const dart::dynamics::detail::EulerJointUniqueProperties &>((::boost::python::arg("_multiDofProperties"), ::boost::python::arg("_eulerJointProperties"))))
;
}

/* footer */
