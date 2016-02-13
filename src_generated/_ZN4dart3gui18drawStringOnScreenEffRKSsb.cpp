#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart3gui18drawStringOnScreenEffRKSsb()
{
boost::python::def("drawStringOnScreen", static_cast<void (*)(float, float, const std::string &, bool)>(&dart::gui::drawStringOnScreen), (::boost::python::arg("_x"), ::boost::python::arg("_y"), ::boost::python::arg("_s"), ::boost::python::arg("_bigFont") = true))
;}

/* footer */
