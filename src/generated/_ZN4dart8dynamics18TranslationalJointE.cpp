#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics18TranslationalJointE_docstring[] = R"CHIMERA_STRING( class TranslationalJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics18TranslationalJoint31getTranslationalJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this TranslationalJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics18TranslationalJoint7getTypeEv_docstring[] = R"CHIMERA_STRING( Gets a string representing the joint type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics18TranslationalJoint13getStaticTypeEv_docstring[] = R"CHIMERA_STRING( Get joint type for this class
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics18TranslationalJoint8isCyclicEm_docstring[] = R"CHIMERA_STRING( Get whether a generalized coordinate is cyclic. Return true if and only
 if this generalized coordinate has an infinite number of positions that
 produce the same local transform. Note that, for a multi-DOF joint,
 producing a cycle may require altering the position of this Joint's other
 generalized coordinates.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics18TranslationalJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Fixed-size version of getLocalJacobian()
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics18TranslationalJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::TranslationalJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::MultiDofJoint<3> > >("TranslationalJoint", _ZN4dart8dynamics18TranslationalJointE_docstring, boost::python::no_init)
.def("getTranslationalJointProperties", [](const dart::dynamics::TranslationalJoint *self) -> dart::dynamics::TranslationalJoint::Properties { return self->getTranslationalJointProperties(); }, _ZNK4dart8dynamics18TranslationalJoint31getTranslationalJointPropertiesEv_docstring)
.def("getType", [](const dart::dynamics::TranslationalJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics18TranslationalJoint7getTypeEv_docstring)
.def("isCyclic", [](const dart::dynamics::TranslationalJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, _ZNK4dart8dynamics18TranslationalJoint8isCyclicEm_docstring, (::boost::python::arg("_index")))
.def("getLocalJacobianStatic", [](const dart::dynamics::TranslationalJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Matrix<double, 6, 3> { return self->getLocalJacobianStatic(_positions); }, _ZNK4dart8dynamics18TranslationalJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::TranslationalJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
