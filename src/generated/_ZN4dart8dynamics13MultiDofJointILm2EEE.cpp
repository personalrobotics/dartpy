#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EEE_docstring[] = R"CHIMERA_STRING( class MultiDofJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE13setPropertiesERKNS0_6detail23MultiDofJointPropertiesILm2EEE_docstring[] = R"CHIMERA_STRING( Set the Properties of this MultiDofJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE13setPropertiesERKNS0_6detail29MultiDofJointUniquePropertiesILm2EEE_docstring[] = R"CHIMERA_STRING( Set the Properties of this MultiDofJoint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE26getMultiDofJointPropertiesEv_docstring[] = R"CHIMERA_STRING( Get the Properties of this MultiDofJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE4copyERKS2__docstring[] = R"CHIMERA_STRING( Copy the Properties of another MultiDofJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE4copyEPKS2__docstring[] = R"CHIMERA_STRING( Copy the Properties of another MultiDofJoint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE6getDofEm_docstring[] = R"CHIMERA_STRING( Get an object to access the _index-th degree of freedom (generalized
 coordinate) of this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE10getNumDofsEv_docstring[] = R"CHIMERA_STRING( Get number of generalized coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE10setDofNameEmRKSsb_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::setName()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE15preserveDofNameEmb_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::preserveName()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE18isDofNamePreservedEm_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::isNamePreserved()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE10getDofNameEm_docstring[] = R"CHIMERA_STRING( Alternative to DegreeOfFreedom::getName()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE18getIndexInSkeletonEm_docstring[] = R"CHIMERA_STRING( Get a unique index in skeleton of a generalized coordinate in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE14getIndexInTreeEm_docstring[] = R"CHIMERA_STRING( Get a unique index in the kinematic tree of a generalized coordinate in
 this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE10setCommandEmd_docstring[] = R"CHIMERA_STRING( Set a single command
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE10getCommandEm_docstring[] = R"CHIMERA_STRING( Get a single command
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE11setCommandsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set all commands for this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE11getCommandsEv_docstring[] = R"CHIMERA_STRING( Get all commands for this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE13resetCommandsEv_docstring[] = R"CHIMERA_STRING( Set all the commands for this Joint to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE11setPositionEmd_docstring[] = R"CHIMERA_STRING( Set the position of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE11getPositionEm_docstring[] = R"CHIMERA_STRING( Get the position of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the positions of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE12getPositionsEv_docstring[] = R"CHIMERA_STRING( Get the positions of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE21setPositionLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for position
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE21getPositionLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for position
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE21setPositionUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for position
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE21getPositionUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for position
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE16hasPositionLimitEm_docstring[] = R"CHIMERA_STRING( Get whether the position of a generalized coordinate has limits.
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE13resetPositionEm_docstring[] = R"CHIMERA_STRING( Set the position of this generalized coordinate to its initial position
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE14resetPositionsEv_docstring[] = R"CHIMERA_STRING( Set the positions of all generalized coordinates in this Joint to their
 initial positions
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE18setInitialPositionEmd_docstring[] = R"CHIMERA_STRING( Change the position that resetPositions() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE18getInitialPositionEm_docstring[] = R"CHIMERA_STRING( Get the position that resetPosition() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE19setInitialPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Change the positions that resetPositions() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE19getInitialPositionsEv_docstring[] = R"CHIMERA_STRING( Get the positions that resetPositions() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE11setVelocityEmd_docstring[] = R"CHIMERA_STRING( Set the velocity of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE11getVelocityEm_docstring[] = R"CHIMERA_STRING( Get the velocity of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE13setVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the velocities of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE13getVelocitiesEv_docstring[] = R"CHIMERA_STRING( Get the velocities of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE21setVelocityLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for velocity
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE21getVelocityLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE21setVelocityUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for velocity
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE21getVelocityUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE13resetVelocityEm_docstring[] = R"CHIMERA_STRING( Set the velocity of a generalized coordinate in this Joint to its initial
 velocity
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE15resetVelocitiesEv_docstring[] = R"CHIMERA_STRING( Set the velocities of all generalized coordinates in this Joint to their
 initial velocities
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE18setInitialVelocityEmd_docstring[] = R"CHIMERA_STRING( Change the velocity that resetVelocity() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE18getInitialVelocityEm_docstring[] = R"CHIMERA_STRING( Get the velocity that resetVelocity() will give to this coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE20setInitialVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Change the velocities that resetVelocities() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE20getInitialVelocitiesEv_docstring[] = R"CHIMERA_STRING( Get the velocities that resetVelocities() will give to this Joint's
 coordinates
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE15setAccelerationEmd_docstring[] = R"CHIMERA_STRING( Set the acceleration of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE15getAccelerationEm_docstring[] = R"CHIMERA_STRING( Get the acceleration of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE16setAccelerationsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the accelerations of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE16getAccelerationsEv_docstring[] = R"CHIMERA_STRING( Get the accelerations of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE18resetAccelerationsEv_docstring[] = R"CHIMERA_STRING( Set the accelerations of all generalized coordinates in this Joint to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE25setAccelerationLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for acceleration
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE25getAccelerationLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for acceleration
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE25setAccelerationUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for acceleration
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE25getAccelerationUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for acceleration
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE18setPositionsStaticERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE_docstring[] = R"CHIMERA_STRING( Fixed-size version of setPositions()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE18getPositionsStaticEv_docstring[] = R"CHIMERA_STRING( Fixed-size version of getPositions()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE19setVelocitiesStaticERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE_docstring[] = R"CHIMERA_STRING( Fixed-size version of setVelocities()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE19getVelocitiesStaticEv_docstring[] = R"CHIMERA_STRING( Fixed-size version of getVelocities()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE22setAccelerationsStaticERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE_docstring[] = R"CHIMERA_STRING( Fixed-size version of setAccelerations()
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE22getAccelerationsStaticEv_docstring[] = R"CHIMERA_STRING( Fixed-size version of getAccelerations()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE8setForceEmd_docstring[] = R"CHIMERA_STRING( Set the force of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE8getForceEm_docstring[] = R"CHIMERA_STRING( Get the force of a single generalized coordinate
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE9setForcesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring[] = R"CHIMERA_STRING( Set the forces of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE9getForcesEv_docstring[] = R"CHIMERA_STRING( Get the forces of all generalized coordinates in this Joint
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE11resetForcesEv_docstring[] = R"CHIMERA_STRING( Set the forces of all generalized coordinates in this Joint to zero
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE18setForceLowerLimitEmd_docstring[] = R"CHIMERA_STRING( Set lower limit for force
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE18getForceLowerLimitEm_docstring[] = R"CHIMERA_STRING( Get lower limit for force
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE18setForceUpperLimitEmd_docstring[] = R"CHIMERA_STRING( Set upper limit for force
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE18getForceUpperLimitEm_docstring[] = R"CHIMERA_STRING( Get upper limit for force
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE17setVelocityChangeEmd_docstring[] = R"CHIMERA_STRING( Set a single velocity change
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE17getVelocityChangeEm_docstring[] = R"CHIMERA_STRING( Get a single velocity change
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE20resetVelocityChangesEv_docstring[] = R"CHIMERA_STRING( Set zero all the velocity change
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE20setConstraintImpulseEmd_docstring[] = R"CHIMERA_STRING( Set a single constraint impulse
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE20getConstraintImpulseEm_docstring[] = R"CHIMERA_STRING( Get a single constraint impulse
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE23resetConstraintImpulsesEv_docstring[] = R"CHIMERA_STRING( Set zero all the constraint impulses
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE18integratePositionsEd_docstring[] = R"CHIMERA_STRING( Integrate positions using Euler method
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE19integrateVelocitiesEd_docstring[] = R"CHIMERA_STRING( Integrate velocities using Euler method
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE22getPositionDifferencesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES7__docstring[] = R"CHIMERA_STRING( Return the difference of two generalized coordinates which are measured in
 the configuration space of this Skeleton.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE28getPositionDifferencesStaticERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES7__docstring[] = R"CHIMERA_STRING( Fixed-size version of getPositionDifferences()
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE18setSpringStiffnessEmd_docstring[] = R"CHIMERA_STRING( 
\
{ 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE18getSpringStiffnessEm_docstring[] = R"CHIMERA_STRING( Get stiffness of joint spring force.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE15setRestPositionEmd_docstring[] = R"CHIMERA_STRING( Set rest position of spring force.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE15getRestPositionEm_docstring[] = R"CHIMERA_STRING( Get rest position of spring force.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE21setDampingCoefficientEmd_docstring[] = R"CHIMERA_STRING( Set coefficient of joint damping (viscous friction) force.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE21getDampingCoefficientEm_docstring[] = R"CHIMERA_STRING( Get coefficient of joint damping (viscous friction) force.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics13MultiDofJointILm2EE18setCoulombFrictionEmd_docstring[] = R"CHIMERA_STRING( Set joint Coulomb friction froce.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE18getCoulombFrictionEm_docstring[] = R"CHIMERA_STRING( Get joint Coulomb friction froce.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE18getPotentialEnergyEv_docstring[] = R"CHIMERA_STRING( 
\
}
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics13MultiDofJointILm2EE23getBodyConstraintWrenchEv_docstring[] = R"CHIMERA_STRING( Get constraint wrench expressed in body node frame
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics13MultiDofJointILm2EEE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::MultiDofJoint<2>, ::boost::noncopyable, ::boost::python::bases<dart::common::RequiresAddon<dart::dynamics::detail::MultiDofJointAddon<2> >, dart::dynamics::Joint > >("TwoDofJoint", _ZN4dart8dynamics13MultiDofJointILm2EEE_docstring, boost::python::no_init)
.def("hasMultiDofJointAddon", [](const dart::dynamics::MultiDofJoint<2> *self) -> bool { return self->hasMultiDofJointAddon(); })
.def("getMultiDofJointAddon", [](dart::dynamics::MultiDofJoint<2> *self) -> dart::dynamics::MultiDofJoint<2>::Addon * { return self->getMultiDofJointAddon(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("setMultiDofJointAddon", [](dart::dynamics::MultiDofJoint<2> *self, const dart::dynamics::MultiDofJoint<2>::Addon * addon) -> void { return self->setMultiDofJointAddon(addon); }, (::boost::python::arg("addon")))
.def("eraseMultiDofJointAddon", [](dart::dynamics::MultiDofJoint<2> *self) -> void { return self->eraseMultiDofJointAddon(); })
.def("releaseMultiDofJointAddon", [](dart::dynamics::MultiDofJoint<2> *self) -> std::unique_ptr<dart::dynamics::MultiDofJoint<2>::Addon> { return self->releaseMultiDofJointAddon(); })
.def("setProperties", [](dart::dynamics::MultiDofJoint<2> *self, const dart::dynamics::MultiDofJoint<2>::Properties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics13MultiDofJointILm2EE13setPropertiesERKNS0_6detail23MultiDofJointPropertiesILm2EEE_docstring, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::MultiDofJoint<2> *self, const dart::dynamics::MultiDofJoint<2>::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, _ZN4dart8dynamics13MultiDofJointILm2EE13setPropertiesERKNS0_6detail29MultiDofJointUniquePropertiesILm2EEE_docstring, (::boost::python::arg("_properties")))
.def("getMultiDofJointProperties", [](const dart::dynamics::MultiDofJoint<2> *self) -> dart::dynamics::MultiDofJoint<2>::Properties { return self->getMultiDofJointProperties(); }, _ZNK4dart8dynamics13MultiDofJointILm2EE26getMultiDofJointPropertiesEv_docstring)
.def("copy", [](dart::dynamics::MultiDofJoint<2> *self, const dart::dynamics::MultiDofJoint<2UL> & _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics13MultiDofJointILm2EE4copyERKS2__docstring, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::MultiDofJoint<2> *self, const dart::dynamics::MultiDofJoint<2UL> * _otherJoint) -> void { return self->copy(_otherJoint); }, _ZN4dart8dynamics13MultiDofJointILm2EE4copyEPKS2__docstring, (::boost::python::arg("_otherJoint")))
.def("getDof", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t index) -> dart::dynamics::DegreeOfFreedom * { return self->getDof(index); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), _ZN4dart8dynamics13MultiDofJointILm2EE6getDofEm_docstring, (::boost::python::arg("index")))
.def("getNumDofs", [](const dart::dynamics::MultiDofJoint<2> *self) -> std::size_t { return self->getNumDofs(); }, _ZNK4dart8dynamics13MultiDofJointILm2EE10getNumDofsEv_docstring)
.def("setDofName", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, const std::string & _name) -> const std::string & { return self->setDofName(_index, _name); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics13MultiDofJointILm2EE10setDofNameEmRKSsb_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_name")))
.def("setDofName", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, const std::string & _name, bool _preserveName) -> const std::string & { return self->setDofName(_index, _name, _preserveName); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZN4dart8dynamics13MultiDofJointILm2EE10setDofNameEmRKSsb_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_name"), ::boost::python::arg("_preserveName")))
.def("preserveDofName", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, bool _preserve) -> void { return self->preserveDofName(_index, _preserve); }, _ZN4dart8dynamics13MultiDofJointILm2EE15preserveDofNameEmb_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_preserve")))
.def("isDofNamePreserved", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> bool { return self->isDofNamePreserved(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE18isDofNamePreservedEm_docstring, (::boost::python::arg("_index")))
.def("getDofName", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> const std::string & { return self->getDofName(_index); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics13MultiDofJointILm2EE10getDofNameEm_docstring, (::boost::python::arg("_index")))
.def("getIndexInSkeleton", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> std::size_t { return self->getIndexInSkeleton(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE18getIndexInSkeletonEm_docstring, (::boost::python::arg("_index")))
.def("getIndexInTree", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> std::size_t { return self->getIndexInTree(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE14getIndexInTreeEm_docstring, (::boost::python::arg("_index")))
.def("setCommand", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _command) -> void { return self->setCommand(_index, _command); }, _ZN4dart8dynamics13MultiDofJointILm2EE10setCommandEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_command")))
.def("getCommand", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getCommand(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE10getCommandEm_docstring, (::boost::python::arg("_index")))
.def("setCommands", [](dart::dynamics::MultiDofJoint<2> *self, const Eigen::VectorXd & _commands) -> void { return self->setCommands(_commands); }, _ZN4dart8dynamics13MultiDofJointILm2EE11setCommandsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_commands")))
.def("getCommands", [](const dart::dynamics::MultiDofJoint<2> *self) -> Eigen::VectorXd { return self->getCommands(); }, _ZNK4dart8dynamics13MultiDofJointILm2EE11getCommandsEv_docstring)
.def("resetCommands", [](dart::dynamics::MultiDofJoint<2> *self) -> void { return self->resetCommands(); }, _ZN4dart8dynamics13MultiDofJointILm2EE13resetCommandsEv_docstring)
.def("setPosition", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _position) -> void { return self->setPosition(_index, _position); }, _ZN4dart8dynamics13MultiDofJointILm2EE11setPositionEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPosition", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getPosition(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE11getPositionEm_docstring, (::boost::python::arg("_index")))
.def("setPositions", [](dart::dynamics::MultiDofJoint<2> *self, const Eigen::VectorXd & _positions) -> void { return self->setPositions(_positions); }, _ZN4dart8dynamics13MultiDofJointILm2EE12setPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("getPositions", [](const dart::dynamics::MultiDofJoint<2> *self) -> Eigen::VectorXd { return self->getPositions(); }, _ZNK4dart8dynamics13MultiDofJointILm2EE12getPositionsEv_docstring)
.def("setPositionLowerLimit", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _position) -> void { return self->setPositionLowerLimit(_index, _position); }, _ZN4dart8dynamics13MultiDofJointILm2EE21setPositionLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionLowerLimit", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getPositionLowerLimit(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE21getPositionLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setPositionUpperLimit", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _position) -> void { return self->setPositionUpperLimit(_index, _position); }, _ZN4dart8dynamics13MultiDofJointILm2EE21setPositionUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPositionUpperLimit", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getPositionUpperLimit(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE21getPositionUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("hasPositionLimit", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> bool { return self->hasPositionLimit(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE16hasPositionLimitEm_docstring, (::boost::python::arg("_index")))
.def("resetPosition", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> void { return self->resetPosition(_index); }, _ZN4dart8dynamics13MultiDofJointILm2EE13resetPositionEm_docstring, (::boost::python::arg("_index")))
.def("resetPositions", [](dart::dynamics::MultiDofJoint<2> *self) -> void { return self->resetPositions(); }, _ZN4dart8dynamics13MultiDofJointILm2EE14resetPositionsEv_docstring)
.def("setInitialPosition", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _initial) -> void { return self->setInitialPosition(_index, _initial); }, _ZN4dart8dynamics13MultiDofJointILm2EE18setInitialPositionEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialPosition", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getInitialPosition(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE18getInitialPositionEm_docstring, (::boost::python::arg("_index")))
.def("setInitialPositions", [](dart::dynamics::MultiDofJoint<2> *self, const Eigen::VectorXd & _initial) -> void { return self->setInitialPositions(_initial); }, _ZN4dart8dynamics13MultiDofJointILm2EE19setInitialPositionsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_initial")))
.def("getInitialPositions", [](const dart::dynamics::MultiDofJoint<2> *self) -> Eigen::VectorXd { return self->getInitialPositions(); }, _ZNK4dart8dynamics13MultiDofJointILm2EE19getInitialPositionsEv_docstring)
.def("setVelocity", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _velocity) -> void { return self->setVelocity(_index, _velocity); }, _ZN4dart8dynamics13MultiDofJointILm2EE11setVelocityEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocity", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getVelocity(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE11getVelocityEm_docstring, (::boost::python::arg("_index")))
.def("setVelocities", [](dart::dynamics::MultiDofJoint<2> *self, const Eigen::VectorXd & _velocities) -> void { return self->setVelocities(_velocities); }, _ZN4dart8dynamics13MultiDofJointILm2EE13setVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_velocities")))
.def("getVelocities", [](const dart::dynamics::MultiDofJoint<2> *self) -> Eigen::VectorXd { return self->getVelocities(); }, _ZNK4dart8dynamics13MultiDofJointILm2EE13getVelocitiesEv_docstring)
.def("setVelocityLowerLimit", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _velocity) -> void { return self->setVelocityLowerLimit(_index, _velocity); }, _ZN4dart8dynamics13MultiDofJointILm2EE21setVelocityLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityLowerLimit", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getVelocityLowerLimit(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE21getVelocityLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setVelocityUpperLimit", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _velocity) -> void { return self->setVelocityUpperLimit(_index, _velocity); }, _ZN4dart8dynamics13MultiDofJointILm2EE21setVelocityUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocityUpperLimit", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getVelocityUpperLimit(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE21getVelocityUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("resetVelocity", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> void { return self->resetVelocity(_index); }, _ZN4dart8dynamics13MultiDofJointILm2EE13resetVelocityEm_docstring, (::boost::python::arg("_index")))
.def("resetVelocities", [](dart::dynamics::MultiDofJoint<2> *self) -> void { return self->resetVelocities(); }, _ZN4dart8dynamics13MultiDofJointILm2EE15resetVelocitiesEv_docstring)
.def("setInitialVelocity", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _initial) -> void { return self->setInitialVelocity(_index, _initial); }, _ZN4dart8dynamics13MultiDofJointILm2EE18setInitialVelocityEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_initial")))
.def("getInitialVelocity", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getInitialVelocity(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE18getInitialVelocityEm_docstring, (::boost::python::arg("_index")))
.def("setInitialVelocities", [](dart::dynamics::MultiDofJoint<2> *self, const Eigen::VectorXd & _initial) -> void { return self->setInitialVelocities(_initial); }, _ZN4dart8dynamics13MultiDofJointILm2EE20setInitialVelocitiesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_initial")))
.def("getInitialVelocities", [](const dart::dynamics::MultiDofJoint<2> *self) -> Eigen::VectorXd { return self->getInitialVelocities(); }, _ZNK4dart8dynamics13MultiDofJointILm2EE20getInitialVelocitiesEv_docstring)
.def("setAcceleration", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _acceleration) -> void { return self->setAcceleration(_index, _acceleration); }, _ZN4dart8dynamics13MultiDofJointILm2EE15setAccelerationEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAcceleration", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getAcceleration(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE15getAccelerationEm_docstring, (::boost::python::arg("_index")))
.def("setAccelerations", [](dart::dynamics::MultiDofJoint<2> *self, const Eigen::VectorXd & _accelerations) -> void { return self->setAccelerations(_accelerations); }, _ZN4dart8dynamics13MultiDofJointILm2EE16setAccelerationsERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_accelerations")))
.def("getAccelerations", [](const dart::dynamics::MultiDofJoint<2> *self) -> Eigen::VectorXd { return self->getAccelerations(); }, _ZNK4dart8dynamics13MultiDofJointILm2EE16getAccelerationsEv_docstring)
.def("resetAccelerations", [](dart::dynamics::MultiDofJoint<2> *self) -> void { return self->resetAccelerations(); }, _ZN4dart8dynamics13MultiDofJointILm2EE18resetAccelerationsEv_docstring)
.def("setAccelerationLowerLimit", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationLowerLimit(_index, _acceleration); }, _ZN4dart8dynamics13MultiDofJointILm2EE25setAccelerationLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationLowerLimit", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getAccelerationLowerLimit(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE25getAccelerationLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setAccelerationUpperLimit", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _acceleration) -> void { return self->setAccelerationUpperLimit(_index, _acceleration); }, _ZN4dart8dynamics13MultiDofJointILm2EE25setAccelerationUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAccelerationUpperLimit", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getAccelerationUpperLimit(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE25getAccelerationUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("setPositionsStatic", [](dart::dynamics::MultiDofJoint<2> *self, const dart::dynamics::MultiDofJoint<2>::Vector & _positions) -> void { return self->setPositionsStatic(_positions); }, _ZN4dart8dynamics13MultiDofJointILm2EE18setPositionsStaticERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE_docstring, (::boost::python::arg("_positions")))
.def("getPositionsStatic", [](const dart::dynamics::MultiDofJoint<2> *self) -> const dart::dynamics::MultiDofJoint<2>::Vector & { return self->getPositionsStatic(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics13MultiDofJointILm2EE18getPositionsStaticEv_docstring)
.def("setVelocitiesStatic", [](dart::dynamics::MultiDofJoint<2> *self, const dart::dynamics::MultiDofJoint<2>::Vector & _velocities) -> void { return self->setVelocitiesStatic(_velocities); }, _ZN4dart8dynamics13MultiDofJointILm2EE19setVelocitiesStaticERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE_docstring, (::boost::python::arg("_velocities")))
.def("getVelocitiesStatic", [](const dart::dynamics::MultiDofJoint<2> *self) -> const dart::dynamics::MultiDofJoint<2>::Vector & { return self->getVelocitiesStatic(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics13MultiDofJointILm2EE19getVelocitiesStaticEv_docstring)
.def("setAccelerationsStatic", [](dart::dynamics::MultiDofJoint<2> *self, const dart::dynamics::MultiDofJoint<2>::Vector & _accels) -> void { return self->setAccelerationsStatic(_accels); }, _ZN4dart8dynamics13MultiDofJointILm2EE22setAccelerationsStaticERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEE_docstring, (::boost::python::arg("_accels")))
.def("getAccelerationsStatic", [](const dart::dynamics::MultiDofJoint<2> *self) -> const dart::dynamics::MultiDofJoint<2>::Vector & { return self->getAccelerationsStatic(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics13MultiDofJointILm2EE22getAccelerationsStaticEv_docstring)
.def("setForce", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _force) -> void { return self->setForce(_index, _force); }, _ZN4dart8dynamics13MultiDofJointILm2EE8setForceEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForce", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getForce(_index); }, _ZN4dart8dynamics13MultiDofJointILm2EE8getForceEm_docstring, (::boost::python::arg("_index")))
.def("setForces", [](dart::dynamics::MultiDofJoint<2> *self, const Eigen::VectorXd & _forces) -> void { return self->setForces(_forces); }, _ZN4dart8dynamics13MultiDofJointILm2EE9setForcesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEE_docstring, (::boost::python::arg("_forces")))
.def("getForces", [](const dart::dynamics::MultiDofJoint<2> *self) -> Eigen::VectorXd { return self->getForces(); }, _ZNK4dart8dynamics13MultiDofJointILm2EE9getForcesEv_docstring)
.def("resetForces", [](dart::dynamics::MultiDofJoint<2> *self) -> void { return self->resetForces(); }, _ZN4dart8dynamics13MultiDofJointILm2EE11resetForcesEv_docstring)
.def("setForceLowerLimit", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _force) -> void { return self->setForceLowerLimit(_index, _force); }, _ZN4dart8dynamics13MultiDofJointILm2EE18setForceLowerLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceLowerLimit", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getForceLowerLimit(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE18getForceLowerLimitEm_docstring, (::boost::python::arg("_index")))
.def("setForceUpperLimit", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _force) -> void { return self->setForceUpperLimit(_index, _force); }, _ZN4dart8dynamics13MultiDofJointILm2EE18setForceUpperLimitEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForceUpperLimit", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getForceUpperLimit(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE18getForceUpperLimitEm_docstring, (::boost::python::arg("_index")))
.def("setVelocityChange", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _velocityChange) -> void { return self->setVelocityChange(_index, _velocityChange); }, _ZN4dart8dynamics13MultiDofJointILm2EE17setVelocityChangeEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_velocityChange")))
.def("getVelocityChange", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getVelocityChange(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE17getVelocityChangeEm_docstring, (::boost::python::arg("_index")))
.def("resetVelocityChanges", [](dart::dynamics::MultiDofJoint<2> *self) -> void { return self->resetVelocityChanges(); }, _ZN4dart8dynamics13MultiDofJointILm2EE20resetVelocityChangesEv_docstring)
.def("setConstraintImpulse", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _impulse) -> void { return self->setConstraintImpulse(_index, _impulse); }, _ZN4dart8dynamics13MultiDofJointILm2EE20setConstraintImpulseEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_impulse")))
.def("getConstraintImpulse", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getConstraintImpulse(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE20getConstraintImpulseEm_docstring, (::boost::python::arg("_index")))
.def("resetConstraintImpulses", [](dart::dynamics::MultiDofJoint<2> *self) -> void { return self->resetConstraintImpulses(); }, _ZN4dart8dynamics13MultiDofJointILm2EE23resetConstraintImpulsesEv_docstring)
.def("integratePositions", [](dart::dynamics::MultiDofJoint<2> *self, double _dt) -> void { return self->integratePositions(_dt); }, _ZN4dart8dynamics13MultiDofJointILm2EE18integratePositionsEd_docstring, (::boost::python::arg("_dt")))
.def("integrateVelocities", [](dart::dynamics::MultiDofJoint<2> *self, double _dt) -> void { return self->integrateVelocities(_dt); }, _ZN4dart8dynamics13MultiDofJointILm2EE19integrateVelocitiesEd_docstring, (::boost::python::arg("_dt")))
.def("getPositionDifferences", [](const dart::dynamics::MultiDofJoint<2> *self, const Eigen::VectorXd & _q2, const Eigen::VectorXd & _q1) -> Eigen::VectorXd { return self->getPositionDifferences(_q2, _q1); }, _ZNK4dart8dynamics13MultiDofJointILm2EE22getPositionDifferencesERKN5Eigen6MatrixIdLin1ELi1ELi0ELin1ELi1EEES7__docstring, (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("getPositionDifferencesStatic", [](const dart::dynamics::MultiDofJoint<2> *self, const dart::dynamics::MultiDofJoint<2>::Vector & _q2, const dart::dynamics::MultiDofJoint<2>::Vector & _q1) -> Eigen::Matrix<double, 2UL, 1> { return self->getPositionDifferencesStatic(_q2, _q1); }, _ZNK4dart8dynamics13MultiDofJointILm2EE28getPositionDifferencesStaticERKN5Eigen6MatrixIdLi2ELi1ELi0ELi2ELi1EEES7__docstring, (::boost::python::arg("_q2"), ::boost::python::arg("_q1")))
.def("setSpringStiffness", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _k) -> void { return self->setSpringStiffness(_index, _k); }, _ZN4dart8dynamics13MultiDofJointILm2EE18setSpringStiffnessEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_k")))
.def("getSpringStiffness", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getSpringStiffness(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE18getSpringStiffnessEm_docstring, (::boost::python::arg("_index")))
.def("setRestPosition", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _q0) -> void { return self->setRestPosition(_index, _q0); }, _ZN4dart8dynamics13MultiDofJointILm2EE15setRestPositionEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_q0")))
.def("getRestPosition", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getRestPosition(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE15getRestPositionEm_docstring, (::boost::python::arg("_index")))
.def("setDampingCoefficient", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _d) -> void { return self->setDampingCoefficient(_index, _d); }, _ZN4dart8dynamics13MultiDofJointILm2EE21setDampingCoefficientEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_d")))
.def("getDampingCoefficient", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getDampingCoefficient(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE21getDampingCoefficientEm_docstring, (::boost::python::arg("_index")))
.def("setCoulombFriction", [](dart::dynamics::MultiDofJoint<2> *self, std::size_t _index, double _friction) -> void { return self->setCoulombFriction(_index, _friction); }, _ZN4dart8dynamics13MultiDofJointILm2EE18setCoulombFrictionEmd_docstring, (::boost::python::arg("_index"), ::boost::python::arg("_friction")))
.def("getCoulombFriction", [](const dart::dynamics::MultiDofJoint<2> *self, std::size_t _index) -> double { return self->getCoulombFriction(_index); }, _ZNK4dart8dynamics13MultiDofJointILm2EE18getCoulombFrictionEm_docstring, (::boost::python::arg("_index")))
.def("getPotentialEnergy", [](const dart::dynamics::MultiDofJoint<2> *self) -> double { return self->getPotentialEnergy(); }, _ZNK4dart8dynamics13MultiDofJointILm2EE18getPotentialEnergyEv_docstring)
.def("getBodyConstraintWrench", [](const dart::dynamics::MultiDofJoint<2> *self) -> Eigen::Vector6d { return self->getBodyConstraintWrench(); }, _ZNK4dart8dynamics13MultiDofJointILm2EE23getBodyConstraintWrenchEv_docstring)
.add_static_property("NumDofs", ::boost::python::make_getter(dart::dynamics::MultiDofJoint<2>::NumDofs))
;
}

/* footer */
