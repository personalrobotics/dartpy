#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics6detail19UniversalJointAddonE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedProperties generates implementations of the Property
 managing functions for an Addon class.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6detail19UniversalJointAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::UniversalJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::UniversalJoint>, dart::dynamics::detail::UniversalJointAddon, dart::dynamics::detail::UniversalJointUniqueProperties, dart::dynamics::UniversalJoint, &dart::dynamics::detail::JointPropertyUpdate> > >("UniversalJointAddon", _ZN4dart8dynamics6detail19UniversalJointAddonE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::dynamics::detail::UniversalJointAddon * { return new dart::dynamics::detail::UniversalJointAddon(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::UniversalJoint>, dart::dynamics::detail::UniversalJointAddon, dart::dynamics::detail::UniversalJointUniqueProperties, dart::dynamics::UniversalJoint, &dart::dynamics::detail::JointPropertyUpdate>::PropertiesData & properties) -> dart::dynamics::detail::UniversalJointAddon * { return new dart::dynamics::detail::UniversalJointAddon(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setAxis1", [](dart::dynamics::detail::UniversalJointAddon *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis1(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis1", [](const dart::dynamics::detail::UniversalJointAddon *self) -> const Eigen::Vector3d & { return self->getAxis1(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAxis2", [](dart::dynamics::detail::UniversalJointAddon *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis2(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis2", [](const dart::dynamics::detail::UniversalJointAddon *self) -> const Eigen::Vector3d & { return self->getAxis2(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
