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

void _ZN4dart8dynamics10ShapeFrameE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ShapeFrame, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Frame, dart::common::VersionCounter, dart::common::SpecializedForAspect<dart::dynamics::VisualAspect, dart::dynamics::CollisionAspect, dart::dynamics::DynamicsAspect> > >("ShapeFrame", boost::python::no_init)
.def("setProperties", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::ShapeFrame::UniqueProperties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("setAspectProperties", [](dart::dynamics::ShapeFrame *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties, dart::common::SpecializedForAspect<dart::dynamics::VisualAspect, dart::dynamics::CollisionAspect, dart::dynamics::DynamicsAspect> >::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getAspectProperties", [](const dart::dynamics::ShapeFrame *self) -> const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties, dart::common::SpecializedForAspect<dart::dynamics::VisualAspect, dart::dynamics::CollisionAspect, dart::dynamics::DynamicsAspect> >::AspectProperties & { return self->getAspectProperties(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setShape", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::ShapePtr & shape) -> void { return self->setShape(shape); }, (::boost::python::arg("shape")))
.def("getShape", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::ShapePtr { return self->getShape(); })
.def("hasVisualAspect", [](const dart::dynamics::ShapeFrame *self) -> bool { return self->hasVisualAspect(); })
.def("getVisualAspect", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::VisualAspect * { return self->getVisualAspect(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("getVisualAspect", [](dart::dynamics::ShapeFrame *self, const bool createIfNull) -> dart::dynamics::VisualAspect * { return self->getVisualAspect(createIfNull); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setVisualAspect", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::VisualAspect * aspect) -> void { return self->setVisualAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removeVisualAspect", [](dart::dynamics::ShapeFrame *self) -> void { return self->removeVisualAspect(); })
.def("releaseVisualAspect", [](dart::dynamics::ShapeFrame *self) -> std::unique_ptr<dart::dynamics::VisualAspect> { return self->releaseVisualAspect(); })
.def("hasCollisionAspect", [](const dart::dynamics::ShapeFrame *self) -> bool { return self->hasCollisionAspect(); })
.def("getCollisionAspect", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::CollisionAspect * { return self->getCollisionAspect(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("getCollisionAspect", [](dart::dynamics::ShapeFrame *self, const bool createIfNull) -> dart::dynamics::CollisionAspect * { return self->getCollisionAspect(createIfNull); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setCollisionAspect", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::CollisionAspect * aspect) -> void { return self->setCollisionAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removeCollisionAspect", [](dart::dynamics::ShapeFrame *self) -> void { return self->removeCollisionAspect(); })
.def("releaseCollisionAspect", [](dart::dynamics::ShapeFrame *self) -> std::unique_ptr<dart::dynamics::CollisionAspect> { return self->releaseCollisionAspect(); })
.def("hasDynamicsAspect", [](const dart::dynamics::ShapeFrame *self) -> bool { return self->hasDynamicsAspect(); })
.def("getDynamicsAspect", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::DynamicsAspect * { return self->getDynamicsAspect(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("getDynamicsAspect", [](dart::dynamics::ShapeFrame *self, const bool createIfNull) -> dart::dynamics::DynamicsAspect * { return self->getDynamicsAspect(createIfNull); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setDynamicsAspect", [](dart::dynamics::ShapeFrame *self, const dart::dynamics::DynamicsAspect * aspect) -> void { return self->setDynamicsAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removeDynamicsAspect", [](dart::dynamics::ShapeFrame *self) -> void { return self->removeDynamicsAspect(); })
.def("releaseDynamicsAspect", [](dart::dynamics::ShapeFrame *self) -> std::unique_ptr<dart::dynamics::DynamicsAspect> { return self->releaseDynamicsAspect(); })
.def("asShapeFrame", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::ShapeFrame * { return self->asShapeFrame(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("isShapeNode", [](const dart::dynamics::ShapeFrame *self) -> bool { return self->isShapeNode(); })
.def("asShapeNode", [](dart::dynamics::ShapeFrame *self) -> dart::dynamics::ShapeNode * { return self->asShapeNode(); }, ::boost::python::return_value_policy<::boost::python::return_by_smart_ptr<dart::dynamics::ShapeNodePtr> >())
;
}

/* footer */
