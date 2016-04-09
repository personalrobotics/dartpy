#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics11PlanarJointE_docstring[] = R"CHIMERA_STRING( PlanarJoint represents a 3-dof joint, which has two orthogonal translational
 axes and one rotational axis.
 First and second coordiantes represent translation along first and second
 translational axese, respectively. Third coordinate represents rotation
 along rotational axis.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11PlanarJoint13setPropertiesERKNS0_6detail21PlanarJointPropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this PlanarJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11PlanarJoint13setPropertiesERKNS0_6detail27PlanarJointUniquePropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this PlanarJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11PlanarJoint24getPlanarJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this PlanarJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11PlanarJoint4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another PlanarJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11PlanarJoint4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another PlanarJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11PlanarJoint7getTypeEv_docstring[] = R"CHIMERA_STRING( Gets a string representing the joint type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11PlanarJoint13getStaticTypeEv_docstring[] = R"CHIMERA_STRING( Get joint type for this class
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11PlanarJoint8isCyclicEm_docstring[] = R"CHIMERA_STRING( Get whether a generalized coordinate is cyclic. Return true if and only
 if this generalized coordinate has an infinite number of positions that
 produce the same local transform. Note that, for a multi-DOF joint,
 producing a cycle may require altering the position of this Joint's other
 generalized coordinates.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11PlanarJoint10setXYPlaneEb_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11PlanarJoint10setYZPlaneEb_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11PlanarJoint10setZXPlaneEb_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics11PlanarJoint17setArbitraryPlaneERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_b_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11PlanarJoint12getPlaneTypeEv_docstring[] = R"CHIMERA_STRING( Return plane type
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11PlanarJoint17getRotationalAxisEv_docstring[] = R"CHIMERA_STRING( Return rotational axis
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11PlanarJoint21getTranslationalAxis1Ev_docstring[] = R"CHIMERA_STRING( Return first translational axis
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11PlanarJoint21getTranslationalAxis2Ev_docstring[] = R"CHIMERA_STRING( Return second translational axis
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics11PlanarJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Fixed-size version of getLocalJacobian()
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics11PlanarJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PlanarJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::AddonManagerJoiner<dart::dynamics::MultiDofJoint<3>, dart::common::RequiresAddon<dart::dynamics::detail::PlanarJointAddon> > > >("PlanarJoint", _ZN4dart8dynamics11PlanarJointE_docstring, boost::python::no_init)
.def("hasPlanarJointAddon", [](const dart::dynamics::PlanarJoint *self) -> bool { return self->hasPlanarJointAddon(); })
.def("getPlanarJointAddon", [](dart::dynamics::PlanarJoint *self) -> dart::dynamics::PlanarJoint::Addon * { return self->getPlanarJointAddon(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getPlanarJointAddon", [](dart::dynamics::PlanarJoint *self, const bool createIfNull) -> dart::dynamics::PlanarJoint::Addon * { return self->getPlanarJointAddon(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setPlanarJointAddon", [](dart::dynamics::PlanarJoint *self, const dart::dynamics::PlanarJoint::Addon * addon) -> void { return self->setPlanarJointAddon(addon); }, (::boost::python::arg("addon")))
.def("erasePlanarJointAddon", [](dart::dynamics::PlanarJoint *self) -> void { return self->erasePlanarJointAddon(); })
.def("releasePlanarJointAddon", [](dart::dynamics::PlanarJoint *self) -> std::unique_ptr<dart::dynamics::PlanarJoint::Addon> { return self->releasePlanarJointAddon(); })
.def("setProperties", [](dart::dynamics::PlanarJoint *self, const dart::dynamics::PlanarJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics11PlanarJoint13setPropertiesERKNS0_6detail21PlanarJointPropertiesE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::PlanarJoint *self, const dart::dynamics::PlanarJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics11PlanarJoint13setPropertiesERKNS0_6detail27PlanarJointUniquePropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getPlanarJointProperties", [](const dart::dynamics::PlanarJoint *self) -> dart::dynamics::PlanarJoint::Properties { return self->getPlanarJointProperties(); }, _ZNK4dart8dynamics11PlanarJoint24getPlanarJointPropertiesEv_docstring)
.def("copy", [](dart::dynamics::PlanarJoint *self, const dart::dynamics::PlanarJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics11PlanarJoint4copyERKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::PlanarJoint *self, const dart::dynamics::PlanarJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics11PlanarJoint4copyEPKS1__docstring, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::PlanarJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11PlanarJoint7getTypeEv_docstring)
.def("isCyclic", [](const dart::dynamics::PlanarJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, _ZNK4dart8dynamics11PlanarJoint8isCyclicEm_docstring, (::boost::python::arg("_index")))
.def("setXYPlane", [](dart::dynamics::PlanarJoint *self) -> void { return self->setXYPlane(); }, _ZN4dart8dynamics11PlanarJoint10setXYPlaneEb_docstring)
.def("setXYPlane", [](dart::dynamics::PlanarJoint *self, bool _renameDofs) -> void { return self->setXYPlane(_renameDofs); }, _ZN4dart8dynamics11PlanarJoint10setXYPlaneEb_docstring, (::boost::python::arg("_renameDofs")))
.def("setYZPlane", [](dart::dynamics::PlanarJoint *self) -> void { return self->setYZPlane(); }, _ZN4dart8dynamics11PlanarJoint10setYZPlaneEb_docstring)
.def("setYZPlane", [](dart::dynamics::PlanarJoint *self, bool _renameDofs) -> void { return self->setYZPlane(_renameDofs); }, _ZN4dart8dynamics11PlanarJoint10setYZPlaneEb_docstring, (::boost::python::arg("_renameDofs")))
.def("setZXPlane", [](dart::dynamics::PlanarJoint *self) -> void { return self->setZXPlane(); }, _ZN4dart8dynamics11PlanarJoint10setZXPlaneEb_docstring)
.def("setZXPlane", [](dart::dynamics::PlanarJoint *self, bool _renameDofs) -> void { return self->setZXPlane(_renameDofs); }, _ZN4dart8dynamics11PlanarJoint10setZXPlaneEb_docstring, (::boost::python::arg("_renameDofs")))
.def("setArbitraryPlane", [](dart::dynamics::PlanarJoint *self, const Eigen::Vector3d & _transAxis1, const Eigen::Vector3d & _transAxis2) -> void { return self->setArbitraryPlane(_transAxis1, _transAxis2); }, _ZN4dart8dynamics11PlanarJoint17setArbitraryPlaneERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_b_docstring, (::boost::python::arg("_transAxis1"), ::boost::python::arg("_transAxis2")))
.def("setArbitraryPlane", [](dart::dynamics::PlanarJoint *self, const Eigen::Vector3d & _transAxis1, const Eigen::Vector3d & _transAxis2, bool _renameDofs) -> void { return self->setArbitraryPlane(_transAxis1, _transAxis2, _renameDofs); }, _ZN4dart8dynamics11PlanarJoint17setArbitraryPlaneERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6_b_docstring, (::boost::python::arg("_transAxis1"), ::boost::python::arg("_transAxis2"), ::boost::python::arg("_renameDofs")))
.def("getPlaneType", [](const dart::dynamics::PlanarJoint *self) -> dart::dynamics::PlanarJoint::PlaneType { return self->getPlaneType(); }, _ZNK4dart8dynamics11PlanarJoint12getPlaneTypeEv_docstring)
.def("getRotationalAxis", [](const dart::dynamics::PlanarJoint *self) -> const Eigen::Vector3d & { return self->getRotationalAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11PlanarJoint17getRotationalAxisEv_docstring)
.def("getTranslationalAxis1", [](const dart::dynamics::PlanarJoint *self) -> const Eigen::Vector3d & { return self->getTranslationalAxis1(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11PlanarJoint21getTranslationalAxis1Ev_docstring)
.def("getTranslationalAxis2", [](const dart::dynamics::PlanarJoint *self) -> const Eigen::Vector3d & { return self->getTranslationalAxis2(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics11PlanarJoint21getTranslationalAxis2Ev_docstring)
.def("getLocalJacobianStatic", [](const dart::dynamics::PlanarJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Matrix<double, 6, 3> { return self->getLocalJacobianStatic(_positions); }, _ZNK4dart8dynamics11PlanarJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::PlanarJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
