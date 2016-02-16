#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart3gui13SoftSimWindowE()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::gui::SoftSimWindow, ::boost::noncopyable, ::boost::python::bases<dart::gui::SimWindow > >("SoftSimWindow", boost::python::no_init)
.def(::boost::python::init<>())
.def("keyboard", static_cast<void (dart::gui::SoftSimWindow::*)(unsigned char, int, int)>(&dart::gui::SoftSimWindow::keyboard), (::boost::python::arg("key"), ::boost::python::arg("x"), ::boost::python::arg("y")))
;
}

/* footer */
