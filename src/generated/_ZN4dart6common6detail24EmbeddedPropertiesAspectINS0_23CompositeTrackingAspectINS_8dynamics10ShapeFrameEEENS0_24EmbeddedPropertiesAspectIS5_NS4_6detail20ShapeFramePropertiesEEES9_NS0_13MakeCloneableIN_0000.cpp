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

void _ZN4dart6common6detail24EmbeddedPropertiesAspectINS0_23CompositeTrackingAspectINS_8dynamics10ShapeFrameEEENS0_24EmbeddedPropertiesAspectIS5_NS4_6detail20ShapeFramePropertiesEEES9_NS0_13MakeCloneableINS0_6Aspect10PropertiesES9_EEXadL_ZNS1_28DefaultSetEmbeddedPropertiesISA_SE_EEvPT_RKT0_EEXadL_ZNS1_28DefaultGetEmbeddedPropertiesISA_SE_EESK_PKSG_EEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::detail::EmbeddedPropertiesAspect<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::common::EmbeddedPropertiesAspect<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties>, dart::dynamics::detail::ShapeFrameProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::ShapeFrameProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>, ::boost::noncopyable, ::boost::python::bases<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame> > >("EmbeddedPropertiesAspect_ShapeFrame", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::detail::EmbeddedPropertiesAspect<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::common::EmbeddedPropertiesAspect<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties>, dart::dynamics::detail::ShapeFrameProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::ShapeFrameProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> * { return new dart::common::detail::EmbeddedPropertiesAspect<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::common::EmbeddedPropertiesAspect<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties>, dart::dynamics::detail::ShapeFrameProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::ShapeFrameProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>(); }, ::boost::python::default_call_policies()))
.def("setAspectProperties", [](dart::common::detail::EmbeddedPropertiesAspect<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::common::EmbeddedPropertiesAspect<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties>, dart::dynamics::detail::ShapeFrameProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::ShapeFrameProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self, const dart::common::Aspect::Properties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("setProperties", [](dart::common::detail::EmbeddedPropertiesAspect<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::common::EmbeddedPropertiesAspect<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties>, dart::dynamics::detail::ShapeFrameProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::ShapeFrameProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self, const dart::common::detail::EmbeddedPropertiesAspect<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::common::EmbeddedPropertiesAspect<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties>, dart::dynamics::detail::ShapeFrameProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::ShapeFrameProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>::Properties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("getProperties", [](const dart::common::detail::EmbeddedPropertiesAspect<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::common::EmbeddedPropertiesAspect<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties>, dart::dynamics::detail::ShapeFrameProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::ShapeFrameProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self) -> const dart::common::detail::EmbeddedPropertiesAspect<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::common::EmbeddedPropertiesAspect<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties>, dart::dynamics::detail::ShapeFrameProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::ShapeFrameProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties>::Properties & { return self->getProperties(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("cloneAspect", [](const dart::common::detail::EmbeddedPropertiesAspect<dart::common::CompositeTrackingAspect<dart::dynamics::ShapeFrame>, dart::common::EmbeddedPropertiesAspect<dart::dynamics::ShapeFrame, dart::dynamics::detail::ShapeFrameProperties>, dart::dynamics::detail::ShapeFrameProperties, dart::common::MakeCloneable<dart::common::Aspect::Properties, dart::dynamics::detail::ShapeFrameProperties>, &dart::common::detail::DefaultSetEmbeddedProperties, &dart::common::detail::DefaultGetEmbeddedProperties> *self) -> std::unique_ptr<dart::common::Aspect> { return self->cloneAspect(); })
;
}

/* footer */
