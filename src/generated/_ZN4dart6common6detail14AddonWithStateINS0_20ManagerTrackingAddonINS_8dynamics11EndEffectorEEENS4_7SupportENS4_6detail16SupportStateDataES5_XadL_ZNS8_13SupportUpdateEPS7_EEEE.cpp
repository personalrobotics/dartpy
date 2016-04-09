#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart6common6detail14AddonWithStateINS0_20ManagerTrackingAddonINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEEE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedState generates implementations of the State managing
 functions for an Addon class.
)CHIMERA_STRING";

constexpr char _ZN4dart6common6detail14AddonWithStateINS0_20ManagerTrackingAddonINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEE8setStateERKS9__docstring[] = R"CHIMERA_STRING( Set the State of this Addon
)CHIMERA_STRING";

constexpr char _ZNK4dart6common6detail14AddonWithStateINS0_20ManagerTrackingAddonINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEE8getStateEv_docstring[] = R"CHIMERA_STRING( Get the State of this Addon
)CHIMERA_STRING";


} // namespace

void _ZN4dart6common6detail14AddonWithStateINS0_20ManagerTrackingAddonINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("common").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>, ::boost::noncopyable, ::boost::python::bases<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector> > >("AddonWithState_EndEffector_Support_SupportStateData_EndEffector_SupportUpdate", _ZN4dart6common6detail14AddonWithStateINS0_20ManagerTrackingAddonINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEEE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> * { return new dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>::StateData & state) -> dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> * { return new dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>(mgr, state); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("state"))))
.def("setAddonState", [](dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> *self, const dart::common::Addon::State & otherState) -> void { return self->setAddonState(otherState); }, (::boost::python::arg("otherState")))
.def("setState", [](dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> *self, const dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>::StateData & state) -> void { return self->setState(state); }, _ZN4dart6common6detail14AddonWithStateINS0_20ManagerTrackingAddonINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEE8setStateERKS9__docstring, (::boost::python::arg("state")))
.def("getState", [](const dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> *self) -> const dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate>::State & { return self->getState(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart6common6detail14AddonWithStateINS0_20ManagerTrackingAddonINS_8dynamics11EndEffectorEEENS4_7SupportENS4_6detail16SupportStateDataES5_XadL_ZNS8_13SupportUpdateEPS7_EEE8getStateEv_docstring)
.def("cloneAddon", [](const dart::common::detail::AddonWithState<dart::common::ManagerTrackingAddon<dart::dynamics::EndEffector>, dart::dynamics::Support, dart::dynamics::detail::SupportStateData, dart::dynamics::EndEffector, &dart::dynamics::detail::SupportUpdate> *self, dart::common::AddonManager * newManager) -> std::unique_ptr<dart::common::Addon> { return self->cloneAddon(newManager); }, (::boost::python::arg("newManager")))
;
}

/* footer */
