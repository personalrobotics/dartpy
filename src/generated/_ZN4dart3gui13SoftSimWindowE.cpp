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

void _ZN4dart3gui13SoftSimWindowE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::SoftSimWindow, ::boost::python::bases<dart::gui::SimWindow > >("SoftSimWindow", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::gui::SoftSimWindow * { return new dart::gui::SoftSimWindow(); }, ::boost::python::default_call_policies()))
.def("keyboard", [](dart::gui::SoftSimWindow *self, unsigned char key, int x, int y) -> void { return self->keyboard(key, x, y); }, (::boost::python::arg("key"), ::boost::python::arg("x"), ::boost::python::arg("y")))
;
}

/* footer */
