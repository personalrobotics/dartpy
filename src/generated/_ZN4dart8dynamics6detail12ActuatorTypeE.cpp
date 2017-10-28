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

void _ZN4dart8dynamics6detail12ActuatorTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::detail::ActuatorType>("ActuatorType")
.value("FORCE", dart::dynamics::detail::ActuatorType::FORCE)
.value("PASSIVE", dart::dynamics::detail::ActuatorType::PASSIVE)
.value("SERVO", dart::dynamics::detail::ActuatorType::SERVO)
.value("ACCELERATION", dart::dynamics::detail::ActuatorType::ACCELERATION)
.value("VELOCITY", dart::dynamics::detail::ActuatorType::VELOCITY)
.value("LOCKED", dart::dynamics::detail::ActuatorType::LOCKED)
;
}

/* footer */
