#include "pointers.h"
#include <boost/format.hpp>
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include <dart/renderer/RenderInterface.h>
#include "util.h"

using ::dart::math::AngularJacobian;
using ::dart::math::LinearJacobian;
using ::dart::math::Jacobian;
using ::dart::math::SupportPolygon;
using ::dart::common::Subject;
using ::dart::dynamics::BodyNode;
using ::dart::dynamics::BodyNodePtr;
using ::dart::dynamics::EndEffector;
using ::dart::dynamics::EndEffectorPtr;
using ::dart::dynamics::SoftBodyNodePtr;
using ::dart::dynamics::DegreeOfFreedom;
using ::dart::dynamics::DegreeOfFreedomPtr;
using ::dart::dynamics::Joint;
using ::dart::dynamics::Frame;
using ::dart::dynamics::JointPtr;
using ::dart::dynamics::WholeBodyIK;
using ::dart::dynamics::PointMass;
using ::dart::dynamics::JacobianNode;
using ::dart::dynamics::Marker;
using ::dart::dynamics::MetaSkeleton;
using ::dart::dynamics::MetaSkeletonPtr;
using ::dart::dynamics::Skeleton;
using ::dart::dynamics::SkeletonPtr;
using ::dart::dynamics::SoftBodyNode;
using ::dart::python::util::collection_from_python;

static Joint *get_root_joint(Skeleton *skeleton)
{
    using ::boost::format;
    using ::boost::str;

    static std::string const root_joint_name = "rootJoint";

    Joint *root_joint = skeleton->getJoint(root_joint_name);
    if (root_joint) {
        return root_joint;
    } else {
        throw std::runtime_error(str(
            format("Skeleton has no joint named '%s'.") % root_joint_name));
    }
}

static SkeletonPtr Skeleton_constructor(std::string const &name)
{
    return Skeleton::create(name);
}

static Eigen::Matrix4d Skeleton_getPose(Skeleton *skeleton)
{
    using ::dart::dynamics::FreeJoint;

    Eigen::VectorXd const positions = get_root_joint(skeleton)->getPositions();
    return FreeJoint::convertToTransform(positions).matrix();
}

static void Skeleton_setPose(Skeleton *skeleton, Eigen::Matrix4d const &pose)
{
    using ::dart::dynamics::FreeJoint;

    Eigen::VectorXd const positions = FreeJoint::convertToPositions(
        Eigen::Isometry3d(pose));
    get_root_joint(skeleton)->setPositions(positions);
}

static dart::dynamics::DegreeOfFreedomPtr Skeleton_getDofByName(Skeleton *skeleton,
        std::string const &name)
{
    return dart::dynamics::DegreeOfFreedomPtr(skeleton->getDof(name));
}

namespace {

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(
    getLinearJacobian_overloads2, MetaSkeleton::getLinearJacobian, 1, 2)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(
    getLinearJacobian_overloads3, MetaSkeleton::getLinearJacobian, 2, 3)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(
    getAngularJacobian_overloads2, MetaSkeleton::getAngularJacobian, 1, 2)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getJacobianClassicDeriv_overloads3,
    MetaSkeleton::getJacobianClassicDeriv, 2, 3)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getLinearJacobianDeriv_overloads2,
    MetaSkeleton::getLinearJacobianDeriv, 1, 2)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getLinearJacobianDeriv_overloads3,
    MetaSkeleton::getLinearJacobianDeriv, 2, 3)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getAngularJacobianDeriv_overloads2,
    MetaSkeleton::getAngularJacobianDeriv, 1, 2)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getIndexOf_overloads,
    MetaSkeleton::getIndexOf, 1, 2);

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(enableSelfCollision_overloads,
    Skeleton::enableSelfCollision, 0, 1);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getRootBodyNode_overloads,
    Skeleton::getRootBodyNode, 0, 1);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(computeForwardKinematics_overloads,
    Skeleton::computeForwardKinematics, 0, 3);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(computeInverseDynamics_overloads,
    Skeleton::computeInverseDynamics, 0, 3);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(draw_overloads,
    Skeleton::draw, 0, 3);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(drawMarkers_overloads,
    Skeleton::drawMarkers, 0, 3);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getIk_overloads,
    Skeleton::getIk, 0, 1);
BOOST_PYTHON_FUNCTION_OVERLOADS(create_overloads,
    Skeleton::create, 0, 1);

} // namespace

namespace dart {
namespace python {

void python_Skeleton()
{
    using namespace ::boost::python;
    using ::boost::noncopyable;

    typedef return_by_smart_ptr<BodyNodePtr> return_BodyNodePtr;
    typedef return_by_smart_ptr<SoftBodyNodePtr> return_SoftBodyNodePtr;
    typedef return_by_smart_ptr<DegreeOfFreedomPtr> return_DegreeOfFredomPtr;
    typedef return_by_smart_ptr<JointPtr> return_JointPtr;
    typedef return_by_smart_ptr<EndEffectorPtr> return_EndEffectorPtr;

    collection_from_python<std::vector<SkeletonPtr> >();

    implicitly_convertible<SkeletonPtr, MetaSkeletonPtr>(); 

    class_<MetaSkeleton, MetaSkeletonPtr, bases<Subject>, noncopyable>(
            "MetaSkeleton", no_init)

        // Name
        .def("setName", &MetaSkeleton::setName,
            return_value_policy<copy_const_reference>())
        .def("getName", &MetaSkeleton::getName,
            return_value_policy<copy_const_reference>())

        // Structural Properties
        .def("getNumBodyNodes", &MetaSkeleton::getNumBodyNodes)
        .def("getBodyNode",
            static_cast<BodyNode *(MetaSkeleton::*)(size_t)>(
                &MetaSkeleton::getBodyNode),
            return_value_policy<return_BodyNodePtr>())
        .def("getBodyNodes",
            static_cast<const std::vector<BodyNode*>& (MetaSkeleton::*)()>(
                &MetaSkeleton::getBodyNodes),
            return_value_policy<copy_const_reference>())
            // TODO: Convert the output to a list of BodyNodePtrs.
        .def("getIndexOf",
            static_cast<size_t (MetaSkeleton::*)(const BodyNode*, bool) const>(
                &MetaSkeleton::getIndexOf),
            getIndexOf_overloads())
        .def("getNumJoints", &MetaSkeleton::getNumJoints)
        .def("getJoint",
            static_cast<Joint* (MetaSkeleton::*)(size_t)>(
                &MetaSkeleton::getJoint),
            return_value_policy<return_JointPtr>())
        .def("getIndexOf",
            static_cast<size_t (MetaSkeleton::*)(const Joint*, bool) const>(
                &MetaSkeleton::getIndexOf),
            getIndexOf_overloads())
        .def("getNumDofs", &MetaSkeleton::getNumDofs)
        .def("getDof",
            static_cast<DegreeOfFreedom* (MetaSkeleton::*)(size_t)>(
                &MetaSkeleton::getDof),
            return_value_policy<return_DegreeOfFredomPtr>())
        .def("getDofs",
            static_cast<const std::vector<DegreeOfFreedom*>& (MetaSkeleton::*)(
                )>(&MetaSkeleton::getDofs),
            return_value_policy<copy_const_reference>())
            // TODO: Convert the output to a list of DegreeOfFreedomPtrs.
        .def("getIndexOf",
            static_cast<size_t (MetaSkeleton::*)(
                    const DegreeOfFreedom*, bool) const>(
                &MetaSkeleton::getIndexOf),
            getIndexOf_overloads())

        // Command
        .def("setCommand", &MetaSkeleton::setCommand)
        .def("getCommand", &MetaSkeleton::getCommand)
        .def("setCommands",
            static_cast<void (MetaSkeleton::*)(const Eigen::VectorXd&)>(
                &MetaSkeleton::setCommands))
        .def("setCommands",
            static_cast<void (MetaSkeleton::*)(
                    const std::vector<size_t>&, const Eigen::VectorXd&)>(
                &MetaSkeleton::setCommands))
        .def("getCommands",
            static_cast<Eigen::VectorXd (MetaSkeleton::*)() const>(
                &MetaSkeleton::getCommands))
        .def("getCommands",
            static_cast<Eigen::VectorXd (MetaSkeleton::*)(
                    const std::vector<size_t>&) const>(
                &MetaSkeleton::getCommands))
        .def("resetCommands", &MetaSkeleton::resetCommands)

        // Position
        .def("setPosition", &MetaSkeleton::setPosition)
        .def("getPosition", &MetaSkeleton::getPosition)
        .def("setPositions",
            static_cast<void (MetaSkeleton::*)(const Eigen::VectorXd&)>(
                &MetaSkeleton::setPositions))
        .def("setPositions",
            static_cast<void (MetaSkeleton::*)(
                    const std::vector<size_t>&, const Eigen::VectorXd&)>(
                &MetaSkeleton::setPositions))
        .def("getPositions",
            static_cast<Eigen::VectorXd (MetaSkeleton::*)() const>(
                &MetaSkeleton::getPositions))
        .def("getPositions",
            static_cast<Eigen::VectorXd (MetaSkeleton::*)(
                    const std::vector<size_t>&) const>(
                &MetaSkeleton::getPositions))
        .def("resetPositions", &MetaSkeleton::resetPositions)
        .def("setPositionLowerLimit", &MetaSkeleton::setPositionLowerLimit)
        .def("getPositionLowerLimit", &MetaSkeleton::getPositionLowerLimit)
        .def("setPositionUpperLimit", &MetaSkeleton::setPositionUpperLimit)
        .def("getPositionUpperLimit", &MetaSkeleton::getPositionUpperLimit)

        // Velocity
        .def("setVelocity", &MetaSkeleton::setVelocity)
        .def("getVelocity", &MetaSkeleton::getVelocity)
        .def("setVelocities",
            static_cast<void (MetaSkeleton::*)(const Eigen::VectorXd&)>(
                &MetaSkeleton::setVelocities))
        .def("setVelocities",
            static_cast<void (MetaSkeleton::*)(
                    const std::vector<size_t>&, const Eigen::VectorXd&)>(
                &MetaSkeleton::setVelocities))
        .def("getVelocities",
            static_cast<Eigen::VectorXd (MetaSkeleton::*)() const>(
                &MetaSkeleton::getVelocities))
        .def("getVelocities",
            static_cast<Eigen::VectorXd (MetaSkeleton::*)(
                    const std::vector<size_t>&) const>(
                &MetaSkeleton::getVelocities))
        .def("resetVelocities", &MetaSkeleton::resetVelocities)
        .def("setVelocityLowerLimit", &MetaSkeleton::setVelocityLowerLimit)
        .def("getVelocityLowerLimit", &MetaSkeleton::getVelocityLowerLimit)
        .def("setVelocityUpperLimit", &MetaSkeleton::setVelocityUpperLimit)
        .def("getVelocityUpperLimit", &MetaSkeleton::getVelocityUpperLimit)

        // Acceleration
        .def("setAcceleration", &MetaSkeleton::setAcceleration)
        .def("getAcceleration", &MetaSkeleton::getAcceleration)
        .def("setAccelerations",
            static_cast<void (MetaSkeleton::*)(const Eigen::VectorXd&)>(
                &MetaSkeleton::setAccelerations))
        .def("setAccelerations",
            static_cast<void (MetaSkeleton::*)(
                    const std::vector<size_t>&, const Eigen::VectorXd&)>(
                &MetaSkeleton::setAccelerations))
        .def("getAccelerations",
            static_cast<Eigen::VectorXd (MetaSkeleton::*)() const>(
                &MetaSkeleton::getAccelerations))
        .def("getAccelerations",
            static_cast<Eigen::VectorXd (MetaSkeleton::*)(
                    const std::vector<size_t>&) const>(
                &MetaSkeleton::getAccelerations))
        .def("resetAccelerations", &MetaSkeleton::resetAccelerations)
        .def("setAccelerationLowerLimit", &MetaSkeleton::setAccelerationLowerLimit)
        .def("getAccelerationLowerLimit", &MetaSkeleton::getAccelerationLowerLimit)
        .def("setAccelerationUpperLimit", &MetaSkeleton::setAccelerationUpperLimit)
        .def("getAccelerationUpperLimit", &MetaSkeleton::getAccelerationUpperLimit)

        // Force
        .def("setForce", &MetaSkeleton::setForce)
        .def("getForce", &MetaSkeleton::getForce)
        .def("setForces",
            static_cast<void (MetaSkeleton::*)(const Eigen::VectorXd&)>(
                &MetaSkeleton::setForces))
        .def("setForces",
            static_cast<void (MetaSkeleton::*)(
                    const std::vector<size_t>&, const Eigen::VectorXd&)>(
                &MetaSkeleton::setForces))
        .def("getForces",
            static_cast<Eigen::VectorXd (MetaSkeleton::*)() const>(
                &MetaSkeleton::getForces))
        .def("getForces",
            static_cast<Eigen::VectorXd (MetaSkeleton::*)(
                    const std::vector<size_t>&) const>(
                &MetaSkeleton::getForces))
        .def("resetGeneralizedForces", &MetaSkeleton::resetGeneralizedForces)
        .def("setForceLowerLimit", &MetaSkeleton::setForceLowerLimit)
        .def("getForceLowerLimit", &MetaSkeleton::getForceLowerLimit)
        .def("setForceUpperLimit", &MetaSkeleton::setForceUpperLimit)
        .def("getForceUpperLimit", &MetaSkeleton::getForceUpperLimit)

        // Velocity Change
        .def("getVelocityChanges", &MetaSkeleton::getVelocityChanges)

        // Constraint Impulse
        .def("setJointConstraintImpulses",
            &MetaSkeleton::setJointConstraintImpulses)
        .def("getJointConstraintImpulses",
            &MetaSkeleton::getJointConstraintImpulses)

        // Jacobians
        .def("getJacobian",
            static_cast<Jacobian (MetaSkeleton::*)(const JacobianNode*) const>(
                &MetaSkeleton::getJacobian))
        .def("getJacobian",
            static_cast<Jacobian (MetaSkeleton::*)(
                    const JacobianNode*, const Frame*) const>(
                &MetaSkeleton::getJacobian))
        .def("getJacobian",
            static_cast<Jacobian (MetaSkeleton::*)(
                    const JacobianNode*, const Eigen::Vector3d&) const>(
                &MetaSkeleton::getJacobian))
        .def("getJacobian",
            static_cast<Jacobian (MetaSkeleton::*)(const JacobianNode*,
                    const Eigen::Vector3d&, const Frame*) const>(
                &MetaSkeleton::getJacobian))
        .def("getWorldJacobian",
            static_cast<Jacobian (MetaSkeleton::*)(const JacobianNode*) const>(
                &MetaSkeleton::getWorldJacobian))
        .def("getWorldJacobian",
            static_cast<Jacobian (MetaSkeleton::*)(
                    const JacobianNode*, const Eigen::Vector3d&) const>(
                &MetaSkeleton::getWorldJacobian))
        .def("getLinearJacobian",
            static_cast<LinearJacobian (MetaSkeleton::*)(
                    const JacobianNode*, const Frame*) const>(
                &MetaSkeleton::getLinearJacobian),
            getLinearJacobian_overloads2())
        .def("getLinearJacobian",
            static_cast<LinearJacobian (MetaSkeleton::*)(const JacobianNode*,
                    const Eigen::Vector3d&, const Frame*) const>(
                &MetaSkeleton::getLinearJacobian),
            getLinearJacobian_overloads3())
        .def("getAngularJacobian",
            static_cast<AngularJacobian (MetaSkeleton::*)(
                    const JacobianNode*, const Frame*) const>(
                &MetaSkeleton::getAngularJacobian),
            getAngularJacobian_overloads2())
        .def("getJacobianSpatialDeriv",
            static_cast<Jacobian (MetaSkeleton::*)(const JacobianNode*) const>(
                &MetaSkeleton::getJacobianSpatialDeriv))
        .def("getJacobianSpatialDeriv",
            static_cast<Jacobian (MetaSkeleton::*)(const JacobianNode*,
                    const Frame*) const>(
                &MetaSkeleton::getJacobianSpatialDeriv))
        .def("getJacobianSpatialDeriv",
            static_cast<Jacobian (MetaSkeleton::*)(const JacobianNode*,
                    const Eigen::Vector3d&) const>(
                &MetaSkeleton::getJacobianSpatialDeriv))
        .def("getJacobianSpatialDeriv",
            static_cast<Jacobian (MetaSkeleton::*)(const JacobianNode*,
                    const Eigen::Vector3d&, const Frame*) const>(
                &MetaSkeleton::getJacobianSpatialDeriv))
        .def("getJacobianClassicDeriv",
            static_cast<Jacobian (MetaSkeleton::*)(const JacobianNode*) const>(
                &MetaSkeleton::getJacobianClassicDeriv))
        .def("getJacobianClassicDeriv",
            static_cast<Jacobian (MetaSkeleton::*)(const JacobianNode*,
                    const Frame*) const>(
                &MetaSkeleton::getJacobianClassicDeriv))
        .def("getJacobianClassicDeriv",
            static_cast<Jacobian (MetaSkeleton::*)(const JacobianNode*,
                    const Eigen::Vector3d&, const Frame*) const>(
                &MetaSkeleton::getJacobianClassicDeriv),
            getJacobianClassicDeriv_overloads3())
        .def("getLinearJacobianDeriv",
            static_cast<LinearJacobian (MetaSkeleton::*)(const JacobianNode*,
                    const Frame*) const>(
                &MetaSkeleton::getLinearJacobianDeriv))
            // TODO: Add support for default arguments.
        .def("getLinearJacobianDeriv",
            static_cast<LinearJacobian (MetaSkeleton::*)(const JacobianNode*,
                    const Eigen::Vector3d&, const Frame*) const>(
                &MetaSkeleton::getLinearJacobianDeriv),
            getLinearJacobianDeriv_overloads3())
        .def("getAngularJacobianDeriv",
            static_cast<AngularJacobian (MetaSkeleton::*)(const JacobianNode*,
                    const Frame*) const>(
                &MetaSkeleton::getAngularJacobianDeriv),
            getAngularJacobianDeriv_overloads2())

        // Equations of Motion
        .def("getMass", &MetaSkeleton::getMass)
        .def("getMassMatrix", &MetaSkeleton::getMassMatrix,
            return_value_policy<copy_const_reference>())
        .def("getAugMassMatrix", &MetaSkeleton::getAugMassMatrix,
            return_value_policy<copy_const_reference>())
        .def("getInvMassMatrix", &MetaSkeleton::getInvMassMatrix,
            return_value_policy<copy_const_reference>())
        .def("getInvAugMassMatrix", &MetaSkeleton::getInvAugMassMatrix,
            return_value_policy<copy_const_reference>())
        .def("getCoriolisForces", &MetaSkeleton::getCoriolisForces,
            return_value_policy<copy_const_reference>())
        .def("getGravityForces", &MetaSkeleton::getGravityForces,
            return_value_policy<copy_const_reference>())
        .def("getCoriolisAndGravityForces",
            &MetaSkeleton::getCoriolisAndGravityForces,
            return_value_policy<copy_const_reference>())
        .def("getExternalForces", &MetaSkeleton::getExternalForces,
            return_value_policy<copy_const_reference>())
        .def("getConstraintForces", &MetaSkeleton::getConstraintForces,
            return_value_policy<copy_const_reference>())
        .def("clearExternalForces", &MetaSkeleton::clearExternalForces)
        .def("clearInternalForces", &MetaSkeleton::clearInternalForces)
        .def("getKineticEnergy", &MetaSkeleton::getKineticEnergy)
        .def("getPotentialEnergy", &MetaSkeleton::getPotentialEnergy)

        // Center of Mass Jacobian
        .def("getCOM", &MetaSkeleton::getCOM)
        .def("getCOMSpatialVelocity", &MetaSkeleton::getCOMSpatialVelocity)
        .def("getCOMLinearVelocity", &MetaSkeleton::getCOMLinearVelocity)
        .def("getCOMSpatialAcceleration", &MetaSkeleton::getCOMSpatialAcceleration)
        .def("getCOMLinearAcceleration", &MetaSkeleton::getCOMLinearAcceleration)
        .def("getCOMJacobian", &MetaSkeleton::getCOMJacobian)
        .def("getCOMLinearJacobian", &MetaSkeleton::getCOMLinearJacobian)
        .def("getCOMJacobianSpatialDeriv", &MetaSkeleton::getCOMJacobianSpatialDeriv)
        .def("getCOMLinearJacobianDeriv", &MetaSkeleton::getCOMLinearJacobianDeriv)
        ;

    class_<Skeleton, SkeletonPtr, bases<MetaSkeleton>, noncopyable>(
            "Skeleton", no_init)
        // Constructor and Destructor
        .def("create",
            static_cast<SkeletonPtr (*)(const std::string&)>(
                &Skeleton::create),
            create_overloads())
        .def("create", 
            static_cast<SkeletonPtr (*)(const Skeleton::Properties&)>(
                &Skeleton::create))
        .staticmethod("create")
        .def("getMutex", &Skeleton::getMutex,
            return_value_policy<reference_existing_object>())
        .def("clone", &Skeleton::clone)

        // Properties
        .def("setProperties", &Skeleton::setProperties)
        .def("getSkeletonProperties", &Skeleton::getSkeletonProperties,
            return_value_policy<copy_const_reference>())
        .def("setName", &Skeleton::setName,
            return_value_policy<copy_const_reference>())
        .def("getName", &Skeleton::getName,
            return_value_policy<copy_const_reference>())
        .def("enableSelfCollision", &Skeleton::enableSelfCollision,
            enableSelfCollision_overloads())
        .def("disableSelfCollision", &Skeleton::disableSelfCollision)
        .def("isEnabledSelfCollisionCheck",
            &Skeleton::isEnabledSelfCollisionCheck)
        .def("isEnabledAdjacentBodyCheck",
            &Skeleton::isEnabledAdjacentBodyCheck)
        .def("setMobile", &Skeleton::setMobile)
        .def("isMobile", &Skeleton::isMobile)
        .def("setTimeStep", &Skeleton::setTimeStep)
        .def("getTimeStep", &Skeleton::getTimeStep)
        .def("setGravity", &Skeleton::setGravity)
        .def("getGravity", &Skeleton::getGravity,
            return_value_policy<copy_const_reference>())

        // Structural Properties
        // TODO: Wrap createJointAndBodyNodePair
        .def("getNumRigidBodyNodes", &Skeleton::getNumRigidBodyNodes)
        .def("getNumSoftBodyNodes", &Skeleton::getNumSoftBodyNodes)
        .def("getNumTrees", &Skeleton::getNumTrees)
        .def("getRootBodyNode",
            static_cast<BodyNode* (Skeleton::*)(size_t)>(
                &Skeleton::getRootBodyNode),
            return_value_policy<return_BodyNodePtr>(),
            getRootBodyNode_overloads())
        .def("getSoftBodyNode",
            static_cast<SoftBodyNode* (Skeleton::*)(size_t)>(
                &Skeleton::getSoftBodyNode),
            return_value_policy<return_SoftBodyNodePtr>())
        .def("getSoftBodyNode",
            static_cast<SoftBodyNode* (Skeleton::*)(const std::string&)>(
                &Skeleton::getSoftBodyNode),
            return_value_policy<return_SoftBodyNodePtr>())
        .def("getBodyNode",
            static_cast<BodyNode* (Skeleton::*)(const std::string&)>(
                &Skeleton::getBodyNode),
            return_value_policy<return_BodyNodePtr>())
        .def("getTreeBodyNodes",
            static_cast<const std::vector<BodyNode*>& (Skeleton::*)(size_t)>(
                &Skeleton::getTreeBodyNodes),
            return_value_policy<copy_const_reference>())
            // TODO: Convert the output to a list of BodyNodePtrs.
        .def("getJoint",
            static_cast<Joint* (Skeleton::*)(const std::string&)>(
                &Skeleton::getJoint),
            return_value_policy<return_JointPtr>())
        .def("getDof",
            static_cast<DegreeOfFreedom* (Skeleton::*)(const std::string&)>(
                &Skeleton::getDof),
            return_value_policy<return_DegreeOfFredomPtr>())
        .def("getTreeDofs",
            static_cast<const std::vector<DegreeOfFreedom*>& (Skeleton::*)(size_t)>(
                &Skeleton::getTreeDofs),
            return_value_policy<copy_const_reference>())
            // TODO: Convert the output to a list of DegreeOfFreedomPtrs.
        .def("getNumEndEffectors", &Skeleton::getNumEndEffectors)
        .def("getEndEffector",
            static_cast<EndEffector* (Skeleton::*)(size_t)>(
                &Skeleton::getEndEffector),
            return_value_policy<return_EndEffectorPtr>())
        .def("getEndEffector",
            static_cast<EndEffector* (Skeleton::*)(const std::string&)>(
                &Skeleton::getEndEffector),
            return_value_policy<return_EndEffectorPtr>())
        .def("getIK",
            static_cast<const std::shared_ptr<WholeBodyIK>& (Skeleton::*)(bool)>(
                &Skeleton::getIK),
            return_value_policy<copy_const_reference>(),
            getIk_overloads())
        .def("createIK", &Skeleton::createIK,
            return_value_policy<copy_const_reference>())
        .def("clearIK", &Skeleton::clearIK)
        .def("getMarker",
            static_cast<Marker* (Skeleton::*)(const std::string&)>(
                &Skeleton::getMarker),
            return_value_policy<reference_existing_object>())
            // TODO: Who owns this? Is there a MarkerPtr?

        // Integration and finite difference
        // TODO: These should not say "Documentation inherited."
        .def("integratePositions", &Skeleton::integratePositions)
        .def("integrateVelocities", &Skeleton::integrateVelocities)
        .def("getPositionDifferences", &Skeleton::getPositionDifferences)
        .def("getVelocityDifferences", &Skeleton::getVelocityDifferences)

        // State
        .def("setState", &Skeleton::setState)
        .def("getState", &Skeleton::getState)

        // Support Polygon
        .def("getSupportPolygon",
            static_cast<const SupportPolygon& (Skeleton::*)() const>(
                &Skeleton::getSupportPolygon),
            return_value_policy<copy_const_reference>())
        .def("getSupportPolygon",
            static_cast<const SupportPolygon& (Skeleton::*)(size_t) const>(
                &Skeleton::getSupportPolygon),
            return_value_policy<copy_const_reference>())
        .def("getSupportIndices",
            static_cast<const std::vector<size_t>& (Skeleton::*)() const>(
                &Skeleton::getSupportIndices),
            return_value_policy<copy_const_reference>())
        .def("getSupportIndices",
            static_cast<const std::vector<size_t>& (Skeleton::*)(size_t) const>(
                &Skeleton::getSupportIndices),
            return_value_policy<copy_const_reference>())
        .def("getSupportAxes",
            static_cast<const std::pair<Eigen::Vector3d,
                    Eigen::Vector3d>& (Skeleton::*)() const>(
                &Skeleton::getSupportAxes),
            return_value_policy<copy_const_reference>())
            // TODO: Convert the std::pair to a Python tuple.
        .def("getSupportAxes",
            static_cast<const std::pair<Eigen::Vector3d,
                    Eigen::Vector3d>& (Skeleton::*)(size_t) const>(
                &Skeleton::getSupportAxes),
            return_value_policy<copy_const_reference>())
            // TODO: Convert the std::pair to a Python tuple.
        .def("getSupportCentroid",
            static_cast<const Eigen::Vector2d& (Skeleton::*)() const>(
                &Skeleton::getSupportCentroid),
            return_value_policy<copy_const_reference>())
        .def("getSupportCentroid",
            static_cast<const Eigen::Vector2d& (Skeleton::*)(size_t) const>(
                &Skeleton::getSupportCentroid),
            return_value_policy<copy_const_reference>())
        .def("getSupportVersion",
            static_cast<size_t (Skeleton::*)() const>(
                &Skeleton::getSupportVersion))
        .def("getSupportVersion",
            static_cast<size_t (Skeleton::*)(size_t) const>(
                &Skeleton::getSupportVersion))

        // Kinematics algorithms
        // TODO: This should be a Doxygen header.
        .def("computeForwardKinematics", &Skeleton::computeForwardKinematics,
            computeForwardKinematics_overloads())
        
        // Dynamics algorithms
        // TODO: This should be a Doxygen header.
        .def("computeForwardDynamics", &Skeleton::computeForwardDynamics)
        .def("computeInverseDynamics", &Skeleton::computeInverseDynamics,
            computeInverseDynamics_overloads())
  
        // Impulse-based dynamics algorithms
        // TODO: This should be a Doxygen header.
        .def("clearConstraintImpulses", &Skeleton::clearConstraintImpulses)
        .def("updateBiasImpulse",
            static_cast<void (Skeleton::*)(BodyNode*)>(
                &Skeleton::updateBiasImpulse))
        .def("updateBiasImpulse",
            static_cast<void (Skeleton::*)(BodyNode*, const Eigen::Vector6d&)>(
                &Skeleton::updateBiasImpulse))
        .def("updateBiasImpulse",
            static_cast<void (Skeleton::*)(BodyNode*, const Eigen::Vector6d&,
                                           BodyNode*, const Eigen::Vector6d&)>(
                &Skeleton::updateBiasImpulse))
        .def("updateBiasImpulse",
            static_cast<void (Skeleton::*)(SoftBodyNode*, PointMass*,
                                           const Eigen::Vector3d&)>(
                &Skeleton::updateBiasImpulse))
        .def("updateVelocityChange", &Skeleton::updateVelocityChange)
        .def("setImpulseApplied", &Skeleton::setImpulseApplied)
        .def("isImpulseApplied", &Skeleton::isImpulseApplied)
        .def("computeImpulseForwardDynamics",
            &Skeleton::computeImpulseForwardDynamics)

        // Equations of Motion
        .def("getMassMatrix",
            static_cast<const Eigen::MatrixXd& (Skeleton::*)(size_t) const>(
                &Skeleton::getMassMatrix),
            return_value_policy<copy_const_reference>())
        .def("getAugMassMatrix",
            static_cast<const Eigen::MatrixXd& (Skeleton::*)(size_t) const>(
                &Skeleton::getAugMassMatrix),
            return_value_policy<copy_const_reference>())
        .def("getInvMassMatrix",
            static_cast<const Eigen::MatrixXd& (Skeleton::*)(size_t) const>(
                &Skeleton::getInvMassMatrix),
            return_value_policy<copy_const_reference>())
        .def("getInvAugMassMatrix",
            static_cast<const Eigen::MatrixXd& (Skeleton::*)(size_t) const>(
                &Skeleton::getInvAugMassMatrix),
            return_value_policy<copy_const_reference>())
        .def("getCoriolisForces",
            static_cast<const Eigen::VectorXd& (Skeleton::*)(size_t) const>(
                &Skeleton::getCoriolisForces),
            return_value_policy<copy_const_reference>())
        .def("getGravityForces",
            static_cast<const Eigen::VectorXd& (Skeleton::*)(size_t) const>(
                &Skeleton::getGravityForces),
            return_value_policy<copy_const_reference>())
        .def("getCoriolisAndGravityForces",
            static_cast<const Eigen::VectorXd& (Skeleton::*)(size_t) const>(
                &Skeleton::getCoriolisAndGravityForces),
            return_value_policy<copy_const_reference>())
        .def("getExternalForces",
            static_cast<const Eigen::VectorXd& (Skeleton::*)(size_t) const>(
                &Skeleton::getExternalForces),
            return_value_policy<copy_const_reference>())
        .def("getConstraintForces",
            static_cast<const Eigen::VectorXd& (Skeleton::*)(size_t) const>(
                &Skeleton::getConstraintForces),
            return_value_policy<copy_const_reference>())
        .def("notifyArticulatedInertiaUpdate",
            &Skeleton::notifyArticulatedInertiaUpdate)
        .def("notifySupportUpdate",
            &Skeleton::notifySupportUpdate)

        // Rendering
        // TODO: This should be a Doxygen header.
        .def("draw", &Skeleton::draw, draw_overloads())
        .def("drawMarkers", &Skeleton::drawMarkers, drawMarkers_overloads())
        ;
}

} // namespace python
} // namespace dart
