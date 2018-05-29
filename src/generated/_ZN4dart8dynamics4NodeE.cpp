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

void _ZN4dart8dynamics4NodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Node, ::boost::noncopyable, ::boost::python::bases<dart::common::VersionCounter, dart::common::Subject > >("Node", boost::python::no_init)
.def("setName", [](dart::dynamics::Node *self, const std::string & newName) -> const std::string & { return self->setName(newName); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >(), (::boost::python::arg("newName")))
.def("getName", [](const dart::dynamics::Node *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("setNodeState", [](dart::dynamics::Node *self, const dart::dynamics::Node::State & otherState) -> void { return self->setNodeState(otherState); }, (::boost::python::arg("otherState")))
.def("getNodeState", [](const dart::dynamics::Node *self) -> std::unique_ptr<dart::dynamics::Node::State> { return self->getNodeState(); })
.def("copyNodeStateTo", [](const dart::dynamics::Node *self, std::unique_ptr<dart::dynamics::Node::State> & outputState) -> void { return self->copyNodeStateTo(outputState); }, (::boost::python::arg("outputState")))
.def("setNodeProperties", [](dart::dynamics::Node *self, const dart::dynamics::Node::Properties & properties) -> void { return self->setNodeProperties(properties); }, (::boost::python::arg("properties")))
.def("getNodeProperties", [](const dart::dynamics::Node *self) -> std::unique_ptr<dart::dynamics::Node::Properties> { return self->getNodeProperties(); })
.def("copyNodePropertiesTo", [](const dart::dynamics::Node *self, std::unique_ptr<dart::dynamics::Node::Properties> & outputProperties) -> void { return self->copyNodePropertiesTo(outputProperties); }, (::boost::python::arg("outputProperties")))
.def("getBodyNodePtr", [](dart::dynamics::Node *self) -> dart::dynamics::BodyNodePtr { return self->getBodyNodePtr(); })
.def("getBodyNodePtr", [](const dart::dynamics::Node *self) -> dart::dynamics::ConstBodyNodePtr { return self->getBodyNodePtr(); })
.def("isRemoved", [](const dart::dynamics::Node *self) -> bool { return self->isRemoved(); })
.def("getSkeleton", [](dart::dynamics::Node *self) -> std::shared_ptr<dart::dynamics::Skeleton> { return self->getSkeleton(); })
;
}

/* footer */
