#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics5GroupE_docstring[] = R"CHIMERA_STRING( ReferentialSkeleton is a base class used to implement Linkage, Group, and
 other classes that are used to reference subsections of Skeletons.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group6createERKSsRKSt6vectorIPNS0_8BodyNodeESaIS6_EEbb_docstring[] = R"CHIMERA_STRING( Create a Group out of a set of BodyNodes. If _includeJoints is true, the
 parent Joint of each BodyNode will also be added to the Group. If
 _includeDofs is true, then the parent DegreesOfFreedom of each BodyNode
 will also be added to the Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group6createERKSsRKSt6vectorIPNS0_15DegreeOfFreedomESaIS6_EEbb_docstring[] = R"CHIMERA_STRING( Create a Group out of a set of DegreesOfFreedom. If _includeBodyNodes is
 true, then the child BodyNode of each DegreeOfFreedom will also be added
 to the Group. If _includeJoints is true, then the Joint of each
 DegreeOfFreedom will also be added to the Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group6createERKSsRKSt10shared_ptrINS0_12MetaSkeletonEE_docstring[] = R"CHIMERA_STRING( Create a Group that mimics the given MetaSkeleton
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group19swapBodyNodeIndicesEmm_docstring[] = R"CHIMERA_STRING( Swap the index of BodyNode _index1 with _index2
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group14swapDofIndicesEmm_docstring[] = R"CHIMERA_STRING( Swap the index of DegreeOfFreedom _index1 with _index2
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group12addComponentEPNS0_8BodyNodeEb_docstring[] = R"CHIMERA_STRING( Add a BodyNode and its parent DegreesOfFreedom to this Group. If _warning
 is true, you will be warned when the BodyNode and all its DegreesOfFreedom
 were already in the Group, and an assertion will be thrown.
 This function will return false if the BodyNode and all its
 DegreesOfFreedom were already in the Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group13addComponentsERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring[] = R"CHIMERA_STRING( Add set of BodyNodes and their parent DegreesOfFreedom to this Group. If
 _warning is true, you will be warned when an entire component was already
 in the Group, and an assertion will be thrown.
 This function will return false if all of the components in the set were
 already in this Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group15removeComponentEPNS0_8BodyNodeEb_docstring[] = R"CHIMERA_STRING( Remove a BodyNode and its parent DegreesOfFreedom from this Group. If
 _warning is true, you will be warned if this Group does not have the
 BodyNode or any of its DegreesOfFreedom, and an assertion will be thrown.
 This function will return false if the Group did not include the BodyNode
 or any of its parent DegreesOfFreedom.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group16removeComponentsERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring[] = R"CHIMERA_STRING( Remove a set of BodyNodes and their parent DegreesOfFreedom from this
 Group. If _warning is true, you will be warned if any of the components
 were completely missing from this Group, and an assertion will be thrown.
 This function will return false if none of the components in this set were
 in the Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group11addBodyNodeEPNS0_8BodyNodeEb_docstring[] = R"CHIMERA_STRING( Add a BodyNode to this Group. If _warning is true, you will be warned when
 you attempt to add the same BodyNode twice, and an assertion will be
 thrown.
 This function will return false if the BodyNode was already in the Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group12addBodyNodesERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring[] = R"CHIMERA_STRING( Add a set of BodyNodes to this Group. If _warning is true, you will be
 warned when you attempt to add a BodyNode that is already in the Group,
 and an assertion will be thrown.
 This function will return false if all of the BodyNodes were already in
 the Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group14removeBodyNodeEPNS0_8BodyNodeEb_docstring[] = R"CHIMERA_STRING( Remove a BodyNode from this Group. If _warning is true, you will be warned
 when you attempt to remove a BodyNode that is not in this Group, and an
 assertion will be thrown.
 The function will return false if the BodyNode was not in this Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group15removeBodyNodesERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring[] = R"CHIMERA_STRING( Remove a set of BodyNodes from this Group. If _warning is true, you will
 be warned when you attempt to remove a BodyNode that is not in this Group,
 and an assertion will be thrown.
 The function will return false if none of the BodyNodes were in this Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group8addJointEPNS0_5JointEbb_docstring[] = R"CHIMERA_STRING( Add a Joint to this Group. If _addDofs is true, it will also add all the
 DegreesOfFreedom of the Joint. If _warning is true, you will be warned
 if the Joint (and all its DOFs if _addDofs is set to true) was already in
 the Group, and an assertion will be thrown.
 This function will return false if the Joint (and all its DOFs, if
 _addDofs is true) was already in the Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group9addJointsERKSt6vectorIPNS0_5JointESaIS4_EEbb_docstring[] = R"CHIMERA_STRING( Add a set of Joints to this Group. If _addDofs is true, it will also add
 all the DOFs of each Joint. If _warning is true, you will be warned when
 you attempt to add a Joint that is already in the Group (and all its DOFs
 are in the Group, if _addDofs is set to true), and an assertion will be
 thrown.
 This function will return false if all the Joints (and their DOFs if
 _addDofs is set to true) were already in the Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group11removeJointEPNS0_5JointEbb_docstring[] = R"CHIMERA_STRING( Remove a Joint from this Group. If _removeDofs is true, it will also
 remove any DOFs belonging to this Joint. If _warning is true, you will
 be warned if you attempt to remove a Joint which is not in this Group (and
 none of its DOFs are in the Group if _removeDofs is set to true), and an
 assertion will be thrown.
 This function will return false if the Joint was not in the Group (and
 neither were any of its DOFs, if _removeDofs is set to true).
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group6addDofEPNS0_15DegreeOfFreedomEbb_docstring[] = R"CHIMERA_STRING( Add a DegreeOfFreedom to this Group. If _addJoint is true, the Joint of
 this DOF will also be added to the Group. If _warning is true, you will be
 warned when you attempt to add the same DegreeOfFreedom twice, and an
 assertion will be thrown.
 This function will return false if the DegreeOfFreedom was already in the
 Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group7addDofsERKSt6vectorIPNS0_15DegreeOfFreedomESaIS4_EEbb_docstring[] = R"CHIMERA_STRING( Add a set of DegreesOfFreedom to this Group. If _addJoint is true, the
 Joint of each DOF will also be added to the Group. If _warning is true,
 you will be warned when you attempt to add the same DegreeOfFreedom twice,
 and an assertion will be thrown.
 This function will return false if all of the DegreesOfFreedom was already
 in the Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group9removeDofEPNS0_15DegreeOfFreedomEbb_docstring[] = R"CHIMERA_STRING( Remove a DegreeOfFreedom from this Group. If _cleanupJoint is true, the
 Joint of this DOF will be removed, but only if no other DOFs belonging to
 the Joint are remaining in the Group. If _warning is true, you will be
 warned when you attempt to remove a DegreeOfFreedom that is not in this
 Group, and an assertion will be thrown.
 This function will return false if the DegreeOfFreedom was not in this
 Group.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics5Group10removeDofsERKSt6vectorIPNS0_15DegreeOfFreedomESaIS4_EEbb_docstring[] = R"CHIMERA_STRING( Remove a set of DegreesOfFreedom from this Group. If _cleanupJoint is
 true, the Joint of this DOF will be removed, but only if no other DOFs
 belonging to the Joint are remaining in the Group. If _warning is true,
 you will be warned when you attempt to remove a DegreeOfFreedom that is
 not in this Group, and an assertion will be thrown.
 This function will return false if none of the DegreesOfFreedom were in
 this Group.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics5GroupE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Group, ::boost::noncopyable, dart::dynamics::GroupPtr, ::boost::python::bases<dart::dynamics::ReferentialSkeleton > >("Group", _ZN4dart8dynamics5GroupE_docstring, boost::python::no_init)
.def("swapBodyNodeIndices", [](dart::dynamics::Group *self, std::size_t _index1, std::size_t _index2) -> void { return self->swapBodyNodeIndices(_index1, _index2); }, _ZN4dart8dynamics5Group19swapBodyNodeIndicesEmm_docstring, (::boost::python::arg("_index1"), ::boost::python::arg("_index2")))
.def("swapDofIndices", [](dart::dynamics::Group *self, std::size_t _index1, std::size_t _index2) -> void { return self->swapDofIndices(_index1, _index2); }, _ZN4dart8dynamics5Group14swapDofIndicesEmm_docstring, (::boost::python::arg("_index1"), ::boost::python::arg("_index2")))
.def("addComponent", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn) -> bool { return self->addComponent(_bn); }, _ZN4dart8dynamics5Group12addComponentEPNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn")))
.def("addComponent", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn, bool _warning) -> bool { return self->addComponent(_bn, _warning); }, _ZN4dart8dynamics5Group12addComponentEPNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("addComponents", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes) -> bool { return self->addComponents(_bodyNodes); }, _ZN4dart8dynamics5Group13addComponentsERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring, (::boost::python::arg("_bodyNodes")))
.def("addComponents", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes, bool _warning) -> bool { return self->addComponents(_bodyNodes, _warning); }, _ZN4dart8dynamics5Group13addComponentsERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring, (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("removeComponent", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn) -> bool { return self->removeComponent(_bn); }, _ZN4dart8dynamics5Group15removeComponentEPNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn")))
.def("removeComponent", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn, bool _warning) -> bool { return self->removeComponent(_bn, _warning); }, _ZN4dart8dynamics5Group15removeComponentEPNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("removeComponents", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes) -> bool { return self->removeComponents(_bodyNodes); }, _ZN4dart8dynamics5Group16removeComponentsERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring, (::boost::python::arg("_bodyNodes")))
.def("removeComponents", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes, bool _warning) -> bool { return self->removeComponents(_bodyNodes, _warning); }, _ZN4dart8dynamics5Group16removeComponentsERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring, (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("addBodyNode", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn) -> bool { return self->addBodyNode(_bn); }, _ZN4dart8dynamics5Group11addBodyNodeEPNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn")))
.def("addBodyNode", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn, bool _warning) -> bool { return self->addBodyNode(_bn, _warning); }, _ZN4dart8dynamics5Group11addBodyNodeEPNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("addBodyNodes", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes) -> bool { return self->addBodyNodes(_bodyNodes); }, _ZN4dart8dynamics5Group12addBodyNodesERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring, (::boost::python::arg("_bodyNodes")))
.def("addBodyNodes", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes, bool _warning) -> bool { return self->addBodyNodes(_bodyNodes, _warning); }, _ZN4dart8dynamics5Group12addBodyNodesERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring, (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("removeBodyNode", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn) -> bool { return self->removeBodyNode(_bn); }, _ZN4dart8dynamics5Group14removeBodyNodeEPNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn")))
.def("removeBodyNode", [](dart::dynamics::Group *self, dart::dynamics::BodyNode * _bn, bool _warning) -> bool { return self->removeBodyNode(_bn, _warning); }, _ZN4dart8dynamics5Group14removeBodyNodeEPNS0_8BodyNodeEb_docstring, (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("removeBodyNodes", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes) -> bool { return self->removeBodyNodes(_bodyNodes); }, _ZN4dart8dynamics5Group15removeBodyNodesERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring, (::boost::python::arg("_bodyNodes")))
.def("removeBodyNodes", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::BodyNode *> & _bodyNodes, bool _warning) -> bool { return self->removeBodyNodes(_bodyNodes, _warning); }, _ZN4dart8dynamics5Group15removeBodyNodesERKSt6vectorIPNS0_8BodyNodeESaIS4_EEb_docstring, (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("addJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint) -> bool { return self->addJoint(_joint); }, _ZN4dart8dynamics5Group8addJointEPNS0_5JointEbb_docstring, (::boost::python::arg("_joint")))
.def("addJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint, bool _addDofs) -> bool { return self->addJoint(_joint, _addDofs); }, _ZN4dart8dynamics5Group8addJointEPNS0_5JointEbb_docstring, (::boost::python::arg("_joint"), ::boost::python::arg("_addDofs")))
.def("addJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint, bool _addDofs, bool _warning) -> bool { return self->addJoint(_joint, _addDofs, _warning); }, _ZN4dart8dynamics5Group8addJointEPNS0_5JointEbb_docstring, (::boost::python::arg("_joint"), ::boost::python::arg("_addDofs"), ::boost::python::arg("_warning")))
.def("addJoints", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::Joint *> & _joints) -> bool { return self->addJoints(_joints); }, _ZN4dart8dynamics5Group9addJointsERKSt6vectorIPNS0_5JointESaIS4_EEbb_docstring, (::boost::python::arg("_joints")))
.def("addJoints", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::Joint *> & _joints, bool _addDofs) -> bool { return self->addJoints(_joints, _addDofs); }, _ZN4dart8dynamics5Group9addJointsERKSt6vectorIPNS0_5JointESaIS4_EEbb_docstring, (::boost::python::arg("_joints"), ::boost::python::arg("_addDofs")))
.def("addJoints", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::Joint *> & _joints, bool _addDofs, bool _warning) -> bool { return self->addJoints(_joints, _addDofs, _warning); }, _ZN4dart8dynamics5Group9addJointsERKSt6vectorIPNS0_5JointESaIS4_EEbb_docstring, (::boost::python::arg("_joints"), ::boost::python::arg("_addDofs"), ::boost::python::arg("_warning")))
.def("removeJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint) -> bool { return self->removeJoint(_joint); }, _ZN4dart8dynamics5Group11removeJointEPNS0_5JointEbb_docstring, (::boost::python::arg("_joint")))
.def("removeJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint, bool _removeDofs) -> bool { return self->removeJoint(_joint, _removeDofs); }, _ZN4dart8dynamics5Group11removeJointEPNS0_5JointEbb_docstring, (::boost::python::arg("_joint"), ::boost::python::arg("_removeDofs")))
.def("removeJoint", [](dart::dynamics::Group *self, dart::dynamics::Joint * _joint, bool _removeDofs, bool _warning) -> bool { return self->removeJoint(_joint, _removeDofs, _warning); }, _ZN4dart8dynamics5Group11removeJointEPNS0_5JointEbb_docstring, (::boost::python::arg("_joint"), ::boost::python::arg("_removeDofs"), ::boost::python::arg("_warning")))
.def("addDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof) -> bool { return self->addDof(_dof); }, _ZN4dart8dynamics5Group6addDofEPNS0_15DegreeOfFreedomEbb_docstring, (::boost::python::arg("_dof")))
.def("addDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof, bool _addJoint) -> bool { return self->addDof(_dof, _addJoint); }, _ZN4dart8dynamics5Group6addDofEPNS0_15DegreeOfFreedomEbb_docstring, (::boost::python::arg("_dof"), ::boost::python::arg("_addJoint")))
.def("addDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof, bool _addJoint, bool _warning) -> bool { return self->addDof(_dof, _addJoint, _warning); }, _ZN4dart8dynamics5Group6addDofEPNS0_15DegreeOfFreedomEbb_docstring, (::boost::python::arg("_dof"), ::boost::python::arg("_addJoint"), ::boost::python::arg("_warning")))
.def("addDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs) -> bool { return self->addDofs(_dofs); }, _ZN4dart8dynamics5Group7addDofsERKSt6vectorIPNS0_15DegreeOfFreedomESaIS4_EEbb_docstring, (::boost::python::arg("_dofs")))
.def("addDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs, bool _addJoint) -> bool { return self->addDofs(_dofs, _addJoint); }, _ZN4dart8dynamics5Group7addDofsERKSt6vectorIPNS0_15DegreeOfFreedomESaIS4_EEbb_docstring, (::boost::python::arg("_dofs"), ::boost::python::arg("_addJoint")))
.def("addDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs, bool _addJoint, bool _warning) -> bool { return self->addDofs(_dofs, _addJoint, _warning); }, _ZN4dart8dynamics5Group7addDofsERKSt6vectorIPNS0_15DegreeOfFreedomESaIS4_EEbb_docstring, (::boost::python::arg("_dofs"), ::boost::python::arg("_addJoint"), ::boost::python::arg("_warning")))
.def("removeDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof) -> bool { return self->removeDof(_dof); }, _ZN4dart8dynamics5Group9removeDofEPNS0_15DegreeOfFreedomEbb_docstring, (::boost::python::arg("_dof")))
.def("removeDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof, bool _cleanupJoint) -> bool { return self->removeDof(_dof, _cleanupJoint); }, _ZN4dart8dynamics5Group9removeDofEPNS0_15DegreeOfFreedomEbb_docstring, (::boost::python::arg("_dof"), ::boost::python::arg("_cleanupJoint")))
.def("removeDof", [](dart::dynamics::Group *self, dart::dynamics::DegreeOfFreedom * _dof, bool _cleanupJoint, bool _warning) -> bool { return self->removeDof(_dof, _cleanupJoint, _warning); }, _ZN4dart8dynamics5Group9removeDofEPNS0_15DegreeOfFreedomEbb_docstring, (::boost::python::arg("_dof"), ::boost::python::arg("_cleanupJoint"), ::boost::python::arg("_warning")))
.def("removeDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs) -> bool { return self->removeDofs(_dofs); }, _ZN4dart8dynamics5Group10removeDofsERKSt6vectorIPNS0_15DegreeOfFreedomESaIS4_EEbb_docstring, (::boost::python::arg("_dofs")))
.def("removeDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs, bool _cleanupJoint) -> bool { return self->removeDofs(_dofs, _cleanupJoint); }, _ZN4dart8dynamics5Group10removeDofsERKSt6vectorIPNS0_15DegreeOfFreedomESaIS4_EEbb_docstring, (::boost::python::arg("_dofs"), ::boost::python::arg("_cleanupJoint")))
.def("removeDofs", [](dart::dynamics::Group *self, const std::vector<dart::dynamics::DegreeOfFreedom *> & _dofs, bool _cleanupJoint, bool _warning) -> bool { return self->removeDofs(_dofs, _cleanupJoint, _warning); }, _ZN4dart8dynamics5Group10removeDofsERKSt6vectorIPNS0_15DegreeOfFreedomESaIS4_EEbb_docstring, (::boost::python::arg("_dofs"), ::boost::python::arg("_cleanupJoint"), ::boost::python::arg("_warning")))
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
