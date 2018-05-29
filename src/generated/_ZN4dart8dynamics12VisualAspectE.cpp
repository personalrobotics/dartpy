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

void _ZN4dart8dynamics12VisualAspectE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::VisualAspect, ::boost::noncopyable >("VisualAspect", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::dynamics::VisualAspect * { return new dart::dynamics::VisualAspect(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const dart::common::detail::AspectWithVersionedProperties<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::dynamics::VisualAspect, dart::dynamics::detail::VisualAspectProperties, dart::dynamics::ShapeFrame, &dart::common::detail::NoOp>::PropertiesData & properties) -> dart::dynamics::VisualAspect * { return new dart::dynamics::VisualAspect(properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("properties"))))
.def("setRGBA", [](dart::dynamics::VisualAspect *self, const Eigen::Vector4d & color) -> void { return self->setRGBA(color); }, (::boost::python::arg("color")))
.def("getRGBA", [](const dart::dynamics::VisualAspect *self) -> const Eigen::Vector4d & { return self->getRGBA(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setHidden", [](dart::dynamics::VisualAspect *self, const bool & value) -> void { return self->setHidden(value); }, (::boost::python::arg("value")))
.def("getHidden", [](const dart::dynamics::VisualAspect *self) -> const bool & { return self->getHidden(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setShadowed", [](dart::dynamics::VisualAspect *self, const bool & value) -> void { return self->setShadowed(value); }, (::boost::python::arg("value")))
.def("getShadowed", [](const dart::dynamics::VisualAspect *self) -> const bool & { return self->getShadowed(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setColor", [](dart::dynamics::VisualAspect *self, const Eigen::Vector3d & color) -> void { return self->setColor(color); }, (::boost::python::arg("color")))
.def("setColor", [](dart::dynamics::VisualAspect *self, const Eigen::Vector4d & color) -> void { return self->setColor(color); }, (::boost::python::arg("color")))
.def("setRGB", [](dart::dynamics::VisualAspect *self, const Eigen::Vector3d & rgb) -> void { return self->setRGB(rgb); }, (::boost::python::arg("rgb")))
.def("setAlpha", [](dart::dynamics::VisualAspect *self, const double alpha) -> void { return self->setAlpha(alpha); }, (::boost::python::arg("alpha")))
.def("getColor", [](const dart::dynamics::VisualAspect *self) -> Eigen::Vector3d { return self->getColor(); })
.def("getRGB", [](const dart::dynamics::VisualAspect *self) -> Eigen::Vector3d { return self->getRGB(); })
.def("getAlpha", [](const dart::dynamics::VisualAspect *self) -> double { return self->getAlpha(); })
.def("hide", [](dart::dynamics::VisualAspect *self) -> void { return self->hide(); })
.def("show", [](dart::dynamics::VisualAspect *self) -> void { return self->show(); })
.def("isHidden", [](const dart::dynamics::VisualAspect *self) -> bool { return self->isHidden(); })
;
}

/* footer */
