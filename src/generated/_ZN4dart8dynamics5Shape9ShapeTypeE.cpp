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

void _ZN4dart8dynamics5Shape9ShapeTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Shape"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::Shape::ShapeType>("ShapeType")
.value("SPHERE", dart::dynamics::Shape::ShapeType::SPHERE)
.value("BOX", dart::dynamics::Shape::ShapeType::BOX)
.value("ELLIPSOID", dart::dynamics::Shape::ShapeType::ELLIPSOID)
.value("CYLINDER", dart::dynamics::Shape::ShapeType::CYLINDER)
.value("CAPSULE", dart::dynamics::Shape::ShapeType::CAPSULE)
.value("CONE", dart::dynamics::Shape::ShapeType::CONE)
.value("PLANE", dart::dynamics::Shape::ShapeType::PLANE)
.value("MULTISPHERE", dart::dynamics::Shape::ShapeType::MULTISPHERE)
.value("MESH", dart::dynamics::Shape::ShapeType::MESH)
.value("SOFT_MESH", dart::dynamics::Shape::ShapeType::SOFT_MESH)
.value("LINE_SEGMENT", dart::dynamics::Shape::ShapeType::LINE_SEGMENT)
.value("UNSUPPORTED", dart::dynamics::Shape::ShapeType::UNSUPPORTED)
;
}

/* footer */
