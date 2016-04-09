#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics14UniversalJointE_docstring[] = R"CHIMERA_STRING( class UniversalJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14UniversalJoint13setPropertiesERKNS0_6detail24UniversalJointPropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this UniversalJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14UniversalJoint13setPropertiesERKNS0_6detail30UniversalJointUniquePropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this UniversalJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14UniversalJoint27getUniversalJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this UniversalJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14UniversalJoint4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another UniversalJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14UniversalJoint4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another UniversalJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14UniversalJoint7getTypeEv_docstring[] = R"CHIMERA_STRING( Gets a string representing the joint type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics14UniversalJoint13getStaticTypeEv_docstring[] = R"CHIMERA_STRING( Get joint type for this class
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14UniversalJoint8isCyclicEm_docstring[] = R"CHIMERA_STRING( Get whether a generalized coordinate is cyclic. Return true if and only
 if this generalized coordinate has an infinite number of positions that
 produce the same local transform. Note that, for a multi-DOF joint,
 producing a cycle may require altering the position of this Joint's other
 generalized coordinates.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics14UniversalJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE_docstring[] = R"CHIMERA_STRING( Fixed-size version of getLocalJacobian()
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics14UniversalJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::UniversalJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::MultiDofJoint<2>, dart::common::RequiresAddon<dart::dynamics::detail::UniversalJointAddon> > > >("UniversalJoint", _ZN4dart8dynamics14UniversalJointE_docstring, boost::python::no_init)
.def("hasUniversalJointAddon", [](const dart::dynamics::UniversalJoint *self) -> bool { return self->hasUniversalJointAddon(); })
.def("getUniversalJointAddon", [](dart::dynamics::UniversalJoint *self) -> dart::dynamics::UniversalJoint::Addon * { return self->getUniversalJointAddon(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getUniversalJointAddon", [](dart::dynamics::UniversalJoint *self, const bool createIfNull) -> dart::dynamics::UniversalJoint::Addon * { return self->getUniversalJointAddon(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setUniversalJointAddon", [](dart::dynamics::UniversalJoint *self, const dart::dynamics::UniversalJoint::Addon * addon) -> void { return self->setUniversalJointAddon(addon); }, (::boost::python::arg("addon")))
.def("eraseUniversalJointAddon", [](dart::dynamics::UniversalJoint *self) -> void { return self->eraseUniversalJointAddon(); })
.def("releaseUniversalJointAddon", [](dart::dynamics::UniversalJoint *self) -> std::unique_ptr<dart::dynamics::UniversalJoint::Addon> { return self->releaseUniversalJointAddon(); })
.def("setProperties", [](dart::dynamics::UniversalJoint *self, const dart::dynamics::UniversalJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics14UniversalJoint13setPropertiesERKNS0_6detail24UniversalJointPropertiesE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::UniversalJoint *self, const dart::dynamics::UniversalJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics14UniversalJoint13setPropertiesERKNS0_6detail30UniversalJointUniquePropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getUniversalJointProperties", [](const dart::dynamics::UniversalJoint *self) -> dart::dynamics::UniversalJoint::Properties { return self->getUniversalJointProperties(); }, _ZNK4dart8dynamics14UniversalJoint27getUniversalJointPropertiesEv_docstring)
.def("copy", [](dart::dynamics::UniversalJoint *self, const dart::dynamics::UniversalJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics14UniversalJoint4copyERKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::UniversalJoint *self, const dart::dynamics::UniversalJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics14UniversalJoint4copyEPKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::UniversalJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics14UniversalJoint7getTypeEv_docstring)
.def("isCyclic", [](const dart::dynamics::UniversalJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, _ZNK4dart8dynamics14UniversalJoint8isCyclicEm_docstring, (::boost::python::arg("_index")))
.def("setAxis1", [](dart::dynamics::UniversalJoint *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis1(_axis); }, (::boost::python::arg("_axis")))
.def("setAxis2", [](dart::dynamics::UniversalJoint *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis2(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis1", [](const dart::dynamics::UniversalJoint *self) -> const Eigen::Vector3d & { return self->getAxis1(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getAxis2", [](const dart::dynamics::UniversalJoint *self) -> const Eigen::Vector3d & { return self->getAxis2(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalJacobianStatic", [](const dart::dynamics::UniversalJoint *self, const Eigen::Vector2d & _positions) -> Eigen::Matrix<double, 6, 2> { return self->getLocalJacobianStatic(_positions); }, _ZNK4dart8dynamics14UniversalJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::UniversalJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
