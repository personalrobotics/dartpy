#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common12AddonManagerE_docstring[] = R"CHIMERA_STRING( AddonManager is a base class that should be virtually inherited by any class
 that wants to be able to manage Addons.
 The base AddonManager class is completely agnostic to what kind of Addons it
 is given. Addons are stored in a std::map, so access to its Addons happens
 on average in log(N) time. Most often, a class that accepts Addons will have
 certain Addon types that it will need to access frequently, and it would be
 beneficial to have constant-time access to those Addon types. To get
 constant-time access to specific Addon types, you can use the templated
 class SpecializedForAddon.
)CHIMERA_STRING";

constexpr char _ZN4dart6common12AddonManager14setAddonStatesERKNS0_19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon5StateESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEEEE_docstring[] = R"CHIMERA_STRING( Set the states of the addons in this AddonManager based on the given
 AddonManager::State. The states of any Addon types that do not exist
 within this manager will be ignored.
)CHIMERA_STRING";

constexpr char _ZNK4dart6common12AddonManager14getAddonStatesEv_docstring[] = R"CHIMERA_STRING( Get the states of the addons inside of this AddonManager
)CHIMERA_STRING";

constexpr char _ZNK4dart6common12AddonManager17copyAddonStatesToERNS0_19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon5StateESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEEEE_docstring[] = R"CHIMERA_STRING( Fill outgoingStates with the states of the addons inside this AddonManager
)CHIMERA_STRING";

constexpr char _ZN4dart6common12AddonManager18setAddonPropertiesERKNS0_19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon10PropertiesESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEEEE_docstring[] = R"CHIMERA_STRING( Set the properties of the addons in this AddonManager based on the given
 AddonManager::Properties. The properties of any Addon types that do not
 exist within this manager will be ignored.
)CHIMERA_STRING";

constexpr char _ZNK4dart6common12AddonManager18getAddonPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the properties of the addons inside of this AddonManager
)CHIMERA_STRING";

constexpr char _ZNK4dart6common12AddonManager21copyAddonPropertiesToERNS0_19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon10PropertiesESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEEEE_docstring[] = R"CHIMERA_STRING( Fill outgoingProperties with the properties of the addons inside this
 AddonManager
)CHIMERA_STRING";

constexpr char _ZN4dart6common12AddonManager15duplicateAddonsEPKS1__docstring[] = R"CHIMERA_STRING( Give this AddonManager a copy of each Addon from otherManager
)CHIMERA_STRING";

constexpr char _ZN4dart6common12AddonManager11matchAddonsEPKS1__docstring[] = R"CHIMERA_STRING( Make the Addons of this AddonManager match the Addons of otherManager. Any
 Addons in this AddonManager which do not exist in otherManager will be
 erased.
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common12AddonManagerE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::AddonManager, ::boost::noncopyable >("AddonManager", _ZN4dart6common12AddonManagerE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([]() -> dart::common::AddonManager * { return new dart::common::AddonManager(); }, ::boost::python::default_call_policies()))
.def("setAddonStates", [](dart::common::AddonManager *self, const dart::common::AddonManager::State & newStates) -> void { return self->setAddonStates(newStates); }, _ZN4dart6common12AddonManager14setAddonStatesERKNS0_19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon5StateESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEEEE_docstring, (::boost::python::arg("newStates")))
.def("getAddonStates", [](const dart::common::AddonManager *self) -> dart::common::AddonManager::State { return self->getAddonStates(); }, _ZNK4dart6common12AddonManager14getAddonStatesEv_docstring)
.def("copyAddonStatesTo", [](const dart::common::AddonManager *self, dart::common::AddonManager::State & outgoingStates) -> void { return self->copyAddonStatesTo(outgoingStates); }, _ZNK4dart6common12AddonManager17copyAddonStatesToERNS0_19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon5StateESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEEEE_docstring, (::boost::python::arg("outgoingStates")))
.def("setAddonProperties", [](dart::common::AddonManager *self, const dart::common::AddonManager::Properties & newProperties) -> void { return self->setAddonProperties(newProperties); }, _ZN4dart6common12AddonManager18setAddonPropertiesERKNS0_19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon10PropertiesESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEEEE_docstring, (::boost::python::arg("newProperties")))
.def("getAddonProperties", [](const dart::common::AddonManager *self) -> dart::common::AddonManager::Properties { return self->getAddonProperties(); }, _ZNK4dart6common12AddonManager18getAddonPropertiesEv_docstring)
.def("copyAddonPropertiesTo", [](const dart::common::AddonManager *self, dart::common::AddonManager::Properties & outgoingProperties) -> void { return self->copyAddonPropertiesTo(outgoingProperties); }, _ZNK4dart6common12AddonManager21copyAddonPropertiesToERNS0_19ExtensibleMapHolderISt3mapISt10type_indexSt10unique_ptrINS0_5Addon10PropertiesESt14default_deleteIS7_EESt4lessIS4_ESaISt4pairIKS4_SA_EEEEE_docstring, (::boost::python::arg("outgoingProperties")))
.def("duplicateAddons", [](dart::common::AddonManager *self, const dart::common::AddonManager * fromManager) -> void { return self->duplicateAddons(fromManager); }, _ZN4dart6common12AddonManager15duplicateAddonsEPKS1__docstring, (::boost::python::arg("fromManager")))
.def("matchAddons", [](dart::common::AddonManager *self, const dart::common::AddonManager * otherManager) -> void { return self->matchAddons(otherManager); }, _ZN4dart6common12AddonManager11matchAddonsEPKS1__docstring, (::boost::python::arg("otherManager")))
;
}

/* footer */
