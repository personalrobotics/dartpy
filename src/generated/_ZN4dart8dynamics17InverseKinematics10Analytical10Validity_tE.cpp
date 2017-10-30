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

void _ZN4dart8dynamics17InverseKinematics10Analytical10Validity_tE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("Analytical"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::InverseKinematics::Analytical::Validity_t>("Validity_t")
.value("VALID", dart::dynamics::InverseKinematics::Analytical::Validity_t::VALID)
.value("OUT_OF_REACH", dart::dynamics::InverseKinematics::Analytical::Validity_t::OUT_OF_REACH)
.value("LIMIT_VIOLATED", dart::dynamics::InverseKinematics::Analytical::Validity_t::LIMIT_VIOLATED)
;
}

/* footer */
