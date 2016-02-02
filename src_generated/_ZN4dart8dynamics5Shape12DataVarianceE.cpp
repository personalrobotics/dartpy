#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics5Shape12DataVarianceE()
{
::boost::python::enum_<dart::dynamics::Shape::DataVariance>("DataVariance")
.value("STATIC", dart::dynamics::Shape::DataVariance::STATIC)
.value("DYNAMIC_TRANSFORM", dart::dynamics::Shape::DataVariance::DYNAMIC_TRANSFORM)
.value("DYNAMIC_PRIMITIVE", dart::dynamics::Shape::DataVariance::DYNAMIC_PRIMITIVE)
.value("DYNAMIC_COLOR", dart::dynamics::Shape::DataVariance::DYNAMIC_COLOR)
.value("DYNAMIC_VERTICES", dart::dynamics::Shape::DataVariance::DYNAMIC_VERTICES)
.value("DYNAMIC_ELEMENTS", dart::dynamics::Shape::DataVariance::DYNAMIC_ELEMENTS)
.value("DYNAMIC", dart::dynamics::Shape::DataVariance::DYNAMIC)
;
}

/* footer */
