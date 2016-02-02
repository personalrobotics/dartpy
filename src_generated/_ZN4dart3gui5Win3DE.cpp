#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart3gui5Win3DE()
{
::boost::python::class_<dart::gui::Win3D, ::boost::noncopyable >("Win3D", boost::python::no_init)
.def("initWindow", static_cast<void (dart::gui::Win3D::*)(int, int, const char *)>(&dart::gui::Win3D::initWindow), (::boost::python::arg("_w"), ::boost::python::arg("_h"), ::boost::python::arg("_name")))
.def("resize", static_cast<void (dart::gui::Win3D::*)(int, int)>(&dart::gui::Win3D::resize), (::boost::python::arg("_w"), ::boost::python::arg("_h")))
.def("render", static_cast<void (dart::gui::Win3D::*)()>(&dart::gui::Win3D::render))
.def("keyboard", static_cast<void (dart::gui::Win3D::*)(unsigned char, int, int)>(&dart::gui::Win3D::keyboard), (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("click", static_cast<void (dart::gui::Win3D::*)(int, int, int, int)>(&dart::gui::Win3D::click), (::boost::python::arg("_button"), ::boost::python::arg("_state"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("drag", static_cast<void (dart::gui::Win3D::*)(int, int)>(&dart::gui::Win3D::drag), (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("capturing", static_cast<void (dart::gui::Win3D::*)()>(&dart::gui::Win3D::capturing))
.def("initGL", static_cast<void (dart::gui::Win3D::*)()>(&dart::gui::Win3D::initGL))
.def("initLights", static_cast<void (dart::gui::Win3D::*)()>(&dart::gui::Win3D::initLights))
.def("draw", static_cast<void (dart::gui::Win3D::*)()>(&dart::gui::Win3D::draw))
;
}

/* footer */
