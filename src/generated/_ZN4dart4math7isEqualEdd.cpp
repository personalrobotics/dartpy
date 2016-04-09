#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math7isEqualEdd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("isEqual", [](double _x, double _y) -> bool { return dart::math::isEqual(_x, _y); }, (::boost::python::arg("_x"), ::boost::python::arg("_y")));

}

/* footer */
