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

namespace {



} // namespace

void _ZN4dart3gui5Win2DE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::Win2D, ::boost::noncopyable, ::boost::python::bases<dart::gui::GlutWindow > >("Win2D", boost::python::no_init)
.def("resize", [](dart::gui::Win2D *self, int _w, int _h) -> void { return self->resize(_w, _h); }, (::boost::python::arg("_w"), ::boost::python::arg("_h")))
.def("render", [](dart::gui::Win2D *self) -> void { return self->render(); })
.def("keyboard", [](dart::gui::Win2D *self, unsigned char _key, int _x, int _y) -> void { return self->keyboard(_key, _x, _y); }, (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("click", [](dart::gui::Win2D *self, int _button, int _state, int _x, int _y) -> void { return self->click(_button, _state, _x, _y); }, (::boost::python::arg("_button"), ::boost::python::arg("_state"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("drag", [](dart::gui::Win2D *self, int _x, int _y) -> void { return self->drag(_x, _y); }, (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("initGL", [](dart::gui::Win2D *self) -> void { return self->initGL(); })
.def("draw", [](dart::gui::Win2D *self) -> void { return self->draw(); })
;
}

/* footer */
