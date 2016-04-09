#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics6detail18RevoluteJointAddonE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedProperties generates implementations of the Property
 managing functions for an Addon class.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6detail18RevoluteJointAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::RevoluteJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::RevoluteJoint>, dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate> > >("RevoluteJointAddon", _ZN4dart8dynamics6detail18RevoluteJointAddonE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::dynamics::detail::RevoluteJointAddon * { return new dart::dynamics::detail::RevoluteJointAddon(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::RevoluteJoint>, dart::dynamics::detail::RevoluteJointAddon, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::RevoluteJoint, &dart::dynamics::detail::JointPropertyUpdate>::PropertiesData & properties) -> dart::dynamics::detail::RevoluteJointAddon * { return new dart::dynamics::detail::RevoluteJointAddon(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setAxis", [](dart::dynamics::detail::RevoluteJointAddon *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis", [](const dart::dynamics::detail::RevoluteJointAddon *self) -> const Eigen::Vector3d & { return self->getAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
