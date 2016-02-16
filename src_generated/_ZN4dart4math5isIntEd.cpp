#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5isIntEd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("isInt", static_cast<bool (*)(double)>(&dart::math::isInt), (::boost::python::arg("_x")))
;}

/* footer */
