#include "pointers.h"
#include <dart/dynamics/dynamics.h>
#include <boost/python.hpp>
#include "util.h"

using boost::python::object;
using dart::dynamics::DegreeOfFreedom;
using dart::dynamics::DegreeOfFreedomPtr;
using dart::common::Subject;
using dart::dynamics::BodyNode;
using dart::dynamics::BodyNodePtr;
using dart::dynamics::DegreeOfFreedomPtr;
using dart::dynamics::Joint;
using dart::dynamics::JointPtr;
using dart::dynamics::Skeleton;
using dart::dynamics::SkeletonPtr;
using dart::python::util::collection_from_python;

namespace {

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(setName_overloads,
    DegreeOfFreedom::setName, 1, 2);

} // namespace

namespace dart {
namespace python {

void python_DegreeOfFreedom()
{
    using namespace ::boost::python;
    using boost::noncopyable;

    using return_JointPtr = return_by_smart_ptr<JointPtr>;
    using return_BodyNodePtr = return_by_smart_ptr<BodyNodePtr>;

    collection_from_python<std::vector<DegreeOfFreedomPtr> >();

    class_<DegreeOfFreedom, DegreeOfFreedomPtr, bases<Subject>, noncopyable>(
            "DegreeOfFreedom", no_init)
        .def("setName", &DegreeOfFreedom::setName,
            return_value_policy<copy_const_reference>(),
            setName_overloads())
        .def("getName", &DegreeOfFreedom::setName,
            return_value_policy<copy_const_reference>())
        .def("preserveName", &DegreeOfFreedom::preserveName)
        .def("isNamePreserved", &DegreeOfFreedom::isNamePreserved)
        .def("getIndexInSkeleton", &DegreeOfFreedom::getIndexInSkeleton)
        .def("getIndexInTree", &DegreeOfFreedom::getIndexInTree)
        .def("getIndexInJoint", &DegreeOfFreedom::getIndexInJoint)
        .def("getTreeIndex", &DegreeOfFreedom::getTreeIndex)

        // Name
        .def("setCommand", &DegreeOfFreedom::setCommand)
        .def("getCommand", &DegreeOfFreedom::getCommand)
        .def("resetCommand", &DegreeOfFreedom::resetCommand)

        // Position
        .def("setPosition", &DegreeOfFreedom::setPosition)
        .def("getPosition", &DegreeOfFreedom::getPosition)
        .def("setPositionLimits",
            static_cast<void (DegreeOfFreedom::*)(double, double)>(
                &DegreeOfFreedom::setPositionLimits))
        .def("getPositionLimits", &DegreeOfFreedom::getPositionLimits)
            // TODO: Convert the return value to a Python tuple.
        .def("setPositionLowerLimit", &DegreeOfFreedom::setPositionLowerLimit)
        .def("getPositionLowerLimit", &DegreeOfFreedom::getPositionLowerLimit)
        .def("setPositionUpperLimit", &DegreeOfFreedom::setPositionUpperLimit)
        .def("getPositionUpperLimit", &DegreeOfFreedom::getPositionUpperLimit)
        .def("isCyclic", &DegreeOfFreedom::isCyclic)
        .def("hasPositionLimit", &DegreeOfFreedom::hasPositionLimit)
        .def("resetPosition", &DegreeOfFreedom::resetPosition)
        .def("setInitialPosition", &DegreeOfFreedom::setInitialPosition)
        .def("getInitialPosition", &DegreeOfFreedom::getInitialPosition)

        // Velocity
        .def("setVelocity", &DegreeOfFreedom::setVelocity)
        .def("getVelocity", &DegreeOfFreedom::getVelocity)
        .def("setVelocityLimits",
            static_cast<void (DegreeOfFreedom::*)(double, double)>(
                &DegreeOfFreedom::setVelocityLimits))
        .def("getVelocityLimits", &DegreeOfFreedom::getVelocityLimits)
            // TODO: Convert the return value to a Python tuple.
        .def("setVelocityLowerLimit", &DegreeOfFreedom::setVelocityLowerLimit)
        .def("getVelocityLowerLimit", &DegreeOfFreedom::getVelocityLowerLimit)
        .def("setVelocityUpperLimit", &DegreeOfFreedom::setVelocityUpperLimit)
        .def("getVelocityUpperLimit", &DegreeOfFreedom::getVelocityUpperLimit)
        .def("resetVelocity", &DegreeOfFreedom::resetVelocity)
        .def("setInitialVelocity", &DegreeOfFreedom::setInitialVelocity)
        .def("getInitialVelocity", &DegreeOfFreedom::getInitialVelocity)

        // Acceleration
        .def("setAcceleration", &DegreeOfFreedom::setAcceleration)
        .def("getAcceleration", &DegreeOfFreedom::getAcceleration)
        .def("setAccelerationLimits",
            static_cast<void (DegreeOfFreedom::*)(double, double)>(
                &DegreeOfFreedom::setAccelerationLimits))
        .def("getAccelerationLimits", &DegreeOfFreedom::getAccelerationLimits)
            // TODO: Convert the return value to a Python tuple.
        .def("setAccelerationLowerLimit", &DegreeOfFreedom::setAccelerationLowerLimit)
        .def("getAccelerationLowerLimit", &DegreeOfFreedom::getAccelerationLowerLimit)
        .def("setAccelerationUpperLimit", &DegreeOfFreedom::setAccelerationUpperLimit)
        .def("getAccelerationUpperLimit", &DegreeOfFreedom::getAccelerationUpperLimit)
        .def("resetAcceleration", &DegreeOfFreedom::resetAcceleration)

        // Force
        .def("setForce", &DegreeOfFreedom::setForce)
        .def("getForce", &DegreeOfFreedom::getForce)
        .def("setForceLimits",
            static_cast<void (DegreeOfFreedom::*)(double, double)>(
                &DegreeOfFreedom::setForceLimits))
        .def("getForceLimits", &DegreeOfFreedom::getForceLimits)
            // TODO: Convert the return value to a Python tuple.
        .def("setForceLowerLimit", &DegreeOfFreedom::setForceLowerLimit)
        .def("getForceLowerLimit", &DegreeOfFreedom::getForceLowerLimit)
        .def("setForceUpperLimit", &DegreeOfFreedom::setForceUpperLimit)
        .def("getForceUpperLimit", &DegreeOfFreedom::getForceUpperLimit)
        .def("resetForce", &DegreeOfFreedom::resetForce)

        // Velocity Change
        .def("setVelocityChange", &DegreeOfFreedom::setVelocityChange)
        .def("getVelocityChange", &DegreeOfFreedom::getVelocityChange)
        .def("resetVelocityChange", &DegreeOfFreedom::resetVelocityChange)

        // Constraint Impulse
        .def("setConstraintImpulse", &DegreeOfFreedom::setConstraintImpulse)
        .def("getConstraintImpulse", &DegreeOfFreedom::getConstraintImpulse)
        .def("resetConstraintImpulse", &DegreeOfFreedom::resetConstraintImpulse)
        
        // Passive forces - spring, viscous friction, Coulomb friction
        .def("setSpringStiffness", &DegreeOfFreedom::setSpringStiffness)
        .def("setRestPosition", &DegreeOfFreedom::setRestPosition)
        .def("getRestPosition", &DegreeOfFreedom::getRestPosition)
        .def("setDampingCoefficient", &DegreeOfFreedom::setDampingCoefficient)
        .def("getDampingCoefficient", &DegreeOfFreedom::getDampingCoefficient)
        .def("setCoulombFriction", &DegreeOfFreedom::setCoulombFriction)
        .def("getCoulombFriction", &DegreeOfFreedom::getCoulombFriction)

        // Relationships
        .def("getJoint", 
            static_cast<Joint* (DegreeOfFreedom::*)()>(
                &DegreeOfFreedom::getJoint),
            return_value_policy<return_JointPtr>())
        .def("getSkeleton",
            static_cast<SkeletonPtr (DegreeOfFreedom::*)()>(
                &DegreeOfFreedom::getSkeleton))
        .def("getChildBodyNode", 
            static_cast<BodyNode* (DegreeOfFreedom::*)()>(
                &DegreeOfFreedom::getChildBodyNode),
            return_value_policy<return_BodyNodePtr>())
        .def("getParentBodyNode", 
            static_cast<BodyNode* (DegreeOfFreedom::*)()>(
                &DegreeOfFreedom::getParentBodyNode),
            return_value_policy<return_BodyNodePtr>())
        ;
}

} // namespace python
} // namespace dart
