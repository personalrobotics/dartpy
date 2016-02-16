#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics6EntityE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Entity, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("Entity", boost::python::no_init)
.def(::boost::python::init<dart::dynamics::Frame *, const std::string &, bool>((::boost::python::arg("_refFrame"), ::boost::python::arg("_name"), ::boost::python::arg("_quiet"))))
.def("setProperties", static_cast<void (dart::dynamics::Entity::*)(const dart::dynamics::Entity::Properties &)>(&dart::dynamics::Entity::setProperties), (::boost::python::arg("_properties")))
.def("getEntityProperties", static_cast<const dart::dynamics::Entity::Properties &(dart::dynamics::Entity::*)() const>(&dart::dynamics::Entity::getEntityProperties), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("copy", static_cast<void (dart::dynamics::Entity::*)(const dart::dynamics::Entity &)>(&dart::dynamics::Entity::copy), (::boost::python::arg("_otherEntity")))
.def("copy", static_cast<void (dart::dynamics::Entity::*)(const dart::dynamics::Entity *)>(&dart::dynamics::Entity::copy), (::boost::python::arg("_otherEntity")))
.def("setName", static_cast<const std::string &(dart::dynamics::Entity::*)(const std::string &)>(&dart::dynamics::Entity::setName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("getName", static_cast<const std::string &(dart::dynamics::Entity::*)() const>(&dart::dynamics::Entity::getName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("addVisualizationShape", static_cast<void (dart::dynamics::Entity::*)(const dart::dynamics::ShapePtr &)>(&dart::dynamics::Entity::addVisualizationShape), (::boost::python::arg("_shape")))
.def("removeVisualizationShape", static_cast<void (dart::dynamics::Entity::*)(const dart::dynamics::ShapePtr &)>(&dart::dynamics::Entity::removeVisualizationShape), (::boost::python::arg("_shape")))
.def("removeAllVisualizationShapes", static_cast<void (dart::dynamics::Entity::*)()>(&dart::dynamics::Entity::removeAllVisualizationShapes))
.def("getNumVisualizationShapes", static_cast<std::size_t (dart::dynamics::Entity::*)() const>(&dart::dynamics::Entity::getNumVisualizationShapes))
.def("getVisualizationShape", static_cast<dart::dynamics::ShapePtr (dart::dynamics::Entity::*)(std::size_t)>(&dart::dynamics::Entity::getVisualizationShape), (::boost::python::arg("_index")))
.def("getVisualizationShape", static_cast<dart::dynamics::ConstShapePtr (dart::dynamics::Entity::*)(std::size_t) const>(&dart::dynamics::Entity::getVisualizationShape), (::boost::python::arg("_index")))
.def("getVisualizationShapes", static_cast<const std::vector<dart::dynamics::ShapePtr> &(dart::dynamics::Entity::*)()>(&dart::dynamics::Entity::getVisualizationShapes), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("draw", static_cast<void (dart::dynamics::Entity::*)(dart::renderer::RenderInterface *, const Eigen::Vector4d &, bool, int) const>(&dart::dynamics::Entity::draw), (::boost::python::arg("_ri"), ::boost::python::arg("_color"), ::boost::python::arg("_useDefaultColor") = true, ::boost::python::arg("_depth") = 0))
.def("descendsFrom", static_cast<bool (dart::dynamics::Entity::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::Entity::descendsFrom), (::boost::python::arg("_someFrame")))
.def("isFrame", static_cast<bool (dart::dynamics::Entity::*)() const>(&dart::dynamics::Entity::isFrame))
.def("isQuiet", static_cast<bool (dart::dynamics::Entity::*)() const>(&dart::dynamics::Entity::isQuiet))
.def("notifyTransformUpdate", static_cast<void (dart::dynamics::Entity::*)()>(&dart::dynamics::Entity::notifyTransformUpdate))
.def("needsTransformUpdate", static_cast<bool (dart::dynamics::Entity::*)() const>(&dart::dynamics::Entity::needsTransformUpdate))
.def("notifyVelocityUpdate", static_cast<void (dart::dynamics::Entity::*)()>(&dart::dynamics::Entity::notifyVelocityUpdate))
.def("needsVelocityUpdate", static_cast<bool (dart::dynamics::Entity::*)() const>(&dart::dynamics::Entity::needsVelocityUpdate))
.def("notifyAccelerationUpdate", static_cast<void (dart::dynamics::Entity::*)()>(&dart::dynamics::Entity::notifyAccelerationUpdate))
.def("needsAccelerationUpdate", static_cast<bool (dart::dynamics::Entity::*)() const>(&dart::dynamics::Entity::needsAccelerationUpdate))
;
}

/* footer */
