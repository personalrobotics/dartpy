#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8renderer12DecoDrawTypeE()
{
::boost::python::enum_<dart::renderer::DecoDrawType>("DecoDrawType")
.value("DT_WireFrame", dart::renderer::DecoDrawType::DT_WireFrame)
.value("DT_SolidPolygon", dart::renderer::DecoDrawType::DT_SolidPolygon)
.value("DT_FrontPolygon", dart::renderer::DecoDrawType::DT_FrontPolygon)
.value("DT_BackPolygon", dart::renderer::DecoDrawType::DT_BackPolygon)
.value("DT_Max", dart::renderer::DecoDrawType::DT_Max)
;
}

/* footer */
