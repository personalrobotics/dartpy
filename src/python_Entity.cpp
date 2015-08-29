#include "pointers.h"
#include <boost/python.hpp>
#include <dart/dynamics/dynamics.h>
#include <dart/renderer/RenderInterface.h>

using boost::noncopyable;
using dart::common::Subject;
using dart::dynamics::Entity;
using dart::dynamics::Frame;
using dart::dynamics::ShapePtr;

namespace dart {
namespace python {

void python_Entity()
{
    using namespace boost::python;

    scope joint_class(
        class_<Entity, bases<Subject>, noncopyable>("Entity",
             init<Frame*, const std::string&, bool>())
        .def("setProperties", &Entity::setProperties)
        .def("getEntityProperties", &Entity::getEntityProperties,
            return_value_policy<copy_const_reference>())
        .def("copy",
            static_cast<void (Entity::*)(const Entity&)>(
                &Entity::copy))
        .def("setName", &Entity::setName,
            return_value_policy<copy_const_reference>())
        .def("getName", &Entity::getName,
            return_value_policy<copy_const_reference>())
        .def("addVisualizationShape", &Entity::addVisualizationShape)
        .def("removeVisualizationShape", &Entity::removeVisualizationShape)
        .def("removeAllVisualizationShape", &Entity::removeVisualizationShape)
        .def("getNumVisualizationShapes", &Entity::getNumVisualizationShapes)
        .def("getVisualizationShape",
            static_cast<ShapePtr (Entity::*)(size_t)>(
                &Entity::getVisualizationShape))
        .def("draw", &Entity::draw)
        .def("getParentFrame",
            static_cast<Frame* (Entity::*)()>(
                &Entity::getParentFrame),
            return_value_policy<reference_existing_object>())
            // TODO: How should we handle ownership of this?
        .def("descendsFrom", &Entity::descendsFrom)
        .def("isQuiet", &Entity::isQuiet)
        .def("notifyTransformUpdate", &Entity::notifyTransformUpdate)
        .def("needsTransformUpdate", &Entity::needsTransformUpdate)
        .def("notifyVelocityUpdate", &Entity::notifyVelocityUpdate)
        .def("needsVelocityUpdate", &Entity::needsVelocityUpdate)
        .def("notifyAccelerationUpdate", &Entity::notifyAccelerationUpdate)
        .def("needsAccelerationUpdate", &Entity::needsAccelerationUpdate)
    );

    class_<Entity::Properties>("Properties")
        .def_readwrite("mName", &Entity::Properties::mName)
        .def_readwrite("mVizShapes", &Entity::Properties::mVizShapes)
        ;
}

}
}
