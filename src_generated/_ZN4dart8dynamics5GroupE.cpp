#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart8dynamics5GroupE()
{
::boost::python::class_<dart::dynamics::Group, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::ReferentialSkeleton > >("Group", boost::python::no_init)
.def("create", static_cast<dart::dynamics::GroupPtr (*)(const std::string &, const std::vector<dart::dynamics::BodyNode *> &, bool, bool)>(&dart::dynamics::Group::create), (::boost::python::arg("_name"), ::boost::python::arg("_bodyNodes"), ::boost::python::arg("_includeJoints") = true, ::boost::python::arg("_includeDofs") = true))
.def("create", static_cast<dart::dynamics::GroupPtr (*)(const std::string &, const std::vector<dart::dynamics::DegreeOfFreedom *> &, bool, bool)>(&dart::dynamics::Group::create), (::boost::python::arg("_name"), ::boost::python::arg("_dofs"), ::boost::python::arg("_includeBodyNodes") = true, ::boost::python::arg("_includeJoints") = true))
.def("swapBodyNodeIndices", static_cast<void (dart::dynamics::Group::*)(std::size_t, std::size_t)>(&dart::dynamics::Group::swapBodyNodeIndices), (::boost::python::arg("_index1"), ::boost::python::arg("_index2")))
.def("swapDofIndices", static_cast<void (dart::dynamics::Group::*)(std::size_t, std::size_t)>(&dart::dynamics::Group::swapDofIndices), (::boost::python::arg("_index1"), ::boost::python::arg("_index2")))
.def("addComponent", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::BodyNode *, bool)>(&dart::dynamics::Group::addComponent), (::boost::python::arg("_bn"), ::boost::python::arg("_warning") = true))
.def("addComponents", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::BodyNode *> &, bool)>(&dart::dynamics::Group::addComponents), (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning") = true))
.def("removeComponent", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::BodyNode *, bool)>(&dart::dynamics::Group::removeComponent), (::boost::python::arg("_bn"), ::boost::python::arg("_warning") = true))
.def("removeComponents", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::BodyNode *> &, bool)>(&dart::dynamics::Group::removeComponents), (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning") = true))
.def("addBodyNode", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::BodyNode *, bool)>(&dart::dynamics::Group::addBodyNode), (::boost::python::arg("_bn"), ::boost::python::arg("_warning") = true))
.def("addBodyNodes", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::BodyNode *> &, bool)>(&dart::dynamics::Group::addBodyNodes), (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning") = true))
.def("removeBodyNode", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::BodyNode *, bool)>(&dart::dynamics::Group::removeBodyNode), (::boost::python::arg("_bn"), ::boost::python::arg("_warning") = true))
.def("removeBodyNodes", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::BodyNode *> &, bool)>(&dart::dynamics::Group::removeBodyNodes), (::boost::python::arg("_bodyNodes"), ::boost::python::arg("_warning") = true))
.def("addJoint", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::Joint *, bool, bool)>(&dart::dynamics::Group::addJoint), (::boost::python::arg("_joint"), ::boost::python::arg("_addDofs") = true, ::boost::python::arg("_warning") = true))
.def("removeJoint", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::Joint *, bool, bool)>(&dart::dynamics::Group::removeJoint), (::boost::python::arg("_joint"), ::boost::python::arg("_removeDofs") = true, ::boost::python::arg("_warning") = true))
.def("addDof", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::DegreeOfFreedom *, bool, bool)>(&dart::dynamics::Group::addDof), (::boost::python::arg("_dof"), ::boost::python::arg("_addJoint") = true, ::boost::python::arg("_warning") = true))
.def("addDofs", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::DegreeOfFreedom *> &, bool, bool)>(&dart::dynamics::Group::addDofs), (::boost::python::arg("_dofs"), ::boost::python::arg("_addJoint") = true, ::boost::python::arg("_warning") = true))
.def("removeDof", static_cast<bool (dart::dynamics::Group::*)(dart::dynamics::DegreeOfFreedom *, bool, bool)>(&dart::dynamics::Group::removeDof), (::boost::python::arg("_dof"), ::boost::python::arg("_cleanupJoint") = true, ::boost::python::arg("_warning") = true))
.def("removeDofs", static_cast<bool (dart::dynamics::Group::*)(const std::vector<dart::dynamics::DegreeOfFreedom *> &, bool, bool)>(&dart::dynamics::Group::removeDofs), (::boost::python::arg("_dofs"), ::boost::python::arg("_cleanupJoint") = true, ::boost::python::arg("_warning") = true))
.staticmethod("create")
;
}

/* footer */
