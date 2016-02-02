#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics9MeshShape9ColorModeE()
{
::boost::python::enum_<dart::dynamics::MeshShape::ColorMode>("ColorMode")
.value("MATERIAL_COLOR", dart::dynamics::MeshShape::ColorMode::MATERIAL_COLOR)
.value("COLOR_INDEX", dart::dynamics::MeshShape::ColorMode::COLOR_INDEX)
.value("SHAPE_COLOR", dart::dynamics::MeshShape::ColorMode::SHAPE_COLOR)
;
}

/* footer */
