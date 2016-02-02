#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common11NameManagerIPNS_8dynamics6MarkerEEE()
{
::boost::python::class_<dart::common::NameManager<dart::dynamics::Marker *> >("_ZN4dart6common11NameManagerIPNS_8dynamics6MarkerEEE", boost::python::no_init)
.def(::boost::python::init<const std::string &, const std::string &>((::boost::python::arg("_managerName"), ::boost::python::arg("_defaultName"))))
.def("setPattern", static_cast<bool (dart::common::NameManager<dart::dynamics::Marker *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Marker *>::setPattern), (::boost::python::arg("_newPattern")))
.def("issueNewName", static_cast<std::string (dart::common::NameManager<dart::dynamics::Marker *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::Marker *>::issueNewName), (::boost::python::arg("_name")))
.def("issueNewNameAndAdd", static_cast<std::string (dart::common::NameManager<dart::dynamics::Marker *>::*)(const std::string &, dart::dynamics::Marker *const &)>(&dart::common::NameManager<dart::dynamics::Marker *>::issueNewNameAndAdd), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("addName", static_cast<bool (dart::common::NameManager<dart::dynamics::Marker *>::*)(const std::string &, dart::dynamics::Marker *const &)>(&dart::common::NameManager<dart::dynamics::Marker *>::addName), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("removeName", static_cast<bool (dart::common::NameManager<dart::dynamics::Marker *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Marker *>::removeName), (::boost::python::arg("_name")))
.def("removeObject", static_cast<bool (dart::common::NameManager<dart::dynamics::Marker *>::*)(dart::dynamics::Marker *const &)>(&dart::common::NameManager<dart::dynamics::Marker *>::removeObject), (::boost::python::arg("_obj")))
.def("clear", static_cast<void (dart::common::NameManager<dart::dynamics::Marker *>::*)()>(&dart::common::NameManager<dart::dynamics::Marker *>::clear))
.def("hasName", static_cast<bool (dart::common::NameManager<dart::dynamics::Marker *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::Marker *>::hasName), (::boost::python::arg("_name")))
.def("hasObject", static_cast<bool (dart::common::NameManager<dart::dynamics::Marker *>::*)(dart::dynamics::Marker *const &) const>(&dart::common::NameManager<dart::dynamics::Marker *>::hasObject), (::boost::python::arg("_obj")))
.def("getCount", static_cast<std::size_t (dart::common::NameManager<dart::dynamics::Marker *>::*)() const>(&dart::common::NameManager<dart::dynamics::Marker *>::getCount))
.def("getObject", static_cast<dart::dynamics::Marker *(dart::common::NameManager<dart::dynamics::Marker *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::Marker *>::getObject), ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_name")))
.def("getName", static_cast<std::string (dart::common::NameManager<dart::dynamics::Marker *>::*)(dart::dynamics::Marker *const &) const>(&dart::common::NameManager<dart::dynamics::Marker *>::getName), (::boost::python::arg("_obj")))
.def("changeObjectName", static_cast<std::string (dart::common::NameManager<dart::dynamics::Marker *>::*)(dart::dynamics::Marker *const &, const std::string &)>(&dart::common::NameManager<dart::dynamics::Marker *>::changeObjectName), (::boost::python::arg("_obj"), ::boost::python::arg("_newName")))
.def("setDefaultName", static_cast<void (dart::common::NameManager<dart::dynamics::Marker *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Marker *>::setDefaultName), (::boost::python::arg("_defaultName")))
.def("getDefaultName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::Marker *>::*)() const>(&dart::common::NameManager<dart::dynamics::Marker *>::getDefaultName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setManagerName", static_cast<void (dart::common::NameManager<dart::dynamics::Marker *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::Marker *>::setManagerName), (::boost::python::arg("_managerName")))
.def("getManagerName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::Marker *>::*)() const>(&dart::common::NameManager<dart::dynamics::Marker *>::getManagerName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
