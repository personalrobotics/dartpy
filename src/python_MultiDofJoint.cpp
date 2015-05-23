#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

namespace dart {
namespace python {

template <size_t DOF>
void python_MultiDofJoint_impl(char const *const name)
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::Joint;
    using dart::dynamics::MultiDofJoint;

    scope joint_class(
        class_<MultiDofJoint<DOF>, bases<Joint>, noncopyable>(name, no_init)
    );

    class_<typename MultiDofJoint<DOF>::UniqueProperties>("UniqueProperties")
        .def_readwrite("position_lower_limits",
            &MultiDofJoint<DOF>::UniqueProperties::mPositionLowerLimits)
        .def_readwrite("position_upper_limits",
            &MultiDofJoint<DOF>::UniqueProperties::mPositionUpperLimits)
        .def_readwrite("velocity_lower_limits",
            &MultiDofJoint<DOF>::UniqueProperties::mVelocityLowerLimits)
        .def_readwrite("velocity_upper_limits",
            &MultiDofJoint<DOF>::UniqueProperties::mVelocityUpperLimits)
        .def_readwrite("acceleration_lower_limits",
            &MultiDofJoint<DOF>::UniqueProperties::mAccelerationLowerLimits)
        .def_readwrite("acceleration_upper_limits",
            &MultiDofJoint<DOF>::UniqueProperties::mAccelerationUpperLimits)
        .def_readwrite("force_lower_limits",
            &MultiDofJoint<DOF>::UniqueProperties::mForceLowerLimits)
        .def_readwrite("force_upper_limits",
            &MultiDofJoint<DOF>::UniqueProperties::mForceUpperLimits)
        .def_readwrite("spring_stiffnesses",
            &MultiDofJoint<DOF>::UniqueProperties::mSpringStiffnesses)
        .def_readwrite("rest_positions",
            &MultiDofJoint<DOF>::UniqueProperties::mRestPositions)
        .def_readwrite("damping_coefficients",
            &MultiDofJoint<DOF>::UniqueProperties::mDampingCoefficients)
        .def_readwrite("frictions",
            &MultiDofJoint<DOF>::UniqueProperties::mFrictions)
        .def_readwrite("preserve_dof_names",
            &MultiDofJoint<DOF>::UniqueProperties::mPreserveDofNames)
        .def_readwrite("dof_names",
            &MultiDofJoint<DOF>::UniqueProperties::mDofNames)
        ;

    class_<typename MultiDofJoint<DOF>::Properties, bases<
                Joint::Properties,
                typename MultiDofJoint<DOF>::UniqueProperties
            > >("Properties")
        ;
}


void python_MultiDofJoint()
{
    python_MultiDofJoint_impl<2>("TwoDofJoint");
    python_MultiDofJoint_impl<3>("ThreeDofJoint");
    python_MultiDofJoint_impl<6>("SixDofJoint");
}

} // namespace python
} // namespace dart
