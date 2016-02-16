#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math7isEqualEdd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("isEqual", static_cast<bool (*)(double, double)>(&dart::math::isEqual), (::boost::python::arg("_x"), ::boost::python::arg("_y")))
;}

/* footer */
