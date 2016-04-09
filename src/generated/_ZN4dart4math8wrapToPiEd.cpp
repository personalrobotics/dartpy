#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math8wrapToPiEd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("wrapToPi", [](double angle) -> double { return dart::math::wrapToPi(angle); }, (::boost::python::arg("angle")));

}

/* footer */
