#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart3gui5Win2DE()
{
::boost::python::class_<dart::gui::Win2D, ::boost::noncopyable >("Win2D", boost::python::no_init)
.def("resize", static_cast<void (dart::gui::Win2D::*)(int, int)>(&dart::gui::Win2D::resize), (::boost::python::arg("_w"), ::boost::python::arg("_h")))
.def("render", static_cast<void (dart::gui::Win2D::*)()>(&dart::gui::Win2D::render))
.def("keyboard", static_cast<void (dart::gui::Win2D::*)(unsigned char, int, int)>(&dart::gui::Win2D::keyboard), (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("click", static_cast<void (dart::gui::Win2D::*)(int, int, int, int)>(&dart::gui::Win2D::click), (::boost::python::arg("_button"), ::boost::python::arg("_state"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("drag", static_cast<void (dart::gui::Win2D::*)(int, int)>(&dart::gui::Win2D::drag), (::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("initGL", static_cast<void (dart::gui::Win2D::*)()>(&dart::gui::Win2D::initGL))
.def("draw", static_cast<void (dart::gui::Win2D::*)()>(&dart::gui::Win2D::draw))
;
}

/* footer */
