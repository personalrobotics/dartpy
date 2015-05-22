#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include "util.h"
#include "types.h"

using ::boost::python::object;
using ::boost::python::throw_error_already_set;
using ::dart::dynamics::Joint;
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

template <class T>
T const &convert_properties(Joint::Properties const *properties)
{
    static T const default_properties;

    auto cast_properties = dynamic_cast<T const *>(properties);
    if (properties && !cast_properties) {
        PyErr_SetString(PyExc_ValueError, "Properties has incorrect type.");
        throw_error_already_set();
    }

    if (cast_properties) {
        return *cast_properties;
    } else {
        return default_properties;
    }
}

#if 0
template <class T>
T *moveTo_impl(BodyNode *node, SkeletonPtr newSkeleton,
                 BodyNodePtr newParent, Joint::Properties const *props)
{
    if (!newParent) {
        PyErr_SetString(PyExc_ValueError, "Parent BodyNode is None.");
        throw_error_already_set();
        return nullptr;
    }

    return node->moveTo<T>(newSkeleton, newParent.get(),
        convert_properties<typename T::Properties>(props));
}
#endif

template <typename T>
struct moveTo3_wrapper
{
    static void call(BodyNode *node, SkeletonPtr newSkeleton,
                     BodyNodePtr newParent, Joint::Properties const *props)
    {
        if (!newParent) {
            PyErr_SetString(PyExc_ValueError, "Parent BodyNode is None.");
            throw_error_already_set();
            //return nullptr;
        }

        node->moveTo<T>(newSkeleton, newParent.get(),
            convert_properties<typename T::Properties>(props));
    }
};

template <typename T>
struct test_wrapper 
{
    static void call(int x)
    {
    }
};

//
template <template <typename T> class Fn, typename... Args>
void Joint_unpack(JointType::Enum joint_type, Args&&... args)
{
    switch (joint_type) {
    case JointType::PRISMATIC:
        Fn<PrismaticJoint>::call(std::forward<Args>(args)...);
        break;

    default:
        PyErr_SetString(PyExc_ValueError, "Invalid joint type.");
        throw_error_already_set();
    };
}

#if 0
static Joint *BodyNode_moveTo4(
    BodyNode *node, SkeletonPtr newSkeleton, BodyNodePtr newParent,
    JointType::Enum joint_type, Joint::Properties const *props)
{
    using boost::python::extract;

    switch (joint_type) {
    case JointType::PRISMATIC:
        return moveTo_impl<PrismaticJoint>(node, newSkeleton, newParent, props);

    case JointType::REVOLUTE:
        return moveTo_impl<RevoluteJoint>(node, newSkeleton, newParent, props);

    case JointType::SCREW:
        return moveTo_impl<ScrewJoint>(node, newSkeleton, newParent, props);

    case JointType::WELD:
        return moveTo_impl<WeldJoint>(node, newSkeleton, newParent, props);

    case JointType::UNIVERSAL:
        return moveTo_impl<UniversalJoint>(node, newSkeleton, newParent, props);

    case JointType::BALL:
        return moveTo_impl<BallJoint>(node, newSkeleton, newParent, props);

    case JointType::EULER:
        return moveTo_impl<EulerJoint>(node, newSkeleton, newParent, props);

    case JointType::PLANAR:
        return moveTo_impl<PlanarJoint>(node, newSkeleton, newParent, props);

    case JointType::TRANSLATIONAL:
        return moveTo_impl<TranslationalJoint>(node, newSkeleton, newParent, props);

    case JointType::FREE:
        return moveTo_impl<FreeJoint>(node, newSkeleton, newParent, props);

    default:
        PyErr_SetString(PyExc_ValueError, "Invalid joint type.");
        throw_error_already_set();
        return nullptr;
    };
}

static Joint *BodyNode_moveTo3(
    BodyNode *node, BodyNodePtr newParent,
    JointType::Enum joint_type, Joint::Properties const *props)
{
    if (!newParent) {
        PyErr_SetString(PyExc_ValueError, "Parent BodyNode is None.");
        throw_error_already_set();
        return nullptr;
    }

    return BodyNode_moveTo4(node, newParent->getSkeleton(), newParent,
                            joint_type, props);
}

static Joint *BodyNode_moveTo2(
    BodyNode *node, BodyNodePtr newParent, JointType::Enum joint_type)
{
    return BodyNode_moveTo3(node, newParent, joint_type, nullptr);
}
#endif

void python_BodyNode()
{
    using namespace ::boost::python;
    using ::dart::dynamics::BodyNode;
    using ::dart::dynamics::BodyNodePtr;
    using ::dart::dynamics::SkeletonPtr;

    smart_ptr_from_python<BodyNode, BodyNodePtr>();

    &Joint_unpack<moveTo3_wrapper,
        BodyNode *, SkeletonPtr,
        BodyNodePtr, Joint::Properties const *>;

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
#if 0
        .def("moveTo", &BodyNode_moveTo2,
             return_value_policy<reference_existing_object>())
        .def("moveTo", &BodyNode_moveTo3,
             return_value_policy<reference_existing_object>())
        .def("moveTo", &BodyNode_moveTo4,
             return_value_policy<reference_existing_object>())
#endif
        .def("split", static_cast<SkeletonPtr (BodyNode::*)(std::string const &)>(
            &BodyNode::split))
        ;
}
