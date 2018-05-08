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

void _ZN4dart8dynamics17InverseKinematics10Analytical19ExtraDofUtilizationE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("InverseKinematics").attr("Analytical"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization>("ExtraDofUtilization")
.value("UNUSED", dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization::UNUSED)
.value("PRE_ANALYTICAL", dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization::PRE_ANALYTICAL)
.value("POST_ANALYTICAL", dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization::POST_ANALYTICAL)
.value("PRE_AND_POST_ANALYTICAL", dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization::PRE_AND_POST_ANALYTICAL)
;
}

/* footer */
