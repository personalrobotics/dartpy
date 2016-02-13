#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics17InverseKinematics10Analytical10Validity_tE()
{
::boost::python::enum_<dart::dynamics::InverseKinematics::Analytical::Validity_t>("Validity_t")
.value("VALID", dart::dynamics::InverseKinematics::Analytical::Validity_t::VALID)
.value("OUT_OF_REACH", dart::dynamics::InverseKinematics::Analytical::Validity_t::OUT_OF_REACH)
.value("LIMIT_VIOLATED", dart::dynamics::InverseKinematics::Analytical::Validity_t::LIMIT_VIOLATED)
;
}

/* footer */
