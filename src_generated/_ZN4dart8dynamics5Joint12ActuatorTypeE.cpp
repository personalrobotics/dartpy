#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics5Joint12ActuatorTypeE()
{
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