#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils6toBoolERKSs()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("toBool", static_cast<bool (*)(const std::string &)>(&dart::utils::toBool), (::boost::python::arg("str")))
;}

/* footer */
