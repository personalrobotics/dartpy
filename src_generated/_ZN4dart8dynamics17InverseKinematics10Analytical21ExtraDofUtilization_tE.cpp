#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics10Analytical21ExtraDofUtilization_tE()
{
::boost::python::enum_<dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t>("ExtraDofUtilization_t")
.value("UNUSED", dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t::UNUSED)
.value("PRE_ANALYTICAL", dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t::PRE_ANALYTICAL)
.value("POST_ANALYTICAL", dart::dynamics::InverseKinematics::Analytical::ExtraDofUtilization_t::POST_ANALYTICAL)
;
}

/* footer */
