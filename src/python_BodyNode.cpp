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

template <class Return, class Class, template <typename T> class Fn,
          typename... Args>
Return Joint_unpack(Class *self, JointType::Enum joint_type, Args... args)
{
    switch (joint_type) {
    case JointType::PRISMATIC:
        return Fn<PrismaticJoint>::call(self, args...);

    case JointType::REVOLUTE:
        return Fn<RevoluteJoint>::call(self, args...);

    case JointType::SCREW:
        return Fn<ScrewJoint>::call(self, args...);

    case JointType::WELD:
        return Fn<WeldJoint>::call(self, args...);

    case JointType::UNIVERSAL:
        return Fn<UniversalJoint>::call(self, args...);

    case JointType::BALL:
        return Fn<BallJoint>::call(self, args...);

    case JointType::EULER:
        return Fn<EulerJoint>::call(self, args...);

    case JointType::PLANAR:
        return Fn<PlanarJoint>::call(self, args...);

    case JointType::TRANSLATIONAL:
        return Fn<TranslationalJoint>::call(self, args...);

    case JointType::FREE:
        return Fn<FreeJoint>::call(self, args...);

    default:
        PyErr_SetString(PyExc_ValueError, "Invalid joint type.");
        throw_error_already_set();
    };

    return Return();
}

template <typename T>
struct moveTo3_wrapper {
    static Joint *call(BodyNode *self, SkeletonPtr newSkeleton,
                       BodyNodePtr newParent,
                       Joint::Properties const *props = nullptr)
    {
        return self->moveTo<T>(newSkeleton, newParent.get(),
            convert_properties<typename T::Properties>(props));
    }
};

template <typename T>
struct moveTo2_wrapper {
    static Joint *call(BodyNode *self, BodyNodePtr newParent,
                       Joint::Properties const *props = nullptr)
    {
        if (!newParent) {
            PyErr_SetString(PyExc_ValueError, "Parent BodyNode is None.");
            throw_error_already_set();
            return nullptr;
        }

        return moveTo3_wrapper<T>::call(
            self, newParent->getSkeleton(), newParent, props);
    }
};

template <typename T>
struct split_wrapper {
    static SkeletonPtr call(BodyNode *self, std::string const &skeletonName,
                     Joint::Properties const *props = nullptr)
    {
        return self->split<T>(skeletonName,
            convert_properties<typename T::Properties>(props));
    }
};

template <typename T>
struct changeParentJointType_wrapper
{
    static Joint *call(BodyNode *self, Joint::Properties const *props = nullptr)
    {
        return self->changeParentJointType<T>(
            convert_properties<typename T::Properties>(props));
    }
};

void python_BodyNode()
{
    using namespace ::boost::python;
    using ::dart::dynamics::BodyNode;
    using ::dart::dynamics::BodyNodePtr;
    using ::dart::dynamics::SkeletonPtr;

    typedef return_by_smart_ptr<BodyNodePtr> return_BodyNodePtr;

    smart_ptr_from_python<BodyNode, BodyNodePtr>();

    class_<BodyNode, BodyNodePtr, boost::noncopyable>("BodyNode", no_init)
        .add_property("name",
            make_function(&BodyNode::getName,
                          return_value_policy<copy_const_reference>()),
            static_cast<void (*)(BodyNode *, std::string const &)>(
                &DISCARD_METHOD_RETURN(BodyNode, BodyNode::setName))
            )
        .add_property("skeleton",
            static_cast<SkeletonPtr (BodyNode::*)()>(
                &BodyNode::getSkeleton))
        .add_property("parent_joint", make_function(
            static_cast<Joint *(BodyNode::*)()>(
                &BodyNode::getParentJoint),
            return_value_policy<reference_existing_object>()))
        .add_property("parent_bodynode", make_function(
            static_cast<BodyNode *(BodyNode::*)()>(
                &BodyNode::getParentBodyNode),
            return_value_policy<return_BodyNodePtr>()))
        .add_property("num_child_bodynodes",
            &BodyNode::getNumChildBodyNodes)
#if 0
        .def("moveTo",
            static_cast<void (BodyNode::*)(BodyNode *)>(
                &BodyNode::moveTo))
        .def("moveTo",
            static_cast<void (BodyNode::*)(SkeletonPtr, BodyNode *)>(
                &BodyNode::moveTo))
#endif
        .def("moveTo", 
            static_cast<Joint *(*)(BodyNode *, JointType::Enum, BodyNodePtr)>(
                &Joint_unpack<Joint *, BodyNode, moveTo2_wrapper>),
            return_value_policy<reference_existing_object>())
        .def("moveTo", 
            static_cast<Joint *(*)(BodyNode *, JointType::Enum, BodyNodePtr,
                                   Joint::Properties const *)>(
                &Joint_unpack<Joint *, BodyNode, moveTo2_wrapper>),
            return_value_policy<reference_existing_object>())
        .def("moveTo", 
            static_cast<Joint *(*)(BodyNode *, JointType::Enum, SkeletonPtr,
                                   BodyNodePtr)>(
                &Joint_unpack<Joint *, BodyNode, moveTo3_wrapper>),
            return_value_policy<reference_existing_object>())
        .def("moveTo", 
            static_cast<Joint *(*)(BodyNode *, JointType::Enum, SkeletonPtr,
                                   BodyNodePtr, Joint::Properties const *)>(
                &Joint_unpack<Joint *, BodyNode, moveTo3_wrapper>),
            return_value_policy<reference_existing_object>())
        .def("split",
            static_cast<SkeletonPtr (BodyNode::*)(std::string const &)>(
                &BodyNode::split))
        .def("split", 
            static_cast<SkeletonPtr (*)(BodyNode *, JointType::Enum,
                                        std::string const &)>(
                &Joint_unpack<SkeletonPtr, BodyNode, split_wrapper>))
        .def("split", 
            static_cast<SkeletonPtr (*)(BodyNode *, JointType::Enum,
                                        std::string const &,
                                        Joint::Properties const *)>(
                &Joint_unpack<SkeletonPtr, BodyNode, split_wrapper>))
        .def("change_parent_joint_type",
            static_cast<Joint *(*)(BodyNode *, JointType::Enum)>(
                &Joint_unpack<Joint *, BodyNode, changeParentJointType_wrapper>),
            return_value_policy<reference_existing_object>())
        .def("change_parent_joint_type",
            static_cast<Joint *(*)(BodyNode *, JointType::Enum, 
                                   Joint::Properties const *)>(
                &Joint_unpack<Joint *, BodyNode, changeParentJointType_wrapper>),
            return_value_policy<reference_existing_object>())
        .def("get_child_bodynode",
            static_cast<BodyNode *(BodyNode::*)(size_t)>(
                &BodyNode::getChildBodyNode),
            return_value_policy<return_BodyNodePtr>())
        ;
}
