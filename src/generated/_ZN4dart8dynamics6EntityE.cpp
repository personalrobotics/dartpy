#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics6EntityE_docstring[] = R"CHIMERA_STRING( Entity class is a base class for any objects that exist in the kinematic
 tree structure of DART.
 Entities all share the following properties: they exist within a reference
 frame, have a name, and are visualizable. However, different Entity types
 may have different policies about how/if their reference frame or name
 can be changed. Use the Detachable class to create an Entity whose reference
 Frame can be changed arbitrarily.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Entity13setPropertiesERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this Entity
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Entity19getEntityPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this Entity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Entity4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another Entity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Entity4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another Entity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Entity7setNameERKSs_docstring[] = R"CHIMERA_STRING( Set name. Some implementations of Entity may make alterations to the name
 that gets passed in. The final name that this entity will use gets passed
 back in the return of this function.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Entity7getNameEv_docstring[] = R"CHIMERA_STRING( Return the name of this Entity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Entity14getParentFrameEv_docstring[] = R"CHIMERA_STRING( Get the parent (reference) frame of this Entity
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Entity12descendsFromEPKNS0_5FrameE_docstring[] = R"CHIMERA_STRING( True if and only if this Entity depends on (i.e. kinematically descends
 from) _someFrame. If _someFrame is nullptr, this returns true in order to
 accommodate BodyNodes which always have a nullptr BodyNode as the parent
 of a root BodyNode.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Entity7isFrameEv_docstring[] = R"CHIMERA_STRING( True iff this Entity is also a Frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Entity7isQuietEv_docstring[] = R"CHIMERA_STRING( Returns true if this Entity is set to be quiet.
 A quiet entity is unknown to its parent Frame. It will not be tracked by
 its parent; it will not receive notifications from its parent, and it will
 not be rendered. The advantage to a quiet Entity is that it has less
 overhead when constructing and deconstructing, which makes it more
 suitable for temporary objects.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Entity21notifyTransformUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Entity that its parent Frame's pose has changed
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Entity20needsTransformUpdateEv_docstring[] = R"CHIMERA_STRING( Returns true iff a transform update is needed for this Entity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Entity20notifyVelocityUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Entity that its parent Frame's velocity has changed
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Entity19needsVelocityUpdateEv_docstring[] = R"CHIMERA_STRING( Returns true iff a velocity update is needed for this Entity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Entity24notifyAccelerationUpdateEv_docstring[] = R"CHIMERA_STRING( Notify this Entity that its parent Frame's acceleration has changed
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Entity23needsAccelerationUpdateEv_docstring[] = R"CHIMERA_STRING( Returns true iff an acceleration update is needed for this Entity
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6EntityE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Entity, ::boost::noncopyable, ::boost::python::bases<dart::common::Subject > >("Entity", _ZN4dart8dynamics6EntityE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::dynamics::Frame * _refFrame, const std::string & _name, bool _quiet) -> dart::dynamics::Entity * { return new dart::dynamics::Entity(_refFrame, _name, _quiet); }, ::boost::python::default_call_policies(), (::boost::python::arg("_refFrame"), ::boost::python::arg("_name"), ::boost::python::arg("_quiet"))))
.def("setProperties", [](dart::dynamics::Entity *self, const dart::dynamics::Entity::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics6Entity13setPropertiesERKNS1_10PropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getEntityProperties", [](const dart::dynamics::Entity *self) -> const dart::dynamics::Entity::Properties & { return self->getEntityProperties(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics6Entity19getEntityPropertiesEv_docstring)
.def("copy", [](dart::dynamics::Entity *self, const dart::dynamics::Entity & _otherEntity) -> void { return self->copy(_otherEntity); }, _ZN4dart8dynamics6Entity4copyERKS1__docstring, (::boost::python::arg("_otherEntity")))
.def("copy", [](dart::dynamics::Entity *self, const dart::dynamics::Entity * _otherEntity) -> void { return self->copy(_otherEntity); }, _ZN4dart8dynamics6Entity4copyEPKS1__docstring, (::boost::python::arg("_otherEntity")))
.def("setName", [](dart::dynamics::Entity *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics6Entity7setNameERKSs_docstring, (::boost::python::arg("_name")))
.def("getName", [](const dart::dynamics::Entity *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics6Entity7getNameEv_docstring)
.def("getParentFrame", [](dart::dynamics::Entity *self) -> dart::dynamics::Frame * { return self->getParentFrame(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics6Entity14getParentFrameEv_docstring)
.def("descendsFrom", [](const dart::dynamics::Entity *self, const dart::dynamics::Frame * _someFrame) -> bool { return self->descendsFrom(_someFrame); }, _ZNK4dart8dynamics6Entity12descendsFromEPKNS0_5FrameE_docstring, (::boost::python::arg("_someFrame")))
.def("isFrame", [](const dart::dynamics::Entity *self) -> bool { return self->isFrame(); }, _ZNK4dart8dynamics6Entity7isFrameEv_docstring)
.def("isQuiet", [](const dart::dynamics::Entity *self) -> bool { return self->isQuiet(); }, _ZNK4dart8dynamics6Entity7isQuietEv_docstring)
.def("notifyTransformUpdate", [](dart::dynamics::Entity *self) -> void { return self->notifyTransformUpdate(); }, _ZN4dart8dynamics6Entity21notifyTransformUpdateEv_docstring)
.def("needsTransformUpdate", [](const dart::dynamics::Entity *self) -> bool { return self->needsTransformUpdate(); }, _ZNK4dart8dynamics6Entity20needsTransformUpdateEv_docstring)
.def("notifyVelocityUpdate", [](dart::dynamics::Entity *self) -> void { return self->notifyVelocityUpdate(); }, _ZN4dart8dynamics6Entity20notifyVelocityUpdateEv_docstring)
.def("needsVelocityUpdate", [](const dart::dynamics::Entity *self) -> bool { return self->needsVelocityUpdate(); }, _ZNK4dart8dynamics6Entity19needsVelocityUpdateEv_docstring)
.def("notifyAccelerationUpdate", [](dart::dynamics::Entity *self) -> void { return self->notifyAccelerationUpdate(); }, _ZN4dart8dynamics6Entity24notifyAccelerationUpdateEv_docstring)
.def("needsAccelerationUpdate", [](const dart::dynamics::Entity *self) -> bool { return self->needsAccelerationUpdate(); }, _ZNK4dart8dynamics6Entity23needsAccelerationUpdateEv_docstring)
;
}

/* footer */
