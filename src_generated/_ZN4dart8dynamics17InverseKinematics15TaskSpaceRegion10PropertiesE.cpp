#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion10PropertiesE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties, ::boost::python::bases<dart::dynamics::InverseKinematics::ErrorMethod::Properties, dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::InverseKinematics::ErrorMethod::Properties &, const dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties &>((::boost::python::arg("errorProperties"), ::boost::python::arg("taskSpaceProperties"))))
;
}

/* footer */
