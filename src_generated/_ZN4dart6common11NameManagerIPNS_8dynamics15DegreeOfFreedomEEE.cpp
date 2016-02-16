#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common11NameManagerIPNS_8dynamics15DegreeOfFreedomEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::NameManager<dart::dynamics::DegreeOfFreedom *> >("_ZN4dart6common11NameManagerIPNS_8dynamics15DegreeOfFreedomEEE", boost::python::no_init)
.def(::boost::python::init<const std::string &, const std::string &>((::boost::python::arg("_managerName"), ::boost::python::arg("_defaultName"))))
.def("setPattern", static_cast<bool (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::setPattern), (::boost::python::arg("_newPattern")))
.def("issueNewName", static_cast<std::string (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::issueNewName), (::boost::python::arg("_name")))
.def("issueNewNameAndAdd", static_cast<std::string (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(const std::string &, dart::dynamics::DegreeOfFreedom *const &)>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::issueNewNameAndAdd), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("addName", static_cast<bool (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(const std::string &, dart::dynamics::DegreeOfFreedom *const &)>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::addName), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("removeName", static_cast<bool (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::removeName), (::boost::python::arg("_name")))
.def("removeObject", static_cast<bool (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(dart::dynamics::DegreeOfFreedom *const &)>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::removeObject), (::boost::python::arg("_obj")))
.def("clear", static_cast<void (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)()>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::clear))
.def("hasName", static_cast<bool (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::hasName), (::boost::python::arg("_name")))
.def("hasObject", static_cast<bool (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(dart::dynamics::DegreeOfFreedom *const &) const>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::hasObject), (::boost::python::arg("_obj")))
.def("getCount", static_cast<std::size_t (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)() const>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::getCount))
.def("getObject", static_cast<dart::dynamics::DegreeOfFreedom *(dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::getObject), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_name")))
.def("getName", static_cast<std::string (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(dart::dynamics::DegreeOfFreedom *const &) const>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::getName), (::boost::python::arg("_obj")))
.def("changeObjectName", static_cast<std::string (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(dart::dynamics::DegreeOfFreedom *const &, const std::string &)>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::changeObjectName), (::boost::python::arg("_obj"), ::boost::python::arg("_newName")))
.def("setDefaultName", static_cast<void (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::setDefaultName), (::boost::python::arg("_defaultName")))
.def("getDefaultName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)() const>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::getDefaultName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setManagerName", static_cast<void (dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::setManagerName), (::boost::python::arg("_managerName")))
.def("getManagerName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::*)() const>(&dart::common::NameManager<dart::dynamics::DegreeOfFreedom *>::getManagerName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
