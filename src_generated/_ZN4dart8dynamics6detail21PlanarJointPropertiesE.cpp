#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail21PlanarJointPropertiesE()
{
::boost::python::class_<dart::dynamics::detail::PlanarJointProperties, ::boost::python::bases<dart::dynamics::detail::MultiDofJointProperties<3>, dart::dynamics::detail::PlanarJointUniqueProperties > >("PlanarJointProperties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::MultiDofJoint<3>::Properties &, const dart::dynamics::detail::PlanarJointUniqueProperties &>((::boost::python::arg("_multiDofProperties"), ::boost::python::arg("_planarProperties"))))
;
}

/* footer */