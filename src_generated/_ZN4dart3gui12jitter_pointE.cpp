#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart3gui12jitter_pointE()
{
::boost::python::class_<dart::gui::jitter_point, ::boost::noncopyable >("jitter_point", boost::python::no_init)
.def_readwrite("x", &dart::gui::jitter_point::x)
.def_readwrite("y", &dart::gui::jitter_point::y)
;
}

/* footer */
