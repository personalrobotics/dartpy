#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics10ArrowShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ArrowShape, std::shared_ptr<dart::dynamics::ArrowShape>, ::boost::python::bases<dart::dynamics::MeshShape > >("ArrowShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head) -> dart::dynamics::ArrowShape * { return new dart::dynamics::ArrowShape(_tail, _head); }, ::boost::python::default_call_policies(), (::boost::python::arg("_tail"), ::boost::python::arg("_head"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head, const dart::dynamics::ArrowShape::Properties & _properties) -> dart::dynamics::ArrowShape * { return new dart::dynamics::ArrowShape(_tail, _head, _properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("_tail"), ::boost::python::arg("_head"), ::boost::python::arg("_properties"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head, const dart::dynamics::ArrowShape::Properties & _properties, const Eigen::Vector4d & _color) -> dart::dynamics::ArrowShape * { return new dart::dynamics::ArrowShape(_tail, _head, _properties, _color); }, ::boost::python::default_call_policies(), (::boost::python::arg("_tail"), ::boost::python::arg("_head"), ::boost::python::arg("_properties"), ::boost::python::arg("_color"))))
.def("__init__", ::boost::python::make_constructor([](const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head, const dart::dynamics::ArrowShape::Properties & _properties, const Eigen::Vector4d & _color, std::size_t _resolution) -> dart::dynamics::ArrowShape * { return new dart::dynamics::ArrowShape(_tail, _head, _properties, _color, _resolution); }, ::boost::python::default_call_policies(), (::boost::python::arg("_tail"), ::boost::python::arg("_head"), ::boost::python::arg("_properties"), ::boost::python::arg("_color"), ::boost::python::arg("_resolution"))))
.def("setPositions", [](dart::dynamics::ArrowShape *self, const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head) -> void { return self->setPositions(_tail, _head); }, (::boost::python::arg("_tail"), ::boost::python::arg("_head")))
.def("getTail", [](const dart::dynamics::ArrowShape *self) -> const Eigen::Vector3d & { return self->getTail(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getHead", [](const dart::dynamics::ArrowShape *self) -> const Eigen::Vector3d & { return self->getHead(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setProperties", [](dart::dynamics::ArrowShape *self, const dart::dynamics::ArrowShape::Properties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("notifyColorUpdated", [](dart::dynamics::ArrowShape *self, const Eigen::Vector4d & _color) -> void { return self->notifyColorUpdated(_color); }, (::boost::python::arg("_color")))
.def("getProperties", [](const dart::dynamics::ArrowShape *self) -> const dart::dynamics::ArrowShape::Properties & { return self->getProperties(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("configureArrow", [](dart::dynamics::ArrowShape *self, const Eigen::Vector3d & _tail, const Eigen::Vector3d & _head, const dart::dynamics::ArrowShape::Properties & _properties) -> void { return self->configureArrow(_tail, _head, _properties); }, (::boost::python::arg("_tail"), ::boost::python::arg("_head"), ::boost::python::arg("_properties")))
;
}

/* footer */
