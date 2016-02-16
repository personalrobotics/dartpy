#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail30UniversalJointUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::UniversalJointUniqueProperties >("UniversalJointUniqueProperties", boost::python::no_init)
.def(::boost::python::init<const Eigen::Vector3d &, const Eigen::Vector3d &>((::boost::python::arg("_axis1"), ::boost::python::arg("_axis2"))))
.def_readwrite("mAxis", &dart::dynamics::detail::UniversalJointUniqueProperties::mAxis)
;
}

/* footer */
