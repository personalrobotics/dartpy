#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart4math14Intersection_tE()
{
::boost::python::enum_<dart::math::Intersection_t>("Intersection_t")
.value("INTERSECTING", dart::math::Intersection_t::INTERSECTING)
.value("PARALLEL", dart::math::Intersection_t::PARALLEL)
.value("BEYOND_ENDPOINTS", dart::math::Intersection_t::BEYOND_ENDPOINTS)
;
}

/* footer */
