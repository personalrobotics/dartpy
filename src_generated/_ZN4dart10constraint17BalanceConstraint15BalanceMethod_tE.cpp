#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint17BalanceConstraint15BalanceMethod_tE()
{
::boost::python::enum_<dart::constraint::BalanceConstraint::BalanceMethod_t>("BalanceMethod_t")
.value("SHIFT_SUPPORT", dart::constraint::BalanceConstraint::BalanceMethod_t::SHIFT_SUPPORT)
.value("SHIFT_COM", dart::constraint::BalanceConstraint::BalanceMethod_t::SHIFT_COM)
;
}

/* footer */
