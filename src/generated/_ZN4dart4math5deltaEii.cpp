#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5deltaEii()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("delta", [](int _i, int _j) -> int { return dart::math::delta(_i, _j); }, (::boost::python::arg("_i"), ::boost::python::arg("_j")));

}

/* footer */
