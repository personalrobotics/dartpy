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

void _ZN4dart8dynamics9ShapeNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ShapeNode, ::boost::noncopyable, dart::dynamics::ShapeNodePtr >("ShapeNode", boost::python::no_init)
.def("setProperties", [](dart::dynamics::ShapeNode *self, const dart::dynamics::ShapeNode::Properties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("getShapeNodeProperties", [](const dart::dynamics::ShapeNode *self) -> const dart::dynamics::ShapeNode::Properties { return self->getShapeNodeProperties(); })
.def("copy", [](dart::dynamics::ShapeNode *self, const dart::dynamics::ShapeNode & other) -> void { return self->copy(other); }, (::boost::python::arg("other")))
.def("copy", [](dart::dynamics::ShapeNode *self, const dart::dynamics::ShapeNode * other) -> void { return self->copy(other); }, (::boost::python::arg("other")))
.def("setRelativeTransform", [](dart::dynamics::ShapeNode *self, const Eigen::Isometry3d & transform) -> void { return self->setRelativeTransform(transform); }, (::boost::python::arg("transform")))
.def("setRelativeRotation", [](dart::dynamics::ShapeNode *self, const Eigen::Matrix3d & rotation) -> void { return self->setRelativeRotation(rotation); }, (::boost::python::arg("rotation")))
.def("getRelativeRotation", [](const dart::dynamics::ShapeNode *self) -> Eigen::Matrix3d { return self->getRelativeRotation(); })
.def("setRelativeTranslation", [](dart::dynamics::ShapeNode *self, const Eigen::Vector3d & translation) -> void { return self->setRelativeTranslation(translation); }, (::boost::python::arg("translation")))
.def("setOffset", [](dart::dynamics::ShapeNode *self, const Eigen::Vector3d & offset) -> void { return self->setOffset(offset); }, (::boost::python::arg("offset")))
.def("getRelativeTranslation", [](const dart::dynamics::ShapeNode *self) -> Eigen::Vector3d { return self->getRelativeTranslation(); })
.def("getOffset", [](const dart::dynamics::ShapeNode *self) -> Eigen::Vector3d { return self->getOffset(); })
.def("asShapeNode", [](dart::dynamics::ShapeNode *self) -> dart::dynamics::ShapeNode * { return self->asShapeNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >())
;
}

/* footer */
