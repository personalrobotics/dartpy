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

void _ZN4dart8dynamics12ZeroDofJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ZeroDofJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Joint > >("ZeroDofJoint", boost::python::no_init)
.def("getZeroDofJointProperties", [](const dart::dynamics::ZeroDofJoint *self) -> dart::dynamics::ZeroDofJoint::Properties { return self->getZeroDofJointProperties(); })
.def("getDof", [](dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_) -> dart::dynamics::DegreeOfFreedom * { return self->getDof(_arg0_); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_arg0_")))
.def("setDofName", [](dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_, const std::string & _arg1_, bool _arg2_) -> const std::string & { return self->setDofName(_arg0_, _arg1_, _arg2_); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_arg0_"), ::boost::python::arg("_arg1_"), ::boost::python::arg("_arg2_")))
.def("preserveDofName", [](dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_, bool _arg1_) -> void { return self->preserveDofName(_arg0_, _arg1_); }, (::boost::python::arg("_arg0_"), ::boost::python::arg("_arg1_")))
.def("isDofNamePreserved", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_) -> bool { return self->isDofNamePreserved(_arg0_); }, (::boost::python::arg("_arg0_")))
.def("getDofName", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_) -> const std::string & { return self->getDofName(_arg0_); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_arg0_")))
.def("getNumDofs", [](const dart::dynamics::ZeroDofJoint *self) -> std::size_t { return self->getNumDofs(); })
.def("getIndexInSkeleton", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> std::size_t { return self->getIndexInSkeleton(_index); }, (::boost::python::arg("_index")))
.def("getIndexInTree", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> std::size_t { return self->getIndexInTree(_index); }, (::boost::python::arg("_index")))
.def("setCommand", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _command) -> void { return self->setCommand(_index, _command); }, (::boost::python::arg("_index"), ::boost::python::arg("_command")))
.def("getCommand", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getCommand(_index); }, (::boost::python::arg("_index")))
.def("setCommands", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _commands) -> void { return self->setCommands(_commands); }, (::boost::python::arg("_commands")))
.def("getCommands", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getCommands(); })
.def("resetCommands", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetCommands(); })
.def("setPosition", [](dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_, double _arg1_) -> void { return self->setPosition(_arg0_, _arg1_); }, (::boost::python::arg("_arg0_"), ::boost::python::arg("_arg1_")))
.def("getPosition", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getPosition(_index); }, (::boost::python::arg("_index")))
.def("setPositions", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _positions) -> void { return self->setPositions(_positions); }, (::boost::python::arg("_positions")))
.def("getPositions", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getPositions(); })
.def("setPositionLowerLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _position) -> void { return self->setPositionLowerLimit(_index, _position); }, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionLowerLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getPositionLowerLimit(_index); }, (::boost::python::arg("_index")))
.def("setPositionLowerLimits", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & lowerLimits) -> void { return self->setPositionLowerLimits(lowerLimits); }, (::boost::python::arg("lowerLimits")))
.def("getPositionLowerLimits", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getPositionLowerLimits(); })
.def("setPositionUpperLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t index, double position) -> void { return self->setPositionUpperLimit(index, position); }, (::boost::python::arg("index"), ::boost::python::arg("position")))
.def("getPositionUpperLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t index) -> double { return self->getPositionUpperLimit(index); }, (::boost::python::arg("index")))
.def("setPositionUpperLimits", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & upperLimits) -> void { return self->setPositionUpperLimits(upperLimits); }, (::boost::python::arg("upperLimits")))
.def("getPositionUpperLimits", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getPositionUpperLimits(); })
.def("hasPositionLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> bool { return self->hasPositionLimit(_index); }, (::boost::python::arg("_index")))
.def("resetPosition", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> void { return self->resetPosition(_index); }, (::boost::python::arg("_index")))
.def("resetPositions", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetPositions(); })
.def("setInitialPosition", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _initial) -> void { return self->setInitialPosition(_index, _initial); }, (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialPosition", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getInitialPosition(_index); }, (::boost::python::arg("_index")))
.def("setInitialPositions", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _initial) -> void { return self->setInitialPositions(_initial); }, (::boost::python::arg("_initial")))
.def("getInitialPositions", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getInitialPositions(); })
.def("setVelocity", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _velocity) -> void { return self->setVelocity(_index, _velocity); }, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocity", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getVelocity(_index); }, (::boost::python::arg("_index")))
.def("setVelocities", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _velocities) -> void { return self->setVelocities(_velocities); }, (::boost::python::arg("_velocities")))
.def("getVelocities", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getVelocities(); })
.def("setVelocityLowerLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _velocity) -> void { return self->setVelocityLowerLimit(_index, _velocity); }, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityLowerLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getVelocityLowerLimit(_index); }, (::boost::python::arg("_index")))
.def("setVelocityLowerLimits", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & lowerLimits) -> void { return self->setVelocityLowerLimits(lowerLimits); }, (::boost::python::arg("lowerLimits")))
.def("getVelocityLowerLimits", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getVelocityLowerLimits(); })
.def("setVelocityUpperLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _velocity) -> void { return self->setVelocityUpperLimit(_index, _velocity); }, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityUpperLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getVelocityUpperLimit(_index); }, (::boost::python::arg("_index")))
.def("setVelocityUpperLimits", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & upperLimits) -> void { return self->setVelocityUpperLimits(upperLimits); }, (::boost::python::arg("upperLimits")))
.def("getVelocityUpperLimits", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getVelocityUpperLimits(); })
.def("resetVelocity", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> void { return self->resetVelocity(_index); }, (::boost::python::arg("_index")))
.def("resetVelocities", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetVelocities(); })
.def("setInitialVelocity", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _initial) -> void { return self->setInitialVelocity(_index, _initial); }, (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialVelocity", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getInitialVelocity(_index); }, (::boost::python::arg("_index")))
.def("setInitialVelocities", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _initial) -> void { return self->setInitialVelocities(_initial); }, (::boost::python::arg("_initial")))
.def("getInitialVelocities", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getInitialVelocities(); })
.def("setAcceleration", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _acceleration) -> void { return self->setAcceleration(_index, _acceleration); }, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAcceleration", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getAcceleration(_index); }, (::boost::python::arg("_index")))
.def("setAccelerations", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _accelerations) -> void { return self->setAccelerations(_accelerations); }, (::boost::python::arg("_accelerations")))
.def("getAccelerations", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getAccelerations(); })
.def("resetAccelerations", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetAccelerations(); })
.def("setAccelerationLowerLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationLowerLimit(_index, _acceleration); }, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationLowerLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getAccelerationLowerLimit(_index); }, (::boost::python::arg("_index")))
.def("setAccelerationLowerLimits", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & lowerLimits) -> void { return self->setAccelerationLowerLimits(lowerLimits); }, (::boost::python::arg("lowerLimits")))
.def("getAccelerationLowerLimits", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getAccelerationLowerLimits(); })
.def("setAccelerationUpperLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationUpperLimit(_index, _acceleration); }, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationUpperLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getAccelerationUpperLimit(_index); }, (::boost::python::arg("_index")))
.def("setAccelerationUpperLimits", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & upperLimits) -> void { return self->setAccelerationUpperLimits(upperLimits); }, (::boost::python::arg("upperLimits")))
.def("getAccelerationUpperLimits", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getAccelerationUpperLimits(); })
.def("setForce", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _force) -> void { return self->setForce(_index, _force); }, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForce", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getForce(_index); }, (::boost::python::arg("_index")))
.def("setForces", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _forces) -> void { return self->setForces(_forces); }, (::boost::python::arg("_forces")))
.def("getForces", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getForces(); })
.def("resetForces", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetForces(); })
.def("setForceLowerLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _force) -> void { return self->setForceLowerLimit(_index, _force); }, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceLowerLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getForceLowerLimit(_index); }, (::boost::python::arg("_index")))
.def("setForceLowerLimits", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & lowerLimits) -> void { return self->setForceLowerLimits(lowerLimits); }, (::boost::python::arg("lowerLimits")))
.def("getForceLowerLimits", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getForceLowerLimits(); })
.def("setForceUpperLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _force) -> void { return self->setForceUpperLimit(_index, _force); }, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceUpperLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getForceUpperLimit(_index); }, (::boost::python::arg("_index")))
.def("setForceUpperLimits", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & upperLimits) -> void { return self->setForceUpperLimits(upperLimits); }, (::boost::python::arg("upperLimits")))
.def("getForceUpperLimits", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getForceUpperLimits(); })
.def("setVelocityChange", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _velocityChange) -> void { return self->setVelocityChange(_index, _velocityChange); }, (::boost::python::arg("_index"), ::boost::python::arg("_velocityChange")))
.def("getVelocityChange", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getVelocityChange(_index); }, (::boost::python::arg("_index")))
.def("resetVelocityChanges", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetVelocityChanges(); })
.def("setConstraintImpulse", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _impulse) -> void { return self->setConstraintImpulse(_index, _impulse); }, (::boost::python::arg("_index"), ::boost::python::arg("_impulse")))
.def("getConstraintImpulse", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getConstraintImpulse(_index); }, (::boost::python::arg("_index")))
.def("resetConstraintImpulses", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetConstraintImpulses(); })
.def("integratePositions", [](dart::dynamics::ZeroDofJoint *self, double _dt) -> void { return self->integratePositions(_dt); }, (::boost::python::arg("_dt")))
.def("integrateVelocities", [](dart::dynamics::ZeroDofJoint *self, double _dt) -> void { return self->integrateVelocities(_dt); }, (::boost::python::arg("_dt")))
.def("getPositionDifferences", [](const dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _q2, const Eigen::VectorXd & _q1) -> Eigen::VectorXd { return self->getPositionDifferences(_q2, _q1); }, (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("setSpringStiffness", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _k) -> void { return self->setSpringStiffness(_index, _k); }, (::boost::python::arg("_index"), ::boost::python::arg("_k")))
.def("getSpringStiffness", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getSpringStiffness(_index); }, (::boost::python::arg("_index")))
.def("setRestPosition", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _q0) -> void { return self->setRestPosition(_index, _q0); }, (::boost::python::arg("_index"), ::boost::python::arg("_q0")))
.def("getRestPosition", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getRestPosition(_index); }, (::boost::python::arg("_index")))
.def("setDampingCoefficient", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _d) -> void { return self->setDampingCoefficient(_index, _d); }, (::boost::python::arg("_index"), ::boost::python::arg("_d")))
.def("getDampingCoefficient", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getDampingCoefficient(_index); }, (::boost::python::arg("_index")))
.def("setCoulombFriction", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _friction) -> void { return self->setCoulombFriction(_index, _friction); }, (::boost::python::arg("_index"), ::boost::python::arg("_friction")))
.def("getCoulombFriction", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getCoulombFriction(_index); }, (::boost::python::arg("_index")))
.def("computePotentialEnergy", [](const dart::dynamics::ZeroDofJoint *self) -> double { return self->computePotentialEnergy(); })
.def("getBodyConstraintWrench", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::Vector6d { return self->getBodyConstraintWrench(); })
;
}

/* footer */
