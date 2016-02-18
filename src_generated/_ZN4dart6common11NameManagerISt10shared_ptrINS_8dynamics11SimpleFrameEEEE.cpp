#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart6common11NameManagerISt10shared_ptrINS_8dynamics11SimpleFrameEEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> > >("NameManagerSimpleFrame", boost::python::no_init)
.def(::boost::python::init<const std::string &, const std::string &>((::boost::python::arg("_managerName"), ::boost::python::arg("_defaultName"))))
.def("setPattern", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::string &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::setPattern), (::boost::python::arg("_newPattern")))
.def("issueNewName", static_cast<std::string (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::string &) const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::issueNewName), (::boost::python::arg("_name")))
.def("issueNewNameAndAdd", static_cast<std::string (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::string &, const std::shared_ptr<dart::dynamics::SimpleFrame> &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::issueNewNameAndAdd), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("addName", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::string &, const std::shared_ptr<dart::dynamics::SimpleFrame> &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::addName), (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("removeName", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::string &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::removeName), (::boost::python::arg("_name")))
.def("removeObject", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::shared_ptr<dart::dynamics::SimpleFrame> &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::removeObject), (::boost::python::arg("_obj")))
.def("clear", static_cast<void (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)()>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::clear))
.def("hasName", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::string &) const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::hasName), (::boost::python::arg("_name")))
.def("hasObject", static_cast<bool (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::shared_ptr<dart::dynamics::SimpleFrame> &) const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::hasObject), (::boost::python::arg("_obj")))
.def("getCount", static_cast<std::size_t (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)() const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::getCount))
.def("getObject", static_cast<std::shared_ptr<dart::dynamics::SimpleFrame> (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::string &) const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::getObject), (::boost::python::arg("_name")))
.def("getName", static_cast<std::string (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::shared_ptr<dart::dynamics::SimpleFrame> &) const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::getName), (::boost::python::arg("_obj")))
.def("changeObjectName", static_cast<std::string (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::shared_ptr<dart::dynamics::SimpleFrame> &, const std::string &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::changeObjectName), (::boost::python::arg("_obj"), ::boost::python::arg("_newName")))
.def("setDefaultName", static_cast<void (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::string &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::setDefaultName), (::boost::python::arg("_defaultName")))
.def("getDefaultName", static_cast<const std::string &(dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)() const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::getDefaultName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setManagerName", static_cast<void (dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)(const std::string &)>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::setManagerName), (::boost::python::arg("_managerName")))
.def("getManagerName", static_cast<const std::string &(dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::*)() const>(&dart::common::NameManager<std::shared_ptr<dart::dynamics::SimpleFrame> >::getManagerName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
