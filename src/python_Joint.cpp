#include <unordered_map>
#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include <dart/renderer/RenderInterface.h>
#include "util.h"
#include "types.h"

using boost::python::object;
using dart::dynamics::BodyNode;
using dart::dynamics::BodyNodePtr;
using dart::dynamics::DegreeOfFreedom;
using dart::dynamics::DegreeOfFreedomPtr;
using dart::dynamics::Joint;
using dart::dynamics::JointPtr;
using dart::dynamics::SkeletonPtr;
using dart::python::JointType;

namespace {

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(setDofName_overloads,
    Joint::setDofName, 2, 3);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(checkSanity_overloads,
    Joint::checkSanity, 0, 1);

} // namespace

namespace dart {
namespace python {

class JointMap {
public:
    void addOverride(std::string const &jointType,
                     std::string const &className)
    {
        m_jointTypeOverrides[jointType] = className;
    }

    template <class JointT>
    std::string const &getPythonName() const
    {
        return getPythonName(JointT::getStaticType());
    }

    /// Maps from Joint::getType() to the Python class name.
    std::string const &getPythonName(std::string const &jointType) const
    {
        auto const it = m_jointTypeOverrides.find(jointType);

        if (it != std::end(m_jointTypeOverrides)) {
            return it->second;
        } else {
            return jointType;
        }
    }

    static JointMap &instance()
    {
        if (!m_instance) {
            m_instance.reset(new JointMap);
        }
        return *m_instance;
    }

private:
    static std::shared_ptr<JointMap> m_instance;

    std::unordered_map<std::string, std::string> m_jointTypeOverrides;

    JointMap() = default;
    JointMap(JointMap const &) = delete;
    JointMap &operator=(JointMap const &) = delete;
};

std::shared_ptr<JointMap> JointMap::m_instance;

void python_Joint()
{
    using namespace ::boost::python;
    using namespace ::dart::python;

    using boost::noncopyable;

    typedef ::dart::dynamics::Joint::ActuatorType ActuatorType;
    typedef return_by_smart_ptr<BodyNodePtr> return_BodyNodePtr;
    typedef return_by_smart_ptr<DegreeOfFreedomPtr> return_DegreeOfFredomPtr;

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

    scope joint_class(
        class_<Joint, JointPtr, noncopyable>("Joint", no_init)
            .def("setProperties", &Joint::setProperties)
            .def("getProperties", &Joint::getJointProperties,
                return_value_policy<copy_const_reference>())
            .def("copy",
                static_cast<void (Joint::*)(const Joint*)>(
                    &Joint::copy))
            .def("setName", &Joint::setName,
                return_value_policy<copy_const_reference>())
            .def("getName", &Joint::getName,
                return_value_policy<copy_const_reference>())
            .def("getType", &Joint::getType,
                return_value_policy<copy_const_reference>())
            .def("setActuatorType", &Joint::setActuatorType)
            .def("getActuatorType", &Joint::getActuatorType)
            .def("isKinematic", &Joint::isKinematic)
            .def("isDynamic", &Joint::isDynamic)
            .def("getChildBodyNode",
                static_cast<BodyNode* (Joint::*)()>(
                    &Joint::getChildBodyNode),
                return_value_policy<return_BodyNodePtr>())
            .def("getParentBodyNode",
                static_cast<BodyNode* (Joint::*)()>(
                    &Joint::getParentBodyNode),
                return_value_policy<return_BodyNodePtr>())
            .def("getSkeleton",
                static_cast<SkeletonPtr (Joint::*)()>(
                    &Joint::getSkeleton))
            .def("setTransformFromParentBodyNode",
                &Joint::setTransformFromParentBodyNode)
            .def("setTransformFromChildBodyNode",
                &Joint::setTransformFromParentBodyNode)
            .def("getTransformFromParentBodyNode",
                &Joint::getTransformFromParentBodyNode,
                return_value_policy<copy_const_reference>())
            .def("getTransformFromChildBodyNode",
                &Joint::getTransformFromParentBodyNode,
                return_value_policy<copy_const_reference>())
            .def("setPositionLimitEnforced", &Joint::setPositionLimitEnforced)
            .def("setPositionLimited", &Joint::setPositionLimited)
            .def("isPositionLimitEnforced", &Joint::isPositionLimitEnforced)
            .def("isPositionLimited", &Joint::isPositionLimited)
            .def("getIndexInSkeleton", &Joint::getIndexInSkeleton)
            .def("getIndexInTree", &Joint::getIndexInTree)
            .def("getJointIndexInSkeleton", &Joint::getJointIndexInSkeleton)
            .def("getJointIndexInTree", &Joint::getJointIndexInTree)
            .def("getTreeIndex", &Joint::getTreeIndex)
            .def("getDof",
                static_cast<DegreeOfFreedom* (Joint::*)(size_t)>(
                    &Joint::getDof),
                return_value_policy<return_DegreeOfFredomPtr>())
            .def("setDofName", &Joint::setDofName,
                return_value_policy<copy_const_reference>(),
                setDofName_overloads())
            .def("preserveDofName", &Joint::preserveDofName)
            .def("isDofNamePreserved", &Joint::isDofNamePreserved)
            .def("getDofName", &Joint::getDofName,
                return_value_policy<copy_const_reference>())
            .def("getNumDofs", &Joint::getNumDofs)

            // Command
            .def("setCommand", &Joint::setCommand)
            .def("getCommand", &Joint::getCommand)
            .def("setCommands", &Joint::setCommands)
            .def("getCommands", &Joint::getCommands)
            .def("resetCommands", &Joint::resetCommands)

            // Position
            .def("setPosition", &Joint::setPosition)
            .def("getPosition", &Joint::getPosition)
            .def("setPositions", &Joint::setPositions)
            .def("getPositions", &Joint::getPositions)
            .def("setPositionLowerLimit", &Joint::setPositionLowerLimit)
            .def("getPositionLowerLimit", &Joint::getPositionLowerLimit)
            .def("setPositionUpperLimit", &Joint::setPositionUpperLimit)
            .def("getPositionUpperLimit", &Joint::getPositionUpperLimit)
            .def("isCyclic", &Joint::isCyclic)
            .def("hasPositionLimit", &Joint::hasPositionLimit)
            .def("resetPositions", &Joint::resetPositions)
            .def("setInitialPosition", &Joint::setInitialPosition)
            .def("getInitialPosition", &Joint::getInitialPosition)
            .def("setInitialPositions", &Joint::setInitialPositions)
            .def("getInitialPositions", &Joint::getInitialPositions)

            // Velocity
            .def("setVelocity", &Joint::setVelocity)
            .def("getVelocity", &Joint::getVelocity)
            .def("setVelocities", &Joint::setVelocities)
            .def("getVelocities", &Joint::getVelocities)
            .def("setVelocityLowerLimit", &Joint::setVelocityLowerLimit)
            .def("getVelocityLowerLimit", &Joint::getVelocityLowerLimit)
            .def("setVelocityUpperLimit", &Joint::setVelocityUpperLimit)
            .def("getVelocityUpperLimit", &Joint::getVelocityUpperLimit)
            .def("resetVelocities", &Joint::resetVelocities)
            .def("setInitialVelocity", &Joint::setInitialVelocity)
            .def("getInitialVelocity", &Joint::getInitialVelocity)
            .def("setInitialVelocities", &Joint::setInitialVelocities)
            .def("getInitialVelocities", &Joint::getInitialVelocities)

            // Acceleration
            .def("setAcceleration", &Joint::setAcceleration)
            .def("getAcceleration", &Joint::getAcceleration)
            .def("setAccelerations", &Joint::setAccelerations)
            .def("getAccelerations", &Joint::getAccelerations)
            .def("setAccelerationLowerLimit", &Joint::setAccelerationLowerLimit)
            .def("getAccelerationLowerLimit", &Joint::getAccelerationLowerLimit)
            .def("setAccelerationUpperLimit", &Joint::setAccelerationUpperLimit)
            .def("getAccelerationUpperLimit", &Joint::getAccelerationUpperLimit)
            .def("resetAccelerations", &Joint::resetAccelerations)

            // Force 
            .def("setForce", &Joint::setForce)
            .def("getForce", &Joint::getForce)
            .def("setForces", &Joint::setForces)
            .def("getForces", &Joint::getForces)
            .def("setForceLowerLimit", &Joint::setForceLowerLimit)
            .def("getForceLowerLimit", &Joint::getForceLowerLimit)
            .def("setForceUpperLimit", &Joint::setForceUpperLimit)
            .def("getForceUpperLimit", &Joint::getForceUpperLimit)
            .def("resetForces", &Joint::resetForces)

            // Sanity Check
            .def("checkSanity", &Joint::checkSanity, checkSanity_overloads())

            // Velocity Change
            .def("setVelocityChange", &Joint::setVelocityChange)
            .def("getVelocityChange", &Joint::getVelocityChange)
            .def("resetVelocityChanges", &Joint::resetVelocityChanges)

            // Constraint impulse
            .def("setConstraintImpulse", &Joint::setConstraintImpulse)
            .def("getConstraintImpulse", &Joint::getConstraintImpulse)
            .def("resetConstraintImpulses", &Joint::resetConstraintImpulses)

            // Integration and finite difference
            .def("integratePositions", &Joint::integratePositions)
            .def("integrateVelocities", &Joint::integrateVelocities)
            .def("getPositionDifferences", &Joint::getPositionDifferences)

            // Passive forces - spring, viscous friction, Coulomb friction
            .def("setSpringStiffness", &Joint::setSpringStiffness)
            .def("getSpringStiffness", &Joint::getSpringStiffness)
            .def("setRestPosition", &Joint::setRestPosition)
            .def("getRestPosition", &Joint::getRestPosition)
            .def("setDampingCoefficient", &Joint::setDampingCoefficient)
            .def("getDampingCoefficient", &Joint::getDampingCoefficient)
            .def("setCoulombFriction", &Joint::setCoulombFriction)
            .def("getCoulombFriction", &Joint::getCoulombFriction)

            .def("getPotentialEnergy", &Joint::getPotentialEnergy)

            .def("getLocalTransform", &Joint::getLocalTransform,
                return_value_policy<copy_const_reference>())
            .def("getLocalSpatialVelocity",
                &Joint::getLocalSpatialVelocity,
                return_value_policy<copy_const_reference>())
            .def("getLocalSpatialAcceleration",
                &Joint::getLocalSpatialAcceleration,
                return_value_policy<copy_const_reference>())
            .def("getLocalPrimaryAcceleration",
                &Joint::getLocalPrimaryAcceleration,
                return_value_policy<copy_const_reference>())
            .def("getLocalJacobian",
                static_cast<const math::Jacobian (Joint::*)() const>(
                    &Joint::getLocalJacobian))
            .def("getLocalJacobian",
                static_cast<math::Jacobian (Joint::*)(
                        const Eigen::VectorXd&) const>(
                    &Joint::getLocalJacobian))
            .def("getLocalJacobianTimeDeriv",
                &Joint::getLocalJacobianTimeDeriv)

            .def("getBodyConstraintWrench", &Joint::getBodyConstraintWrench)

            // Rendering
            .def("applyGLTransform", &Joint::applyGLTransform)
    );

    joint_class.attr("DefaultActuatorType") = Joint::DefaultActuatorType;

    enum_<ActuatorType>("ActuatorType")
        .value("FORCE", Joint::FORCE)
        .value("PASSIVE", Joint::PASSIVE)
        .value("SERVO", Joint::SERVO)
        .value("ACCELERATION", Joint::ACCELERATION)
        .value("VELOCITY", Joint::VELOCITY)
        .value("LOCKED", Joint::LOCKED)
        ;

    class_<Joint::Properties>("Properties")
        .def_readwrite("mName", &Joint::Properties::mName)
        .def_readwrite("mT_ParentBodyToJoint",
            &Joint::Properties::mT_ParentBodyToJoint)
        .def_readwrite("mT_ChildBodyToJoint",
            &Joint::Properties::mT_ChildBodyToJoint)
        .def_readwrite("mIsPositionLimited",
            &Joint::Properties::mIsPositionLimited)
        .def_readwrite("mActuatorType",
            &Joint::Properties::mActuatorType)
        ;
}

} // namespace python
} // namespace dart
