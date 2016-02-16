#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math7acosechEd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("acosech", static_cast<double (*)(double)>(&dart::math::acosech), (::boost::python::arg("_X")))
;}

/* footer */
