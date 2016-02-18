#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common11NameManagerIPNS_8dynamics11EndEffectorEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::NameManager<dart::dynamics::EndEffector *> >("NameManagerEndEffector", boost::python::no_init)
.def(::boost::python::init<const std::string &, const std::string &>((::boost::python::arg("_managerName"), ::boost::python::arg("_defaultName"))))
.def("setPattern", static_cast<bool (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::EndEffector *>::setPattern), (::boost::python::arg("_newPattern")))
.def("issueNewName", static_cast<std::string (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::EndEffector *>::issueNewName), (::boost::python::arg("_name")))
.def("issueNewNameAndAdd", static_cast<std::string (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(const std::string &, dart::dynamics::EndEffector *const &)>(&dart::common::NameManager<dart::dynamics::EndEffector *>::issueNewNameAndAdd), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("addName", static_cast<bool (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(const std::string &, dart::dynamics::EndEffector *const &)>(&dart::common::NameManager<dart::dynamics::EndEffector *>::addName), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("removeName", static_cast<bool (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::EndEffector *>::removeName), (::boost::python::arg("_name")))
.def("removeObject", static_cast<bool (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(dart::dynamics::EndEffector *const &)>(&dart::common::NameManager<dart::dynamics::EndEffector *>::removeObject), (::boost::python::arg("_obj")))
.def("clear", static_cast<void (dart::common::NameManager<dart::dynamics::EndEffector *>::*)()>(&dart::common::NameManager<dart::dynamics::EndEffector *>::clear))
.def("hasName", static_cast<bool (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::EndEffector *>::hasName), (::boost::python::arg("_name")))
.def("hasObject", static_cast<bool (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(dart::dynamics::EndEffector *const &) const>(&dart::common::NameManager<dart::dynamics::EndEffector *>::hasObject), (::boost::python::arg("_obj")))
.def("getCount", static_cast<std::size_t (dart::common::NameManager<dart::dynamics::EndEffector *>::*)() const>(&dart::common::NameManager<dart::dynamics::EndEffector *>::getCount))
.def("getObject", static_cast<dart::dynamics::EndEffector *(dart::common::NameManager<dart::dynamics::EndEffector *>::*)(const std::string &) const>(&dart::common::NameManager<dart::dynamics::EndEffector *>::getObject), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::EndEffectorPtr> >(), (::boost::python::arg("_name")))
.def("getName", static_cast<std::string (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(dart::dynamics::EndEffector *const &) const>(&dart::common::NameManager<dart::dynamics::EndEffector *>::getName), (::boost::python::arg("_obj")))
.def("changeObjectName", static_cast<std::string (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(dart::dynamics::EndEffector *const &, const std::string &)>(&dart::common::NameManager<dart::dynamics::EndEffector *>::changeObjectName), (::boost::python::arg("_obj"), ::boost::python::arg("_newName")))
.def("setDefaultName", static_cast<void (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::EndEffector *>::setDefaultName), (::boost::python::arg("_defaultName")))
.def("getDefaultName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::EndEffector *>::*)() const>(&dart::common::NameManager<dart::dynamics::EndEffector *>::getDefaultName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setManagerName", static_cast<void (dart::common::NameManager<dart::dynamics::EndEffector *>::*)(const std::string &)>(&dart::common::NameManager<dart::dynamics::EndEffector *>::setManagerName), (::boost::python::arg("_managerName")))
.def("getManagerName", static_cast<const std::string &(dart::common::NameManager<dart::dynamics::EndEffector *>::*)() const>(&dart::common::NameManager<dart::dynamics::EndEffector *>::getManagerName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
