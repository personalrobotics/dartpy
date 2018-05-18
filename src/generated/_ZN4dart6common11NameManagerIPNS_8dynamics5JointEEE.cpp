#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart6common11NameManagerIPNS_8dynamics5JointEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::NameManager<dart::dynamics::Joint *>, ::boost::noncopyable >("NameManagerJoint", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::NameManager<dart::dynamics::Joint *> * { return new dart::common::NameManager<dart::dynamics::Joint *>(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _managerName) -> dart::common::NameManager<dart::dynamics::Joint *> * { return new dart::common::NameManager<dart::dynamics::Joint *>(_managerName); }, ::boost::python::default_call_policies(), (::boost::python::arg("_managerName"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _managerName, const std::string & _defaultName) -> dart::common::NameManager<dart::dynamics::Joint *> * { return new dart::common::NameManager<dart::dynamics::Joint *>(_managerName, _defaultName); }, ::boost::python::default_call_policies(), (::boost::python::arg("_managerName"), ::boost::python::arg("_defaultName"))))
.def("setPattern", [](dart::common::NameManager<dart::dynamics::Joint *> *self, const std::string & _newPattern) -> bool { return self->setPattern(_newPattern); }, (::boost::python::arg("_newPattern")))
.def("issueNewName", [](const dart::common::NameManager<dart::dynamics::Joint *> *self, const std::string & _name) -> std::string { return self->issueNewName(_name); }, (::boost::python::arg("_name")))
.def("issueNewNameAndAdd", [](dart::common::NameManager<dart::dynamics::Joint *> *self, const std::string & _name, dart::dynamics::Joint *const & _obj) -> std::string { return self->issueNewNameAndAdd(_name, _obj); }, (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("addName", [](dart::common::NameManager<dart::dynamics::Joint *> *self, const std::string & _name, dart::dynamics::Joint *const & _obj) -> bool { return self->addName(_name, _obj); }, (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("removeName", [](dart::common::NameManager<dart::dynamics::Joint *> *self, const std::string & _name) -> bool { return self->removeName(_name); }, (::boost::python::arg("_name")))
.def("removeObject", [](dart::common::NameManager<dart::dynamics::Joint *> *self, dart::dynamics::Joint *const & _obj) -> bool { return self->removeObject(_obj); }, (::boost::python::arg("_obj")))
.def("removeEntries", [](dart::common::NameManager<dart::dynamics::Joint *> *self, const std::string & _name, dart::dynamics::Joint *const & _obj) -> void { return self->removeEntries(_name, _obj); }, (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("clear", [](dart::common::NameManager<dart::dynamics::Joint *> *self) -> void { return self->clear(); })
.def("hasName", [](const dart::common::NameManager<dart::dynamics::Joint *> *self, const std::string & _name) -> bool { return self->hasName(_name); }, (::boost::python::arg("_name")))
.def("hasObject", [](const dart::common::NameManager<dart::dynamics::Joint *> *self, dart::dynamics::Joint *const & _obj) -> bool { return self->hasObject(_obj); }, (::boost::python::arg("_obj")))
.def("getCount", [](const dart::common::NameManager<dart::dynamics::Joint *> *self) -> std::size_t { return self->getCount(); })
.def("getObject", [](const dart::common::NameManager<dart::dynamics::Joint *> *self, const std::string & _name) -> dart::dynamics::Joint * { return self->getObject(_name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >(), (::boost::python::arg("_name")))
.def("getName", [](const dart::common::NameManager<dart::dynamics::Joint *> *self, dart::dynamics::Joint *const & _obj) -> std::string { return self->getName(_obj); }, (::boost::python::arg("_obj")))
.def("changeObjectName", [](dart::common::NameManager<dart::dynamics::Joint *> *self, dart::dynamics::Joint *const & _obj, const std::string & _newName) -> std::string { return self->changeObjectName(_obj, _newName); }, (::boost::python::arg("_obj"), ::boost::python::arg("_newName")))
.def("setDefaultName", [](dart::common::NameManager<dart::dynamics::Joint *> *self, const std::string & _defaultName) -> void { return self->setDefaultName(_defaultName); }, (::boost::python::arg("_defaultName")))
.def("getDefaultName", [](const dart::common::NameManager<dart::dynamics::Joint *> *self) -> const std::string & { return self->getDefaultName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setManagerName", [](dart::common::NameManager<dart::dynamics::Joint *> *self, const std::string & _managerName) -> void { return self->setManagerName(_managerName); }, (::boost::python::arg("_managerName")))
.def("getManagerName", [](const dart::common::NameManager<dart::dynamics::Joint *> *self) -> const std::string & { return self->getManagerName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
