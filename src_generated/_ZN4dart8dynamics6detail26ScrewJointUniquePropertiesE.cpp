#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail26ScrewJointUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::ScrewJointUniqueProperties >("ScrewJointUniqueProperties", boost::python::no_init)
.def(::boost::python::init<const Eigen::Vector3d &, double>((::boost::python::arg("_axis"), ::boost::python::arg("_pitch"))))
.def_readwrite("mAxis", &dart::dynamics::detail::ScrewJointUniqueProperties::mAxis)
.def_readwrite("mPitch", &dart::dynamics::detail::ScrewJointUniqueProperties::mPitch)
;
}

/* footer */
