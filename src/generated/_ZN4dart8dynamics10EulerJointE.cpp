#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics10EulerJointE_docstring[] = R"CHIMERA_STRING( class EulerJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10EulerJoint13setPropertiesERKNS0_6detail20EulerJointPropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this EulerJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10EulerJoint13setPropertiesERKNS0_6detail26EulerJointUniquePropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this EulerJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10EulerJoint23getEulerJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this EulerJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10EulerJoint4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another EulerJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10EulerJoint4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another EulerJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10EulerJoint7getTypeEv_docstring[] = R"CHIMERA_STRING( Gets a string representing the joint type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10EulerJoint13getStaticTypeEv_docstring[] = R"CHIMERA_STRING( Get joint type for this class
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10EulerJoint8isCyclicEm_docstring[] = R"CHIMERA_STRING( Get whether a generalized coordinate is cyclic. Return true if and only
 if this generalized coordinate has an infinite number of positions that
 produce the same local transform. Note that, for a multi-DOF joint,
 producing a cycle may require altering the position of this Joint's other
 generalized coordinates.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10EulerJoint12setAxisOrderENS0_6detail9AxisOrderEb_docstring[] = R"CHIMERA_STRING( Set the axis order
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10EulerJoint12getAxisOrderEv_docstring[] = R"CHIMERA_STRING( Return the axis order
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10EulerJoint18convertToTransformERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEENS0_6detail9AxisOrderE_docstring[] = R"CHIMERA_STRING( Convert a set of Euler angle positions into a transform
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10EulerJoint18convertToTransformERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( This is a version of EulerJoint::convertToRotation(const Eigen::Vector3d
&
,
 AxisOrder) which will use the AxisOrder belonging to the joint instance
 that it gets called on.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics10EulerJoint17convertToRotationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEENS0_6detail9AxisOrderE_docstring[] = R"CHIMERA_STRING( Convert a set of Euler angle positions into a rotation matrix
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics10EulerJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Fixed-size version of getLocalJacobian()
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics10EulerJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EulerJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::MultiDofJoint<3>, dart::common::RequiresAddon<dart::dynamics::detail::EulerJointAddon> > > >("EulerJoint", _ZN4dart8dynamics10EulerJointE_docstring, boost::python::no_init)
.def("hasEulerJointAddon", [](const dart::dynamics::EulerJoint *self) -> bool { return self->hasEulerJointAddon(); })
.def("getEulerJointAddon", [](dart::dynamics::EulerJoint *self) -> dart::dynamics::EulerJoint::Addon * { return self->getEulerJointAddon(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getEulerJointAddon", [](dart::dynamics::EulerJoint *self, const bool createIfNull) -> dart::dynamics::EulerJoint::Addon * { return self->getEulerJointAddon(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setEulerJointAddon", [](dart::dynamics::EulerJoint *self, const dart::dynamics::EulerJoint::Addon * addon) -> void { return self->setEulerJointAddon(addon); }, (::boost::python::arg("addon")))
.def("eraseEulerJointAddon", [](dart::dynamics::EulerJoint *self) -> void { return self->eraseEulerJointAddon(); })
.def("releaseEulerJointAddon", [](dart::dynamics::EulerJoint *self) -> std::unique_ptr<dart::dynamics::EulerJoint::Addon> { return self->releaseEulerJointAddon(); })
.def("setProperties", [](dart::dynamics::EulerJoint *self, const dart::dynamics::EulerJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics10EulerJoint13setPropertiesERKNS0_6detail20EulerJointPropertiesE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::EulerJoint *self, const dart::dynamics::EulerJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics10EulerJoint13setPropertiesERKNS0_6detail26EulerJointUniquePropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getEulerJointProperties", [](const dart::dynamics::EulerJoint *self) -> dart::dynamics::EulerJoint::Properties { return self->getEulerJointProperties(); }, _ZNK4dart8dynamics10EulerJoint23getEulerJointPropertiesEv_docstring)
.def("copy", [](dart::dynamics::EulerJoint *self, const dart::dynamics::EulerJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics10EulerJoint4copyERKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::EulerJoint *self, const dart::dynamics::EulerJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics10EulerJoint4copyEPKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::EulerJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics10EulerJoint7getTypeEv_docstring)
.def("isCyclic", [](const dart::dynamics::EulerJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, _ZNK4dart8dynamics10EulerJoint8isCyclicEm_docstring, (::boost::python::arg("_index")))
.def("setAxisOrder", [](dart::dynamics::EulerJoint *self, dart::dynamics::EulerJoint::AxisOrder _order) -> void { return self->setAxisOrder(_order); }, _ZN4dart8dynamics10EulerJoint12setAxisOrderENS0_6detail9AxisOrderEb_docstring, (::boost::python::arg("_order")))
.def("setAxisOrder", [](dart::dynamics::EulerJoint *self, dart::dynamics::EulerJoint::AxisOrder _order, bool _renameDofs) -> void { return self->setAxisOrder(_order, _renameDofs); }, _ZN4dart8dynamics10EulerJoint12setAxisOrderENS0_6detail9AxisOrderEb_docstring, (::boost::python::arg("_order"), ::boost::python::arg("_renameDofs")))
.def("getAxisOrder", [](const dart::dynamics::EulerJoint *self) -> dart::dynamics::EulerJoint::AxisOrder { return self->getAxisOrder(); }, _ZNK4dart8dynamics10EulerJoint12getAxisOrderEv_docstring)
.def("convertToTransform", [](const dart::dynamics::EulerJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Isometry3d { return self->convertToTransform(_positions); }, _ZNK4dart8dynamics10EulerJoint18convertToTransformERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("convertToRotation", [](const dart::dynamics::EulerJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Matrix3d { return self->convertToRotation(_positions); }, (::boost::python::arg("_positions")))
.def("getLocalJacobianStatic", [](const dart::dynamics::EulerJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Matrix<double, 6, 3> { return self->getLocalJacobianStatic(_positions); }, _ZNK4dart8dynamics10EulerJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::EulerJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("convertToTransform", [](const Eigen::Vector3d & _positions, dart::dynamics::EulerJoint::AxisOrder _ordering) -> Eigen::Isometry3d { return dart::dynamics::EulerJoint::convertToTransform(_positions, _ordering); }, (::boost::python::arg("_positions"), ::boost::python::arg("_ordering")))
.def("convertToRotation", [](const Eigen::Vector3d & _positions, dart::dynamics::EulerJoint::AxisOrder _ordering) -> Eigen::Matrix3d { return dart::dynamics::EulerJoint::convertToRotation(_positions, _ordering); }, (::boost::python::arg("_positions"), ::boost::python::arg("_ordering")))
.staticmethod("getStaticType")
;
}

/* footer */
