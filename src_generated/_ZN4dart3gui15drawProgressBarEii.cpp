#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart3gui15drawProgressBarEii()
{
::boost::python::object parent_object(::boost::python::scope().attr("gui"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("drawProgressBar", static_cast<void (*)(int, int)>(&dart::gui::drawProgressBar), (::boost::python::arg("_currFrame"), ::boost::python::arg("_totalFrame")))
;}

/* footer */
