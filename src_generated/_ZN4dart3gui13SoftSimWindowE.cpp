#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart3gui13SoftSimWindowE()
{
::boost::python::class_<dart::gui::SoftSimWindow, ::boost::noncopyable, ::boost::python::bases<dart::gui::SimWindow > >("SoftSimWindow", boost::python::no_init)
.def(::boost::python::init<>())
.def("keyboard", static_cast<void (dart::gui::SoftSimWindow::*)(unsigned char, int, int)>(&dart::gui::SoftSimWindow::keyboard), (::boost::python::arg("key"), ::boost::python::arg("x"), ::boost::python::arg("y")))
;
}

/* footer */
