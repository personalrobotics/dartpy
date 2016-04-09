#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics6detail19SingleDofJointAddonE_docstring[] = R"CHIMERA_STRING( AddonWithProtectedProperties generates implementations of the Property
 managing functions for an Addon class.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics6detail19SingleDofJointAddonE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics").attr("detail"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::detail::SingleDofJointAddon, ::boost::noncopyable, ::boost::python::bases<dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::SingleDofJoint>, dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp> > >("SingleDofJointAddon", _ZN4dart8dynamics6detail19SingleDofJointAddonE_docstring, boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr) -> dart::dynamics::detail::SingleDofJointAddon * { return new dart::dynamics::detail::SingleDofJointAddon(mgr); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"))))
.def("__init__", ::boost::python::make_constructor([](dart::common::AddonManager * mgr, const dart::common::detail::AddonWithVersionedProperties<dart::common::ManagerTrackingAddon<dart::dynamics::SingleDofJoint>, dart::dynamics::detail::SingleDofJointAddon, dart::dynamics::detail::SingleDofJointUniqueProperties, dart::dynamics::SingleDofJoint, &dart::common::detail::NoOp>::PropertiesData & properties) -> dart::dynamics::detail::SingleDofJointAddon * { return new dart::dynamics::detail::SingleDofJointAddon(mgr, properties); }, ::boost::python::default_call_policies(), (::boost::python::arg("mgr"), ::boost::python::arg("properties"))))
.def("setPositionLowerLimit", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setPositionLowerLimit(value); }, (::boost::python::arg("value")))
.def("getPositionLowerLimit", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getPositionLowerLimit(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPositionUpperLimit", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setPositionUpperLimit(value); }, (::boost::python::arg("value")))
.def("getPositionUpperLimit", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getPositionUpperLimit(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setInitialPosition", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setInitialPosition(value); }, (::boost::python::arg("value")))
.def("getInitialPosition", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getInitialPosition(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setVelocityLowerLimit", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setVelocityLowerLimit(value); }, (::boost::python::arg("value")))
.def("getVelocityLowerLimit", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getVelocityLowerLimit(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setVelocityUpperLimit", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setVelocityUpperLimit(value); }, (::boost::python::arg("value")))
.def("getVelocityUpperLimit", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getVelocityUpperLimit(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setInitialVelocity", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setInitialVelocity(value); }, (::boost::python::arg("value")))
.def("getInitialVelocity", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getInitialVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAccelerationLowerLimit", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setAccelerationLowerLimit(value); }, (::boost::python::arg("value")))
.def("getAccelerationLowerLimit", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getAccelerationLowerLimit(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAccelerationUpperLimit", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setAccelerationUpperLimit(value); }, (::boost::python::arg("value")))
.def("getAccelerationUpperLimit", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getAccelerationUpperLimit(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setForceLowerLimit", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setForceLowerLimit(value); }, (::boost::python::arg("value")))
.def("getForceLowerLimit", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getForceLowerLimit(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setForceUpperLimit", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setForceUpperLimit(value); }, (::boost::python::arg("value")))
.def("getForceUpperLimit", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getForceUpperLimit(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setSpringStiffness", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setSpringStiffness(value); }, (::boost::python::arg("value")))
.def("getSpringStiffness", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getSpringStiffness(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setRestPosition", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setRestPosition(value); }, (::boost::python::arg("value")))
.def("getRestPosition", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getRestPosition(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setDampingCoefficient", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setDampingCoefficient(value); }, (::boost::python::arg("value")))
.def("getDampingCoefficient", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getDampingCoefficient(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setFriction", [](dart::dynamics::detail::SingleDofJointAddon *self, const double & value) -> void { return self->setFriction(value); }, (::boost::python::arg("value")))
.def("getFriction", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const double & { return self->getFriction(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPreserveDofName", [](dart::dynamics::detail::SingleDofJointAddon *self, const bool & value) -> void { return self->setPreserveDofName(value); }, (::boost::python::arg("value")))
.def("getPreserveDofName", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const bool & { return self->getPreserveDofName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setDofName", [](dart::dynamics::detail::SingleDofJointAddon *self, const std::string & name) -> const std::string & { return self->setDofName(name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("name")))
.def("setDofName", [](dart::dynamics::detail::SingleDofJointAddon *self, const std::string & name, bool preserveName) -> const std::string & { return self->setDofName(name, preserveName); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("name"), ::boost::python::arg("preserveName")))
.def("getDofName", [](const dart::dynamics::detail::SingleDofJointAddon *self) -> const std::string & { return self->getDofName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
;
}

/* footer */
