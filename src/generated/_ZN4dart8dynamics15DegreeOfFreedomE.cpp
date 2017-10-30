#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.hpp>
#include <dart/collision/bullet/bullet.hpp>
#include <dart/optimizer/optimizer.hpp>
#include <dart/optimizer/nlopt/nlopt.hpp>
#include <dart/planning/planning.hpp>
#include <dart/utils/utils.hpp>
#include <dart/utils/urdf/urdf.hpp>
#include <dart/gui/gui.hpp>

/* precontent */
#include <boost/python.hpp>
#include <cmath>

namespace {



} // namespace

void _ZN4dart8dynamics15DegreeOfFreedomE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::DegreeOfFreedom, ::boost::noncopyable, dart::dynamics::DegreeOfFreedomPtr, ::boost::python::bases<dart::common::Subject > >("DegreeOfFreedom", boost::python::no_init)
.def("setName", [](dart::dynamics::DegreeOfFreedom *self, const std::string & _name) -> const std::string & { return self->setName(_name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("setName", [](dart::dynamics::DegreeOfFreedom *self, const std::string & _name, bool _preserveName) -> const std::string & { return self->setName(_name, _preserveName); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name"), ::boost::python::arg("_preserveName")))
.def("getName", [](const dart::dynamics::DegreeOfFreedom *self) -> const std::string & { return self->getName(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("preserveName", [](dart::dynamics::DegreeOfFreedom *self, bool _preserve) -> void { return self->preserveName(_preserve); }, (::boost::python::arg("_preserve")))
.def("isNamePreserved", [](const dart::dynamics::DegreeOfFreedom *self) -> bool { return self->isNamePreserved(); })
.def("getIndexInSkeleton", [](const dart::dynamics::DegreeOfFreedom *self) -> std::size_t { return self->getIndexInSkeleton(); })
.def("getIndexInTree", [](const dart::dynamics::DegreeOfFreedom *self) -> std::size_t { return self->getIndexInTree(); })
.def("getIndexInJoint", [](const dart::dynamics::DegreeOfFreedom *self) -> std::size_t { return self->getIndexInJoint(); })
.def("getTreeIndex", [](const dart::dynamics::DegreeOfFreedom *self) -> std::size_t { return self->getTreeIndex(); })
.def("setCommand", [](dart::dynamics::DegreeOfFreedom *self, double _command) -> void { return self->setCommand(_command); }, (::boost::python::arg("_command")))
.def("getCommand", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getCommand(); })
.def("resetCommand", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetCommand(); })
.def("setPosition", [](dart::dynamics::DegreeOfFreedom *self, double _position) -> void { return self->setPosition(_position); }, (::boost::python::arg("_position")))
.def("getPosition", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getPosition(); })
.def("setPositionLimits", [](dart::dynamics::DegreeOfFreedom *self, double _lowerLimit, double _upperLimit) -> void { return self->setPositionLimits(_lowerLimit, _upperLimit); }, (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("setPositionLimits", [](dart::dynamics::DegreeOfFreedom *self, const std::pair<double, double> & _limits) -> void { return self->setPositionLimits(_limits); }, (::boost::python::arg("_limits")))
.def("getPositionLimits", [](const dart::dynamics::DegreeOfFreedom *self) -> std::pair<double, double> { return self->getPositionLimits(); })
.def("setPositionLowerLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setPositionLowerLimit(_limit); }, (::boost::python::arg("_limit")))
.def("getPositionLowerLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getPositionLowerLimit(); })
.def("setPositionUpperLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setPositionUpperLimit(_limit); }, (::boost::python::arg("_limit")))
.def("getPositionUpperLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getPositionUpperLimit(); })
.def("isCyclic", [](const dart::dynamics::DegreeOfFreedom *self) -> bool { return self->isCyclic(); })
.def("hasPositionLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> bool { return self->hasPositionLimit(); })
.def("resetPosition", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetPosition(); })
.def("setInitialPosition", [](dart::dynamics::DegreeOfFreedom *self, double _initial) -> void { return self->setInitialPosition(_initial); }, (::boost::python::arg("_initial")))
.def("getInitialPosition", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getInitialPosition(); })
.def("setVelocity", [](dart::dynamics::DegreeOfFreedom *self, double _velocity) -> void { return self->setVelocity(_velocity); }, (::boost::python::arg("_velocity")))
.def("getVelocity", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getVelocity(); })
.def("setVelocityLimits", [](dart::dynamics::DegreeOfFreedom *self, double _lowerLimit, double _upperLimit) -> void { return self->setVelocityLimits(_lowerLimit, _upperLimit); }, (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("setVelocityLimits", [](dart::dynamics::DegreeOfFreedom *self, const std::pair<double, double> & _limits) -> void { return self->setVelocityLimits(_limits); }, (::boost::python::arg("_limits")))
.def("getVelocityLimits", [](const dart::dynamics::DegreeOfFreedom *self) -> std::pair<double, double> { return self->getVelocityLimits(); })
.def("setVelocityLowerLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setVelocityLowerLimit(_limit); }, (::boost::python::arg("_limit")))
.def("getVelocityLowerLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getVelocityLowerLimit(); })
.def("setVelocityUpperLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setVelocityUpperLimit(_limit); }, (::boost::python::arg("_limit")))
.def("getVelocityUpperLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getVelocityUpperLimit(); })
.def("resetVelocity", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetVelocity(); })
.def("setInitialVelocity", [](dart::dynamics::DegreeOfFreedom *self, double _initial) -> void { return self->setInitialVelocity(_initial); }, (::boost::python::arg("_initial")))
.def("getInitialVelocity", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getInitialVelocity(); })
.def("setAcceleration", [](dart::dynamics::DegreeOfFreedom *self, double _acceleration) -> void { return self->setAcceleration(_acceleration); }, (::boost::python::arg("_acceleration")))
.def("getAcceleration", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getAcceleration(); })
.def("resetAcceleration", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetAcceleration(); })
.def("setAccelerationLimits", [](dart::dynamics::DegreeOfFreedom *self, double _lowerLimit, double _upperLimit) -> void { return self->setAccelerationLimits(_lowerLimit, _upperLimit); }, (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("setAccelerationLimits", [](dart::dynamics::DegreeOfFreedom *self, const std::pair<double, double> & _limits) -> void { return self->setAccelerationLimits(_limits); }, (::boost::python::arg("_limits")))
.def("getAccelerationLimits", [](const dart::dynamics::DegreeOfFreedom *self) -> std::pair<double, double> { return self->getAccelerationLimits(); })
.def("setAccelerationLowerLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setAccelerationLowerLimit(_limit); }, (::boost::python::arg("_limit")))
.def("getAccelerationLowerLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getAccelerationLowerLimit(); })
.def("setAccelerationUpperLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setAccelerationUpperLimit(_limit); }, (::boost::python::arg("_limit")))
.def("getAccelerationUpperLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getAccelerationUpperLimit(); })
.def("setForce", [](dart::dynamics::DegreeOfFreedom *self, double _force) -> void { return self->setForce(_force); }, (::boost::python::arg("_force")))
.def("getForce", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getForce(); })
.def("resetForce", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetForce(); })
.def("setForceLimits", [](dart::dynamics::DegreeOfFreedom *self, double _lowerLimit, double _upperLimit) -> void { return self->setForceLimits(_lowerLimit, _upperLimit); }, (::boost::python::arg("_lowerLimit"), ::boost::python::arg("_upperLimit")))
.def("setForceLimits", [](dart::dynamics::DegreeOfFreedom *self, const std::pair<double, double> & _limits) -> void { return self->setForceLimits(_limits); }, (::boost::python::arg("_limits")))
.def("getForceLimits", [](const dart::dynamics::DegreeOfFreedom *self) -> std::pair<double, double> { return self->getForceLimits(); })
.def("setForceLowerLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setForceLowerLimit(_limit); }, (::boost::python::arg("_limit")))
.def("getForceLowerLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getForceLowerLimit(); })
.def("setForceUpperLimit", [](dart::dynamics::DegreeOfFreedom *self, double _limit) -> void { return self->setForceUpperLimit(_limit); }, (::boost::python::arg("_limit")))
.def("getForceUpperLimit", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getForceUpperLimit(); })
.def("setVelocityChange", [](dart::dynamics::DegreeOfFreedom *self, double _velocityChange) -> void { return self->setVelocityChange(_velocityChange); }, (::boost::python::arg("_velocityChange")))
.def("getVelocityChange", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getVelocityChange(); })
.def("resetVelocityChange", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetVelocityChange(); })
.def("setConstraintImpulse", [](dart::dynamics::DegreeOfFreedom *self, double _impulse) -> void { return self->setConstraintImpulse(_impulse); }, (::boost::python::arg("_impulse")))
.def("getConstraintImpulse", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getConstraintImpulse(); })
.def("resetConstraintImpulse", [](dart::dynamics::DegreeOfFreedom *self) -> void { return self->resetConstraintImpulse(); })
.def("setSpringStiffness", [](dart::dynamics::DegreeOfFreedom *self, double _k) -> void { return self->setSpringStiffness(_k); }, (::boost::python::arg("_k")))
.def("getSpringStiffness", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getSpringStiffness(); })
.def("setRestPosition", [](dart::dynamics::DegreeOfFreedom *self, double _q0) -> void { return self->setRestPosition(_q0); }, (::boost::python::arg("_q0")))
.def("getRestPosition", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getRestPosition(); })
.def("setDampingCoefficient", [](dart::dynamics::DegreeOfFreedom *self, double _coeff) -> void { return self->setDampingCoefficient(_coeff); }, (::boost::python::arg("_coeff")))
.def("getDampingCoefficient", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getDampingCoefficient(); })
.def("setCoulombFriction", [](dart::dynamics::DegreeOfFreedom *self, double _friction) -> void { return self->setCoulombFriction(_friction); }, (::boost::python::arg("_friction")))
.def("getCoulombFriction", [](const dart::dynamics::DegreeOfFreedom *self) -> double { return self->getCoulombFriction(); })
.def("getJoint", [](dart::dynamics::DegreeOfFreedom *self) -> dart::dynamics::Joint * { return self->getJoint(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::JointPtr> >())
.def("getSkeleton", [](dart::dynamics::DegreeOfFreedom *self) -> dart::dynamics::SkeletonPtr { return self->getSkeleton(); })
.def("getChildBodyNode", [](dart::dynamics::DegreeOfFreedom *self) -> dart::dynamics::BodyNode * { return self->getChildBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
.def("getParentBodyNode", [](dart::dynamics::DegreeOfFreedom *self) -> dart::dynamics::BodyNode * { return self->getParentBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::BodyNodePtr> >())
;
}

/* footer */
