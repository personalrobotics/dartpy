#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6detail9PlaneTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::detail::PlaneType>("PlaneType")
.value("XY", dart::dynamics::detail::PlaneType::XY)
.value("YZ", dart::dynamics::detail::PlaneType::YZ)
.value("ZX", dart::dynamics::detail::PlaneType::ZX)
.value("ARBITRARY", dart::dynamics::detail::PlaneType::ARBITRARY)
;
}

/* footer */
