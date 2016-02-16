#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math3sgnEd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("sgn", static_cast<int (*)(double)>(&dart::math::sgn), (::boost::python::arg("_a")))
;}

/* footer */
