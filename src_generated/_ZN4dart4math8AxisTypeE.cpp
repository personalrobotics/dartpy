#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math8AxisTypeE()
{
::boost::python::enum_<dart::math::AxisType>("AxisType")
.value("AXIS_X", dart::math::AxisType::AXIS_X)
.value("AXIS_Y", dart::math::AxisType::AXIS_Y)
.value("AXIS_Z", dart::math::AxisType::AXIS_Z)
;
}

/* footer */