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

void _ZN4dart3gui19MotionBlurSimWindowE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::MotionBlurSimWindow, ::boost::noncopyable, ::boost::python::bases<dart::gui::SimWindow > >("MotionBlurSimWindow", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::gui::MotionBlurSimWindow * { return new dart::gui::MotionBlurSimWindow(); }, ::boost::python::default_call_policies()))
.def("setMotionBlurQuality", [](dart::gui::MotionBlurSimWindow *self, int _val) -> void { return self->setMotionBlurQuality(_val); }, (::boost::python::arg("_val")))
.def("render", [](dart::gui::MotionBlurSimWindow *self) -> void { return self->render(); })
.def("displayTimer", [](dart::gui::MotionBlurSimWindow *self, int _val) -> void { return self->displayTimer(_val); }, (::boost::python::arg("_val")))
;
}

/* footer */
