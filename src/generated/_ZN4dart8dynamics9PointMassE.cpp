#include <dartpy/pointers.h>
#include <dartpy/template_registry.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

namespace {


constexpr char _ZN4dart8dynamics9PointMass12setCollidingEb_docstring[] = R"CHIMERA_STRING( Set whether this point mass is colliding with others.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9PointMass11isCollidingEv_docstring[] = R"CHIMERA_STRING( Get whether this point mass is colliding with others.
 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9PointMass23getPartialAccelerationsEv_docstring[] = R"CHIMERA_STRING( Get the Eta term of this PointMass
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9PointMass11addExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring[] = R"CHIMERA_STRING( Add linear Cartesian force to this node.
 
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9PointMass20setConstraintImpulseERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring[] = R"CHIMERA_STRING( Set constraint impulse
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9PointMass20addConstraintImpulseERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring[] = R"CHIMERA_STRING( Add constraint impulse
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9PointMass22clearConstraintImpulseEv_docstring[] = R"CHIMERA_STRING( Clear constraint impulse
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9PointMass21getConstraintImpulsesEv_docstring[] = R"CHIMERA_STRING( Get constraint impulse
)CHIMERA_STRING";

constexpr char _ZN4dart8dynamics9PointMass15getBodyJacobianEv_docstring[] = R"CHIMERA_STRING( 
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9PointMass21getBodyVelocityChangeEv_docstring[] = R"CHIMERA_STRING( Return velocity change due to impulse
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9PointMass15getBodyVelocityEv_docstring[] = R"CHIMERA_STRING( Get the generalized velocity at the position of this point mass
        where the velocity is expressed in the parent soft body node frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9PointMass16getWorldVelocityEv_docstring[] = R"CHIMERA_STRING( Get the generalized velocity at the position of this point mass
        where the velocity is expressed in the world frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9PointMass19getBodyAccelerationEv_docstring[] = R"CHIMERA_STRING( Get the generalized acceleration at the position of this point mass
        where the acceleration is expressed in the parent soft body node
        frame.
)CHIMERA_STRING";

constexpr char _ZNK4dart8dynamics9PointMass20getWorldAccelerationEv_docstring[] = R"CHIMERA_STRING( Get the generalized acceleration at the position of this point mass
        where the acceleration is expressed in the world frame.
)CHIMERA_STRING";


} // namespace

void _ZN4dart8dynamics9PointMassE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PointMass, ::boost::python::bases<dart::common::Subject > >("PointMass", boost::python::no_init)
.def("getIndexInSoftBodyNode", [](const dart::dynamics::PointMass *self) -> std::size_t { return self->getIndexInSoftBodyNode(); })
.def("setMass", [](dart::dynamics::PointMass *self, double _mass) -> void { return self->setMass(_mass); }, (::boost::python::arg("_mass")))
.def("getMass", [](const dart::dynamics::PointMass *self) -> double { return self->getMass(); })
.def("getPsi", [](const dart::dynamics::PointMass *self) -> double { return self->getPsi(); })
.def("getImplicitPsi", [](const dart::dynamics::PointMass *self) -> double { return self->getImplicitPsi(); })
.def("getPi", [](const dart::dynamics::PointMass *self) -> double { return self->getPi(); })
.def("getImplicitPi", [](const dart::dynamics::PointMass *self) -> double { return self->getImplicitPi(); })
.def("addConnectedPointMass", [](dart::dynamics::PointMass *self, dart::dynamics::PointMass * _pointMass) -> void { return self->addConnectedPointMass(_pointMass); }, (::boost::python::arg("_pointMass")))
.def("getNumConnectedPointMasses", [](const dart::dynamics::PointMass *self) -> std::size_t { return self->getNumConnectedPointMasses(); })
.def("getConnectedPointMass", [](dart::dynamics::PointMass *self, std::size_t _idx) -> dart::dynamics::PointMass * { return self->getConnectedPointMass(_idx); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("_idx")))
.def("setColliding", [](dart::dynamics::PointMass *self, bool _isColliding) -> void { return self->setColliding(_isColliding); }, _ZN4dart8dynamics9PointMass12setCollidingEb_docstring, (::boost::python::arg("_isColliding")))
.def("isColliding", [](dart::dynamics::PointMass *self) -> bool { return self->isColliding(); }, _ZN4dart8dynamics9PointMass11isCollidingEv_docstring)
.def("getNumDofs", [](const dart::dynamics::PointMass *self) -> std::size_t { return self->getNumDofs(); })
.def("setPosition", [](dart::dynamics::PointMass *self, std::size_t _index, double _position) -> void { return self->setPosition(_index, _position); }, (::boost::python::arg("_index"), ::boost::python::arg("_position")))
.def("getPosition", [](const dart::dynamics::PointMass *self, std::size_t _index) -> double { return self->getPosition(_index); }, (::boost::python::arg("_index")))
.def("setPositions", [](dart::dynamics::PointMass *self, const Eigen::Vector3d & _positions) -> void { return self->setPositions(_positions); }, (::boost::python::arg("_positions")))
.def("getPositions", [](const dart::dynamics::PointMass *self) -> const Eigen::Vector3d & { return self->getPositions(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("resetPositions", [](dart::dynamics::PointMass *self) -> void { return self->resetPositions(); })
.def("setVelocity", [](dart::dynamics::PointMass *self, std::size_t _index, double _velocity) -> void { return self->setVelocity(_index, _velocity); }, (::boost::python::arg("_index"), ::boost::python::arg("_velocity")))
.def("getVelocity", [](const dart::dynamics::PointMass *self, std::size_t _index) -> double { return self->getVelocity(_index); }, (::boost::python::arg("_index")))
.def("setVelocities", [](dart::dynamics::PointMass *self, const Eigen::Vector3d & _velocities) -> void { return self->setVelocities(_velocities); }, (::boost::python::arg("_velocities")))
.def("getVelocities", [](const dart::dynamics::PointMass *self) -> const Eigen::Vector3d & { return self->getVelocities(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("resetVelocities", [](dart::dynamics::PointMass *self) -> void { return self->resetVelocities(); })
.def("setAcceleration", [](dart::dynamics::PointMass *self, std::size_t _index, double _acceleration) -> void { return self->setAcceleration(_index, _acceleration); }, (::boost::python::arg("_index"), ::boost::python::arg("_acceleration")))
.def("getAcceleration", [](const dart::dynamics::PointMass *self, std::size_t _index) -> double { return self->getAcceleration(_index); }, (::boost::python::arg("_index")))
.def("setAccelerations", [](dart::dynamics::PointMass *self, const Eigen::Vector3d & _accelerations) -> void { return self->setAccelerations(_accelerations); }, (::boost::python::arg("_accelerations")))
.def("getAccelerations", [](const dart::dynamics::PointMass *self) -> const Eigen::Vector3d & { return self->getAccelerations(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getPartialAccelerations", [](const dart::dynamics::PointMass *self) -> const Eigen::Vector3d & { return self->getPartialAccelerations(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9PointMass23getPartialAccelerationsEv_docstring)
.def("resetAccelerations", [](dart::dynamics::PointMass *self) -> void { return self->resetAccelerations(); })
.def("setForce", [](dart::dynamics::PointMass *self, std::size_t _index, double _force) -> void { return self->setForce(_index, _force); }, (::boost::python::arg("_index"), ::boost::python::arg("_force")))
.def("getForce", [](dart::dynamics::PointMass *self, std::size_t _index) -> double { return self->getForce(_index); }, (::boost::python::arg("_index")))
.def("setForces", [](dart::dynamics::PointMass *self, const Eigen::Vector3d & _forces) -> void { return self->setForces(_forces); }, (::boost::python::arg("_forces")))
.def("getForces", [](const dart::dynamics::PointMass *self) -> const Eigen::Vector3d & { return self->getForces(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("resetForces", [](dart::dynamics::PointMass *self) -> void { return self->resetForces(); })
.def("setVelocityChange", [](dart::dynamics::PointMass *self, std::size_t _index, double _velocityChange) -> void { return self->setVelocityChange(_index, _velocityChange); }, (::boost::python::arg("_index"), ::boost::python::arg("_velocityChange")))
.def("getVelocityChange", [](dart::dynamics::PointMass *self, std::size_t _index) -> double { return self->getVelocityChange(_index); }, (::boost::python::arg("_index")))
.def("resetVelocityChanges", [](dart::dynamics::PointMass *self) -> void { return self->resetVelocityChanges(); })
.def("setConstraintImpulse", [](dart::dynamics::PointMass *self, std::size_t _index, double _impulse) -> void { return self->setConstraintImpulse(_index, _impulse); }, (::boost::python::arg("_index"), ::boost::python::arg("_impulse")))
.def("getConstraintImpulse", [](dart::dynamics::PointMass *self, std::size_t _index) -> double { return self->getConstraintImpulse(_index); }, (::boost::python::arg("_index")))
.def("resetConstraintImpulses", [](dart::dynamics::PointMass *self) -> void { return self->resetConstraintImpulses(); })
.def("integratePositions", [](dart::dynamics::PointMass *self, double _dt) -> void { return self->integratePositions(_dt); }, (::boost::python::arg("_dt")))
.def("integrateVelocities", [](dart::dynamics::PointMass *self, double _dt) -> void { return self->integrateVelocities(_dt); }, (::boost::python::arg("_dt")))
.def("addExtForce", [](dart::dynamics::PointMass *self, const Eigen::Vector3d & _force) -> void { return self->addExtForce(_force); }, _ZN4dart8dynamics9PointMass11addExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring, (::boost::python::arg("_force")))
.def("addExtForce", [](dart::dynamics::PointMass *self, const Eigen::Vector3d & _force, bool _isForceLocal) -> void { return self->addExtForce(_force, _isForceLocal); }, _ZN4dart8dynamics9PointMass11addExtForceERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring, (::boost::python::arg("_force"), ::boost::python::arg("_isForceLocal")))
.def("clearExtForce", [](dart::dynamics::PointMass *self) -> void { return self->clearExtForce(); })
.def("setConstraintImpulse", [](dart::dynamics::PointMass *self, const Eigen::Vector3d & _constImp) -> void { return self->setConstraintImpulse(_constImp); }, _ZN4dart8dynamics9PointMass20setConstraintImpulseERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring, (::boost::python::arg("_constImp")))
.def("setConstraintImpulse", [](dart::dynamics::PointMass *self, const Eigen::Vector3d & _constImp, bool _isLocal) -> void { return self->setConstraintImpulse(_constImp, _isLocal); }, _ZN4dart8dynamics9PointMass20setConstraintImpulseERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring, (::boost::python::arg("_constImp"), ::boost::python::arg("_isLocal")))
.def("addConstraintImpulse", [](dart::dynamics::PointMass *self, const Eigen::Vector3d & _constImp) -> void { return self->addConstraintImpulse(_constImp); }, _ZN4dart8dynamics9PointMass20addConstraintImpulseERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring, (::boost::python::arg("_constImp")))
.def("addConstraintImpulse", [](dart::dynamics::PointMass *self, const Eigen::Vector3d & _constImp, bool _isLocal) -> void { return self->addConstraintImpulse(_constImp, _isLocal); }, _ZN4dart8dynamics9PointMass20addConstraintImpulseERKN5Eigen6MatrixIdLi3ELi1ELi0ELi3ELi1EEEb_docstring, (::boost::python::arg("_constImp"), ::boost::python::arg("_isLocal")))
.def("clearConstraintImpulse", [](dart::dynamics::PointMass *self) -> void { return self->clearConstraintImpulse(); }, _ZN4dart8dynamics9PointMass22clearConstraintImpulseEv_docstring)
.def("getConstraintImpulses", [](const dart::dynamics::PointMass *self) -> Eigen::Vector3d { return self->getConstraintImpulses(); }, _ZNK4dart8dynamics9PointMass21getConstraintImpulsesEv_docstring)
.def("setRestingPosition", [](dart::dynamics::PointMass *self, const Eigen::Vector3d & _p) -> void { return self->setRestingPosition(_p); }, (::boost::python::arg("_p")))
.def("getRestingPosition", [](const dart::dynamics::PointMass *self) -> const Eigen::Vector3d & { return self->getRestingPosition(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getLocalPosition", [](const dart::dynamics::PointMass *self) -> const Eigen::Vector3d & { return self->getLocalPosition(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getWorldPosition", [](const dart::dynamics::PointMass *self) -> const Eigen::Vector3d & { return self->getWorldPosition(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getBodyJacobian", [](dart::dynamics::PointMass *self) -> Eigen::Matrix<double, 3, Eigen::Dynamic> { return self->getBodyJacobian(); }, _ZN4dart8dynamics9PointMass15getBodyJacobianEv_docstring)
.def("getWorldJacobian", [](dart::dynamics::PointMass *self) -> Eigen::Matrix<double, 3, Eigen::Dynamic> { return self->getWorldJacobian(); })
.def("getBodyVelocityChange", [](const dart::dynamics::PointMass *self) -> const Eigen::Vector3d & { return self->getBodyVelocityChange(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9PointMass21getBodyVelocityChangeEv_docstring)
.def("getParentSoftBodyNode", [](dart::dynamics::PointMass *self) -> dart::dynamics::SoftBodyNode * { return self->getParentSoftBodyNode(); }, ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::SoftBodyNodePtr> >())
.def("getBodyVelocity", [](const dart::dynamics::PointMass *self) -> const Eigen::Vector3d & { return self->getBodyVelocity(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9PointMass15getBodyVelocityEv_docstring)
.def("getWorldVelocity", [](const dart::dynamics::PointMass *self) -> Eigen::Vector3d { return self->getWorldVelocity(); }, _ZNK4dart8dynamics9PointMass16getWorldVelocityEv_docstring)
.def("getBodyAcceleration", [](const dart::dynamics::PointMass *self) -> const Eigen::Vector3d & { return self->getBodyAcceleration(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >(), _ZNK4dart8dynamics9PointMass19getBodyAccelerationEv_docstring)
.def("getWorldAcceleration", [](const dart::dynamics::PointMass *self) -> Eigen::Vector3d { return self->getWorldAcceleration(); }, _ZNK4dart8dynamics9PointMass20getWorldAccelerationEv_docstring)
;
}

/* footer */
