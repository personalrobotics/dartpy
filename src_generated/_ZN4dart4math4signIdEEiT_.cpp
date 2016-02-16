#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math4signIdEEiT_()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("sign", static_cast<int (*)(double)>(&dart::math::sign), (::boost::python::arg("x")))
;}

/* footer */
