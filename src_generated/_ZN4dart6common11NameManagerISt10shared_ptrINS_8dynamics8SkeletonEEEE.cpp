#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics8SkeletonEEEE()
{
::boost::python::class_<dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> > >("_ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics8SkeletonEEEE", boost::python::no_init)
.def(::boost::python::init<const std::string &, const std::string &>((::boost::python::arg("_managerName"), ::boost::python::arg("_defaultName"))))
.def("setPattern", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::string &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::setPattern), (::boost::python::arg("_newPattern")))
.def("issueNewName", static_cast<std::string (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::string &) const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::issueNewName), (::boost::python::arg("_name")))
.def("issueNewNameAndAdd", static_cast<std::string (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::string &, const std::shared_ptr<dart::dynamics::Skeleton> &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::issueNewNameAndAdd), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("addName", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::string &, const std::shared_ptr<dart::dynamics::Skeleton> &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::addName), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("removeName", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::string &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::removeName), (::boost::python::arg("_name")))
.def("removeObject", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::shared_ptr<dart::dynamics::Skeleton> &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::removeObject), (::boost::python::arg("_obj")))
.def("clear", static_cast<void (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)()>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::clear))
.def("hasName", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::string &) const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::hasName), (::boost::python::arg("_name")))
.def("hasObject", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::shared_ptr<dart::dynamics::Skeleton> &) const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::hasObject), (::boost::python::arg("_obj")))
.def("getCount", static_cast<std::size_t (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)() const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::getCount))
.def("getObject", static_cast<std::shared_ptr<dart::dynamics::Skeleton> (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::string &) const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::getObject), (::boost::python::arg("_name")))
.def("getName", static_cast<std::string (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::shared_ptr<dart::dynamics::Skeleton> &) const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::getName), (::boost::python::arg("_obj")))
.def("changeObjectName", static_cast<std::string (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::shared_ptr<dart::dynamics::Skeleton> &, const std::string &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::changeObjectName), (::boost::python::arg("_obj"), ::boost::python::arg("_newName")))
.def("setDefaultName", static_cast<void (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::string &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::setDefaultName), (::boost::python::arg("_defaultName")))
.def("getDefaultName", static_cast<const std::string &(dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)() const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::getDefaultName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setManagerName", static_cast<void (dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)(const std::string &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::setManagerName), (::boost::python::arg("_managerName")))
.def("getManagerName", static_cast<const std::string &(dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::*)() const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::Skeleton> >::getManagerName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
