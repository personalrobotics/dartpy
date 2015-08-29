#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>

using boost::noncopyable;
using dart::common::Subject;
using dart::dynamics::Entity;
using dart::dynamics::Detachable;
using dart::dynamics::Frame;
using dart::dynamics::ShapePtr;

namespace {

BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getTransform_overloads,
    Frame::getTransform, 0, 1);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getLinearVelocity_overloads02,
    Frame::getLinearVelocity, 0, 2);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getLinearVelocity_overloads13,
    Frame::getLinearVelocity, 1, 3);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getAngularVelocity_overloads,
    Frame::getAngularVelocity, 0, 2);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getLinearAcceleration_overloads02,
    Frame::getLinearAcceleration, 0, 2);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getLinearAcceleration_overloads13,
    Frame::getLinearAcceleration, 1, 3);
BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(getAngularAcceleration_overloads,
    Frame::getAngularAcceleration, 0, 2);

} // namespace

namespace dart {
namespace python {

void python_Frame()
{
    using namespace boost::python;

    using boost::noncopyable;
    using dart::dynamics::Frame;
    using dart::dynamics::WorldFrame;

    class_<Frame, Frame *, noncopyable>("Frame", no_init)
        .def("World", &Frame::World,
            return_value_policy<reference_existing_object>())
        .staticmethod("World")
        
        // Transform
        .def("getRelativeTransform", &Frame::getRelativeTransform,
            return_value_policy<copy_const_reference>())
        .def("getWorldTransform", &Frame::getWorldTransform,
            return_value_policy<copy_const_reference>())
        .def("getTransform",
            static_cast<Eigen::Isometry3d (Frame::*)(const Frame*) const>(
                &Frame::getTransform),
            getTransform_overloads())
        .def("getTransform",
            static_cast<Eigen::Isometry3d (Frame::*)(
                    const Frame*, const Frame*) const>(
                &Frame::getTransform))

        // Velocity
        .def("getRelativeSpatialVelocity", &Frame::getRelativeSpatialVelocity,
            return_value_policy<copy_const_reference>())
        .def("getSpatialVelocity",
            static_cast<const Eigen::Vector6d& (Frame::*)() const>(
                &Frame::getSpatialVelocity),
            return_value_policy<copy_const_reference>())
        .def("getSpatialVelocity",
            static_cast<Eigen::Vector6d (Frame::*)(
                    const Frame*, const Frame*) const>(
                &Frame::getSpatialVelocity))
        .def("getSpatialVelocity",
            static_cast<Eigen::Vector6d (Frame::*)(
                    const Eigen::Vector3d&) const>(
                &Frame::getSpatialVelocity))
        .def("getSpatialVelocity",
            static_cast<Eigen::Vector6d (Frame::*)(
                    const Eigen::Vector3d&, const Frame*, const Frame*) const>(
                &Frame::getSpatialVelocity))
        .def("getLinearVelocity",
            static_cast<Eigen::Vector3d (Frame::*)(
                    const Frame*, const Frame*) const>(
                &Frame::getLinearVelocity),
            getLinearVelocity_overloads02())
        .def("getLinearVelocity",
            static_cast<Eigen::Vector3d (Frame::*)(
                    const Eigen::Vector3d&, const Frame*, const Frame*) const>(
                &Frame::getLinearVelocity),
            getLinearVelocity_overloads13())
        .def("getAngularVelocity", &Frame::getAngularVelocity,
            getAngularVelocity_overloads())

        // Acceleration
        .def("getRelativeSpatialAcceleration",
            &Frame::getRelativeSpatialAcceleration,
            return_value_policy<copy_const_reference>())
        .def("getPrimaryRelativeAcceleration",
            &Frame::getPrimaryRelativeAcceleration,
            return_value_policy<copy_const_reference>())
        .def("getPartialAcceleration", &Frame::getPartialAcceleration,
            return_value_policy<copy_const_reference>())
        .def("getSpatialAcceleration",
            static_cast<const Eigen::Vector6d& (Frame::*)() const>(
                &Frame::getSpatialAcceleration),
            return_value_policy<copy_const_reference>())
        .def("getSpatialAcceleration",
            static_cast<Eigen::Vector6d (Frame::*)(
                    const Frame*, const Frame*) const>(
                &Frame::getSpatialAcceleration))
        .def("getSpatialAcceleration",
            static_cast<Eigen::Vector6d (Frame::*)(
                    const Eigen::Vector3d&, const Frame*, const Frame*) const>(
                &Frame::getSpatialAcceleration))
        .def("getLinearAcceleration",
            static_cast<Eigen::Vector3d (Frame::*)(
                    const Frame*, const Frame*) const>(
                &Frame::getLinearAcceleration),
            getLinearAcceleration_overloads02())
        .def("getLinearAcceleration",
            static_cast<Eigen::Vector3d (Frame::*)(
                    const Eigen::Vector3d&, const Frame*, const Frame*) const>(
                &Frame::getLinearAcceleration),
            getLinearAcceleration_overloads13())
        .def("getAngularAcceleration", &Frame::getAngularAcceleration,
            getAngularAcceleration_overloads())

        // Relationships
        .def("getChildEntities",
            static_cast<const std::set<Entity*>& (Frame::*)()>(
                &Frame::getChildEntities),
            return_value_policy<copy_const_reference>())
            // TODO: Convert the std::set<Entity> to a vector.
        .def("getNumChildEntities", &Frame::getNumChildEntities)
        .def("getChildFrames",
            static_cast<const std::set<Frame*>& (Frame::*)()>(
                &Frame::getChildFrames),
            return_value_policy<copy_const_reference>())
            // TODO: Convert the std::set<Frame> to a vector.
        .def("getNumChildFrames", &Frame::getNumChildFrames)
        .def("isWorld", &Frame::isWorld)
        ;

    class_<WorldFrame, WorldFrame *, bases<Frame>, noncopyable>(
        "WorldFrame", no_init)
        ;
}

}
}
