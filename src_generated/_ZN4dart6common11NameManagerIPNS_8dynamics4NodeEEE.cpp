#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::NameManager<dart::dynamics::Node *> >("_ZN4dart6common11NameManagerIPNS_8dynamics4NodeEEE", boost::python::no_init)
.def(::boost::python::init<const std::string &, const std::string &>((::boost::python::arg("_managerName"), ::boost::python::arg("_defaultName"))))
.def("setPattern", static_cast<bool (dart::common::NameManager<dart::dynamics::Node *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Node *>::setPattern), (::boost::python::arg("_newPattern")))
.def("issueNewName", static_cast<std::string (dart::common::NameManager<dart::dynamics::Node *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::Node *>::issueNewName), (::boost::python::arg("_name")))
.def("issueNewNameAndAdd", static_cast<std::string (dart::common::NameManager<dart::dynamics::Node *>::*)(const std::string &, dart::dynamics::Node *const &)>(&dart::common::NameManager<dart::dynamics::Node *>::issueNewNameAndAdd), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("addName", static_cast<bool (dart::common::NameManager<dart::dynamics::Node *>::*)(const std::string &, dart::dynamics::Node *const &)>(&dart::common::NameManager<dart::dynamics::Node *>::addName), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("removeName", static_cast<bool (dart::common::NameManager<dart::dynamics::Node *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Node *>::removeName), (::boost::python::arg("_name")))
.def("removeObject", static_cast<bool (dart::common::NameManager<dart::dynamics::Node *>::*)(dart::dynamics::Node *const &)>(&dart::common::NameManager<dart::dynamics::Node *>::removeObject), (::boost::python::arg("_obj")))
.def("removeEntries", static_cast<void (dart::common::NameManager<dart::dynamics::Node *>::*)(const std::string &, dart::dynamics::Node *const &)>(&dart::common::NameManager<dart::dynamics::Node *>::removeEntries), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("clear", static_cast<void (dart::common::NameManager<dart::dynamics::Node *>::*)()>(&dart::common::NameManager<dart::dynamics::Node *>::clear))
.def("hasName", static_cast<bool (dart::common::NameManager<dart::dynamics::Node *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::Node *>::hasName), (::boost::python::arg("_name")))
.def("hasObject", static_cast<bool (dart::common::NameManager<dart::dynamics::Node *>::*)(dart::dynamics::Node *const &) const>(&dart::common::NameManager<dart::dynamics::Node *>::hasObject), (::boost::python::arg("_obj")))
.def("getCount", static_cast<std::size_t (dart::common::NameManager<dart::dynamics::Node *>::*)() const>(&dart::common::NameManager<dart::dynamics::Node *>::getCount))
.def("getObject", static_cast<dart::dynamics::Node *(dart::common::NameManager<dart::dynamics::Node *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::Node *>::getObject), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::NodePtr> >(), (::boost::python::arg("_name")))
.def("getName", static_cast<std::string (dart::common::NameManager<dart::dynamics::Node *>::*)(dart::dynamics::Node *const &) const>(&dart::common::NameManager<dart::dynamics::Node *>::getName), (::boost::python::arg("_obj")))
.def("changeObjectName", static_cast<std::string (dart::common::NameManager<dart::dynamics::Node *>::*)(dart::dynamics::Node *const &, const std::string &)>(&dart::common::NameManager<dart::dynamics::Node *>::changeObjectName), (::boost::python::arg("_obj"), ::boost::python::arg("_newName")))
.def("setDefaultName", static_cast<void (dart::common::NameManager<dart::dynamics::Node *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Node *>::setDefaultName), (::boost::python::arg("_defaultName")))
.def("getDefaultName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::Node *>::*)() const>(&dart::common::NameManager<dart::dynamics::Node *>::getDefaultName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setManagerName", static_cast<void (dart::common::NameManager<dart::dynamics::Node *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Node *>::setManagerName), (::boost::python::arg("_managerName")))
.def("getManagerName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::Node *>::*)() const>(&dart::common::NameManager<dart::dynamics::Node *>::getManagerName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
