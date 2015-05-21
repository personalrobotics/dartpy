#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include "util.h"
#include "types.h"

using ::dart::dynamics::Joint;

void Joint_setName_default(Joint *joint, std::string const &name)
{
    joint->setName(name);
}


void python_Joint()
{
    using namespace ::boost::python;

    using ::dart::dynamics::JointPtr;
    using ::dart::python::JointType;

    typedef ::dart::dynamics::Joint::ActuatorType ActuatorType;

    enum_<ActuatorType>("ActuatorType")
        .value("FORCE", Joint::FORCE)
        .value("PASSIVE", Joint::PASSIVE)
        .value("SERVO", Joint::SERVO)
        .value("ACCELERATION", Joint::ACCELERATION)
        .value("VELOCITY", Joint::VELOCITY)
        .value("LOCKED", Joint::LOCKED)
        ;

    enum_<JointType::Enum>("JointType")
        .value("PRISMATIC", JointType::PRISMATIC)
        .value("REVOLUTE", JointType::REVOLUTE)
        .value("SCREW", JointType::SCREW)
        .value("WELD", JointType::WELD)
        .value("UNIVERSAL", JointType::UNIVERSAL)
        .value("BALL", JointType::BALL)
        .value("EULER", JointType::EULER)
        .value("PLANAR", JointType::PLANAR)
        .value("TRANSLATIONAL", JointType::TRANSLATIONAL)
        .value("FREE", JointType::FREE)
        ;

    // Joint property classes.
    using dart::dynamics::SingleDofJoint;
    using dart::dynamics::RevoluteJoint;

    class_<Joint::Properties>("JointProperties")
        .def_readwrite("name", &Joint::Properties::mName)
        .def_readwrite("T_parent_body_to_joint",
            &Joint::Properties::mT_ParentBodyToJoint)
        .def_readwrite("T_child_body_to_joint",
            &Joint::Properties::mT_ChildBodyToJoint)
        .def_readwrite("is_position_limited",
            &Joint::Properties::mIsPositionLimited)
        .def_readwrite("actuator_type",
            &Joint::Properties::mActuatorType)
        ;

    class_<SingleDofJoint::UniqueProperties>("SingleDofJointUniqueProperties")
        .def_readwrite("position_lower_limit",
            &SingleDofJoint::UniqueProperties::mPositionLowerLimit)
        .def_readwrite("position_upper_limit",
            &SingleDofJoint::UniqueProperties::mPositionUpperLimit)
        .def_readwrite("velocity_lower_limit",
            &SingleDofJoint::UniqueProperties::mVelocityLowerLimit)
        .def_readwrite("velocity_upper_limit",
            &SingleDofJoint::UniqueProperties::mVelocityUpperLimit)
        .def_readwrite("acceleration_lower_limit",
            &SingleDofJoint::UniqueProperties::mAccelerationLowerLimit)
        .def_readwrite("acceleration_upper_limit",
            &SingleDofJoint::UniqueProperties::mAccelerationUpperLimit)
        .def_readwrite("force_lower_limit",
            &SingleDofJoint::UniqueProperties::mForceLowerLimit)
        .def_readwrite("force_upper_limit",
            &SingleDofJoint::UniqueProperties::mForceUpperLimit)
        .def_readwrite("spring_stiffness",
            &SingleDofJoint::UniqueProperties::mSpringStiffness)
        .def_readwrite("rest_position",
            &SingleDofJoint::UniqueProperties::mRestPosition)
        .def_readwrite("damping_coefficient",
            &SingleDofJoint::UniqueProperties::mDampingCoefficient)
        .def_readwrite("friction",
            &SingleDofJoint::UniqueProperties::mFriction)
        .def_readwrite("preserve_dof_name",
            &SingleDofJoint::UniqueProperties::mPreserveDofName)
        .def_readwrite("dof_name",
            &SingleDofJoint::UniqueProperties::mDofName)
        ;

    class_<SingleDofJoint::Properties, bases<
                Joint::Properties, SingleDofJoint::UniqueProperties>
            >("SingleDofJointProperties")
        ;

    class_<RevoluteJoint::UniqueProperties>("RevoluteJointUniqueProperties")
        .def_readwrite("axis", &RevoluteJoint::UniqueProperties::mAxis)
        ;

    class_<RevoluteJoint::Properties, bases<
            SingleDofJoint::Properties, RevoluteJoint::UniqueProperties>
          >("RevoluteJointProperties")
        ;

    // Joint classes
    class_<Joint, JointPtr, boost::noncopyable>("Joint", no_init)
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
