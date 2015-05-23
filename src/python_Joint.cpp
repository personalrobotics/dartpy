#include <unordered_map>
#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include "util.h"
#include "types.h"

using ::boost::python::object;
using ::dart::dynamics::Joint;

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


static void Joint_setName_default(Joint *joint, std::string const &name)
{
    joint->setName(name);
}

static std::string FreeJoint_test(dart::dynamics::FreeJoint *self)
{
    return "banana";
}

static object Joint_getattribute(object self, object name)
{
    using ::boost::python::eval;
    using ::boost::python::import;

    return eval("object").attr("__getattribute__")(self, name);
}

static void python_Joint_base()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::BodyNode;
    using dart::dynamics::BodyNodePtr;
    using dart::dynamics::DegreeOfFreedom;
    using dart::dynamics::DegreeOfFreedomPtr;
    using dart::dynamics::JointPtr;
    using dart::dynamics::SkeletonPtr;
    using dart::python::JointMap;

    typedef return_by_smart_ptr<BodyNodePtr> return_BodyNodePtr;
    typedef return_by_smart_ptr<DegreeOfFreedomPtr> return_DegreeOfFredomPtr;

    scope joint_class(
        class_<Joint, JointPtr, noncopyable>(
                JointMap::instance().getPythonName<Joint>().c_str(),
                no_init)
            .add_property("name",
                make_function(&Joint::getName,
                              return_value_policy<copy_const_reference>()),
                &Joint_setName_default)
            .add_property("actuator_type",
                &Joint::getActuatorType,
                &Joint::setActuatorType)
            .add_property("properties",
                make_function(&Joint::getJointProperties,
                              return_value_policy<copy_const_reference>()),
                &Joint::setProperties)
            .add_property("is_kinematic", &Joint::isKinematic)
            .add_property("is_dynamic", &Joint::isDynamic)
            .add_property("position_limited",
                &Joint::isPositionLimited, &Joint::setPositionLimited)
            .add_property("skeleton",
                static_cast<SkeletonPtr (Joint::*)()>(&Joint::getSkeleton))
            .add_property("child_body_node", make_function(
                static_cast<BodyNode *(Joint::*)()>(&Joint::getChildBodyNode),
                return_value_policy<return_BodyNodePtr>()))
            .add_property("parent_body_node", make_function(
                static_cast<BodyNode *(Joint::*)()>(&Joint::getParentBodyNode),
                return_value_policy<return_BodyNodePtr>()))
            .add_property("transform_from_parent_body_node",
                make_function(&Joint::getTransformFromParentBodyNode,
                              return_value_policy<copy_const_reference>()),
                &Joint::setTransformFromParentBodyNode)
            .add_property("transform_from_child_body_node",
                make_function(&Joint::getTransformFromChildBodyNode,
                              return_value_policy<copy_const_reference>()),
                &Joint::setTransformFromChildBodyNode)
            .add_property("index_in_skeleton", &Joint::getIndexInSkeleton)
            .add_property("index_in_tree", &Joint::getIndexInTree)
            .add_property("joint_index_in_skeleton", &Joint::getJointIndexInSkeleton)
            .add_property("joint_index_in_tree", &Joint::getJointIndexInTree)
            .add_property("tree_index", &Joint::getTreeIndex)
            .add_property("num_dofs", &Joint::getNumDofs)
            .add_property("commands", &Joint::getCommands, &Joint::setCommands)
            .add_property("commands", &Joint::getPositions, &Joint::setPositions)
            .def("__getattribute__", &Joint_getattribute)
            .def("set_name",
                make_function(&Joint::setName,
                              return_value_policy<copy_const_reference>()))
            .def("get_dof",
                static_cast<DegreeOfFreedom *(Joint::*)(size_t)>(&Joint::getDof),
                return_value_policy<return_DegreeOfFredomPtr>())
            //.def("set_dof_names", &Joint::setDofName)
            //.def("get_dof_name", &Joint::isDofNamePreserved)
            .def("preserve_dof_names", &Joint::preserveDofName)
            .def("is_dof_name_preserved", &Joint::isDofNamePreserved)
            .def("copy", static_cast<void (Joint::*)(Joint const *)>(&Joint::copy))
            .def("get_command", &Joint::getCommand)
            .def("set_command", &Joint::setCommand)
            .def("reset_commands", &Joint::resetCommands)
            .def("set_position", &Joint::setPosition)
            .def("get_position", &Joint::getPosition)
            .def("reset_positions", &Joint::resetPositions)
            .def("get_position_lower_limit", &Joint::getPositionLowerLimit)
            .def("set_position_lower_limit", &Joint::setPositionLowerLimit)
            .def("get_position_upper_limit", &Joint::getPositionUpperLimit)
            .def("set_position_upper_limit", &Joint::setPositionUpperLimit)
    );

    class_<Joint::Properties>("Properties")
        .def_readwrite("name", &Joint::Properties::mName)
        .def_readwrite("T_parent_body_to_joint",
            &Joint::Properties::mT_ParentBodyToJoint)
        .def_readwrite("T_child_body_to_joint",
            &Joint::Properties::mT_ChildBodyToJoint)
        .def_readwrite("is_position_limited",
            &Joint::Properties::mIsPositionLimited)
        .def_readwrite("actuator_type",
            &Joint::Properties::mActuatorType)
        ;
}

static void python_ZeroDofJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::ZeroDofJoint;

    scope joint_class(
        class_<ZeroDofJoint, bases<Joint>, noncopyable>(
               JointMap::instance().getPythonName<ZeroDofJoint>().c_str(),
               no_init)

    );

    class_<ZeroDofJoint::Properties>("Properties");
}

static void python_FreeJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::FreeJoint;

    scope joint_class(
        class_<FreeJoint, bases<Joint>, noncopyable>(
               JointMap::instance().getPythonName<FreeJoint>().c_str(),
               no_init)
            .def("test", &FreeJoint_test)
    );
}

static void python_SingleDofJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::SingleDofJoint;

    scope joint_class(
        class_<SingleDofJoint, noncopyable>(
            JointMap::instance().getPythonName<SingleDofJoint>().c_str(),
            no_init)
    );

    class_<SingleDofJoint::UniqueProperties>("UniqueProperties")
        .def_readwrite("position_lower_limit",
            &SingleDofJoint::UniqueProperties::mPositionLowerLimit)
        .def_readwrite("position_upper_limit",
            &SingleDofJoint::UniqueProperties::mPositionUpperLimit)
        .def_readwrite("velocity_lower_limit",
            &SingleDofJoint::UniqueProperties::mVelocityLowerLimit)
        .def_readwrite("velocity_upper_limit",
            &SingleDofJoint::UniqueProperties::mVelocityUpperLimit)
        .def_readwrite("acceleration_lower_limit",
            &SingleDofJoint::UniqueProperties::mAccelerationLowerLimit)
        .def_readwrite("acceleration_upper_limit",
            &SingleDofJoint::UniqueProperties::mAccelerationUpperLimit)
        .def_readwrite("force_lower_limit",
            &SingleDofJoint::UniqueProperties::mForceLowerLimit)
        .def_readwrite("force_upper_limit",
            &SingleDofJoint::UniqueProperties::mForceUpperLimit)
        .def_readwrite("spring_stiffness",
            &SingleDofJoint::UniqueProperties::mSpringStiffness)
        .def_readwrite("rest_position",
            &SingleDofJoint::UniqueProperties::mRestPosition)
        .def_readwrite("damping_coefficient",
            &SingleDofJoint::UniqueProperties::mDampingCoefficient)
        .def_readwrite("friction",
            &SingleDofJoint::UniqueProperties::mFriction)
        .def_readwrite("preserve_dof_name",
            &SingleDofJoint::UniqueProperties::mPreserveDofName)
        .def_readwrite("dof_name",
            &SingleDofJoint::UniqueProperties::mDofName)
        ;

    class_<SingleDofJoint::Properties, bases<
                Joint::Properties, SingleDofJoint::UniqueProperties>
            >("Properties")
        ;
}

static void python_RevoluteJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::RevoluteJoint;
    using dart::dynamics::SingleDofJoint;

    scope joint_class(
        class_<RevoluteJoint, noncopyable>(
                JointMap::instance().getPythonName<RevoluteJoint>().c_str(),
                no_init)
    );

    class_<RevoluteJoint::UniqueProperties>("UniqueProperties")
        .def_readwrite("axis", &RevoluteJoint::UniqueProperties::mAxis)
        ;

    class_<RevoluteJoint::Properties, bases<
            SingleDofJoint::Properties, RevoluteJoint::UniqueProperties>
          >("Properties")
        ;
}

static void python_WeldJoint()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::WeldJoint;
    using dart::dynamics::ZeroDofJoint;

    scope joint_class(
        class_<WeldJoint, noncopyable>(
                JointMap::instance().getPythonName<WeldJoint>().c_str(),
                no_init)
    );

    class_<WeldJoint::Properties,
           bases<ZeroDofJoint::Properties> >("Properties")
        ;
}

} // namespace python
} // namespace dart

void python_Joint()
{
    using namespace ::boost::python;
    using namespace ::dart::python;

    using ::dart::python::JointType;

    typedef ::dart::dynamics::Joint::ActuatorType ActuatorType;


    enum_<ActuatorType>("ActuatorType")
        .value("FORCE", Joint::FORCE)
        .value("PASSIVE", Joint::PASSIVE)
        .value("SERVO", Joint::SERVO)
        .value("ACCELERATION", Joint::ACCELERATION)
        .value("VELOCITY", Joint::VELOCITY)
        .value("LOCKED", Joint::LOCKED)
        ;

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

    python_Joint_base();
    python_ZeroDofJoint();
    python_SingleDofJoint();
    python_RevoluteJoint();
    python_FreeJoint();
    python_WeldJoint();
}
