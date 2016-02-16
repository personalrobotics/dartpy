#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5Color5BlackEd()
{
::boost::python::object parent_object(::boost::python::scope().attr("Color"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("Black", static_cast<Eigen::Vector4d (*)(double)>(&dart::Color::Black), (::boost::python::arg("alpha")))
;}

/* footer */
