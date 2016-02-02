#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail23MultiDofJointPropertiesILm2EEE()
{
::boost::python::class_<dart::dynamics::detail::MultiDofJointProperties<2>, ::boost::python::bases<dart::dynamics::Joint::Properties, dart::dynamics::detail::MultiDofJointUniqueProperties<2> > >("_ZN4dart8dynamics6detail23MultiDofJointPropertiesILm2EEE", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::Joint::Properties &, const dart::dynamics::detail::MultiDofJointUniqueProperties<2UL> &>((::boost::python::arg("_jointProperties"), ::boost::python::arg("_multiDofProperties"))))
;
}

/* footer */
