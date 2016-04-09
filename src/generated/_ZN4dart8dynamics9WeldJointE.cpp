#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics9WeldJointE_docstring[] = R"CHIMERA_STRING( class WeldJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9WeldJoint22getWeldJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this WeldJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9WeldJoint7getTypeEv_docstring[] = R"CHIMERA_STRING( Gets a string representing the joint type
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9WeldJoint13getStaticTypeEv_docstring[] = R"CHIMERA_STRING( Get joint type for this class
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9WeldJoint8isCyclicEm_docstring[] = R"CHIMERA_STRING( Get whether a generalized coordinate is cyclic. Return true if and only
 if this generalized coordinate has an infinite number of positions that
 produce the same local transform. Note that, for a multi-DOF joint,
 producing a cycle may require altering the position of this Joint's other
 generalized coordinates.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9WeldJoint30setTransformFromParentBodyNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Set transformation from parent body node to this joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9WeldJoint29setTransformFromChildBodyNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring[] = R"CHIMERA_STRING( Set transformation from child body node to this joint
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics9WeldJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::WeldJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::ZeroDofJoint > >("WeldJoint", _ZN4dart8dynamics9WeldJointE_docstring, boost::python::no_init)
.def("getWeldJointProperties", [](const dart::dynamics::WeldJoint *self) -> dart::dynamics::WeldJoint::Properties { return self->getWeldJointProperties(); }, _ZNK4dart8dynamics9WeldJoint22getWeldJointPropertiesEv_docstring)
.def("getType", [](const dart::dynamics::WeldJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9WeldJoint7getTypeEv_docstring)
.def("isCyclic", [](const dart::dynamics::WeldJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, _ZNK4dart8dynamics9WeldJoint8isCyclicEm_docstring, (::boost::python::arg("_index")))
.def("setTransformFromParentBodyNode", [](dart::dynamics::WeldJoint *self, const Eigen::Isometry3d & _T) -> void { return self->setTransformFromParentBodyNode(_T); }, _ZN4dart8dynamics9WeldJoint30setTransformFromParentBodyNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("_T")))
.def("setTransformFromChildBodyNode", [](dart::dynamics::WeldJoint *self, const Eigen::Isometry3d & _T) -> void { return self->setTransformFromChildBodyNode(_T); }, _ZN4dart8dynamics9WeldJoint29setTransformFromChildBodyNodeERKN5Eigen9TransformIdLi3ELi1ELi0EEE_docstring, (::boost::python::arg("_T")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::WeldJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
