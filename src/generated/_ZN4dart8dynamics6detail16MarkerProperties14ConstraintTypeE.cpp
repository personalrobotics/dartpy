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

void _ZN4dart8dynamics6detail16MarkerProperties14ConstraintTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail").attr("MarkerProperties"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::detail::MarkerProperties::ConstraintType>("ConstraintType")
.value("NO", dart::dynamics::detail::MarkerProperties::ConstraintType::NO)
.value("HARD", dart::dynamics::detail::MarkerProperties::ConstraintType::HARD)
.value("SOFT", dart::dynamics::detail::MarkerProperties::ConstraintType::SOFT)
;
}

/* footer */
