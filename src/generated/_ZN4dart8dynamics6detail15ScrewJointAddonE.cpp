#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics6detail15ScrewJointAddonE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedProperties generates implementations of the Property
 managing functions for an Addon class.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6detail15ScrewJointAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::ScrewJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::ScrewJoint>, dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate> > >("ScrewJointAddon", _ZN4dart8dynamics6detail15ScrewJointAddonE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::dynamics::detail::ScrewJointAddon * { return new dart::dynamics::detail::ScrewJointAddon(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::ScrewJoint>, dart::dynamics::detail::ScrewJointAddon, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::ScrewJoint, &dart::dynamics::detail::JointPropertyUpdate>::PropertiesData & properties) -> dart::dynamics::detail::ScrewJointAddon * { return new dart::dynamics::detail::ScrewJointAddon(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setAxis", [](dart::dynamics::detail::ScrewJointAddon *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis", [](const dart::dynamics::detail::ScrewJointAddon *self) -> const Eigen::Vector3d & { return self->getAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPitch", [](dart::dynamics::detail::ScrewJointAddon *self, const double & value) -> void { return self->setPitch(value); }, (::boost::python::arg("value")))
.def("getPitch", [](const dart::dynamics::detail::ScrewJointAddon *self) -> const double & { return self->getPitch(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
