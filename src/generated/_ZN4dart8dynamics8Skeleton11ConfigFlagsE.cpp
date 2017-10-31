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

void _ZN4dart8dynamics8Skeleton11ConfigFlagsE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Skeleton"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::Skeleton::ConfigFlags>("ConfigFlags")
.value("CONFIG_NOTHING", dart::dynamics::Skeleton::ConfigFlags::CONFIG_NOTHING)
.value("CONFIG_POSITIONS", dart::dynamics::Skeleton::ConfigFlags::CONFIG_POSITIONS)
.value("CONFIG_VELOCITIES", dart::dynamics::Skeleton::ConfigFlags::CONFIG_VELOCITIES)
.value("CONFIG_ACCELERATIONS", dart::dynamics::Skeleton::ConfigFlags::CONFIG_ACCELERATIONS)
.value("CONFIG_FORCES", dart::dynamics::Skeleton::ConfigFlags::CONFIG_FORCES)
.value("CONFIG_COMMANDS", dart::dynamics::Skeleton::ConfigFlags::CONFIG_COMMANDS)
.value("CONFIG_ALL", dart::dynamics::Skeleton::ConfigFlags::CONFIG_ALL)
;
}

/* footer */
