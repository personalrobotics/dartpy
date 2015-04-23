#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include "util.h"

using ::dart::dynamics::Joint;

void Joint_setName_default(Joint *joint, std::string const &name)
{
    joint->setName(name);
}


void python_Joint()
{
    using namespace ::boost::python;

    typedef ::dart::dynamics::Joint::ActuatorType ActuatorType;

    enum_<ActuatorType>("ActuatorType")
        .value("FORCE", Joint::FORCE)
        .value("PASSIVE", Joint::PASSIVE)
        .value("SERVO", Joint::SERVO)
        .value("ACCELERATION", Joint::ACCELERATION)
        .value("VELOCITY", Joint::VELOCITY)
        .value("LOCKED", Joint::LOCKED)
        ;

    class_<Joint, Joint *, boost::noncopyable>("Joint", no_init)
        .add_property("name",
            make_function(&Joint::getName,
                          return_value_policy<copy_const_reference>()),
            &Joint_setName_default)
        .add_property("actuator_type",
            &Joint::getActuatorType,
            &Joint::setActuatorType)
        .add_property("is_kinematic", &Joint::isKinematic)
        .add_property("is_dynamic", &Joint::isDynamic)
        .def("set_name",
            make_function(&Joint::setName,
                          return_value_policy<copy_const_reference>()))
        ;
}
