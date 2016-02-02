#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail9AxisOrderE()
{
::boost::python::enum_<dart::dynamics::detail::AxisOrder>("AxisOrder")
.value("ZYX", dart::dynamics::detail::AxisOrder::ZYX)
.value("XYZ", dart::dynamics::detail::AxisOrder::XYZ)
;
}

/* footer */
