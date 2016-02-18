#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics5GroupE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::Group, ::boost::noncopyable, dart::dynamics::GroupPtr, ::boost::python::bases<dart::dynamics::ReferentialSkeleton > >("Group", boost::python::no_init)
.def("create", static_cast<dart::dynamics::GroupPtr (*)(const std::string &, const std::vector<dart::dynamics::BodyNode *> &, bool, bool)>(&dart::dynamics::Group::create), (::boost::python::arg("_name"), ::boost::python::arg("_bodyNodes"), ::boost::python::arg("_includeJoints"), ::boost::python::arg("_includeDofs")))
.def("create", static_cast<dart::dynamics::GroupPtr (*)(const std::string &, const std::vector<dart::dynamics::DegreeOfFreedom *> &, bool, bool)>(&dart::dynamics::Group::create), (::boost::python::arg("_name"), ::boost::python::arg("_dofs"), ::boost::python::arg("_includeBodyNodes"), ::boost::python::arg("_includeJoints")))
.def("swapBodyNodeIndices", static_cast<void (dart::dynamics::Group::*)(std::size_t, std::size_t)>(&dart::dynamics::Group::swapBodyNodeIndices), (::boost::python::arg("_index1"), ::boost::python::arg("_index2")))
.def("swapDofIndices", static_cast<void (dart::dynamics::Group::*)(std::size_t, std::size_t)>(&dart::dynamics::Group::swapDofIndices), (::boost::python::arg("_index1"), ::boost::python::arg("_index2")))
.def("addComponent", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::BodyNode *, bool)>(&dart::dynamics::Group::addComponent), (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("addComponents", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::BodyNode *> &, bool)>(&dart::dynamics::Group::addComponents), (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("removeComponent", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::BodyNode *, bool)>(&dart::dynamics::Group::removeComponent), (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("removeComponents", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::BodyNode *> &, bool)>(&dart::dynamics::Group::removeComponents), (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("addBodyNode", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::BodyNode *, bool)>(&dart::dynamics::Group::addBodyNode), (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("addBodyNodes", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::BodyNode *> &, bool)>(&dart::dynamics::Group::addBodyNodes), (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("removeBodyNode", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::BodyNode *, bool)>(&dart::dynamics::Group::removeBodyNode), (::boost::python::arg("_bn"), ::boost::python::arg("_warning")))
.def("removeBodyNodes", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::BodyNode *> &, bool)>(&dart::dynamics::Group::removeBodyNodes), (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning")))
.def("addJoint", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::Joint *, bool, bool)>(&dart::dynamics::Group::addJoint), (::boost::python::arg("_joint"), ::boost::python::arg("_addDofs"), ::boost::python::arg("_warning")))
.def("removeJoint", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::Joint *, bool, bool)>(&dart::dynamics::Group::removeJoint), (::boost::python::arg("_joint"), ::boost::python::arg("_removeDofs"), ::boost::python::arg("_warning")))
.def("addDof", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::DegreeOfFreedom *, bool, bool)>(&dart::dynamics::Group::addDof), (::boost::python::arg("_dof"), ::boost::python::arg("_addJoint"), ::boost::python::arg("_warning")))
.def("addDofs", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::DegreeOfFreedom *> &, bool, bool)>(&dart::dynamics::Group::addDofs), (::boost::python::arg("_dofs"), ::boost::python::arg("_addJoint"), ::boost::python::arg("_warning")))
.def("removeDof", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::DegreeOfFreedom *, bool, bool)>(&dart::dynamics::Group::removeDof), (::boost::python::arg("_dof"), ::boost::python::arg("_cleanupJoint"), ::boost::python::arg("_warning")))
.def("removeDofs", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::DegreeOfFreedom *> &, bool, bool)>(&dart::dynamics::Group::removeDofs), (::boost::python::arg("_dofs"), ::boost::python::arg("_cleanupJoint"), ::boost::python::arg("_warning")))
.staticmethod("create")
;
}

/* footer */
