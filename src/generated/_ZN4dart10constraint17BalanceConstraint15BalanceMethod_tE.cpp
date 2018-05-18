#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart10constraint17BalanceConstraint15BalanceMethod_tE()
{
::boost::python::object parent_object(::boost::python::scope().attr("constraint").attr("BalanceConstraint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::constraint::BalanceConstraint::BalanceMethod_t>("BalanceMethod_t")
.value("SHIFT_SUPPORT", dart::constraint::BalanceConstraint::BalanceMethod_t::SHIFT_SUPPORT)
.value("SHIFT_COM", dart::constraint::BalanceConstraint::BalanceMethod_t::SHIFT_COM)
;
}

/* footer */
