#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart3gui11GraphWindowE()
{
::boost::python::class_<dart::gui::GraphWindow, ::boost::noncopyable, ::boost::python::bases<dart::gui::Win2D > >("GraphWindow", boost::python::no_init)
.def(::boost::python::init<>())
.def("draw", static_cast<void (dart::gui::GraphWindow::*)()>(&dart::gui::GraphWindow::draw))
.def("keyboard", static_cast<void (dart::gui::GraphWindow::*)(unsigned char, int, int)>(&dart::gui::GraphWindow::keyboard), (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("setData", static_cast<void (dart::gui::GraphWindow::*)(Eigen::VectorXd)>(&dart::gui::GraphWindow::setData), (::boost::python::arg("_data")))
;
}

/* footer */
