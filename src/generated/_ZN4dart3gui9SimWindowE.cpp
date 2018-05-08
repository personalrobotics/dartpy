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

void _ZN4dart3gui9SimWindowE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::SimWindow, ::boost::noncopyable, ::boost::python::bases<dart::gui::Win3D > >("SimWindow", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::gui::SimWindow * { return new dart::gui::SimWindow(); }, ::boost::python::default_call_policies()))
.def("timeStepping", [](dart::gui::SimWindow *self) -> void { return self->timeStepping(); })
.def("drawWorld", [](const dart::gui::SimWindow *self) -> void { return self->drawWorld(); })
.def("drawSkeletons", [](const dart::gui::SimWindow *self) -> void { return self->drawSkeletons(); })
.def("drawSkels", [](dart::gui::SimWindow *self) -> void { return self->drawSkels(); })
.def("drawEntities", [](dart::gui::SimWindow *self) -> void { return self->drawEntities(); })
.def("displayTimer", [](dart::gui::SimWindow *self, int _val) -> void { return self->displayTimer(_val); }, (::boost::python::arg("_val")))
.def("draw", [](dart::gui::SimWindow *self) -> void { return self->draw(); })
.def("keyboard", [](dart::gui::SimWindow *self, unsigned char _key, int _x, int _y) -> void { return self->keyboard(_key, _x, _y); }, (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("setWorld", [](dart::gui::SimWindow *self, dart::simulation::WorldPtr _world) -> void { return self->setWorld(_world); }, (::boost::python::arg("_world")))
.def("saveWorld", [](dart::gui::SimWindow *self) -> void { return self->saveWorld(); })
.def("plot", [](dart::gui::SimWindow *self, Eigen::VectorXd & _data) -> void { return self->plot(_data); }, (::boost::python::arg("_data")))
;
}

/* footer */
