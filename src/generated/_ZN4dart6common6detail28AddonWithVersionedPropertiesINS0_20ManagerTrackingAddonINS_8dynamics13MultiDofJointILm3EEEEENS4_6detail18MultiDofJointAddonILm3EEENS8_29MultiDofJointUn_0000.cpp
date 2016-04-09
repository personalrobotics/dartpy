#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEEE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedProperties generates implementations of the Property
 managing functions for an Addon class.
)CHIMERA_STRING";

constexpr char _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEE13setPropertiesERKSC__docstring[] = R"CHIMERA_STRING( Set the Properties of this Addon
)CHIMERA_STRING";

constexpr char _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEE16incrementVersionEv_docstring[] = R"CHIMERA_STRING( Increment the version of this Addon and its Manager
)CHIMERA_STRING";

constexpr char _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEE22notifyPropertiesUpdateEv_docstring[] = R"CHIMERA_STRING( Call UpdateProperties(this) and incrementVersion()
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp>, ::boost::noncopyable, ::boost::python::bases<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> > > >("_ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEEE", _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp> * { return new dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp>(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp>::PropertiesData & properties) -> dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp> * { return new dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp>(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setAddonProperties", [](dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp> *self, const dart::common::Addon::Properties & someProperties) -> void { return self->setAddonProperties(someProperties); }, (::boost::python::arg("someProperties")))
.def("setProperties", [](dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp> *self, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp>::PropertiesData & properties) -> void { return self->setProperties(properties); }, _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEE13setPropertiesERKSC__docstring, (::boost::python::arg("properties")))
.def("cloneAddon", [](const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp> *self, dart::common::AddonManager * newManager) -> std::unique_ptr<dart::common::Addon> { return self->cloneAddon(newManager); }, (::boost::python::arg("newManager")))
.def("incrementVersion", [](dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp> *self) -> std::size_t { return self->incrementVersion(); }, _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEE16incrementVersionEv_docstring)
.def("notifyPropertiesUpdate", [](dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::MultiDofJoint<3> >, dart::dynamics::detail::MultiDofJointAddon<3>, dart::dynamics::detail::MultiDofJointUniqueProperties<3>, dart::dynamics::MultiDofJoint<3>, &dart::common::detail::NoOp> *self) -> void { return self->notifyPropertiesUpdate(); }, _ZN4dart6common6detail28AddonWithVersionedPropertiesINS0_20ManagerTrackingAddonINS_8dynamics13MultiDofJointILm3EEEEENS4_6detail18MultiDofJointAddonILm3EEENS8_29MultiDofJointUniquePropertiesILm3EEES6_XadL_ZNS1_4NoOpIJPSA_EEEvDpT_EEE22notifyPropertiesUpdateEv_docstring)
;
}

/* footer */
