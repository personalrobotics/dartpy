#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart5utils9SdfParser10NextResultE()
{
::boost::python::object parent_object(::boost::python::scope().attr("utils").attr("SdfParser"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::utils::SdfParser::NextResult>("NextResult")
.value("VALID", dart::utils::SdfParser::NextResult::VALID)
.value("CONTINUE", dart::utils::SdfParser::NextResult::CONTINUE)
.value("BREAK", dart::utils::SdfParser::NextResult::BREAK)
.value("CREATE_FREEJOINT_ROOT", dart::utils::SdfParser::NextResult::CREATE_FREEJOINT_ROOT)
;
}

/* footer */
