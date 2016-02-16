#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils8toStringEj()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("toString", static_cast<std::string (*)(unsigned int)>(&dart::utils::toString), (::boost::python::arg("v")))
;}

/* footer */
