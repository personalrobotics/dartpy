#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include "util.h"
#include "types.h"

using ::boost::python::object;
using ::boost::python::throw_error_already_set;
using ::dart::dynamics::BodyNode;
using ::dart::dynamics::BodyNodePtr;
using ::dart::dynamics::BallJoint;
using ::dart::dynamics::EulerJoint;
using ::dart::dynamics::FreeJoint;
using ::dart::dynamics::PlanarJoint;
using ::dart::dynamics::PrismaticJoint;
using ::dart::dynamics::RevoluteJoint;
using ::dart::dynamics::ScrewJoint;
using ::dart::dynamics::TranslationalJoint;
using ::dart::dynamics::UniversalJoint;
using ::dart::dynamics::WeldJoint;
using ::dart::dynamics::SkeletonPtr;
using ::dart::python::JointType;

static object BodyNode_moveTo1(BodyNode *node, SkeletonPtr newSkeleton,
                               BodyNodePtr newParent,
                               JointType::Enum joint_type)
{
    if (!node) {
        PyErr_SetString(PyExc_ValueError, "BodyNode is None.");
        throw_error_already_set();
        return object();
    }

    switch (joint_type) {
    case JointType::PRISMATIC:
       node->moveTo<PrismaticJoint>(newSkeleton, newParent.get());
       break;

    case JointType::REVOLUTE:
       node->moveTo<RevoluteJoint>(newSkeleton, newParent.get());
       break;

    case JointType::SCREW:
       node->moveTo<ScrewJoint>(newSkeleton, newParent.get());
       break;

    case JointType::WELD:
       node->moveTo<WeldJoint>(newSkeleton, newParent.get());
       break;

    case JointType::UNIVERSAL:
       node->moveTo<UniversalJoint>(newSkeleton, newParent.get());
       break;

    case JointType::BALL:
       node->moveTo<BallJoint>(newSkeleton, newParent.get());
       break;

    case JointType::EULER:
       node->moveTo<EulerJoint>(newSkeleton, newParent.get());
       break;

    case JointType::PLANAR:
       node->moveTo<PlanarJoint>(newSkeleton, newParent.get());
       break;

    case JointType::TRANSLATIONAL:
       node->moveTo<TranslationalJoint>(newSkeleton, newParent.get());
       break;

    case JointType::FREE:
       node->moveTo<FreeJoint>(newSkeleton, newParent.get());
       break;

    default:
        PyErr_SetString(PyExc_ValueError, "Invalid joint type.");
        throw_error_already_set();
        return object();
    };

    // TODO: How do we handle the return value here?
    return object();
}

static object BodyNode_moveTo2(BodyNode *node, BodyNodePtr newParent,
                               JointType::Enum joint_type)
{
    if (!node) {
        PyErr_SetString(PyExc_ValueError, "BodyNode is None.");
        throw_error_already_set();
        return object();
    }

    return BodyNode_moveTo1(node, newParent->getSkeleton(), newParent,
                            joint_type);
}

void python_BodyNode()
{
    using namespace ::boost::python;
    using ::dart::dynamics::BodyNode;
    using ::dart::dynamics::BodyNodePtr;
    using ::dart::dynamics::SkeletonPtr;

    smart_ptr_from_python<BodyNode, BodyNodePtr>();

    class_<BodyNode, BodyNodePtr, boost::noncopyable>("BodyNode", no_init)
        .add_property("name",
            make_function(&BodyNode::getName,
                          return_value_policy<copy_const_reference>()),
            static_cast<void (*)(BodyNode *, std::string const &)>(
                &DISCARD_METHOD_RETURN(BodyNode, BodyNode::setName))
            )
        .add_property("skeleton", static_cast<SkeletonPtr (BodyNode::*)()>(
            &BodyNode::getSkeleton))
        .def("moveTo", static_cast<void (BodyNode::*)(BodyNode *)>(
            &BodyNode::moveTo))
        .def("moveTo", static_cast<void (BodyNode::*)(SkeletonPtr, BodyNode *)>(
            &BodyNode::moveTo))
        .def("moveTo", &BodyNode_moveTo1)
        .def("moveTo", &BodyNode_moveTo2)
        .def("split", static_cast<SkeletonPtr (BodyNode::*)(std::string const &)>(
            &BodyNode::split))
        ;
}
