#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics5Shape12DataVarianceE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Shape"));
::boost::python::scope parent_scope(parent_object);

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
