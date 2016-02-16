#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils17convertDecToFloatEPc()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils"));
::boost::python::scope parent_scope(parent_object);

boost::python::def("convertDecToFloat", static_cast<float (*)(char *)>(&dart::utils::convertDecToFloat), (::boost::python::arg("_bytes")))
;}

/* footer */
