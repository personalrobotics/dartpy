#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics5Chain13IncludeBoth_tE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Chain"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::Chain::IncludeBoth_t>("IncludeBoth_t")
.value("IncludeBoth", dart::dynamics::Chain::IncludeBoth_t::IncludeBoth)
;
}

/* footer */
