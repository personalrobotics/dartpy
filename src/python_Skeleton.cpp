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

namespace {

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
    using namespace boost::python;
    using boost::noncopyable;

    using return_BodyNodePtr = return_by_smart_ptr<BodyNodePtr>;
    using return_SoftBodyNodePtr = return_by_smart_ptr<SoftBodyNodePtr>;
    using return_DegreeOfFredomPtr = return_by_smart_ptr<DegreeOfFreedomPtr>;
    using return_JointPtr = return_by_smart_ptr<JointPtr>;
    using return_EndEffectorPtr = return_by_smart_ptr<EndEffectorPtr>;

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
