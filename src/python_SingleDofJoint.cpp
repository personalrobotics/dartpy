#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

void python_SingleDofJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::Joint;
    using dart::dynamics::SingleDofJoint;

    scope joint_class(
        class_<SingleDofJoint, bases<Joint>,
               noncopyable>("SingleDofJoint", no_init)
    );

    class_<SingleDofJoint::UniqueProperties>("UniqueProperties")
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
            >("Properties")
        ;
}

} // namespace python
} // namespace dart
