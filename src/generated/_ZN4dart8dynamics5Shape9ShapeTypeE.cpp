#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics5Shape9ShapeTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Shape"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::Shape::ShapeType>("ShapeType")
.value("BOX", dart::dynamics::Shape::ShapeType::BOX)
.value("ELLIPSOID", dart::dynamics::Shape::ShapeType::ELLIPSOID)
.value("CYLINDER", dart::dynamics::Shape::ShapeType::CYLINDER)
.value("PLANE", dart::dynamics::Shape::ShapeType::PLANE)
.value("MESH", dart::dynamics::Shape::ShapeType::MESH)
.value("SOFT_MESH", dart::dynamics::Shape::ShapeType::SOFT_MESH)
.value("LINE_SEGMENT", dart::dynamics::Shape::ShapeType::LINE_SEGMENT)
;
}

/* footer */
