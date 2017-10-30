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

void _ZN4dart8dynamics12GenericJointINS_4math8SE3SpaceEEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::GenericJoint<dart::math::SE3Space>, ::boost::noncopyable >("SE3Joint", boost::python::no_init)
.def("hasGenericJointAspect", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> bool { return self->hasGenericJointAspect(); })
.def("getGenericJointAspect", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> dart::dynamics::GenericJoint<dart::math::SE3Space>::Aspect * { return self->getGenericJointAspect(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("setGenericJointAspect", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::Aspect * aspect) -> void { return self->setGenericJointAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removeGenericJointAspect", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> void { return self->removeGenericJointAspect(); })
.def("releaseGenericJointAspect", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> std::unique_ptr<dart::dynamics::GenericJoint<dart::math::SE3Space>::Aspect> { return self->releaseGenericJointAspect(); })
.def("setProperties", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::Properties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("setProperties", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::UniqueProperties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("setAspectState", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::AspectState & state) -> void { return self->setAspectState(state); }, (::boost::python::arg("state")))
.def("setAspectProperties", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getGenericJointProperties", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> dart::dynamics::GenericJoint<dart::math::SE3Space>::Properties { return self->getGenericJointProperties(); })
.def("copy", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::ThisClass & otherJoint) -> void { return self->copy(otherJoint); }, (::boost::python::arg("otherJoint")))
.def("copy", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::ThisClass * otherJoint) -> void { return self->copy(otherJoint); }, (::boost::python::arg("otherJoint")))
.def("getDof", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> dart::dynamics::DegreeOfFreedom * { return self->getDof(index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("index")))
.def("getNumDofs", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> std::size_t { return self->getNumDofs(); })
.def("setDofName", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, const std::string & name) -> const std::string & { return self->setDofName(index, name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("index"), ::boost::python::arg("name")))
.def("setDofName", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, const std::string & name, bool preserveName) -> const std::string & { return self->setDofName(index, name, preserveName); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("index"), ::boost::python::arg("name"), ::boost::python::arg("preserveName")))
.def("preserveDofName", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, bool preserve) -> void { return self->preserveDofName(index, preserve); }, (::boost::python::arg("index"), ::boost::python::arg("preserve")))
.def("isDofNamePreserved", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> bool { return self->isDofNamePreserved(index); }, (::boost::python::arg("index")))
.def("getDofName", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> const std::string & { return self->getDofName(index); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("index")))
.def("getIndexInSkeleton", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> std::size_t { return self->getIndexInSkeleton(index); }, (::boost::python::arg("index")))
.def("getIndexInTree", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> std::size_t { return self->getIndexInTree(index); }, (::boost::python::arg("index")))
.def("setCommand", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double command) -> void { return self->setCommand(index, command); }, (::boost::python::arg("index"), ::boost::python::arg("command")))
.def("getCommand", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getCommand(index); }, (::boost::python::arg("index")))
.def("setCommands", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const Eigen::VectorXd & commands) -> void { return self->setCommands(commands); }, (::boost::python::arg("commands")))
.def("getCommands", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> Eigen::VectorXd { return self->getCommands(); })
.def("resetCommands", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> void { return self->resetCommands(); })
.def("setPosition", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double position) -> void { return self->setPosition(index, position); }, (::boost::python::arg("index"), ::boost::python::arg("position")))
.def("getPosition", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getPosition(index); }, (::boost::python::arg("index")))
.def("setPositions", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const Eigen::VectorXd & positions) -> void { return self->setPositions(positions); }, (::boost::python::arg("positions")))
.def("getPositions", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> Eigen::VectorXd { return self->getPositions(); })
.def("setPositionLowerLimit", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double position) -> void { return self->setPositionLowerLimit(index, position); }, (::boost::python::arg("index"), ::boost::python::arg("position")))
.def("getPositionLowerLimit", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getPositionLowerLimit(index); }, (::boost::python::arg("index")))
.def("setPositionUpperLimit", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double position) -> void { return self->setPositionUpperLimit(index, position); }, (::boost::python::arg("index"), ::boost::python::arg("position")))
.def("getPositionUpperLimit", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getPositionUpperLimit(index); }, (::boost::python::arg("index")))
.def("hasPositionLimit", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> bool { return self->hasPositionLimit(index); }, (::boost::python::arg("index")))
.def("resetPosition", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> void { return self->resetPosition(index); }, (::boost::python::arg("index")))
.def("resetPositions", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> void { return self->resetPositions(); })
.def("setInitialPosition", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double initial) -> void { return self->setInitialPosition(index, initial); }, (::boost::python::arg("index"), ::boost::python::arg("initial")))
.def("getInitialPosition", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getInitialPosition(index); }, (::boost::python::arg("index")))
.def("setInitialPositions", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const Eigen::VectorXd & initial) -> void { return self->setInitialPositions(initial); }, (::boost::python::arg("initial")))
.def("getInitialPositions", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> Eigen::VectorXd { return self->getInitialPositions(); })
.def("setPositionsStatic", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::Vector & positions) -> void { return self->setPositionsStatic(positions); }, (::boost::python::arg("positions")))
.def("getPositionsStatic", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> const dart::dynamics::GenericJoint<dart::math::SE3Space>::Vector & { return self->getPositionsStatic(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setVelocitiesStatic", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::Vector & velocities) -> void { return self->setVelocitiesStatic(velocities); }, (::boost::python::arg("velocities")))
.def("getVelocitiesStatic", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> const dart::dynamics::GenericJoint<dart::math::SE3Space>::Vector & { return self->getVelocitiesStatic(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setAccelerationsStatic", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::Vector & accels) -> void { return self->setAccelerationsStatic(accels); }, (::boost::python::arg("accels")))
.def("getAccelerationsStatic", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> const dart::dynamics::GenericJoint<dart::math::SE3Space>::Vector & { return self->getAccelerationsStatic(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setVelocity", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double velocity) -> void { return self->setVelocity(index, velocity); }, (::boost::python::arg("index"), ::boost::python::arg("velocity")))
.def("getVelocity", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getVelocity(index); }, (::boost::python::arg("index")))
.def("setVelocities", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const Eigen::VectorXd & velocities) -> void { return self->setVelocities(velocities); }, (::boost::python::arg("velocities")))
.def("getVelocities", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> Eigen::VectorXd { return self->getVelocities(); })
.def("setVelocityLowerLimit", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double velocity) -> void { return self->setVelocityLowerLimit(index, velocity); }, (::boost::python::arg("index"), ::boost::python::arg("velocity")))
.def("getVelocityLowerLimit", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getVelocityLowerLimit(index); }, (::boost::python::arg("index")))
.def("setVelocityUpperLimit", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double velocity) -> void { return self->setVelocityUpperLimit(index, velocity); }, (::boost::python::arg("index"), ::boost::python::arg("velocity")))
.def("getVelocityUpperLimit", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getVelocityUpperLimit(index); }, (::boost::python::arg("index")))
.def("resetVelocity", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> void { return self->resetVelocity(index); }, (::boost::python::arg("index")))
.def("resetVelocities", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> void { return self->resetVelocities(); })
.def("setInitialVelocity", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double initial) -> void { return self->setInitialVelocity(index, initial); }, (::boost::python::arg("index"), ::boost::python::arg("initial")))
.def("getInitialVelocity", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getInitialVelocity(index); }, (::boost::python::arg("index")))
.def("setInitialVelocities", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const Eigen::VectorXd & initial) -> void { return self->setInitialVelocities(initial); }, (::boost::python::arg("initial")))
.def("getInitialVelocities", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> Eigen::VectorXd { return self->getInitialVelocities(); })
.def("setAcceleration", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double acceleration) -> void { return self->setAcceleration(index, acceleration); }, (::boost::python::arg("index"), ::boost::python::arg("acceleration")))
.def("getAcceleration", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getAcceleration(index); }, (::boost::python::arg("index")))
.def("setAccelerations", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const Eigen::VectorXd & accelerations) -> void { return self->setAccelerations(accelerations); }, (::boost::python::arg("accelerations")))
.def("getAccelerations", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> Eigen::VectorXd { return self->getAccelerations(); })
.def("setAccelerationLowerLimit", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double acceleration) -> void { return self->setAccelerationLowerLimit(index, acceleration); }, (::boost::python::arg("index"), ::boost::python::arg("acceleration")))
.def("getAccelerationLowerLimit", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getAccelerationLowerLimit(index); }, (::boost::python::arg("index")))
.def("setAccelerationUpperLimit", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double acceleration) -> void { return self->setAccelerationUpperLimit(index, acceleration); }, (::boost::python::arg("index"), ::boost::python::arg("acceleration")))
.def("getAccelerationUpperLimit", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getAccelerationUpperLimit(index); }, (::boost::python::arg("index")))
.def("resetAccelerations", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> void { return self->resetAccelerations(); })
.def("setForce", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double force) -> void { return self->setForce(index, force); }, (::boost::python::arg("index"), ::boost::python::arg("force")))
.def("getForce", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getForce(index); }, (::boost::python::arg("index")))
.def("setForces", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const Eigen::VectorXd & forces) -> void { return self->setForces(forces); }, (::boost::python::arg("forces")))
.def("getForces", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> Eigen::VectorXd { return self->getForces(); })
.def("setForceLowerLimit", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double force) -> void { return self->setForceLowerLimit(index, force); }, (::boost::python::arg("index"), ::boost::python::arg("force")))
.def("getForceLowerLimit", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getForceLowerLimit(index); }, (::boost::python::arg("index")))
.def("setForceUpperLimit", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double force) -> void { return self->setForceUpperLimit(index, force); }, (::boost::python::arg("index"), ::boost::python::arg("force")))
.def("getForceUpperLimit", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getForceUpperLimit(index); }, (::boost::python::arg("index")))
.def("resetForces", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> void { return self->resetForces(); })
.def("setVelocityChange", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double velocityChange) -> void { return self->setVelocityChange(index, velocityChange); }, (::boost::python::arg("index"), ::boost::python::arg("velocityChange")))
.def("getVelocityChange", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getVelocityChange(index); }, (::boost::python::arg("index")))
.def("resetVelocityChanges", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> void { return self->resetVelocityChanges(); })
.def("setConstraintImpulse", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double impulse) -> void { return self->setConstraintImpulse(index, impulse); }, (::boost::python::arg("index"), ::boost::python::arg("impulse")))
.def("getConstraintImpulse", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getConstraintImpulse(index); }, (::boost::python::arg("index")))
.def("resetConstraintImpulses", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> void { return self->resetConstraintImpulses(); })
.def("integratePositions", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, double dt) -> void { return self->integratePositions(dt); }, (::boost::python::arg("dt")))
.def("integrateVelocities", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, double dt) -> void { return self->integrateVelocities(dt); }, (::boost::python::arg("dt")))
.def("getPositionDifferences", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const Eigen::VectorXd & q2, const Eigen::VectorXd & q1) -> Eigen::VectorXd { return self->getPositionDifferences(q2, q1); }, (::boost::python::arg("q2"), ::boost::python::arg("q1")))
.def("getPositionDifferencesStatic", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::Vector & q2, const dart::dynamics::GenericJoint<dart::math::SE3Space>::Vector & q1) -> dart::dynamics::GenericJoint<dart::math::SE3Space>::Vector { return self->getPositionDifferencesStatic(q2, q1); }, (::boost::python::arg("q2"), ::boost::python::arg("q1")))
.def("setSpringStiffness", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double k) -> void { return self->setSpringStiffness(index, k); }, (::boost::python::arg("index"), ::boost::python::arg("k")))
.def("getSpringStiffness", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getSpringStiffness(index); }, (::boost::python::arg("index")))
.def("setRestPosition", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double q0) -> void { return self->setRestPosition(index, q0); }, (::boost::python::arg("index"), ::boost::python::arg("q0")))
.def("getRestPosition", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getRestPosition(index); }, (::boost::python::arg("index")))
.def("setDampingCoefficient", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double d) -> void { return self->setDampingCoefficient(index, d); }, (::boost::python::arg("index"), ::boost::python::arg("d")))
.def("getDampingCoefficient", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getDampingCoefficient(index); }, (::boost::python::arg("index")))
.def("setCoulombFriction", [](dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index, double friction) -> void { return self->setCoulombFriction(index, friction); }, (::boost::python::arg("index"), ::boost::python::arg("friction")))
.def("getCoulombFriction", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, std::size_t index) -> double { return self->getCoulombFriction(index); }, (::boost::python::arg("index")))
.def("computePotentialEnergy", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> double { return self->computePotentialEnergy(); })
.def("getBodyConstraintWrench", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> Eigen::Vector6d { return self->getBodyConstraintWrench(); })
.def("getRelativeJacobian", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> const dart::math::Jacobian { return self->getRelativeJacobian(); })
.def("getRelativeJacobianStatic", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> const dart::dynamics::GenericJoint<dart::math::SE3Space>::JacobianMatrix & { return self->getRelativeJacobianStatic(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeJacobian", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const Eigen::VectorXd & positions) -> dart::math::Jacobian { return self->getRelativeJacobian(positions); }, (::boost::python::arg("positions")))
.def("getRelativeJacobianStatic", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self, const dart::dynamics::GenericJoint<dart::math::SE3Space>::Vector & positions) -> dart::dynamics::GenericJoint<dart::math::SE3Space>::JacobianMatrix { return self->getRelativeJacobianStatic(positions); }, (::boost::python::arg("positions")))
.def("getRelativeJacobianTimeDeriv", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> const dart::math::Jacobian { return self->getRelativeJacobianTimeDeriv(); })
.def("getRelativeJacobianTimeDerivStatic", [](const dart::dynamics::GenericJoint<dart::math::SE3Space> *self) -> const dart::dynamics::GenericJoint<dart::math::SE3Space>::JacobianMatrix & { return self->getRelativeJacobianTimeDerivStatic(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.add_static_property("NumDofs", ::boost::python::make_getter(dart::dynamics::GenericJoint<dart::math::SE3Space>::NumDofs))
;
}

/* footer */
