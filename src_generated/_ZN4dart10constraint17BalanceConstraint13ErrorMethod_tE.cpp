#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint17BalanceConstraint13ErrorMethod_tE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint").attr("BalanceConstraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::constraint::BalanceConstraint::ErrorMethod_t>("ErrorMethod_t")
.value("FROM_CENTROID", dart::constraint::BalanceConstraint::ErrorMethod_t::FROM_CENTROID)
.value("FROM_EDGE", dart::constraint::BalanceConstraint::ErrorMethod_t::FROM_EDGE)
.value("OPTIMIZE_BALANCE", dart::constraint::BalanceConstraint::ErrorMethod_t::OPTIMIZE_BALANCE)
;
}

/* footer */
