#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics6detail19PrismaticJointAddonE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedProperties generates implementations of the Property
 managing functions for an Addon class.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6detail19PrismaticJointAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::PrismaticJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::PrismaticJoint>, dart::dynamics::detail::PrismaticJointAddon, dart::dynamics::detail::PrismaticJointUniqueProperties, dart::dynamics::PrismaticJoint, &dart::dynamics::detail::JointPropertyUpdate> > >("PrismaticJointAddon", _ZN4dart8dynamics6detail19PrismaticJointAddonE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::dynamics::detail::PrismaticJointAddon * { return new dart::dynamics::detail::PrismaticJointAddon(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::PrismaticJoint>, dart::dynamics::detail::PrismaticJointAddon, dart::dynamics::detail::PrismaticJointUniqueProperties, dart::dynamics::PrismaticJoint, &dart::dynamics::detail::JointPropertyUpdate>::PropertiesData & properties) -> dart::dynamics::detail::PrismaticJointAddon * { return new dart::dynamics::detail::PrismaticJointAddon(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setAxis", [](dart::dynamics::detail::PrismaticJointAddon *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis", [](const dart::dynamics::detail::PrismaticJointAddon *self) -> const Eigen::Vector3d & { return self->getAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
