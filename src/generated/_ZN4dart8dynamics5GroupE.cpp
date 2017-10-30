#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics5GroupE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Group, ::boost::noncopyable, dart::dynamics::GroupPtr, ::boost::python::bases<dart::dynamics::ReferentialSkeleton > >("Group", boost::python::no_init)
.def("swapBodyNodeIndices", [](dart::dynamics::Group *self, std::size_t _index1, std::size_t _index2) -> void { return self->swapBodyNodeIndices(_index1, _index2); }, (::boost::python::arg("_index1"), ::boost::python::arg("_index2")))
.def("swapDofIndices", [](dart::dynamics::Group *self, std::size_t _index1, std::size_t _index2) -> void { return self->swapDofIndices(_index1, _index2); }, (::boost::python::arg("_index1"), ::boost::python::arg("_index2")))
.def("addComponent", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn) -> bool { return self->addComponent(_bn); }, (::boost::python::arg("_bn")))
.def("addComponent", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn, bool _warning) -> bool { return self->addComponent(_bn, _warning); }, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("addComponents", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes) -> bool { return self->addComponents(_bodyNodes); }, (::boost::python::arg("_bodyNodes")))
.def("addComponents", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes, bool _warning) -> bool { return self->addComponents(_bodyNodes, _warning); }, (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("removeComponent", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn) -> bool { return self->removeComponent(_bn); }, (::boost::python::arg("_bn")))
.def("removeComponent", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn, bool _warning) -> bool { return self->removeComponent(_bn, _warning); }, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("removeComponents", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes) -> bool { return self->removeComponents(_bodyNodes); }, (::boost::python::arg("_bodyNodes")))
.def("removeComponents", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes, bool _warning) -> bool { return self->removeComponents(_bodyNodes, _warning); }, (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("addBodyNode", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn) -> bool { return self->addBodyNode(_bn); }, (::boost::python::arg("_bn")))
.def("addBodyNode", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn, bool _warning) -> bool { return self->addBodyNode(_bn, _warning); }, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("addBodyNodes", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes) -> bool { return self->addBodyNodes(_bodyNodes); }, (::boost::python::arg("_bodyNodes")))
.def("addBodyNodes", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes, bool _warning) -> bool { return self->addBodyNodes(_bodyNodes, _warning); }, (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("removeBodyNode", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn) -> bool { return self->removeBodyNode(_bn); }, (::boost::python::arg("_bn")))
.def("removeBodyNode", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn, bool _warning) -> bool { return self->removeBodyNode(_bn, _warning); }, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("removeBodyNodes", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes) -> bool { return self->removeBodyNodes(_bodyNodes); }, (::boost::python::arg("_bodyNodes")))
.def("removeBodyNodes", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes, bool _warning) -> bool { return self->removeBodyNodes(_bodyNodes, _warning); }, (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("addJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint) -> bool { return self->addJoint(_joint); }, (::boost::python::arg("_joint")))
.def("addJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint, bool _addDofs) -> bool { return self->addJoint(_joint, _addDofs); }, (::boost::python::arg("_joint"), ::boost::python::arg("_addDofs")))
.def("addJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint, bool _addDofs, bool _warning) -> bool { return self->addJoint(_joint, _addDofs, _warning); }, (::boost::python::arg("_joint"), ::boost::python::arg("_addDofs"), ::boost::python::arg("_warning")))
.def("addJoints", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::Joint *> & _joints) -> bool { return self->addJoints(_joints); }, (::boost::python::arg("_joints")))
.def("addJoints", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::Joint *> & _joints, bool _addDofs) -> bool { return self->addJoints(_joints, _addDofs); }, (::boost::python::arg("_joints"), ::boost::python::arg("_addDofs")))
.def("addJoints", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::Joint *> & _joints, bool _addDofs, bool _warning) -> bool { return self->addJoints(_joints, _addDofs, _warning); }, (::boost::python::arg("_joints"), ::boost::python::arg("_addDofs"), ::boost::python::arg("_warning")))
.def("removeJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint) -> bool { return self->removeJoint(_joint); }, (::boost::python::arg("_joint")))
.def("removeJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint, bool _removeDofs) -> bool { return self->removeJoint(_joint, _removeDofs); }, (::boost::python::arg("_joint"), ::boost::python::arg("_removeDofs")))
.def("removeJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint, bool _removeDofs, bool _warning) -> bool { return self->removeJoint(_joint, _removeDofs, _warning); }, (::boost::python::arg("_joint"), ::boost::python::arg("_removeDofs"), ::boost::python::arg("_warning")))
.def("addDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof) -> bool { return self->addDof(_dof); }, (::boost::python::arg("_dof")))
.def("addDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof, bool _addJoint) -> bool { return self->addDof(_dof, _addJoint); }, (::boost::python::arg("_dof"), ::boost::python::arg("_addJoint")))
.def("addDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof, bool _addJoint, bool _warning) -> bool { return self->addDof(_dof, _addJoint, _warning); }, (::boost::python::arg("_dof"), ::boost::python::arg("_addJoint"), ::boost::python::arg("_warning")))
.def("addDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs) -> bool { return self->addDofs(_dofs); }, (::boost::python::arg("_dofs")))
.def("addDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs, bool _addJoint) -> bool { return self->addDofs(_dofs, _addJoint); }, (::boost::python::arg("_dofs"), ::boost::python::arg("_addJoint")))
.def("addDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs, bool _addJoint, bool _warning) -> bool { return self->addDofs(_dofs, _addJoint, _warning); }, (::boost::python::arg("_dofs"), ::boost::python::arg("_addJoint"), ::boost::python::arg("_warning")))
.def("removeDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof) -> bool { return self->removeDof(_dof); }, (::boost::python::arg("_dof")))
.def("removeDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof, bool _cleanupJoint) -> bool { return self->removeDof(_dof, _cleanupJoint); }, (::boost::python::arg("_dof"), ::boost::python::arg("_cleanupJoint")))
.def("removeDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof, bool _cleanupJoint, bool _warning) -> bool { return self->removeDof(_dof, _cleanupJoint, _warning); }, (::boost::python::arg("_dof"), ::boost::python::arg("_cleanupJoint"), ::boost::python::arg("_warning")))
.def("removeDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs) -> bool { return self->removeDofs(_dofs); }, (::boost::python::arg("_dofs")))
.def("removeDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs, bool _cleanupJoint) -> bool { return self->removeDofs(_dofs, _cleanupJoint); }, (::boost::python::arg("_dofs"), ::boost::python::arg("_cleanupJoint")))
.def("removeDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs, bool _cleanupJoint, bool _warning) -> bool { return self->removeDofs(_dofs, _cleanupJoint, _warning); }, (::boost::python::arg("_dofs"), ::boost::python::arg("_cleanupJoint"), ::boost::python::arg("_warning")))
.def("create", []() -> dart::dynamics::GroupPtr { return dart::dynamics::Group::create(); })
.def("create", [](const std::string & _name) -> dart::dynamics::GroupPtr { return dart::dynamics::Group::create(_name); }, (::boost::python::arg("_name")))
.def("create", [](const std::string & _name, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes) -> dart::dynamics::GroupPtr { return dart::dynamics::Group::create(_name, _bodyNodes); }, (::boost::python::arg("_name"), ::boost::python::arg("_bodyNodes")))
.def("create", [](const std::string & _name, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes, bool _includeJoints) -> dart::dynamics::GroupPtr { return dart::dynamics::Group::create(_name, _bodyNodes, _includeJoints); }, (::boost::python::arg("_name"), ::boost::python::arg("_bodyNodes"), ::boost::python::arg("_includeJoints")))
.def("create", [](const std::string & _name, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes, bool _includeJoints, bool _includeDofs) -> dart::dynamics::GroupPtr { return dart::dynamics::Group::create(_name, _bodyNodes, _includeJoints, _includeDofs); }, (::boost::python::arg("_name"), ::boost::python::arg("_bodyNodes"), ::boost::python::arg("_includeJoints"), ::boost::python::arg("_includeDofs")))
.def("create", [](const std::string & _name, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs) -> dart::dynamics::GroupPtr { return dart::dynamics::Group::create(_name, _dofs); }, (::boost::python::arg("_name"), ::boost::python::arg("_dofs")))
.def("create", [](const std::string & _name, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs, bool _includeBodyNodes) -> dart::dynamics::GroupPtr { return dart::dynamics::Group::create(_name, _dofs, _includeBodyNodes); }, (::boost::python::arg("_name"), ::boost::python::arg("_dofs"), ::boost::python::arg("_includeBodyNodes")))
.def("create", [](const std::string & _name, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs, bool _includeBodyNodes, bool _includeJoints) -> dart::dynamics::GroupPtr { return dart::dynamics::Group::create(_name, _dofs, _includeBodyNodes, _includeJoints); }, (::boost::python::arg("_name"), ::boost::python::arg("_dofs"), ::boost::python::arg("_includeBodyNodes"), ::boost::python::arg("_includeJoints")))
.def("create", [](const std::string & _name, const dart::dynamics::MetaSkeletonPtr & _metaSkeleton) -> dart::dynamics::GroupPtr { return dart::dynamics::Group::create(_name, _metaSkeleton); }, (::boost::python::arg("_name"), ::boost::python::arg("_metaSkeleton")))
.staticmethod("create")
;
}

/* footer */
