#include "pointers.h"
#include <boost/format.hpp>
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include "util.h"

using ::dart::math::AngularJacobian;
using ::dart::math::LinearJacobian;
using ::dart::math::Jacobian;
using ::dart::common::Subject;
using ::dart::dynamics::BodyNode;
using ::dart::dynamics::BodyNodePtr;
using ::dart::dynamics::DegreeOfFreedom;
using ::dart::dynamics::DegreeOfFreedomPtr;
using ::dart::dynamics::Joint;
using ::dart::dynamics::Frame;
using ::dart::dynamics::JointPtr;
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

namespace dart {
namespace python {

namespace {

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(
    getLinearJacobian_overloads2, MetaSkeleton::getLinearJacobian, 1, 2)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(
    getLinearJacobian_overloads3, MetaSkeleton::getLinearJacobian, 2, 3)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(
    getAngularJacobian_overloads2, MetaSkeleton::getAngularJacobian, 1, 2)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(
    getJacobianClassicDeriv_overloads3,
    MetaSkeleton::getJacobianClassicDeriv, 2, 3)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(
    getLinearJacobianDeriv_overloads3,
    MetaSkeleton::getLinearJacobianDeriv, 2, 3)
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(
    getAngularJacobianDeriv_overloads2,
    MetaSkeleton::getAngularJacobianDeriv, 1, 2)

} // namespace

void python_Skeleton()
{
    using namespace ::boost::python;
    using ::boost::noncopyable;

    typedef return_by_smart_ptr<BodyNodePtr> return_BodyNodePtr;
    typedef return_by_smart_ptr<DegreeOfFreedomPtr> return_DegreeOfFredomPtr;
    typedef return_by_smart_ptr<JointPtr> return_JointPtr;

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
                &MetaSkeleton::getIndexOf))
            // TODO: Make the 'bool' argument optional.
        .def("getNumJoints", &MetaSkeleton::getNumJoints)
        .def("getJoint",
            static_cast<Joint* (MetaSkeleton::*)(size_t)>(
                &MetaSkeleton::getJoint),
            return_value_policy<return_JointPtr>())
        .def("getIndexOf",
            static_cast<size_t (MetaSkeleton::*)(const Joint*, bool) const>(
                &MetaSkeleton::getIndexOf))
            // TODO: Make the 'bool' argument optional.
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
                &MetaSkeleton::getIndexOf))
            // TODO: Make the 'bool' argument optional.

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
        .add_property("is_enabled_self_collision_check",
            &Skeleton::isEnabledSelfCollisionCheck)
        .add_property("is_enabled_adjacent_body_check",
            &Skeleton::isEnabledAdjacentBodyCheck)
        .add_property("pose", &Skeleton_getPose, &Skeleton_setPose)
        .add_property("num_rigid_body_nodes", &Skeleton::getNumRigidBodyNodes)
        .add_property("num_soft_body_nodes", &Skeleton::getNumSoftBodyNodes)
        .def("__init__", make_constructor(&Skeleton_constructor))
        .def("get_root_body_node",
            static_cast<BodyNode *(Skeleton::*)(size_t)>(
                &Skeleton::getRootBodyNode),
            return_value_policy<return_BodyNodePtr>())
        .def("get_soft_body_node",
            static_cast<BodyNode *(Skeleton::*)(size_t)>(
                &Skeleton::getBodyNode),
            return_value_policy<return_BodyNodePtr>())
        .def("get_soft_body_node_by_name",
            static_cast<SoftBodyNode *(Skeleton::*)(std::string const &)>(
                &Skeleton::getSoftBodyNode),
            return_value_policy<reference_existing_object>())
        .def("get_joint_by_name",
            static_cast<Joint *(Skeleton::*)(std::string const &)>(
                &Skeleton::getJoint),
            return_value_policy<return_JointPtr>())
        .def("get_dof_by_name",
            static_cast<DegreeOfFreedom *(Skeleton::*)(std::string const &)>(
                &Skeleton::getDof),
            return_value_policy<return_DegreeOfFredomPtr>())
        .def("get_body_node_by_name",
            static_cast<BodyNode *(Skeleton::*)(std::string const &)>(
                &Skeleton::getBodyNode),
            return_value_policy<return_BodyNodePtr>())
        .def("get_marker_by_name",
            static_cast<Marker *(Skeleton::*)(std::string const &)>(
                &Skeleton::getMarker),
            return_value_policy<reference_existing_object>())
        .add_property("is_mobile", &Skeleton::isMobile, &Skeleton::setMobile)
        .add_property("timestep", &Skeleton::getTimeStep, &Skeleton::setTimeStep)
        .add_property("gravity",
            make_function(&Skeleton::getGravity,
                          return_value_policy<copy_const_reference>()),
            &Skeleton::setGravity)
        .def("enable_self_collision", &Skeleton::enableSelfCollision)
        .def("disable_self_collision", &Skeleton::disableSelfCollision)
        .def("compute_forward_kinematics", &Skeleton::computeForwardKinematics)
        ;
}

} // namespace python
} // namespace dart
