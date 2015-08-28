#include "pointers.h" // must be included first
#include <boost/format.hpp>
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include <dart/renderer/RenderInterface.h>
#include "util.h"

using dart::common::Subject;
using dart::dynamics::BodyNode;
using dart::dynamics::BodyNodePtr;
using dart::dynamics::DegreeOfFreedom;
using dart::dynamics::DegreeOfFreedomPtr;
using dart::dynamics::EndEffector;
using dart::dynamics::EndEffectorPtr;
using dart::dynamics::Frame;
using dart::dynamics::JacobianNode;
using dart::dynamics::Joint;
using dart::dynamics::JointPtr;
using dart::dynamics::Marker;
using dart::dynamics::MetaSkeleton;
using dart::dynamics::MetaSkeletonPtr;
using dart::dynamics::PointMass;
using dart::dynamics::Skeleton;
using dart::dynamics::SkeletonPtr;
using dart::dynamics::SoftBodyNode;
using dart::dynamics::SoftBodyNodePtr;
using dart::dynamics::WholeBodyIK;
using dart::math::AngularJacobian;
using dart::math::Jacobian;
using dart::math::LinearJacobian;
using dart::math::SupportPolygon;

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

} // namespace

namespace dart {
namespace python {

void python_MetaSkeleton()
{
    using namespace boost::python;
    using boost::noncopyable;

    using return_BodyNodePtr = return_by_smart_ptr<BodyNodePtr>;
    using return_DegreeOfFredomPtr = return_by_smart_ptr<DegreeOfFreedomPtr>;
    using return_JointPtr = return_by_smart_ptr<JointPtr>;

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
}

} // namespace python
} // namespace dart
