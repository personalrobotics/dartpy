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

void _ZN4dart3gui11GraphWindowE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::GraphWindow, ::boost::noncopyable, ::boost::python::bases<dart::gui::Win2D > >("GraphWindow", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::gui::GraphWindow * { return new dart::gui::GraphWindow(); }, ::boost::python::default_call_policies()))
.def("draw", [](dart::gui::GraphWindow *self) -> void { return self->draw(); })
.def("keyboard", [](dart::gui::GraphWindow *self, unsigned char _key, int _x, int _y) -> void { return self->keyboard(_key, _x, _y); }, (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("setData", [](dart::gui::GraphWindow *self, Eigen::VectorXd _data) -> void { return self->setData(_data); }, (::boost::python::arg("_data")))
;
}

/* footer */
