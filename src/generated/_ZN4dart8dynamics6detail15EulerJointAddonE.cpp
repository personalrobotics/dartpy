#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics6detail15EulerJointAddonE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedProperties generates implementations of the Property
 managing functions for an Addon class.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6detail15EulerJointAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::EulerJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::EulerJoint>, dart::dynamics::detail::EulerJointAddon, dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::EulerJoint, &dart::dynamics::detail::JointPropertyUpdate> > >("EulerJointAddon", _ZN4dart8dynamics6detail15EulerJointAddonE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::dynamics::detail::EulerJointAddon * { return new dart::dynamics::detail::EulerJointAddon(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::EulerJoint>, dart::dynamics::detail::EulerJointAddon, dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::EulerJoint, &dart::dynamics::detail::JointPropertyUpdate>::PropertiesData & properties) -> dart::dynamics::detail::EulerJointAddon * { return new dart::dynamics::detail::EulerJointAddon(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setAxisOrder", [](dart::dynamics::detail::EulerJointAddon *self, const dart::dynamics::detail::AxisOrder & value) -> void { return self->setAxisOrder(value); }, (::boost::python::arg("value")))
.def("getAxisOrder", [](const dart::dynamics::detail::EulerJointAddon *self) -> const dart::dynamics::detail::AxisOrder & { return self->getAxisOrder(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
