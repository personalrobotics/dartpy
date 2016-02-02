#include </homes/mkoval/dart-ws/src/dartpy/src/pointers.h>

#include <boost/python.hpp>
#include <cmath>
#include </home/mkoval/storage/dartpy-ws/src/dartpy/src/placeholder.cpp>

/* postinclude */

void _ZN4dart6common12AddonManagerE()
{
#if 0
::boost::python::class_<dart::common::AddonManager >("AddonManager", boost::python::no_init)
.def("setAddonStates", static_cast<void (dart::common::AddonManager::*)(const dart::common::AddonManager::State &)>(&dart::common::AddonManager::setAddonStates), (::boost::python::arg("newStates")))
.def("getAddonStates", static_cast<dart::common::AddonManager::State (dart::common::AddonManager::*)() const>(&dart::common::AddonManager::getAddonStates))
.def("copyAddonStatesTo", static_cast<void (dart::common::AddonManager::*)(dart::common::AddonManager::State &) const>(&dart::common::AddonManager::copyAddonStatesTo), (::boost::python::arg("outgoingStates")))
.def("setAddonProperties", static_cast<void (dart::common::AddonManager::*)(const dart::common::AddonManager::Properties &)>(&dart::common::AddonManager::setAddonProperties), (::boost::python::arg("newProperties")))
.def("getAddonProperties", static_cast<dart::common::AddonManager::Properties (dart::common::AddonManager::*)() const>(&dart::common::AddonManager::getAddonProperties))
.def("copyAddonPropertiesTo", static_cast<void (dart::common::AddonManager::*)(dart::common::AddonManager::Properties &) const>(&dart::common::AddonManager::copyAddonPropertiesTo), (::boost::python::arg("outgoingProperties")))
.def("duplicateAddons", static_cast<void (dart::common::AddonManager::*)(const dart::common::AddonManager *)>(&dart::common::AddonManager::duplicateAddons), (::boost::python::arg("otherManager")))
.def("matchAddons", static_cast<void (dart::common::AddonManager::*)(const dart::common::AddonManager *)>(&dart::common::AddonManager::matchAddons), (::boost::python::arg("otherManager")))
;
#endif
}

/* footer */
