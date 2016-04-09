#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics10ScrewJointE_docstring[] = R"CHIMERA_STRING( class ScrewJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ScrewJoint13setPropertiesERKNS0_6detail20ScrewJointPropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this ScrewJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ScrewJoint13setPropertiesERKNS0_6detail26ScrewJointUniquePropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this ScrewJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10ScrewJoint23getScrewJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this ScrewJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ScrewJoint4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another ScrewJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ScrewJoint4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another ScrewJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10ScrewJoint7getTypeEv_docstring[] = R"CHIMERA_STRING( Gets a string representing the joint type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10ScrewJoint13getStaticTypeEv_docstring[] = R"CHIMERA_STRING( Get joint type for this class
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10ScrewJoint8isCyclicEm_docstring[] = R"CHIMERA_STRING( Get whether a generalized coordinate is cyclic. Return true if and only
 if this generalized coordinate has an infinite number of positions that
 produce the same local transform. Note that, for a multi-DOF joint,
 producing a cycle may require altering the position of this Joint's other
 generalized coordinates.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics10ScrewJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ScrewJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::SingleDofJoint, dart::common::RequiresAddon<dart::dynamics::detail::ScrewJointAddon> > > >("ScrewJoint", _ZN4dart8dynamics10ScrewJointE_docstring, boost::python::no_init)
.def("hasScrewJointAddon", [](const dart::dynamics::ScrewJoint *self) -> bool { return self->hasScrewJointAddon(); })
.def("getScrewJointAddon", [](dart::dynamics::ScrewJoint *self) -> dart::dynamics::ScrewJoint::Addon * { return self->getScrewJointAddon(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getScrewJointAddon", [](dart::dynamics::ScrewJoint *self, const bool createIfNull) -> dart::dynamics::ScrewJoint::Addon * { return self->getScrewJointAddon(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setScrewJointAddon", [](dart::dynamics::ScrewJoint *self, const dart::dynamics::ScrewJoint::Addon * addon) -> void { return self->setScrewJointAddon(addon); }, (::boost::python::arg("addon")))
.def("eraseScrewJointAddon", [](dart::dynamics::ScrewJoint *self) -> void { return self->eraseScrewJointAddon(); })
.def("releaseScrewJointAddon", [](dart::dynamics::ScrewJoint *self) -> std::unique_ptr<dart::dynamics::ScrewJoint::Addon> { return self->releaseScrewJointAddon(); })
.def("setProperties", [](dart::dynamics::ScrewJoint *self, const dart::dynamics::ScrewJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics10ScrewJoint13setPropertiesERKNS0_6detail20ScrewJointPropertiesE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::ScrewJoint *self, const dart::dynamics::ScrewJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics10ScrewJoint13setPropertiesERKNS0_6detail26ScrewJointUniquePropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getScrewJointProperties", [](const dart::dynamics::ScrewJoint *self) -> dart::dynamics::ScrewJoint::Properties { return self->getScrewJointProperties(); }, _ZNK4dart8dynamics10ScrewJoint23getScrewJointPropertiesEv_docstring)
.def("copy", [](dart::dynamics::ScrewJoint *self, const dart::dynamics::ScrewJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics10ScrewJoint4copyERKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::ScrewJoint *self, const dart::dynamics::ScrewJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics10ScrewJoint4copyEPKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::ScrewJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10ScrewJoint7getTypeEv_docstring)
.def("isCyclic", [](const dart::dynamics::ScrewJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, _ZNK4dart8dynamics10ScrewJoint8isCyclicEm_docstring, (::boost::python::arg("_index")))
.def("setAxis", [](dart::dynamics::ScrewJoint *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis", [](const dart::dynamics::ScrewJoint *self) -> const Eigen::Vector3d & { return self->getAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPitch", [](dart::dynamics::ScrewJoint *self, double _pitch) -> void { return self->setPitch(_pitch); }, (::boost::python::arg("_pitch")))
.def("getPitch", [](const dart::dynamics::ScrewJoint *self) -> double { return self->getPitch(); })
.def("getStaticType", []() -> const std::string & { return dart::dynamics::ScrewJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
