#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common11NameManagerIPNS_8dynamics12SoftBodyNodeEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::NameManager<dart::dynamics::SoftBodyNode *> >("_ZN4dart6common11NameManagerIPNS_8dynamics12SoftBodyNodeEEE", boost::python::no_init)
.def(::boost::python::init<const std::string &, const std::string &>((::boost::python::arg("_managerName"), ::boost::python::arg("_defaultName"))))
.def("setPattern", static_cast<bool (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::setPattern), (::boost::python::arg("_newPattern")))
.def("issueNewName", static_cast<std::string (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::issueNewName), (::boost::python::arg("_name")))
.def("issueNewNameAndAdd", static_cast<std::string (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(const std::string &, dart::dynamics::SoftBodyNode *const &)>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::issueNewNameAndAdd), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("addName", static_cast<bool (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(const std::string &, dart::dynamics::SoftBodyNode *const &)>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::addName), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("removeName", static_cast<bool (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::removeName), (::boost::python::arg("_name")))
.def("removeObject", static_cast<bool (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(dart::dynamics::SoftBodyNode *const &)>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::removeObject), (::boost::python::arg("_obj")))
.def("clear", static_cast<void (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)()>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::clear))
.def("hasName", static_cast<bool (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::hasName), (::boost::python::arg("_name")))
.def("hasObject", static_cast<bool (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(dart::dynamics::SoftBodyNode *const &) const>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::hasObject), (::boost::python::arg("_obj")))
.def("getCount", static_cast<std::size_t (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)() const>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::getCount))
.def("getObject", static_cast<dart::dynamics::SoftBodyNode *(dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::getObject), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::SoftBodyNodePtr> >(), (::boost::python::arg("_name")))
.def("getName", static_cast<std::string (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(dart::dynamics::SoftBodyNode *const &) const>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::getName), (::boost::python::arg("_obj")))
.def("changeObjectName", static_cast<std::string (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(dart::dynamics::SoftBodyNode *const &, const std::string &)>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::changeObjectName), (::boost::python::arg("_obj"), ::boost::python::arg("_newName")))
.def("setDefaultName", static_cast<void (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::setDefaultName), (::boost::python::arg("_defaultName")))
.def("getDefaultName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)() const>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::getDefaultName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setManagerName", static_cast<void (dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::setManagerName), (::boost::python::arg("_managerName")))
.def("getManagerName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::SoftBodyNode *>::*)() const>(&dart::common::NameManager<dart::dynamics::SoftBodyNode *>::getManagerName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
