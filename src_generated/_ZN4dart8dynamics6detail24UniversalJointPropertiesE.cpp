#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail24UniversalJointPropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::UniversalJointProperties, ::boost::python::bases<dart::dynamics::detail::MultiDofJointProperties<2>, dart::dynamics::detail::UniversalJointUniqueProperties > >("UniversalJointProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::MultiDofJoint<2>::Properties &, const dart::dynamics::detail::UniversalJointUniqueProperties &>((::boost::python::arg("_multiDofProperties"), ::boost::python::arg("_universalProperties"))))
;
}

/* footer */
