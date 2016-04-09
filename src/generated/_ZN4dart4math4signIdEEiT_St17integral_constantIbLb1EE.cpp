#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math4signIdEEiT_St17integral_constantIbLb1EE()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("sign", [](double x, std::true_type _arg1_) -> int { return dart::math::sign<double>(x, _arg1_); }, (::boost::python::arg("x"), ::boost::python::arg("_arg1_")));

}

/* footer */
