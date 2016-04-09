#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics12SoftBodyNodeE_docstring[] = R"CHIMERA_STRING( SoftBodyNode represent a soft body that has one deformable skin
 This class is implementation of Sumit Jain and C. Karen Liu's paper:
 http://www.cc.gatech.edu/graphics/projects/Sumit/homepage/projects/softcontacts/index.html
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode13setPropertiesERKNS1_10PropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this SoftBodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode13setPropertiesERKNS1_16UniquePropertiesE_docstring[] = R"CHIMERA_STRING( Set the Properties of this SoftBodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12SoftBodyNode25getSoftBodyNodePropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this SoftBodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode4copyERKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another SoftBodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode4copyEPKS1__docstring[] = R"CHIMERA_STRING( Copy the Properties of another SoftBodyNode
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode11getNotifierEv_docstring[] = R"CHIMERA_STRING( Get the update notifier for the PointMasses of this SoftBodyNode
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12SoftBodyNode7getMassEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode24setVertexSpringStiffnessEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12SoftBodyNode24getVertexSpringStiffnessEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode22setEdgeSpringStiffnessEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12SoftBodyNode22getEdgeSpringStiffnessEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode21setDampingCoefficientEd_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12SoftBodyNode21getDampingCoefficientEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode20removeAllPointMassesEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode12addPointMassERKNS0_9PointMass10PropertiesE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12SoftBodyNode17getNumPointMassesEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode12getPointMassEm_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode18connectPointMassesEmm_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode7addFaceERKN5Eigen6MatrixIiLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12SoftBodyNode7getFaceEm_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12SoftBodyNode11getNumFacesEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12SoftBodyNode22clearConstraintImpulseEv_docstring[] = R"CHIMERA_STRING( Clear constraint impulses and cache data used for impulse-based forward
 dynamics algorithm
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics12SoftBodyNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SoftBodyNode, ::boost::noncopyable, dart::dynamics::SoftBodyNodePtr, ::boost::python::bases<dart::dynamics::BodyNode > >("SoftBodyNode", _ZN4dart8dynamics12SoftBodyNodeE_docstring, boost::python::no_init)
.def("setProperties", [](dart::dynamics::SoftBodyNode *self, const dart::dynamics::SoftBodyNode::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics12SoftBodyNode13setPropertiesERKNS1_10PropertiesE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::SoftBodyNode *self, const dart::dynamics::SoftBodyNode::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics12SoftBodyNode13setPropertiesERKNS1_16UniquePropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getSoftBodyNodeProperties", [](const dart::dynamics::SoftBodyNode *self) -> dart::dynamics::SoftBodyNode::Properties { return self->getSoftBodyNodeProperties(); }, _ZNK4dart8dynamics12SoftBodyNode25getSoftBodyNodePropertiesEv_docstring)
.def("copy", [](dart::dynamics::SoftBodyNode *self, const dart::dynamics::SoftBodyNode & _otherSoftBodyNode) -> void { return self->copy(_otherSoftBodyNode); }, _ZN4dart8dynamics12SoftBodyNode4copyERKS1__docstring, (::boost::python::arg("_otherSoftBodyNode")))
.def("copy", [](dart::dynamics::SoftBodyNode *self, const dart::dynamics::SoftBodyNode * _otherSoftBodyNode) -> void { return self->copy(_otherSoftBodyNode); }, _ZN4dart8dynamics12SoftBodyNode4copyEPKS1__docstring, (::boost::python::arg("_otherSoftBodyNode")))
.def("getNotifier", [](dart::dynamics::SoftBodyNode *self) -> dart::dynamics::PointMassNotifier * { return self->getNotifier(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics12SoftBodyNode11getNotifierEv_docstring)
.def("getMass", [](const dart::dynamics::SoftBodyNode *self) -> double { return self->getMass(); }, _ZNK4dart8dynamics12SoftBodyNode7getMassEv_docstring)
.def("setVertexSpringStiffness", [](dart::dynamics::SoftBodyNode *self, double _kv) -> void { return self->setVertexSpringStiffness(_kv); }, _ZN4dart8dynamics12SoftBodyNode24setVertexSpringStiffnessEd_docstring, (::boost::python::arg("_kv")))
.def("getVertexSpringStiffness", [](const dart::dynamics::SoftBodyNode *self) -> double { return self->getVertexSpringStiffness(); }, _ZNK4dart8dynamics12SoftBodyNode24getVertexSpringStiffnessEv_docstring)
.def("setEdgeSpringStiffness", [](dart::dynamics::SoftBodyNode *self, double _ke) -> void { return self->setEdgeSpringStiffness(_ke); }, _ZN4dart8dynamics12SoftBodyNode22setEdgeSpringStiffnessEd_docstring, (::boost::python::arg("_ke")))
.def("getEdgeSpringStiffness", [](const dart::dynamics::SoftBodyNode *self) -> double { return self->getEdgeSpringStiffness(); }, _ZNK4dart8dynamics12SoftBodyNode22getEdgeSpringStiffnessEv_docstring)
.def("setDampingCoefficient", [](dart::dynamics::SoftBodyNode *self, double _damp) -> void { return self->setDampingCoefficient(_damp); }, _ZN4dart8dynamics12SoftBodyNode21setDampingCoefficientEd_docstring, (::boost::python::arg("_damp")))
.def("getDampingCoefficient", [](const dart::dynamics::SoftBodyNode *self) -> double { return self->getDampingCoefficient(); }, _ZNK4dart8dynamics12SoftBodyNode21getDampingCoefficientEv_docstring)
.def("removeAllPointMasses", [](dart::dynamics::SoftBodyNode *self) -> void { return self->removeAllPointMasses(); }, _ZN4dart8dynamics12SoftBodyNode20removeAllPointMassesEv_docstring)
.def("addPointMass", [](dart::dynamics::SoftBodyNode *self, const dart::dynamics::PointMass::Properties & _properties) -> dart::dynamics::PointMass * { return self->addPointMass(_properties); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics12SoftBodyNode12addPointMassERKNS0_9PointMass10PropertiesE_docstring, (::boost::python::arg("_properties")))
.def("getNumPointMasses", [](const dart::dynamics::SoftBodyNode *self) -> std::size_t { return self->getNumPointMasses(); }, _ZNK4dart8dynamics12SoftBodyNode17getNumPointMassesEv_docstring)
.def("getPointMass", [](dart::dynamics::SoftBodyNode *self, std::size_t _idx) -> dart::dynamics::PointMass * { return self->getPointMass(_idx); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), _ZN4dart8dynamics12SoftBodyNode12getPointMassEm_docstring, (::boost::python::arg("_idx")))
.def("connectPointMasses", [](dart::dynamics::SoftBodyNode *self, std::size_t _idx1, std::size_t _idx2) -> void { return self->connectPointMasses(_idx1, _idx2); }, _ZN4dart8dynamics12SoftBodyNode18connectPointMassesEmm_docstring, (::boost::python::arg("_idx1"), ::boost::python::arg("_idx2")))
.def("addFace", [](dart::dynamics::SoftBodyNode *self, const Eigen::Vector3i & _face) -> void { return self->addFace(_face); }, _ZN4dart8dynamics12SoftBodyNode7addFaceERKN5Eigen6MatrixIiLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_face")))
.def("getFace", [](const dart::dynamics::SoftBodyNode *self, std::size_t _idx) -> const Eigen::Vector3i & { return self->getFace(_idx); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12SoftBodyNode7getFaceEm_docstring, (::boost::python::arg("_idx")))
.def("getNumFaces", [](const dart::dynamics::SoftBodyNode *self) -> std::size_t { return self->getNumFaces(); }, _ZNK4dart8dynamics12SoftBodyNode11getNumFacesEv_docstring)
.def("clearConstraintImpulse", [](dart::dynamics::SoftBodyNode *self) -> void { return self->clearConstraintImpulse(); }, _ZN4dart8dynamics12SoftBodyNode22clearConstraintImpulseEv_docstring)
;
}

/* footer */
