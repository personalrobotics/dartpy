#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math6round2Ed()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("round2", static_cast<double (*)(double)>(&dart::math::round2), (::boost::python::arg("_x")))
;}

/* footer */
