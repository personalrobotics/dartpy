#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail9AxisOrderE()
{
::boost::python::enum_<dart::dynamics::detail::AxisOrder>("AxisOrder")
.value("ZYX", dart::dynamics::detail::AxisOrder::ZYX)
.value("XYZ", dart::dynamics::detail::AxisOrder::XYZ)
;
}

/* footer */
