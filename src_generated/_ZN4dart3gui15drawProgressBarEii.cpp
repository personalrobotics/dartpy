#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart3gui15drawProgressBarEii()
{
boost::python::def("drawProgressBar", static_cast<void (*)(int, int)>(&dart::gui::drawProgressBar), (::boost::python::arg("_currFrame"), ::boost::python::arg("_totalFrame")))
;}

/* footer */
