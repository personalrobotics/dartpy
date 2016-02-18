#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail26EulerJointUniquePropertiesE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::EulerJointUniqueProperties >("EulerJointUniqueProperties", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::detail::AxisOrder>((::boost::python::arg("_axisOrder"))))
.def_readwrite("mAxisOrder", &dart::dynamics::detail::EulerJointUniqueProperties::mAxisOrder)
;
}

/* footer */
