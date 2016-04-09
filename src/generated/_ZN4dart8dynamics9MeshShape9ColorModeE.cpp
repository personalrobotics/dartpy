#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics9MeshShape9ColorModeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("MeshShape"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::MeshShape::ColorMode>("ColorMode")
.value("MATERIAL_COLOR", dart::dynamics::MeshShape::ColorMode::MATERIAL_COLOR)
.value("COLOR_INDEX", dart::dynamics::MeshShape::ColorMode::COLOR_INDEX)
.value("SHAPE_COLOR", dart::dynamics::MeshShape::ColorMode::SHAPE_COLOR)
;
}

/* footer */
