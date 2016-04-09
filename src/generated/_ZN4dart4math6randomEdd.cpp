#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math6randomEdd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("random", [](double _min, double _max) -> double { return dart::math::random(_min, _max); }, (::boost::python::arg("_min"), ::boost::python::arg("_max")));

}

/* footer */
