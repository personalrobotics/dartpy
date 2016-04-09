#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics6detail16PlanarJointAddonE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedProperties generates implementations of the Property
 managing functions for an Addon class.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6detail16PlanarJointAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::PlanarJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::PlanarJoint>, dart::dynamics::detail::PlanarJointAddon, dart::dynamics::detail::PlanarJointUniqueProperties, dart::dynamics::PlanarJoint, &dart::dynamics::detail::JointPropertyUpdate> > >("PlanarJointAddon", _ZN4dart8dynamics6detail16PlanarJointAddonE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::dynamics::detail::PlanarJointAddon * { return new dart::dynamics::detail::PlanarJointAddon(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::PlanarJoint>, dart::dynamics::detail::PlanarJointAddon, dart::dynamics::detail::PlanarJointUniqueProperties, dart::dynamics::PlanarJoint, &dart::dynamics::detail::JointPropertyUpdate>::PropertiesData & properties) -> dart::dynamics::detail::PlanarJointAddon * { return new dart::dynamics::detail::PlanarJointAddon(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setXYPlane", [](dart::dynamics::detail::PlanarJointAddon *self) -> void { return self->setXYPlane(); })
.def("setYZPlane", [](dart::dynamics::detail::PlanarJointAddon *self) -> void { return self->setYZPlane(); })
.def("setZXPlane", [](dart::dynamics::detail::PlanarJointAddon *self) -> void { return self->setZXPlane(); })
.def("setArbitraryPlane", [](dart::dynamics::detail::PlanarJointAddon *self, const Eigen::Vector3d & _axis1, const Eigen::Vector3d & _axis2) -> void { return self->setArbitraryPlane(_axis1, _axis2); }, (::boost::python::arg("_axis1"), ::boost::python::arg("_axis2")))
.def("getPlaneType", [](const dart::dynamics::detail::PlanarJointAddon *self) -> const dart::dynamics::detail::PlaneType & { return self->getPlaneType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getTransAxis1", [](const dart::dynamics::detail::PlanarJointAddon *self) -> const Eigen::Vector3d & { return self->getTransAxis1(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getTransAxis2", [](const dart::dynamics::detail::PlanarJointAddon *self) -> const Eigen::Vector3d & { return self->getTransAxis2(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRotAxis", [](const dart::dynamics::detail::PlanarJointAddon *self) -> const Eigen::Vector3d & { return self->getRotAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
