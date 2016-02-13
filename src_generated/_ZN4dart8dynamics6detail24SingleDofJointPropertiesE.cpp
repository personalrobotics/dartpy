#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail24SingleDofJointPropertiesE()
{
::boost::python::class_<dart::dynamics::detail::SingleDofJointProperties, ::boost::python::bases<dart::dynamics::Joint::Properties, dart::dynamics::detail::SingleDofJointUniqueProperties > >("SingleDofJointProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::Joint::Properties &, const dart::dynamics::detail::SingleDofJointUniqueProperties &>((::boost::python::arg("_jointProperties"), ::boost::python::arg("_singleDofProperties"))))
;
}

/* footer */
