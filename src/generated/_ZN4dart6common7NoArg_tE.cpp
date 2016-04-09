#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common7NoArg_tE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::common::NoArg_t>("NoArg_t")
.value("NoArg", dart::common::NoArg_t::NoArg)
;
}

/* footer */
