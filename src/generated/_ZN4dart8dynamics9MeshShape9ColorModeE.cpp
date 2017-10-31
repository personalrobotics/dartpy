#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
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
