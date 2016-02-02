#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics6detail9PlaneTypeE()
{
::boost::python::enum_<dart::dynamics::detail::PlaneType>("PlaneType")
.value("XY", dart::dynamics::detail::PlaneType::XY)
.value("YZ", dart::dynamics::detail::PlaneType::YZ)
.value("ZX", dart::dynamics::detail::PlaneType::ZX)
.value("ARBITRARY", dart::dynamics::detail::PlaneType::ARBITRARY)
;
}

/* footer */
