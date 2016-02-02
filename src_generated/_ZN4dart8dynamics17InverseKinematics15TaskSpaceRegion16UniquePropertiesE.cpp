#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion16UniquePropertiesE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<bool>((::boost::python::arg("computeErrorFromCenter") = true)))
.def_readwrite("mComputeErrorFromCenter", &dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties::mComputeErrorFromCenter)
;
}

/* footer */
