#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion16UniquePropertiesE()
{
::boost::python::class_<dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<bool>((::boost::python::arg("computeErrorFromCenter") = true)))
.def_readwrite("mComputeErrorFromCenter", &dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties::mComputeErrorFromCenter)
;
}

/* footer */
