#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics8Skeleton12ConfigFlag_tE()
{
::boost::python::enum_<dart::dynamics::Skeleton::ConfigFlag_t>("ConfigFlag_t")
.value("CONFIG_NOTHING", dart::dynamics::Skeleton::ConfigFlag_t::CONFIG_NOTHING)
.value("CONFIG_POSITIONS", dart::dynamics::Skeleton::ConfigFlag_t::CONFIG_POSITIONS)
.value("CONFIG_VELOCITIES", dart::dynamics::Skeleton::ConfigFlag_t::CONFIG_VELOCITIES)
.value("CONFIG_ACCELERATIONS", dart::dynamics::Skeleton::ConfigFlag_t::CONFIG_ACCELERATIONS)
.value("CONFIG_FORCES", dart::dynamics::Skeleton::ConfigFlag_t::CONFIG_FORCES)
.value("CONFIG_COMMANDS", dart::dynamics::Skeleton::ConfigFlag_t::CONFIG_COMMANDS)
.value("CONFIG_ALL", dart::dynamics::Skeleton::ConfigFlag_t::CONFIG_ALL)
;
}

/* footer */
