#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics4NodeE_docstring[] = R"CHIMERA_STRING( The Node class is a base class for BodyNode and any object that attaches to
 a BodyNode. This base class handles ownership and reference counting for the
 classes that inherit it.
 In most cases, when creating your own custom Node class, you will also want
 to inherit from AccessoryNode using CRTP.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics4Node7setNameERKSs_docstring[] = R"CHIMERA_STRING( Set the name of this Node
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics4Node7getNameEv_docstring[] = R"CHIMERA_STRING( Get the name of this Node
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics4Node12setNodeStateERKNS1_5StateE_docstring[] = R"CHIMERA_STRING( Set the State of this Node. By default, this does nothing.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics4Node12getNodeStateEv_docstring[] = R"CHIMERA_STRING( Get the State of this Node. By default, this returns a nullptr which
 implies that the Node is stateless.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics4Node15copyNodeStateToERSt10unique_ptrINS1_5StateESt14default_deleteIS3_EE_docstring[] = R"CHIMERA_STRING( Copy the State of this Node into a unique_ptr. By default, this simply
 calls getNodeState() and passes the result into the outputState, but this
 function can be overriden to be more performant by avoiding allocations.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics4Node17setNodePropertiesERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this Node. By default, this does nothing.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics4Node17getNodePropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this Node. By default, this returns a nullptr which
 implies that the Node has no properties.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics4Node20copyNodePropertiesToERSt10unique_ptrINS1_10PropertiesESt14default_deleteIS3_EE_docstring[] = R"CHIMERA_STRING( Copy the Properties of this Node into a unique_ptr. By default, this
 simply calls getNodeProperties() and passes the result into the
 outputProperties, but this function can be overriden to be more
 performant.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics4Node14getBodyNodePtrEv_docstring[] = R"CHIMERA_STRING( Get a pointer to the BodyNode that this Node is associated with
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics4Node14getBodyNodePtrEv_docstring[] = R"CHIMERA_STRING( Get a pointer to the BodyNode that this Node is associated with
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics4Node9isRemovedEv_docstring[] = R"CHIMERA_STRING( Returns true if this Node has been staged for removal from its BodyNode.
 It will be deleted once all strong references to it expire. If it is an
 AccessoryNode, you can call reattach() to prevent that from happening.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics4Node11getSkeletonEv_docstring[] = R"CHIMERA_STRING( Return the Skeleton that this Node is attached to
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics4Node16incrementVersionEv_docstring[] = R"CHIMERA_STRING( Increment the version of this Node (by default, this will increment the
 version number of the Skeleton).
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics4Node10getVersionEv_docstring[] = R"CHIMERA_STRING( Get the version of this Node (by default, this will get the version
 number of the Skeleton).
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics4NodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Node, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject, dart::common::VersionCounter > >("Node", _ZN4dart8dynamics4NodeE_docstring, boost::python::no_init)
.def("setName", [](dart::dynamics::Node *self, const std::string & newName) -> const std::string & { return self->setName(newName); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics4Node7setNameERKSs_docstring, (::boost::python::arg("newName")))
.def("getName", [](const dart::dynamics::Node *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics4Node7getNameEv_docstring)
.def("setNodeState", [](dart::dynamics::Node *self, const dart::dynamics::Node::State & otherState) -> void { return self->setNodeState(otherState); }, _ZN4dart8dynamics4Node12setNodeStateERKNS1_5StateE_docstring, (::boost::python::arg("otherState")))
.def("getNodeState", [](const dart::dynamics::Node *self) -> std::unique_ptr<dart::dynamics::Node::State> { return self->getNodeState(); }, _ZNK4dart8dynamics4Node12getNodeStateEv_docstring)
.def("copyNodeStateTo", [](const dart::dynamics::Node *self, std::unique_ptr<dart::dynamics::Node::State> & outputState) -> void { return self->copyNodeStateTo(outputState); }, _ZNK4dart8dynamics4Node15copyNodeStateToERSt10unique_ptrINS1_5StateESt14default_deleteIS3_EE_docstring, (::boost::python::arg("outputState")))
.def("setNodeProperties", [](dart::dynamics::Node *self, const dart::dynamics::Node::Properties & properties) -> void { return self->setNodeProperties(properties); }, _ZN4dart8dynamics4Node17setNodePropertiesERKNS1_10PropertiesE_docstring, (::boost::python::arg("properties")))
.def("getNodeProperties", [](const dart::dynamics::Node *self) -> std::unique_ptr<dart::dynamics::Node::Properties> { return self->getNodeProperties(); }, _ZNK4dart8dynamics4Node17getNodePropertiesEv_docstring)
.def("copyNodePropertiesTo", [](const dart::dynamics::Node *self, std::unique_ptr<dart::dynamics::Node::Properties> & outputProperties) -> void { return self->copyNodePropertiesTo(outputProperties); }, _ZNK4dart8dynamics4Node20copyNodePropertiesToERSt10unique_ptrINS1_10PropertiesESt14default_deleteIS3_EE_docstring, (::boost::python::arg("outputProperties")))
.def("getBodyNodePtr", [](dart::dynamics::Node *self) -> dart::dynamics::BodyNodePtr { return self->getBodyNodePtr(); }, _ZN4dart8dynamics4Node14getBodyNodePtrEv_docstring)
.def("getBodyNodePtr", [](const dart::dynamics::Node *self) -> dart::dynamics::ConstBodyNodePtr { return self->getBodyNodePtr(); }, _ZNK4dart8dynamics4Node14getBodyNodePtrEv_docstring)
.def("isRemoved", [](const dart::dynamics::Node *self) -> bool { return self->isRemoved(); }, _ZNK4dart8dynamics4Node9isRemovedEv_docstring)
.def("getSkeleton", [](dart::dynamics::Node *self) -> std::shared_ptr<dart::dynamics::Skeleton> { return self->getSkeleton(); }, _ZN4dart8dynamics4Node11getSkeletonEv_docstring)
.def("incrementVersion", [](dart::dynamics::Node *self) -> std::size_t { return self->incrementVersion(); }, _ZN4dart8dynamics4Node16incrementVersionEv_docstring)
.def("getVersion", [](const dart::dynamics::Node *self) -> std::size_t { return self->getVersion(); }, _ZNK4dart8dynamics4Node10getVersionEv_docstring)
;
}

/* footer */
