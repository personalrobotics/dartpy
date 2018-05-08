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

void _ZN4dart8dynamics11EndEffectorE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EndEffector, ::boost::noncopyable, dart::dynamics::TemplateNodePtr<dart::dynamics::EndEffector, dart::dynamics::BodyNode> >("EndEffector", boost::python::no_init)
.def("setProperties", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector::BasicProperties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector::UniqueProperties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("setProperties", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector::UniqueProperties & properties, bool useNow) -> void { return self->setProperties(properties, useNow); }, (::boost::python::arg("properties"), ::boost::python::arg("useNow")))
.def("setAspectProperties", [](dart::dynamics::EndEffector *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::EndEffector, dart::dynamics::detail::EndEffectorProperties, dart::dynamics::CompositeNode<dart::common::CompositeJoiner<dart::dynamics::FixedJacobianNode, dart::common::SpecializedForAspect<dart::dynamics::Support> > > >::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getEndEffectorProperties", [](const dart::dynamics::EndEffector *self) -> dart::dynamics::EndEffector::Properties { return self->getEndEffectorProperties(); })
.def("copy", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector & _otherEndEffector) -> void { return self->copy(_otherEndEffector); }, (::boost::python::arg("_otherEndEffector")))
.def("copy", [](dart::dynamics::EndEffector *self, const dart::dynamics::EndEffector * _otherEndEffector) -> void { return self->copy(_otherEndEffector); }, (::boost::python::arg("_otherEndEffector")))
.def("setDefaultRelativeTransform", [](dart::dynamics::EndEffector *self, const Eigen::Isometry3d & _newDefaultTf) -> void { return self->setDefaultRelativeTransform(_newDefaultTf); }, (::boost::python::arg("_newDefaultTf")))
.def("setDefaultRelativeTransform", [](dart::dynamics::EndEffector *self, const Eigen::Isometry3d & _newDefaultTf, bool _useNow) -> void { return self->setDefaultRelativeTransform(_newDefaultTf, _useNow); }, (::boost::python::arg("_newDefaultTf"), ::boost::python::arg("_useNow")))
.def("resetRelativeTransform", [](dart::dynamics::EndEffector *self) -> void { return self->resetRelativeTransform(); })
.def("hasSupport", [](const dart::dynamics::EndEffector *self) -> bool { return self->hasSupport(); })
.def("getSupport", [](dart::dynamics::EndEffector *self) -> dart::dynamics::Support * { return self->getSupport(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getSupport", [](dart::dynamics::EndEffector *self, const bool createIfNull) -> dart::dynamics::Support * { return self->getSupport(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setSupport", [](dart::dynamics::EndEffector *self, const dart::dynamics::Support * aspect) -> void { return self->setSupport(aspect); }, (::boost::python::arg("aspect")))
.def("removeSupport", [](dart::dynamics::EndEffector *self) -> void { return self->removeSupport(); })
.def("releaseSupport", [](dart::dynamics::EndEffector *self) -> std::unique_ptr<dart::dynamics::Support> { return self->releaseSupport(); })
.def("dirtyTransform", [](dart::dynamics::EndEffector *self) -> void { return self->dirtyTransform(); })
;
}

/* footer */
