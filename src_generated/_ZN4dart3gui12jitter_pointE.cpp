#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart3gui12jitter_pointE()
{
::boost::python::class_<dart::gui::jitter_point, ::boost::noncopyable >("jitter_point", boost::python::no_init)
.def_readwrite("x", &dart::gui::jitter_point::x)
.def_readwrite("y", &dart::gui::jitter_point::y)
;
}

/* footer */
