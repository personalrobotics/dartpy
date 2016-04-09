#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics14PrismaticJointE_docstring[] = R"CHIMERA_STRING( class RevoluteJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14PrismaticJoint13setPropertiesERKNS0_6detail24PrismaticJointPropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this PrismaticJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14PrismaticJoint13setPropertiesERKNS0_6detail30PrismaticJointUniquePropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this PrismaticJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14PrismaticJoint27getPrismaticJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this PrismaticJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14PrismaticJoint4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another PrismaticJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14PrismaticJoint4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another PrismaticJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14PrismaticJoint7getTypeEv_docstring[] = R"CHIMERA_STRING( Gets a string representing the joint type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14PrismaticJoint13getStaticTypeEv_docstring[] = R"CHIMERA_STRING( Get joint type for this class
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14PrismaticJoint8isCyclicEm_docstring[] = R"CHIMERA_STRING( Get whether a generalized coordinate is cyclic. Return true if and only
 if this generalized coordinate has an infinite number of positions that
 produce the same local transform. Note that, for a multi-DOF joint,
 producing a cycle may require altering the position of this Joint's other
 generalized coordinates.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics14PrismaticJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PrismaticJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::SingleDofJoint, dart::common::RequiresAddon<dart::dynamics::detail::PrismaticJointAddon> > > >("PrismaticJoint", _ZN4dart8dynamics14PrismaticJointE_docstring, boost::python::no_init)
.def("hasPrismaticJointAddon", [](const dart::dynamics::PrismaticJoint *self) -> bool { return self->hasPrismaticJointAddon(); })
.def("getPrismaticJointAddon", [](dart::dynamics::PrismaticJoint *self) -> dart::dynamics::PrismaticJoint::Addon * { return self->getPrismaticJointAddon(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getPrismaticJointAddon", [](dart::dynamics::PrismaticJoint *self, const bool createIfNull) -> dart::dynamics::PrismaticJoint::Addon * { return self->getPrismaticJointAddon(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setPrismaticJointAddon", [](dart::dynamics::PrismaticJoint *self, const dart::dynamics::PrismaticJoint::Addon * addon) -> void { return self->setPrismaticJointAddon(addon); }, (::boost::python::arg("addon")))
.def("erasePrismaticJointAddon", [](dart::dynamics::PrismaticJoint *self) -> void { return self->erasePrismaticJointAddon(); })
.def("releasePrismaticJointAddon", [](dart::dynamics::PrismaticJoint *self) -> std::unique_ptr<dart::dynamics::PrismaticJoint::Addon> { return self->releasePrismaticJointAddon(); })
.def("setProperties", [](dart::dynamics::PrismaticJoint *self, const dart::dynamics::PrismaticJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics14PrismaticJoint13setPropertiesERKNS0_6detail24PrismaticJointPropertiesE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::PrismaticJoint *self, const dart::dynamics::PrismaticJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics14PrismaticJoint13setPropertiesERKNS0_6detail30PrismaticJointUniquePropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getPrismaticJointProperties", [](const dart::dynamics::PrismaticJoint *self) -> dart::dynamics::PrismaticJoint::Properties { return self->getPrismaticJointProperties(); }, _ZNK4dart8dynamics14PrismaticJoint27getPrismaticJointPropertiesEv_docstring)
.def("copy", [](dart::dynamics::PrismaticJoint *self, const dart::dynamics::PrismaticJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics14PrismaticJoint4copyERKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::PrismaticJoint *self, const dart::dynamics::PrismaticJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics14PrismaticJoint4copyEPKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::PrismaticJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics14PrismaticJoint7getTypeEv_docstring)
.def("isCyclic", [](const dart::dynamics::PrismaticJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, _ZNK4dart8dynamics14PrismaticJoint8isCyclicEm_docstring, (::boost::python::arg("_index")))
.def("setAxis", [](dart::dynamics::PrismaticJoint *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis", [](const dart::dynamics::PrismaticJoint *self) -> const Eigen::Vector3d & { return self->getAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getStaticType", []() -> const std::string & { return dart::dynamics::PrismaticJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
