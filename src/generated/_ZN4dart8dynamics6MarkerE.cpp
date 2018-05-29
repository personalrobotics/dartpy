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

void _ZN4dart8dynamics6MarkerE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Marker, ::boost::noncopyable, ::boost::python::bases<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::Marker, dart::dynamics::detail::MarkerProperties, dart::dynamics::FixedJacobianNode> > >("Marker", boost::python::no_init)
.def("setAspectProperties", [](dart::dynamics::Marker *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::Marker, dart::dynamics::detail::MarkerProperties, dart::dynamics::FixedJacobianNode>::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getBodyNode", [](dart::dynamics::Marker *self) -> dart::dynamics::BodyNode * { return self->getBodyNode(); }, ::boost::python::return_value_policy<::boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("getLocalPosition", [](const dart::dynamics::Marker *self) -> Eigen::Vector3d { return self->getLocalPosition(); })
.def("setLocalPosition", [](dart::dynamics::Marker *self, const Eigen::Vector3d & offset) -> void { return self->setLocalPosition(offset); }, (::boost::python::arg("offset")))
.def("getWorldPosition", [](const dart::dynamics::Marker *self) -> Eigen::Vector3d { return self->getWorldPosition(); })
.def("getID", [](const dart::dynamics::Marker *self) -> int { return self->getID(); })
.def("setConstraintType", [](dart::dynamics::Marker *self, dart::dynamics::Marker::ConstraintType type) -> void { return self->setConstraintType(type); }, (::boost::python::arg("type")))
.def("getConstraintType", [](const dart::dynamics::Marker *self) -> dart::dynamics::Marker::ConstraintType { return self->getConstraintType(); })
.def("setColor", [](dart::dynamics::Marker *self, const Eigen::Vector4d & color) -> void { return self->setColor(color); }, (::boost::python::arg("color")))
.def("getColor", [](const dart::dynamics::Marker *self) -> const Eigen::Vector4d & { return self->getColor(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.add_static_property("NO", ::boost::python::make_getter(dart::dynamics::Marker::NO))
.add_static_property("HARD", ::boost::python::make_getter(dart::dynamics::Marker::HARD))
.add_static_property("SOFT", ::boost::python::make_getter(dart::dynamics::Marker::SOFT))
;
}

/* footer */
