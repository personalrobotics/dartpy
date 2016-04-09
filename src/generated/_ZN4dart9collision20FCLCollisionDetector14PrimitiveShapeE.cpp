#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart9collision20FCLCollisionDetector14PrimitiveShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("collision").attr("FCLCollisionDetector"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::collision::FCLCollisionDetector::PrimitiveShape>("PrimitiveShape")
.value("PRIMITIVE", dart::collision::FCLCollisionDetector::PrimitiveShape::PRIMITIVE)
.value("MESH", dart::collision::FCLCollisionDetector::PrimitiveShape::MESH)
;
}

/* footer */
