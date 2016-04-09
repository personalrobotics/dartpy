#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics9BallJointE_docstring[] = R"CHIMERA_STRING( class BallJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9BallJoint7getTypeEv_docstring[] = R"CHIMERA_STRING( Gets a string representing the joint type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9BallJoint13getStaticTypeEv_docstring[] = R"CHIMERA_STRING( Get joint type for this class
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9BallJoint8isCyclicEm_docstring[] = R"CHIMERA_STRING( Get whether a generalized coordinate is cyclic. Return true if and only
 if this generalized coordinate has an infinite number of positions that
 produce the same local transform. Note that, for a multi-DOF joint,
 producing a cycle may require altering the position of this Joint's other
 generalized coordinates.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9BallJoint22getBallJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this BallJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9BallJoint18convertToTransformERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Convert a BallJoint-style position vector into a transform
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9BallJoint17convertToRotationERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Convert a BallJoint-style position vector into a rotation matrix
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9BallJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Fixed-size version of getLocalJacobian()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9BallJoint28getPositionDifferencesStaticERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6__docstring[] = R"CHIMERA_STRING( Fixed-size version of getPositionDifferences()
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics9BallJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::BallJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::MultiDofJoint<3> > >("BallJoint", _ZN4dart8dynamics9BallJointE_docstring, boost::python::no_init)
.def("getType", [](const dart::dynamics::BallJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9BallJoint7getTypeEv_docstring)
.def("isCyclic", [](const dart::dynamics::BallJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, _ZNK4dart8dynamics9BallJoint8isCyclicEm_docstring, (::boost::python::arg("_index")))
.def("getBallJointProperties", [](const dart::dynamics::BallJoint *self) -> dart::dynamics::BallJoint::Properties { return self->getBallJointProperties(); }, _ZNK4dart8dynamics9BallJoint22getBallJointPropertiesEv_docstring)
.def("getLocalJacobianStatic", [](const dart::dynamics::BallJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Matrix<double, 6, 3> { return self->getLocalJacobianStatic(_positions); }, _ZNK4dart8dynamics9BallJoint22getLocalJacobianStaticERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("getPositionDifferencesStatic", [](const dart::dynamics::BallJoint *self, const Eigen::Vector3d & _q2, const Eigen::Vector3d & _q1) -> Eigen::Vector3d { return self->getPositionDifferencesStatic(_q2, _q1); }, _ZNK4dart8dynamics9BallJoint28getPositionDifferencesStaticERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEES6__docstring, (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::BallJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("convertToTransform", [](const Eigen::Vector3d & _positions) -> Eigen::Isometry3d { return dart::dynamics::BallJoint::convertToTransform(_positions); }, (::boost::python::arg("_positions")))
.def("convertToRotation", [](const Eigen::Vector3d & _positions) -> Eigen::Matrix3d { return dart::dynamics::BallJoint::convertToRotation(_positions); }, (::boost::python::arg("_positions")))
.staticmethod("convertToRotation")
.staticmethod("convertToTransform")
.staticmethod("getStaticType")
;
}

/* footer */
