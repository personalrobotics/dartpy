#include "pointers.h"
#include <boost/format.hpp>
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include "util.h"

using ::dart::dynamics::Joint;
using ::dart::dynamics::Skeleton;
using ::dart::dynamics::SkeletonPtr;

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

void python_Skeleton()
{
    using namespace ::boost::python;
    using ::boost::noncopyable;
    using ::dart::dynamics::BodyNode;
    using ::dart::dynamics::BodyNodePtr;
    using ::dart::dynamics::DegreeOfFreedom;
    using ::dart::dynamics::DegreeOfFreedomPtr;
    using ::dart::dynamics::Joint;
    using ::dart::dynamics::JointPtr;
    using ::dart::dynamics::Marker;
    using ::dart::dynamics::MetaSkeleton;
    using ::dart::dynamics::MetaSkeletonPtr;
    using ::dart::dynamics::SoftBodyNode;
    using ::dart::dynamics::SkeletonPtr;
    using ::dart::python::util::collection_from_python;

    typedef return_by_smart_ptr<BodyNodePtr> return_BodyNodePtr;
    typedef return_by_smart_ptr<DegreeOfFreedomPtr> return_DegreeOfFredomPtr;
    typedef return_by_smart_ptr<JointPtr> return_JointPtr;

    collection_from_python<std::vector<SkeletonPtr> >();

    implicitly_convertible<SkeletonPtr, MetaSkeletonPtr>(); 

    class_<MetaSkeleton, MetaSkeletonPtr, noncopyable>("MetaSkeleton", no_init)
        .add_property("name",
            make_function(&MetaSkeleton::getName,
                          return_value_policy<copy_const_reference>()),
            static_cast<void (*)(MetaSkeleton *, std::string const &)>(
                &DISCARD_METHOD_RETURN(MetaSkeleton, MetaSkeleton::setName))
            )
        .add_property("mass", &MetaSkeleton::getMass)
        .add_property("num_body_nodes", &MetaSkeleton::getNumBodyNodes)
        .add_property("num_dofs", &MetaSkeleton::getNumDofs)
        .def("get_dof",
            static_cast<DegreeOfFreedom *(MetaSkeleton::*)(size_t)>(
                &MetaSkeleton::getDof),
            return_value_policy<return_DegreeOfFredomPtr>())
        .def("get_body_node",
            static_cast<BodyNode *(MetaSkeleton::*)(size_t)>(
                &MetaSkeleton::getBodyNode),
            return_value_policy<return_BodyNodePtr>())
        .def("get_joint",
            static_cast<Joint *(MetaSkeleton::*)(size_t)>(
                &MetaSkeleton::getJoint),
            return_value_policy<return_JointPtr>())
        ;

    class_<Skeleton, SkeletonPtr, bases<MetaSkeleton> >("Skeleton", no_init)
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
        .def("init", &Skeleton::init)
        ;
}

} // namespace python
} // namespace dart
