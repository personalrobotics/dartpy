#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics13RevoluteJointE_docstring[] = R"CHIMERA_STRING( class RevoluteJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13RevoluteJoint13setPropertiesERKNS0_6detail23RevoluteJointPropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this RevoluteJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13RevoluteJoint13setPropertiesERKNS0_6detail29RevoluteJointUniquePropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this RevoluteJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13RevoluteJoint26getRevoluteJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this RevoluteJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13RevoluteJoint4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another RevoluteJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13RevoluteJoint4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another RevoluteJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13RevoluteJoint7getTypeEv_docstring[] = R"CHIMERA_STRING( Gets a string representing the joint type
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13RevoluteJoint8isCyclicEm_docstring[] = R"CHIMERA_STRING( Get whether a generalized coordinate is cyclic. Return true if and only
 if this generalized coordinate has an infinite number of positions that
 produce the same local transform. Note that, for a multi-DOF joint,
 producing a cycle may require altering the position of this Joint's other
 generalized coordinates.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13RevoluteJoint13getStaticTypeEv_docstring[] = R"CHIMERA_STRING( Get joint type for this class
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics13RevoluteJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::RevoluteJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::SingleDofJoint, dart::common::RequiresAddon<dart::dynamics::detail::RevoluteJointAddon> > > >("RevoluteJoint", _ZN4dart8dynamics13RevoluteJointE_docstring, boost::python::no_init)
.def("hasRevoluteJointAddon", [](const dart::dynamics::RevoluteJoint *self) -> bool { return self->hasRevoluteJointAddon(); })
.def("getRevoluteJointAddon", [](dart::dynamics::RevoluteJoint *self) -> dart::dynamics::RevoluteJoint::Addon * { return self->getRevoluteJointAddon(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getRevoluteJointAddon", [](dart::dynamics::RevoluteJoint *self, const bool createIfNull) -> dart::dynamics::RevoluteJoint::Addon * { return self->getRevoluteJointAddon(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setRevoluteJointAddon", [](dart::dynamics::RevoluteJoint *self, const dart::dynamics::RevoluteJoint::Addon * addon) -> void { return self->setRevoluteJointAddon(addon); }, (::boost::python::arg("addon")))
.def("eraseRevoluteJointAddon", [](dart::dynamics::RevoluteJoint *self) -> void { return self->eraseRevoluteJointAddon(); })
.def("releaseRevoluteJointAddon", [](dart::dynamics::RevoluteJoint *self) -> std::unique_ptr<dart::dynamics::RevoluteJoint::Addon> { return self->releaseRevoluteJointAddon(); })
.def("setProperties", [](dart::dynamics::RevoluteJoint *self, const dart::dynamics::RevoluteJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics13RevoluteJoint13setPropertiesERKNS0_6detail23RevoluteJointPropertiesE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::RevoluteJoint *self, const dart::dynamics::RevoluteJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics13RevoluteJoint13setPropertiesERKNS0_6detail29RevoluteJointUniquePropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getRevoluteJointProperties", [](const dart::dynamics::RevoluteJoint *self) -> dart::dynamics::RevoluteJoint::Properties { return self->getRevoluteJointProperties(); }, _ZNK4dart8dynamics13RevoluteJoint26getRevoluteJointPropertiesEv_docstring)
.def("copy", [](dart::dynamics::RevoluteJoint *self, const dart::dynamics::RevoluteJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics13RevoluteJoint4copyERKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::RevoluteJoint *self, const dart::dynamics::RevoluteJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics13RevoluteJoint4copyEPKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::RevoluteJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics13RevoluteJoint7getTypeEv_docstring)
.def("isCyclic", [](const dart::dynamics::RevoluteJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, _ZNK4dart8dynamics13RevoluteJoint8isCyclicEm_docstring, (::boost::python::arg("_index")))
.def("setAxis", [](dart::dynamics::RevoluteJoint *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis", [](const dart::dynamics::RevoluteJoint *self) -> const Eigen::Vector3d & { return self->getAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getStaticType", []() -> const std::string & { return dart::dynamics::RevoluteJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
