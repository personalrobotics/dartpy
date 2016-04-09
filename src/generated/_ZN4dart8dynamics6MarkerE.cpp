#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart8dynamics6Marker11getBodyNodeEv_docstring[] = R"CHIMERA_STRING( Get the BodyNode this Marker belongs to
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Marker16getLocalPositionEv_docstring[] = R"CHIMERA_STRING( Get position of this marker in the parent body node coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Marker16setLocalPositionERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring[] = R"CHIMERA_STRING( Set position of this marker in the parent body node coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Marker16getWorldPositionEv_docstring[] = R"CHIMERA_STRING( Get position in the world coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Marker16setSkeletonIndexEi_docstring[] = R"CHIMERA_STRING( Deprecated; please use setIndexInSkeleton() instead
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Marker18setIndexInSkeletonEi_docstring[] = R"CHIMERA_STRING( Set index in skeleton this marker is belongs to
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Marker18getIndexInSkeletonEv_docstring[] = R"CHIMERA_STRING( Get index in skeleton this marker is belongs to
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Marker5getIDEv_docstring[] = R"CHIMERA_STRING( Get global unique ID
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Marker7setNameERKSs_docstring[] = R"CHIMERA_STRING( Set name of this marker
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Marker7getNameEv_docstring[] = R"CHIMERA_STRING( Get name of this marker
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics6Marker17setConstraintTypeENS1_14ConstraintTypeE_docstring[] = R"CHIMERA_STRING( Set constraint type. which will be useful for inverse kinematics
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Marker17getConstraintTypeEv_docstring[] = R"CHIMERA_STRING( Get constraint type. which will be useful for inverse kinematics
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics6Marker8getColorEv_docstring[] = R"CHIMERA_STRING( Return color of this Marker
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6MarkerE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Marker >("Marker", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const std::string & name, const Eigen::Vector3d & offset, const Eigen::Vector4d & color, dart::dynamics::BodyNode * bodyNode) -> dart::dynamics::Marker * { return new dart::dynamics::Marker(name, offset, color, bodyNode); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"), ::boost::python::arg("offset"), ::boost::python::arg("color"), ::boost::python::arg("bodyNode"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & name, const Eigen::Vector3d & offset, const Eigen::Vector4d & color, dart::dynamics::BodyNode * bodyNode, dart::dynamics::Marker::ConstraintType type) -> dart::dynamics::Marker * { return new dart::dynamics::Marker(name, offset, color, bodyNode, type); }, ::boost::python::default_call_policies(), (::boost::python::arg("name"), ::boost::python::arg("offset"), ::boost::python::arg("color"), ::boost::python::arg("bodyNode"), ::boost::python::arg("type"))))
.def("getBodyNode", [](dart::dynamics::Marker *self) -> dart::dynamics::BodyNode * { return self->getBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >(), _ZN4dart8dynamics6Marker11getBodyNodeEv_docstring)
.def("getLocalPosition", [](const dart::dynamics::Marker *self) -> const Eigen::Vector3d & { return self->getLocalPosition(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics6Marker16getLocalPositionEv_docstring)
.def("setLocalPosition", [](dart::dynamics::Marker *self, const Eigen::Vector3d & offset) -> void { return self->setLocalPosition(offset); }, _ZN4dart8dynamics6Marker16setLocalPositionERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEE_docstring, (::boost::python::arg("offset")))
.def("getWorldPosition", [](const dart::dynamics::Marker *self) -> Eigen::Vector3d { return self->getWorldPosition(); }, _ZNK4dart8dynamics6Marker16getWorldPositionEv_docstring)
.def("setSkeletonIndex", [](dart::dynamics::Marker *self, int index) -> void { return self->setSkeletonIndex(index); }, _ZN4dart8dynamics6Marker16setSkeletonIndexEi_docstring, (::boost::python::arg("index")))
.def("setIndexInSkeleton", [](dart::dynamics::Marker *self, int index) -> void { return self->setIndexInSkeleton(index); }, _ZN4dart8dynamics6Marker18setIndexInSkeletonEi_docstring, (::boost::python::arg("index")))
.def("getIndexInSkeleton", [](const dart::dynamics::Marker *self) -> int { return self->getIndexInSkeleton(); }, _ZNK4dart8dynamics6Marker18getIndexInSkeletonEv_docstring)
.def("getID", [](const dart::dynamics::Marker *self) -> int { return self->getID(); }, _ZNK4dart8dynamics6Marker5getIDEv_docstring)
.def("setName", [](dart::dynamics::Marker *self, const std::string & name) -> void { return self->setName(name); }, _ZN4dart8dynamics6Marker7setNameERKSs_docstring, (::boost::python::arg("name")))
.def("getName", [](const dart::dynamics::Marker *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics6Marker7getNameEv_docstring)
.def("setConstraintType", [](dart::dynamics::Marker *self, dart::dynamics::Marker::ConstraintType type) -> void { return self->setConstraintType(type); }, _ZN4dart8dynamics6Marker17setConstraintTypeENS1_14ConstraintTypeE_docstring, (::boost::python::arg("type")))
.def("getConstraintType", [](const dart::dynamics::Marker *self) -> dart::dynamics::Marker::ConstraintType { return self->getConstraintType(); }, _ZNK4dart8dynamics6Marker17getConstraintTypeEv_docstring)
.def("getColor", [](const dart::dynamics::Marker *self) -> const Eigen::Vector4d & { return self->getColor(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics6Marker8getColorEv_docstring)
;
}

/* footer */
