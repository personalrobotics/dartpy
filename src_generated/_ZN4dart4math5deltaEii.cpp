#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5deltaEii()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("delta", static_cast<int (*)(int, int)>(&dart::math::delta), (::boost::python::arg("_i"), ::boost::python::arg("_j")))
;}

/* footer */
