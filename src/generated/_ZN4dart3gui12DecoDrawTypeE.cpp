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

void _ZN4dart3gui12DecoDrawTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::gui::DecoDrawType>("DecoDrawType")
.value("DT_WireFrame", dart::gui::DecoDrawType::DT_WireFrame)
.value("DT_SolidPolygon", dart::gui::DecoDrawType::DT_SolidPolygon)
.value("DT_FrontPolygon", dart::gui::DecoDrawType::DT_FrontPolygon)
.value("DT_BackPolygon", dart::gui::DecoDrawType::DT_BackPolygon)
.value("DT_Max", dart::gui::DecoDrawType::DT_Max)
;
}

/* footer */
