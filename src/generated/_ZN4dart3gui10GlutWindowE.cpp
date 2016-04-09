#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart3gui10GlutWindowE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";


} // namespace

void _ZN4dart3gui10GlutWindowE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::GlutWindow, ::boost::noncopyable >("GlutWindow", _ZN4dart3gui10GlutWindowE_docstring, boost::python::no_init)
.def("initWindow", [](dart::gui::GlutWindow *self, int _w, int _h, const char * _name) -> void { return self->initWindow(_w, _h, _name); }, (::boost::python::arg("_w"), ::boost::python::arg("_h"), ::boost::python::arg("_name")))
.def("reshape", [](int _w, int _h) -> void { return dart::gui::GlutWindow::reshape(_w, _h); }, (::boost::python::arg("_w"), ::boost::python::arg("_h")))
.def("keyEvent", [](unsigned char _key, int _x, int _y) -> void { return dart::gui::GlutWindow::keyEvent(_key, _x, _y); }, (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("specKeyEvent", [](int _key, int _x, int _y) -> void { return dart::gui::GlutWindow::specKeyEvent(_key, _x, _y); }, (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("mouseClick", [](int _button, int _state, int _x, int _y) -> void { return dart::gui::GlutWindow::mouseClick(_button, _state, _x, _y); }, (::boost::python::arg("_button"), ::boost::python::arg("_state"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("mouseDrag", [](int _x, int _y) -> void { return dart::gui::GlutWindow::mouseDrag(_x, _y); }, (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("mouseMove", [](int _x, int _y) -> void { return dart::gui::GlutWindow::mouseMove(_x, _y); }, (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("refresh", []() -> void { return dart::gui::GlutWindow::refresh(); })
.def("refreshTimer", [](int _val) -> void { return dart::gui::GlutWindow::refreshTimer(_val); }, (::boost::python::arg("_val")))
.def("runTimer", [](int _val) -> void { return dart::gui::GlutWindow::runTimer(_val); }, (::boost::python::arg("_val")))
.staticmethod("keyEvent")
.staticmethod("mouseClick")
.staticmethod("mouseDrag")
.staticmethod("mouseMove")
.staticmethod("refresh")
.staticmethod("refreshTimer")
.staticmethod("reshape")
.staticmethod("runTimer")
.staticmethod("specKeyEvent")
.add_static_property("mWindows", ::boost::python::make_getter(dart::gui::GlutWindow::mWindows))
.add_static_property("mWinIDs", ::boost::python::make_getter(dart::gui::GlutWindow::mWinIDs))
;
}

/* footer */
