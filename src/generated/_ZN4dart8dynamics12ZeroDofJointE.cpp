#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics12ZeroDofJointE_docstring[] = R"CHIMERA_STRING( class ZeroDofJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint25getZeroDofJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this ZeroDofJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint6getDofEm_docstring[] = R"CHIMERA_STRING( Get an object to access the _index-th degree of freedom (generalized
 coordinate) of this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint10setDofNameEmRKSsb_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::setName()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint15preserveDofNameEmb_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::preserveName()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint18isDofNamePreservedEm_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::isNamePreserved()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint10getDofNameEm_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::getName()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint10getNumDofsEv_docstring[] = R"CHIMERA_STRING( Get number of generalized coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint18getIndexInSkeletonEm_docstring[] = R"CHIMERA_STRING( Get a unique index in skeleton of a generalized coordinate in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint14getIndexInTreeEm_docstring[] = R"CHIMERA_STRING( Get a unique index in the kinematic tree of a generalized coordinate in
 this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint10setCommandEmd_docstring[] = R"CHIMERA_STRING( Set a single command
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint10getCommandEm_docstring[] = R"CHIMERA_STRING( Get a single command
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint11setCommandsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set all commands for this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint11getCommandsEv_docstring[] = R"CHIMERA_STRING( Get all commands for this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint13resetCommandsEv_docstring[] = R"CHIMERA_STRING( Set all the commands for this Joint to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint11setPositionEmd_docstring[] = R"CHIMERA_STRING( Set the position of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint11getPositionEm_docstring[] = R"CHIMERA_STRING( Get the position of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the positions of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint12getPositionsEv_docstring[] = R"CHIMERA_STRING( Get the positions of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint21setPositionLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for position
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint21getPositionLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for position
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint21setPositionUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for position
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint21getPositionUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for position
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint16hasPositionLimitEm_docstring[] = R"CHIMERA_STRING( Get whether the position of a generalized coordinate has limits.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint13resetPositionEm_docstring[] = R"CHIMERA_STRING( Set the position of this generalized coordinate to its initial position
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint14resetPositionsEv_docstring[] = R"CHIMERA_STRING( Set the positions of all generalized coordinates in this Joint to their
 initial positions
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint18setInitialPositionEmd_docstring[] = R"CHIMERA_STRING( Change the position that resetPositions() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint18getInitialPositionEm_docstring[] = R"CHIMERA_STRING( Get the position that resetPosition() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint19setInitialPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Change the positions that resetPositions() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint19getInitialPositionsEv_docstring[] = R"CHIMERA_STRING( Get the positions that resetPositions() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint11setVelocityEmd_docstring[] = R"CHIMERA_STRING( Set the velocity of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint11getVelocityEm_docstring[] = R"CHIMERA_STRING( Get the velocity of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint13setVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the velocities of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint13getVelocitiesEv_docstring[] = R"CHIMERA_STRING( Get the velocities of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint21setVelocityLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for velocity
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint21getVelocityLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint21setVelocityUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for velocity
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint21getVelocityUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint13resetVelocityEm_docstring[] = R"CHIMERA_STRING( Set the velocity of a generalized coordinate in this Joint to its initial
 velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint15resetVelocitiesEv_docstring[] = R"CHIMERA_STRING( Set the velocities of all generalized coordinates in this Joint to their
 initial velocities
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint18setInitialVelocityEmd_docstring[] = R"CHIMERA_STRING( Change the velocity that resetVelocity() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint18getInitialVelocityEm_docstring[] = R"CHIMERA_STRING( Get the velocity that resetVelocity() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint20setInitialVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Change the velocities that resetVelocities() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint20getInitialVelocitiesEv_docstring[] = R"CHIMERA_STRING( Get the velocities that resetVelocities() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint15setAccelerationEmd_docstring[] = R"CHIMERA_STRING( Set the acceleration of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint15getAccelerationEm_docstring[] = R"CHIMERA_STRING( Get the acceleration of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint16setAccelerationsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the accelerations of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint16getAccelerationsEv_docstring[] = R"CHIMERA_STRING( Get the accelerations of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint18resetAccelerationsEv_docstring[] = R"CHIMERA_STRING( Set the accelerations of all generalized coordinates in this Joint to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint25setAccelerationLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for acceleration
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint25getAccelerationLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for acceleration
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint25setAccelerationUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for acceleration
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint25getAccelerationUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for acceleration
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint8setForceEmd_docstring[] = R"CHIMERA_STRING( Set the force of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint8getForceEm_docstring[] = R"CHIMERA_STRING( Get the force of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint9setForcesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the forces of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint9getForcesEv_docstring[] = R"CHIMERA_STRING( Get the forces of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint11resetForcesEv_docstring[] = R"CHIMERA_STRING( Set the forces of all generalized coordinates in this Joint to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint18setForceLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for force
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint18getForceLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for force
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint18setForceUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for force
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint18getForceUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for force
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint17setVelocityChangeEmd_docstring[] = R"CHIMERA_STRING( Set a single velocity change
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint17getVelocityChangeEm_docstring[] = R"CHIMERA_STRING( Get a single velocity change
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint20resetVelocityChangesEv_docstring[] = R"CHIMERA_STRING( Set zero all the velocity change
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint20setConstraintImpulseEmd_docstring[] = R"CHIMERA_STRING( Set a single constraint impulse
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint20getConstraintImpulseEm_docstring[] = R"CHIMERA_STRING( Get a single constraint impulse
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint23resetConstraintImpulsesEv_docstring[] = R"CHIMERA_STRING( Set zero all the constraint impulses
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint18integratePositionsEd_docstring[] = R"CHIMERA_STRING( Integrate positions using Euler method
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint19integrateVelocitiesEd_docstring[] = R"CHIMERA_STRING( Integrate velocities using Euler method
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint22getPositionDifferencesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES6__docstring[] = R"CHIMERA_STRING( Return the difference of two generalized coordinates which are measured in
 the configuration space of this Skeleton.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint18setSpringStiffnessEmd_docstring[] = R"CHIMERA_STRING( 
\
{ 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint18getSpringStiffnessEm_docstring[] = R"CHIMERA_STRING( Get stiffness of joint spring force.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint15setRestPositionEmd_docstring[] = R"CHIMERA_STRING( Set rest position of spring force.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint15getRestPositionEm_docstring[] = R"CHIMERA_STRING( Get rest position of spring force.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint21setDampingCoefficientEmd_docstring[] = R"CHIMERA_STRING( Set coefficient of joint damping (viscous friction) force.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint21getDampingCoefficientEm_docstring[] = R"CHIMERA_STRING( Get coefficient of joint damping (viscous friction) force.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics12ZeroDofJoint18setCoulombFrictionEmd_docstring[] = R"CHIMERA_STRING( Set joint Coulomb friction froce.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint18getCoulombFrictionEm_docstring[] = R"CHIMERA_STRING( Get joint Coulomb friction froce.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint18getPotentialEnergyEv_docstring[] = R"CHIMERA_STRING( Get potential energy
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics12ZeroDofJoint23getBodyConstraintWrenchEv_docstring[] = R"CHIMERA_STRING( Get constraint wrench expressed in body node frame
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics12ZeroDofJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ZeroDofJoint, ::boost::noncopyable, ::boost::python::bases<dart::dynamics::Joint > >("ZeroDofJoint", _ZN4dart8dynamics12ZeroDofJointE_docstring, boost::python::no_init)
.def("getZeroDofJointProperties", [](const dart::dynamics::ZeroDofJoint *self) -> dart::dynamics::ZeroDofJoint::Properties { return self->getZeroDofJointProperties(); }, _ZNK4dart8dynamics12ZeroDofJoint25getZeroDofJointPropertiesEv_docstring)
.def("getDof", [](dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_) -> dart::dynamics::DegreeOfFreedom * { return self->getDof(_arg0_); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), _ZN4dart8dynamics12ZeroDofJoint6getDofEm_docstring, (::boost::python::arg("_arg0_")))
.def("setDofName", [](dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_, const std::string & _arg1_, bool _arg2_) -> const std::string & { return self->setDofName(_arg0_, _arg1_, _arg2_); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics12ZeroDofJoint10setDofNameEmRKSsb_docstring, (::boost::python::arg("_arg0_"), ::boost::python::arg("_arg1_"), ::boost::python::arg("_arg2_")))
.def("preserveDofName", [](dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_, bool _arg1_) -> void { return self->preserveDofName(_arg0_, _arg1_); }, _ZN4dart8dynamics12ZeroDofJoint15preserveDofNameEmb_docstring, (::boost::python::arg("_arg0_"), ::boost::python::arg("_arg1_")))
.def("isDofNamePreserved", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_) -> bool { return self->isDofNamePreserved(_arg0_); }, _ZNK4dart8dynamics12ZeroDofJoint18isDofNamePreservedEm_docstring, (::boost::python::arg("_arg0_")))
.def("getDofName", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_) -> const std::string & { return self->getDofName(_arg0_); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics12ZeroDofJoint10getDofNameEm_docstring, (::boost::python::arg("_arg0_")))
.def("getNumDofs", [](const dart::dynamics::ZeroDofJoint *self) -> std::size_t { return self->getNumDofs(); }, _ZNK4dart8dynamics12ZeroDofJoint10getNumDofsEv_docstring)
.def("getIndexInSkeleton", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> std::size_t { return self->getIndexInSkeleton(_index); }, _ZNK4dart8dynamics12ZeroDofJoint18getIndexInSkeletonEm_docstring, (::boost::python::arg("_index")))
.def("getIndexInTree", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> std::size_t { return self->getIndexInTree(_index); }, _ZNK4dart8dynamics12ZeroDofJoint14getIndexInTreeEm_docstring, (::boost::python::arg("_index")))
.def("setCommand", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _command) -> void { return self->setCommand(_index, _command); }, _ZN4dart8dynamics12ZeroDofJoint10setCommandEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_command")))
.def("getCommand", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getCommand(_index); }, _ZNK4dart8dynamics12ZeroDofJoint10getCommandEm_docstring, (::boost::python::arg("_index")))
.def("setCommands", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _commands) -> void { return self->setCommands(_commands); }, _ZN4dart8dynamics12ZeroDofJoint11setCommandsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_commands")))
.def("getCommands", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getCommands(); }, _ZNK4dart8dynamics12ZeroDofJoint11getCommandsEv_docstring)
.def("resetCommands", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetCommands(); }, _ZN4dart8dynamics12ZeroDofJoint13resetCommandsEv_docstring)
.def("setPosition", [](dart::dynamics::ZeroDofJoint *self, std::size_t _arg0_, double _arg1_) -> void { return self->setPosition(_arg0_, _arg1_); }, _ZN4dart8dynamics12ZeroDofJoint11setPositionEmd_docstring, (::boost::python::arg("_arg0_"), ::boost::python::arg("_arg1_")))
.def("getPosition", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getPosition(_index); }, _ZNK4dart8dynamics12ZeroDofJoint11getPositionEm_docstring, (::boost::python::arg("_index")))
.def("setPositions", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _positions) -> void { return self->setPositions(_positions); }, _ZN4dart8dynamics12ZeroDofJoint12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("getPositions", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getPositions(); }, _ZNK4dart8dynamics12ZeroDofJoint12getPositionsEv_docstring)
.def("setPositionLowerLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _position) -> void { return self->setPositionLowerLimit(_index, _position); }, _ZN4dart8dynamics12ZeroDofJoint21setPositionLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionLowerLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getPositionLowerLimit(_index); }, _ZNK4dart8dynamics12ZeroDofJoint21getPositionLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setPositionUpperLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _position) -> void { return self->setPositionUpperLimit(_index, _position); }, _ZN4dart8dynamics12ZeroDofJoint21setPositionUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionUpperLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getPositionUpperLimit(_index); }, _ZNK4dart8dynamics12ZeroDofJoint21getPositionUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("hasPositionLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> bool { return self->hasPositionLimit(_index); }, _ZNK4dart8dynamics12ZeroDofJoint16hasPositionLimitEm_docstring, (::boost::python::arg("_index")))
.def("resetPosition", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> void { return self->resetPosition(_index); }, _ZN4dart8dynamics12ZeroDofJoint13resetPositionEm_docstring, (::boost::python::arg("_index")))
.def("resetPositions", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetPositions(); }, _ZN4dart8dynamics12ZeroDofJoint14resetPositionsEv_docstring)
.def("setInitialPosition", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _initial) -> void { return self->setInitialPosition(_index, _initial); }, _ZN4dart8dynamics12ZeroDofJoint18setInitialPositionEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialPosition", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getInitialPosition(_index); }, _ZNK4dart8dynamics12ZeroDofJoint18getInitialPositionEm_docstring, (::boost::python::arg("_index")))
.def("setInitialPositions", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _initial) -> void { return self->setInitialPositions(_initial); }, _ZN4dart8dynamics12ZeroDofJoint19setInitialPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_initial")))
.def("getInitialPositions", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getInitialPositions(); }, _ZNK4dart8dynamics12ZeroDofJoint19getInitialPositionsEv_docstring)
.def("setVelocity", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _velocity) -> void { return self->setVelocity(_index, _velocity); }, _ZN4dart8dynamics12ZeroDofJoint11setVelocityEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocity", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getVelocity(_index); }, _ZNK4dart8dynamics12ZeroDofJoint11getVelocityEm_docstring, (::boost::python::arg("_index")))
.def("setVelocities", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _velocities) -> void { return self->setVelocities(_velocities); }, _ZN4dart8dynamics12ZeroDofJoint13setVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_velocities")))
.def("getVelocities", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getVelocities(); }, _ZNK4dart8dynamics12ZeroDofJoint13getVelocitiesEv_docstring)
.def("setVelocityLowerLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _velocity) -> void { return self->setVelocityLowerLimit(_index, _velocity); }, _ZN4dart8dynamics12ZeroDofJoint21setVelocityLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityLowerLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getVelocityLowerLimit(_index); }, _ZNK4dart8dynamics12ZeroDofJoint21getVelocityLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setVelocityUpperLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _velocity) -> void { return self->setVelocityUpperLimit(_index, _velocity); }, _ZN4dart8dynamics12ZeroDofJoint21setVelocityUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityUpperLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getVelocityUpperLimit(_index); }, _ZNK4dart8dynamics12ZeroDofJoint21getVelocityUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("resetVelocity", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> void { return self->resetVelocity(_index); }, _ZN4dart8dynamics12ZeroDofJoint13resetVelocityEm_docstring, (::boost::python::arg("_index")))
.def("resetVelocities", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetVelocities(); }, _ZN4dart8dynamics12ZeroDofJoint15resetVelocitiesEv_docstring)
.def("setInitialVelocity", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _initial) -> void { return self->setInitialVelocity(_index, _initial); }, _ZN4dart8dynamics12ZeroDofJoint18setInitialVelocityEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialVelocity", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getInitialVelocity(_index); }, _ZNK4dart8dynamics12ZeroDofJoint18getInitialVelocityEm_docstring, (::boost::python::arg("_index")))
.def("setInitialVelocities", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _initial) -> void { return self->setInitialVelocities(_initial); }, _ZN4dart8dynamics12ZeroDofJoint20setInitialVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_initial")))
.def("getInitialVelocities", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getInitialVelocities(); }, _ZNK4dart8dynamics12ZeroDofJoint20getInitialVelocitiesEv_docstring)
.def("setAcceleration", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _acceleration) -> void { return self->setAcceleration(_index, _acceleration); }, _ZN4dart8dynamics12ZeroDofJoint15setAccelerationEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAcceleration", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getAcceleration(_index); }, _ZNK4dart8dynamics12ZeroDofJoint15getAccelerationEm_docstring, (::boost::python::arg("_index")))
.def("setAccelerations", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _accelerations) -> void { return self->setAccelerations(_accelerations); }, _ZN4dart8dynamics12ZeroDofJoint16setAccelerationsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_accelerations")))
.def("getAccelerations", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getAccelerations(); }, _ZNK4dart8dynamics12ZeroDofJoint16getAccelerationsEv_docstring)
.def("resetAccelerations", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetAccelerations(); }, _ZN4dart8dynamics12ZeroDofJoint18resetAccelerationsEv_docstring)
.def("setAccelerationLowerLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationLowerLimit(_index, _acceleration); }, _ZN4dart8dynamics12ZeroDofJoint25setAccelerationLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationLowerLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getAccelerationLowerLimit(_index); }, _ZNK4dart8dynamics12ZeroDofJoint25getAccelerationLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setAccelerationUpperLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationUpperLimit(_index, _acceleration); }, _ZN4dart8dynamics12ZeroDofJoint25setAccelerationUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationUpperLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getAccelerationUpperLimit(_index); }, _ZNK4dart8dynamics12ZeroDofJoint25getAccelerationUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("setForce", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _force) -> void { return self->setForce(_index, _force); }, _ZN4dart8dynamics12ZeroDofJoint8setForceEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForce", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getForce(_index); }, _ZN4dart8dynamics12ZeroDofJoint8getForceEm_docstring, (::boost::python::arg("_index")))
.def("setForces", [](dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _forces) -> void { return self->setForces(_forces); }, _ZN4dart8dynamics12ZeroDofJoint9setForcesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_forces")))
.def("getForces", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::VectorXd { return self->getForces(); }, _ZNK4dart8dynamics12ZeroDofJoint9getForcesEv_docstring)
.def("resetForces", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetForces(); }, _ZN4dart8dynamics12ZeroDofJoint11resetForcesEv_docstring)
.def("setForceLowerLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _force) -> void { return self->setForceLowerLimit(_index, _force); }, _ZN4dart8dynamics12ZeroDofJoint18setForceLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceLowerLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getForceLowerLimit(_index); }, _ZNK4dart8dynamics12ZeroDofJoint18getForceLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setForceUpperLimit", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _force) -> void { return self->setForceUpperLimit(_index, _force); }, _ZN4dart8dynamics12ZeroDofJoint18setForceUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceUpperLimit", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getForceUpperLimit(_index); }, _ZNK4dart8dynamics12ZeroDofJoint18getForceUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("setVelocityChange", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _velocityChange) -> void { return self->setVelocityChange(_index, _velocityChange); }, _ZN4dart8dynamics12ZeroDofJoint17setVelocityChangeEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocityChange")))
.def("getVelocityChange", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getVelocityChange(_index); }, _ZNK4dart8dynamics12ZeroDofJoint17getVelocityChangeEm_docstring, (::boost::python::arg("_index")))
.def("resetVelocityChanges", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetVelocityChanges(); }, _ZN4dart8dynamics12ZeroDofJoint20resetVelocityChangesEv_docstring)
.def("setConstraintImpulse", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _impulse) -> void { return self->setConstraintImpulse(_index, _impulse); }, _ZN4dart8dynamics12ZeroDofJoint20setConstraintImpulseEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_impulse")))
.def("getConstraintImpulse", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getConstraintImpulse(_index); }, _ZNK4dart8dynamics12ZeroDofJoint20getConstraintImpulseEm_docstring, (::boost::python::arg("_index")))
.def("resetConstraintImpulses", [](dart::dynamics::ZeroDofJoint *self) -> void { return self->resetConstraintImpulses(); }, _ZN4dart8dynamics12ZeroDofJoint23resetConstraintImpulsesEv_docstring)
.def("integratePositions", [](dart::dynamics::ZeroDofJoint *self, double _dt) -> void { return self->integratePositions(_dt); }, _ZN4dart8dynamics12ZeroDofJoint18integratePositionsEd_docstring, (::boost::python::arg("_dt")))
.def("integrateVelocities", [](dart::dynamics::ZeroDofJoint *self, double _dt) -> void { return self->integrateVelocities(_dt); }, _ZN4dart8dynamics12ZeroDofJoint19integrateVelocitiesEd_docstring, (::boost::python::arg("_dt")))
.def("getPositionDifferences", [](const dart::dynamics::ZeroDofJoint *self, const Eigen::VectorXd & _q2, const Eigen::VectorXd & _q1) -> Eigen::VectorXd { return self->getPositionDifferences(_q2, _q1); }, _ZNK4dart8dynamics12ZeroDofJoint22getPositionDifferencesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES6__docstring, (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("setSpringStiffness", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _k) -> void { return self->setSpringStiffness(_index, _k); }, _ZN4dart8dynamics12ZeroDofJoint18setSpringStiffnessEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_k")))
.def("getSpringStiffness", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getSpringStiffness(_index); }, _ZNK4dart8dynamics12ZeroDofJoint18getSpringStiffnessEm_docstring, (::boost::python::arg("_index")))
.def("setRestPosition", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _q0) -> void { return self->setRestPosition(_index, _q0); }, _ZN4dart8dynamics12ZeroDofJoint15setRestPositionEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_q0")))
.def("getRestPosition", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getRestPosition(_index); }, _ZNK4dart8dynamics12ZeroDofJoint15getRestPositionEm_docstring, (::boost::python::arg("_index")))
.def("setDampingCoefficient", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _d) -> void { return self->setDampingCoefficient(_index, _d); }, _ZN4dart8dynamics12ZeroDofJoint21setDampingCoefficientEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_d")))
.def("getDampingCoefficient", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getDampingCoefficient(_index); }, _ZNK4dart8dynamics12ZeroDofJoint21getDampingCoefficientEm_docstring, (::boost::python::arg("_index")))
.def("setCoulombFriction", [](dart::dynamics::ZeroDofJoint *self, std::size_t _index, double _friction) -> void { return self->setCoulombFriction(_index, _friction); }, _ZN4dart8dynamics12ZeroDofJoint18setCoulombFrictionEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_friction")))
.def("getCoulombFriction", [](const dart::dynamics::ZeroDofJoint *self, std::size_t _index) -> double { return self->getCoulombFriction(_index); }, _ZNK4dart8dynamics12ZeroDofJoint18getCoulombFrictionEm_docstring, (::boost::python::arg("_index")))
.def("getPotentialEnergy", [](const dart::dynamics::ZeroDofJoint *self) -> double { return self->getPotentialEnergy(); }, _ZNK4dart8dynamics12ZeroDofJoint18getPotentialEnergyEv_docstring)
.def("getBodyConstraintWrench", [](const dart::dynamics::ZeroDofJoint *self) -> Eigen::Vector6d { return self->getBodyConstraintWrench(); }, _ZNK4dart8dynamics12ZeroDofJoint23getBodyConstraintWrenchEv_docstring)
;
}

/* footer */
