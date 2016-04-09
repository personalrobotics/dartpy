#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics5Joint12ActuatorTypeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("Joint"));
::boost::python::scope parent_scope(parent_object);

::boost::python::enum_<dart::dynamics::Joint::ActuatorType>("ActuatorType")
.value("FORCE", dart::dynamics::Joint::ActuatorType::FORCE)
.value("PASSIVE", dart::dynamics::Joint::ActuatorType::PASSIVE)
.value("SERVO", dart::dynamics::Joint::ActuatorType::SERVO)
.value("ACCELERATION", dart::dynamics::Joint::ActuatorType::ACCELERATION)
.value("VELOCITY", dart::dynamics::Joint::ActuatorType::VELOCITY)
.value("LOCKED", dart::dynamics::Joint::ActuatorType::LOCKED)
;
}

/* footer */
