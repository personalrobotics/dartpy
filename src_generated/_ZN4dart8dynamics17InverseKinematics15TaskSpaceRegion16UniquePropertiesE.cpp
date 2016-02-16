#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion16UniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("TaskSpaceRegion"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties >("UniqueProperties", boost::python::no_init)
.def(::boost::python::init<bool>((::boost::python::arg("computeErrorFromCenter") = true)))
.def_readwrite("mComputeErrorFromCenter", &dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties::mComputeErrorFromCenter)
;
}

/* footer */
