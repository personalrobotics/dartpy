#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics15TaskSpaceRegion10PropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("TaskSpaceRegion"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::InverseKinematics::TaskSpaceRegion::Properties, ::boost::python::bases<dart::dynamics::InverseKinematics::ErrorMethod::Properties, dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties > >("Properties", boost::python::no_init)
.def(::boost::python::init<const dart::dynamics::InverseKinematics::ErrorMethod::Properties &, const dart::dynamics::InverseKinematics::TaskSpaceRegion::UniqueProperties &>((::boost::python::arg("errorProperties"), ::boost::python::arg("taskSpaceProperties"))))
;
}

/* footer */
