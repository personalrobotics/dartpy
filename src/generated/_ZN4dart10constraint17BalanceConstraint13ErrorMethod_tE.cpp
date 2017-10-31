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
