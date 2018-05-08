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

void _ZN4dart8dynamics12SoftBodyNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SoftBodyNode, ::boost::noncopyable, dart::dynamics::SoftBodyNodePtr >("SoftBodyNode", boost::python::no_init)
.def("hasSoftBodyAspect", [](const dart::dynamics::SoftBodyNode *self) -> bool { return self->hasSoftBodyAspect(); })
.def("setSoftBodyAspect", [](dart::dynamics::SoftBodyNode *self, const dart::common::EmbedStateAndPropertiesOnTopOf<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties, dart::dynamics::BodyNode>::Aspect * aspect) -> void { return self->setSoftBodyAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removeSoftBodyAspect", [](dart::dynamics::SoftBodyNode *self) -> void { return self->removeSoftBodyAspect(); })
.def("releaseSoftBodyAspect", [](dart::dynamics::SoftBodyNode *self) -> std::unique_ptr<dart::common::EmbedStateAndPropertiesOnTopOf<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties, dart::dynamics::BodyNode>::Aspect> { return self->releaseSoftBodyAspect(); })
.def("asSoftBodyNode", [](dart::dynamics::SoftBodyNode *self) -> dart::dynamics::SoftBodyNode * { return self->asSoftBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::SoftBodyNodePtr> >())
.def("setProperties", [](dart::dynamics::SoftBodyNode *self, const dart::dynamics::SoftBodyNode::Properties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::SoftBodyNode *self, const dart::dynamics::SoftBodyNode::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setAspectState", [](dart::dynamics::SoftBodyNode *self, const dart::common::EmbedStateAndPropertiesOnTopOf<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties, dart::dynamics::BodyNode>::AspectState & state) -> void { return self->setAspectState(state); }, (::boost::python::arg("state")))
.def("setAspectProperties", [](dart::dynamics::SoftBodyNode *self, const dart::common::EmbedStateAndPropertiesOnTopOf<dart::dynamics::SoftBodyNode, dart::dynamics::detail::SoftBodyNodeUniqueState, dart::dynamics::detail::SoftBodyNodeUniqueProperties, dart::dynamics::BodyNode>::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getSoftBodyNodeProperties", [](const dart::dynamics::SoftBodyNode *self) -> dart::dynamics::SoftBodyNode::Properties { return self->getSoftBodyNodeProperties(); })
.def("copy", [](dart::dynamics::SoftBodyNode *self, const dart::dynamics::SoftBodyNode & _otherSoftBodyNode) -> void { return self->copy(_otherSoftBodyNode); }, (::boost::python::arg("_otherSoftBodyNode")))
.def("copy", [](dart::dynamics::SoftBodyNode *self, const dart::dynamics::SoftBodyNode * _otherSoftBodyNode) -> void { return self->copy(_otherSoftBodyNode); }, (::boost::python::arg("_otherSoftBodyNode")))
.def("getNotifier", [](dart::dynamics::SoftBodyNode *self) -> dart::dynamics::PointMassNotifier * { return self->getNotifier(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getMass", [](const dart::dynamics::SoftBodyNode *self) -> double { return self->getMass(); })
.def("setVertexSpringStiffness", [](dart::dynamics::SoftBodyNode *self, double _kv) -> void { return self->setVertexSpringStiffness(_kv); }, (::boost::python::arg("_kv")))
.def("getVertexSpringStiffness", [](const dart::dynamics::SoftBodyNode *self) -> double { return self->getVertexSpringStiffness(); })
.def("setEdgeSpringStiffness", [](dart::dynamics::SoftBodyNode *self, double _ke) -> void { return self->setEdgeSpringStiffness(_ke); }, (::boost::python::arg("_ke")))
.def("getEdgeSpringStiffness", [](const dart::dynamics::SoftBodyNode *self) -> double { return self->getEdgeSpringStiffness(); })
.def("setDampingCoefficient", [](dart::dynamics::SoftBodyNode *self, double _damp) -> void { return self->setDampingCoefficient(_damp); }, (::boost::python::arg("_damp")))
.def("getDampingCoefficient", [](const dart::dynamics::SoftBodyNode *self) -> double { return self->getDampingCoefficient(); })
.def("removeAllPointMasses", [](dart::dynamics::SoftBodyNode *self) -> void { return self->removeAllPointMasses(); })
.def("addPointMass", [](dart::dynamics::SoftBodyNode *self, const dart::dynamics::PointMass::Properties & _properties) -> dart::dynamics::PointMass * { return self->addPointMass(_properties); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_properties")))
.def("getNumPointMasses", [](const dart::dynamics::SoftBodyNode *self) -> std::size_t { return self->getNumPointMasses(); })
.def("getPointMass", [](dart::dynamics::SoftBodyNode *self, std::size_t _idx) -> dart::dynamics::PointMass * { return self->getPointMass(_idx); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_idx")))
.def("connectPointMasses", [](dart::dynamics::SoftBodyNode *self, std::size_t _idx1, std::size_t _idx2) -> void { return self->connectPointMasses(_idx1, _idx2); }, (::boost::python::arg("_idx1"), ::boost::python::arg("_idx2")))
.def("addFace", [](dart::dynamics::SoftBodyNode *self, const Eigen::Vector3i & _face) -> void { return self->addFace(_face); }, (::boost::python::arg("_face")))
.def("getFace", [](const dart::dynamics::SoftBodyNode *self, std::size_t _idx) -> const Eigen::Vector3i & { return self->getFace(_idx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_idx")))
.def("getNumFaces", [](const dart::dynamics::SoftBodyNode *self) -> std::size_t { return self->getNumFaces(); })
.def("clearConstraintImpulse", [](dart::dynamics::SoftBodyNode *self) -> void { return self->clearConstraintImpulse(); })
;
}

/* footer */
