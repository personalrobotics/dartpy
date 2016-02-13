#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart3gui9SimWindowE()
{
::boost::python::class_<dart::gui::SimWindow, ::boost::noncopyable, ::boost::python::bases<dart::gui::Win3D > >("SimWindow", boost::python::no_init)
.def(::boost::python::init<>())
.def("timeStepping", static_cast<void (dart::gui::SimWindow::*)()>(&dart::gui::SimWindow::timeStepping))
.def("drawSkels", static_cast<void (dart::gui::SimWindow::*)()>(&dart::gui::SimWindow::drawSkels))
.def("drawEntities", static_cast<void (dart::gui::SimWindow::*)()>(&dart::gui::SimWindow::drawEntities))
.def("displayTimer", static_cast<void (dart::gui::SimWindow::*)(int)>(&dart::gui::SimWindow::displayTimer), (::boost::python::arg("_val")))
.def("draw", static_cast<void (dart::gui::SimWindow::*)()>(&dart::gui::SimWindow::draw))
.def("keyboard", static_cast<void (dart::gui::SimWindow::*)(unsigned char, int, int)>(&dart::gui::SimWindow::keyboard), (::boost::python::arg("_key"), ::boost::python::arg("_x"), ::boost::python::arg("_y")))
.def("setWorld", static_cast<void (dart::gui::SimWindow::*)(dart::simulation::WorldPtr)>(&dart::gui::SimWindow::setWorld), (::boost::python::arg("_world")))
.def("saveWorld", static_cast<void (dart::gui::SimWindow::*)()>(&dart::gui::SimWindow::saveWorld))
.def("plot", static_cast<void (dart::gui::SimWindow::*)(Eigen::VectorXd &)>(&dart::gui::SimWindow::plot), (::boost::python::arg("_data")))
;
}

/* footer */
