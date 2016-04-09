#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color5BlackEd()
{
::boost::python::object parent_object(::boost::python::scope().attr("Color"));
::boost::python::scope parent_scope(parent_object);

::boost::python::def("Black", [](double alpha) -> Eigen::Vector4d { return dart::Color::Black(alpha); }, (::boost::python::arg("alpha")));

}

/* footer */
