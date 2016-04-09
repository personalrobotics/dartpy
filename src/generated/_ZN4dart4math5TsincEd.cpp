#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart4math5TsincEd()
{
::boost::python::object parent_object(::boost::python::scope().attr("math"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("Tsinc", [](double _theta) -> double { return dart::math::Tsinc(_theta); }, (::boost::python::arg("_theta")));

}

/* footer */
