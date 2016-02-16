#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math8AxisTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::math::AxisType>("AxisType")
.value("AXIS_X", dart::math::AxisType::AXIS_X)
.value("AXIS_Y", dart::math::AxisType::AXIS_Y)
.value("AXIS_Z", dart::math::AxisType::AXIS_Z)
;
}

/* footer */
