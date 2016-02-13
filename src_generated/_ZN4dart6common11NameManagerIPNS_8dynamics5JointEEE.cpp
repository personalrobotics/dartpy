#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common11NameManagerIPNS_8dynamics5JointEEE()
{
::boost::python::class_<dart::common::NameManager<dart::dynamics::Joint *> >("_ZN4dart6common11NameManagerIPNS_8dynamics5JointEEE", boost::python::no_init)
.def(::boost::python::init<const std::string &, const std::string &>((::boost::python::arg("_managerName"), ::boost::python::arg("_defaultName"))))
.def("setPattern", static_cast<bool (dart::common::NameManager<dart::dynamics::Joint *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Joint *>::setPattern), (::boost::python::arg("_newPattern")))
.def("issueNewName", static_cast<std::string (dart::common::NameManager<dart::dynamics::Joint *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::Joint *>::issueNewName), (::boost::python::arg("_name")))
.def("issueNewNameAndAdd", static_cast<std::string (dart::common::NameManager<dart::dynamics::Joint *>::*)(const std::string &, dart::dynamics::Joint *const &)>(&dart::common::NameManager<dart::dynamics::Joint *>::issueNewNameAndAdd), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("addName", static_cast<bool (dart::common::NameManager<dart::dynamics::Joint *>::*)(const std::string &, dart::dynamics::Joint *const &)>(&dart::common::NameManager<dart::dynamics::Joint *>::addName), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("removeName", static_cast<bool (dart::common::NameManager<dart::dynamics::Joint *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Joint *>::removeName), (::boost::python::arg("_name")))
.def("removeObject", static_cast<bool (dart::common::NameManager<dart::dynamics::Joint *>::*)(dart::dynamics::Joint *const &)>(&dart::common::NameManager<dart::dynamics::Joint *>::removeObject), (::boost::python::arg("_obj")))
.def("removeEntries", static_cast<void (dart::common::NameManager<dart::dynamics::Joint *>::*)(const std::string &, dart::dynamics::Joint *const &)>(&dart::common::NameManager<dart::dynamics::Joint *>::removeEntries), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("clear", static_cast<void (dart::common::NameManager<dart::dynamics::Joint *>::*)()>(&dart::common::NameManager<dart::dynamics::Joint *>::clear))
.def("hasName", static_cast<bool (dart::common::NameManager<dart::dynamics::Joint *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::Joint *>::hasName), (::boost::python::arg("_name")))
.def("hasObject", static_cast<bool (dart::common::NameManager<dart::dynamics::Joint *>::*)(dart::dynamics::Joint *const &) const>(&dart::common::NameManager<dart::dynamics::Joint *>::hasObject), (::boost::python::arg("_obj")))
.def("getCount", static_cast<std::size_t (dart::common::NameManager<dart::dynamics::Joint *>::*)() const>(&dart::common::NameManager<dart::dynamics::Joint *>::getCount))
.def("getObject", static_cast<dart::dynamics::Joint *(dart::common::NameManager<dart::dynamics::Joint *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::Joint *>::getObject), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), (::boost::python::arg("_name")))
.def("getName", static_cast<std::string (dart::common::NameManager<dart::dynamics::Joint *>::*)(dart::dynamics::Joint *const &) const>(&dart::common::NameManager<dart::dynamics::Joint *>::getName), (::boost::python::arg("_obj")))
.def("changeObjectName", static_cast<std::string (dart::common::NameManager<dart::dynamics::Joint *>::*)(dart::dynamics::Joint *const &, const std::string &)>(&dart::common::NameManager<dart::dynamics::Joint *>::changeObjectName), (::boost::python::arg("_obj"), ::boost::python::arg("_newName")))
.def("setDefaultName", static_cast<void (dart::common::NameManager<dart::dynamics::Joint *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Joint *>::setDefaultName), (::boost::python::arg("_defaultName")))
.def("getDefaultName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::Joint *>::*)() const>(&dart::common::NameManager<dart::dynamics::Joint *>::getDefaultName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setManagerName", static_cast<void (dart::common::NameManager<dart::dynamics::Joint *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Joint *>::setManagerName), (::boost::python::arg("_managerName")))
.def("getManagerName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::Joint *>::*)() const>(&dart::common::NameManager<dart::dynamics::Joint *>::getManagerName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
