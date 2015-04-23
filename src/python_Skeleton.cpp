#include <boost/format.hpp>
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include "util.h"

using ::dart::dynamics::Joint;
using ::dart::dynamics::Skeleton;

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

// ---

void python_Skeleton()
{
    using namespace ::boost::python;
    using ::dart::dynamics::BodyNode;
    using ::dart::dynamics::DegreeOfFreedom;
    using ::dart::dynamics::Joint;
    using ::dart::dynamics::Marker;
    using ::dart::dynamics::SoftBodyNode;
    using ::dart::dynamics::SkeletonPtr;
    using ::dart::python::util::collection_from_python;

    collection_from_python<std::vector<SkeletonPtr> >();

    class_<Skeleton, SkeletonPtr>("Skeleton")
        .add_property("name",
            make_function(&Skeleton::getName,
                          return_value_policy<copy_const_reference>()),
            static_cast<void (*)(Skeleton *, std::string const &)>(
                &DISCARD_METHOD_RETURN(Skeleton, Skeleton::setName))
            )
        .add_property("is_enabled_self_collision_check",
            &Skeleton::isEnabledSelfCollisionCheck)
        .add_property("is_enabled_adjacent_body_check",
            &Skeleton::isEnabledAdjacentBodyCheck)
        .add_property("pose", &Skeleton_getPose, &Skeleton_setPose)
        .add_property("position", &Skeleton::getPositions, &Skeleton::setPositions)
        .add_property("is_mobile", &Skeleton::isMobile, &Skeleton::setMobile)
        .add_property("timestep", &Skeleton::getTimeStep, &Skeleton::setTimeStep)
        .add_property("gravity",
            make_function(&Skeleton::getGravity,
                          return_value_policy<copy_const_reference>()),
            &Skeleton::setGravity)
        .add_property("mass", &Skeleton::getMass)
        .add_property("num_body_nodes", &Skeleton::getNumBodyNodes)
        .add_property("num_rigid_body_nodes", &Skeleton::getNumRigidBodyNodes)
        .add_property("num_soft_body_nodes", &Skeleton::getNumSoftBodyNodes)
        .add_property("root_body_node",
            make_function(
                static_cast<BodyNode *(Skeleton::*)()>(
                    &Skeleton::getRootBodyNode),
                return_value_policy<reference_existing_object>()))
        .add_property("num_dofs", &Skeleton::getNumDofs)
        .def("get_marker_by_name",
            make_function(
                static_cast<Marker *(Skeleton::*)(std::string const &)>(
                    &Skeleton::getMarker),
                return_value_policy<reference_existing_object>()))
        .def("get_joint",
            make_function(
                static_cast<Joint *(Skeleton::*)(size_t)>(
                    &Skeleton::getJoint),
                return_value_policy<reference_existing_object>()))
        .def("get_joint_by_name",
            make_function(
                static_cast<Joint *(Skeleton::*)(std::string const &)>(
                    &Skeleton::getJoint),
                return_value_policy<reference_existing_object>()))
        .def("get_dof",
            make_function(
                static_cast<DegreeOfFreedom *(Skeleton::*)(size_t)>(
                    &Skeleton::getDof),
                return_value_policy<reference_existing_object>()))
        .def("get_dof_by_name",
            make_function(
                static_cast<DegreeOfFreedom *(Skeleton::*)(std::string const &)>(
                    &Skeleton::getDof),
                return_value_policy<reference_existing_object>()))
        .def("get_body_node",
            make_function(
                static_cast<BodyNode *(Skeleton::*)(size_t)>(
                    &Skeleton::getBodyNode),
                return_value_policy<reference_existing_object>()))
        .def("get_body_node_by_name",
            make_function(
                static_cast<BodyNode *(Skeleton::*)(std::string const &)>(
                    &Skeleton::getBodyNode),
                return_value_policy<reference_existing_object>()))
        .def("get_soft_body_node",
            make_function(
                static_cast<BodyNode *(Skeleton::*)(size_t)>(
                    &Skeleton::getBodyNode),
                return_value_policy<reference_existing_object>()))
        .def("get_soft_body_node_by_name",
            make_function(
                static_cast<SoftBodyNode *(Skeleton::*)(std::string const &)>(
                    &Skeleton::getSoftBodyNode),
                return_value_policy<reference_existing_object>()))
        .def("enable_self_collision", &Skeleton::enableSelfCollision)
        .def("disable_self_collision", &Skeleton::disableSelfCollision)
        .def("compute_forward_kinematics", &Skeleton::computeForwardKinematics)
        .def("add_body_node", &Skeleton::addBodyNode)
        .def("init", &Skeleton::init)
        ;
}
