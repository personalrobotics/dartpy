#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6Marker14ConstraintTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Marker"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::Marker::ConstraintType>("ConstraintType")
.value("NO", dart::dynamics::Marker::ConstraintType::NO)
.value("HARD", dart::dynamics::Marker::ConstraintType::HARD)
.value("SOFT", dart::dynamics::Marker::ConstraintType::SOFT)
;
}

/* footer */
