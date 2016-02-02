#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart10constraint17BalanceConstraint13ErrorMethod_tE()
{
::boost::python::enum_<dart::constraint::BalanceConstraint::ErrorMethod_t>("ErrorMethod_t")
.value("FROM_CENTROID", dart::constraint::BalanceConstraint::ErrorMethod_t::FROM_CENTROID)
.value("FROM_EDGE", dart::constraint::BalanceConstraint::ErrorMethod_t::FROM_EDGE)
.value("OPTIMIZE_BALANCE", dart::constraint::BalanceConstraint::ErrorMethod_t::OPTIMIZE_BALANCE)
;
}

/* footer */
