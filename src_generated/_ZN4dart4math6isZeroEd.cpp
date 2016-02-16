#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math6isZeroEd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("isZero", static_cast<bool (*)(double)>(&dart::math::isZero), (::boost::python::arg("_theta")))
;}

/* footer */
