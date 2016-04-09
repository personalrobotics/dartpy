#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEEE_docstring[] = R"CHIMERA_STRING( 
 Typical usage:
 
)CHIMERA_STRING";

constexpr char _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE10setPatternERKSs_docstring[] = R"CHIMERA_STRING( Set a new pattern for name generation.
 Use %s to indicate the base name and use %d to indicate where the number
 belongs. The pattern must contain both a %s and a %d.
 Examples:
 "%s(%d)" : name -> name(1) -> name(2)
 "%d-%s" : name -> 1-name -> 2-name
 returns false if the pattern was invalid (i.e. did not contain b
 oth %s and %d)
)CHIMERA_STRING";

constexpr char _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE12issueNewNameERKSs_docstring[] = R"CHIMERA_STRING( Issue new unique combined name of given base name and number suffix
)CHIMERA_STRING";

constexpr char _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE18issueNewNameAndAddERKSsRKS4__docstring[] = R"CHIMERA_STRING( Call issueNewName() and add the result to the map
)CHIMERA_STRING";

constexpr char _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE7addNameERKSsRKS4__docstring[] = R"CHIMERA_STRING( Add an object to the map
)CHIMERA_STRING";

constexpr char _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE10removeNameERKSs_docstring[] = R"CHIMERA_STRING( Remove an object from the Manager based on its name
)CHIMERA_STRING";

constexpr char _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE12removeObjectERKS4__docstring[] = R"CHIMERA_STRING( Remove an object from the Manager based on reverse lookup
)CHIMERA_STRING";

constexpr char _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE13removeEntriesERKSsRKS4__docstring[] = R"CHIMERA_STRING( Remove _name using the forward lookup and _obj using the reverse lookup.
 This will allow you to add _obj under the name _name without any conflicts
)CHIMERA_STRING";

constexpr char _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE5clearEv_docstring[] = R"CHIMERA_STRING( Clear all the objects
)CHIMERA_STRING";

constexpr char _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE7hasNameERKSs_docstring[] = R"CHIMERA_STRING( Return true if the name is contained
)CHIMERA_STRING";

constexpr char _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE9hasObjectERKS4__docstring[] = R"CHIMERA_STRING( Return true if the object is contained
)CHIMERA_STRING";

constexpr char _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE8getCountEv_docstring[] = R"CHIMERA_STRING( Get the number of the objects currently stored by the NameManager
)CHIMERA_STRING";

constexpr char _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE9getObjectERKSs_docstring[] = R"CHIMERA_STRING( Get object by given name
 
)CHIMERA_STRING";

constexpr char _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE7getNameERKS4__docstring[] = R"CHIMERA_STRING( Use a reverse lookup to get the name that the manager has _obj listed
 under. Returns an empty string if it is not in the list.
)CHIMERA_STRING";

constexpr char _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE16changeObjectNameERKS4_RKSs_docstring[] = R"CHIMERA_STRING( Change the name of a currently held object. This will do nothing if the
 object is already using _newName or if the object is not held by this
 NameManager.
 If the object is held, its new name is returned (which might
 be different than _newName if there was a duplicate naming conflict). If
 the object is not held, an empty string will be returned.
)CHIMERA_STRING";

constexpr char _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE14setDefaultNameERKSs_docstring[] = R"CHIMERA_STRING( Set the name that will be provided to objects passed in with an empty
 string for a name
)CHIMERA_STRING";

constexpr char _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE14getDefaultNameEv_docstring[] = R"CHIMERA_STRING( Get the name that will be provided to objects passed in with an empty
 string for a name
)CHIMERA_STRING";

constexpr char _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE14setManagerNameERKSs_docstring[] = R"CHIMERA_STRING( Set the name of this NameManager so that it can be printed in error reports
)CHIMERA_STRING";

constexpr char _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE14getManagerNameEv_docstring[] = R"CHIMERA_STRING( Get the name of this NameManager
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::NameManager<dart::dynamics::Node *> >("NameManagerNode", _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::NameManager<dart::dynamics::Node *> * { return new dart::common::NameManager<dart::dynamics::Node *>(); }, ::boost::python::default_call_policies()))
.def("__init__", ::boost::python::make_constructor([](const std::string & _managerName) -> dart::common::NameManager<dart::dynamics::Node *> * { return new dart::common::NameManager<dart::dynamics::Node *>(_managerName); }, ::boost::python::default_call_policies(), (::boost::python::arg("_managerName"))))
.def("__init__", ::boost::python::make_constructor([](const std::string & _managerName, const std::string & _defaultName) -> dart::common::NameManager<dart::dynamics::Node *> * { return new dart::common::NameManager<dart::dynamics::Node *>(_managerName, _defaultName); }, ::boost::python::default_call_policies(), (::boost::python::arg("_managerName"), ::boost::python::arg("_defaultName"))))
.def("setPattern", [](dart::common::NameManager<dart::dynamics::Node *> *self, const std::string & _newPattern) -> bool { return self->setPattern(_newPattern); }, _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE10setPatternERKSs_docstring, (::boost::python::arg("_newPattern")))
.def("issueNewName", [](const dart::common::NameManager<dart::dynamics::Node *> *self, const std::string & _name) -> std::string { return self->issueNewName(_name); }, _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE12issueNewNameERKSs_docstring, (::boost::python::arg("_name")))
.def("issueNewNameAndAdd", [](dart::common::NameManager<dart::dynamics::Node *> *self, const std::string & _name, dart::dynamics::Node *const & _obj) -> std::string { return self->issueNewNameAndAdd(_name, _obj); }, _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE18issueNewNameAndAddERKSsRKS4__docstring, (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("addName", [](dart::common::NameManager<dart::dynamics::Node *> *self, const std::string & _name, dart::dynamics::Node *const & _obj) -> bool { return self->addName(_name, _obj); }, _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE7addNameERKSsRKS4__docstring, (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("removeName", [](dart::common::NameManager<dart::dynamics::Node *> *self, const std::string & _name) -> bool { return self->removeName(_name); }, _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE10removeNameERKSs_docstring, (::boost::python::arg("_name")))
.def("removeObject", [](dart::common::NameManager<dart::dynamics::Node *> *self, dart::dynamics::Node *const & _obj) -> bool { return self->removeObject(_obj); }, _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE12removeObjectERKS4__docstring, (::boost::python::arg("_obj")))
.def("removeEntries", [](dart::common::NameManager<dart::dynamics::Node *> *self, const std::string & _name, dart::dynamics::Node *const & _obj) -> void { return self->removeEntries(_name, _obj); }, _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE13removeEntriesERKSsRKS4__docstring, (::boost::python::arg("_name"), ::boost::python::arg("_obj")))
.def("clear", [](dart::common::NameManager<dart::dynamics::Node *> *self) -> void { return self->clear(); }, _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE5clearEv_docstring)
.def("hasName", [](const dart::common::NameManager<dart::dynamics::Node *> *self, const std::string & _name) -> bool { return self->hasName(_name); }, _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE7hasNameERKSs_docstring, (::boost::python::arg("_name")))
.def("hasObject", [](const dart::common::NameManager<dart::dynamics::Node *> *self, dart::dynamics::Node *const & _obj) -> bool { return self->hasObject(_obj); }, _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE9hasObjectERKS4__docstring, (::boost::python::arg("_obj")))
.def("getCount", [](const dart::common::NameManager<dart::dynamics::Node *> *self) -> std::size_t { return self->getCount(); }, _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE8getCountEv_docstring)
.def("getObject", [](const dart::common::NameManager<dart::dynamics::Node *> *self, const std::string & _name) -> dart::dynamics::Node * { return self->getObject(_name); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::NodePtr> >(), _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE9getObjectERKSs_docstring, (::boost::python::arg("_name")))
.def("getName", [](const dart::common::NameManager<dart::dynamics::Node *> *self, dart::dynamics::Node *const & _obj) -> std::string { return self->getName(_obj); }, _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE7getNameERKS4__docstring, (::boost::python::arg("_obj")))
.def("changeObjectName", [](dart::common::NameManager<dart::dynamics::Node *> *self, dart::dynamics::Node *const & _obj, const std::string & _newName) -> std::string { return self->changeObjectName(_obj, _newName); }, _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE16changeObjectNameERKS4_RKSs_docstring, (::boost::python::arg("_obj"), ::boost::python::arg("_newName")))
.def("setDefaultName", [](dart::common::NameManager<dart::dynamics::Node *> *self, const std::string & _defaultName) -> void { return self->setDefaultName(_defaultName); }, _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE14setDefaultNameERKSs_docstring, (::boost::python::arg("_defaultName")))
.def("getDefaultName", [](const dart::common::NameManager<dart::dynamics::Node *> *self) -> const std::string & { return self->getDefaultName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE14getDefaultNameEv_docstring)
.def("setManagerName", [](dart::common::NameManager<dart::dynamics::Node *> *self, const std::string & _managerName) -> void { return self->setManagerName(_managerName); }, _ZN4dart6common11NameManagerIPNS_8dynamics4NodeEE14setManagerNameERKSs_docstring, (::boost::python::arg("_managerName")))
.def("getManagerName", [](const dart::common::NameManager<dart::dynamics::Node *> *self) -> const std::string & { return self->getManagerName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart6common11NameManagerIPNS_8dynamics4NodeEE14getManagerNameEv_docstring)
;
}

/* footer */
