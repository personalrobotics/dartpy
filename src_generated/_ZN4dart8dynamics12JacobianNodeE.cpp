#include <dartpy/pointers.h>
#include <dart/dart.h>


#include <boost/python.hpp>
#include <cmath>

/* postinclude */

void _ZN4dart8dynamics12JacobianNodeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::JacobianNode, ::boost::noncopyable, dart::dynamics::JacobianNode *, ::boost::python::bases<dart::dynamics::Frame, dart::dynamics::Node > >("JacobianNode", boost::python::no_init)
.def("getIK", static_cast<const std::shared_ptr<dart::dynamics::InverseKinematics> &(dart::dynamics::JacobianNode::*)(bool)>(&dart::dynamics::JacobianNode::getIK), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_createIfNull")))
.def("getOrCreateIK", static_cast<const std::shared_ptr<dart::dynamics::InverseKinematics> &(dart::dynamics::JacobianNode::*)()>(&dart::dynamics::JacobianNode::getOrCreateIK), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getIK", static_cast<std::shared_ptr<const dart::dynamics::InverseKinematics> (dart::dynamics::JacobianNode::*)() const>(&dart::dynamics::JacobianNode::getIK))
.def("createIK", static_cast<const std::shared_ptr<dart::dynamics::InverseKinematics> &(dart::dynamics::JacobianNode::*)()>(&dart::dynamics::JacobianNode::createIK), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("clearIK", static_cast<void (dart::dynamics::JacobianNode::*)()>(&dart::dynamics::JacobianNode::clearIK))
.def("setName", static_cast<const std::string &(dart::dynamics::JacobianNode::*)(const std::string &)>(&dart::dynamics::JacobianNode::setName), ::boost::python::return_value_policy<boost::python::copy_const_reference >(), (::boost::python::arg("_name")))
.def("getName", static_cast<const std::string &(dart::dynamics::JacobianNode::*)() const>(&dart::dynamics::JacobianNode::getName), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getSkeleton", static_cast<std::shared_ptr<dart::dynamics::Skeleton> (dart::dynamics::JacobianNode::*)()>(&dart::dynamics::JacobianNode::getSkeleton))
.def("dependsOn", static_cast<bool (dart::dynamics::JacobianNode::*)(std::size_t) const>(&dart::dynamics::JacobianNode::dependsOn), (::boost::python::arg("_genCoordIndex")))
.def("getNumDependentGenCoords", static_cast<std::size_t (dart::dynamics::JacobianNode::*)() const>(&dart::dynamics::JacobianNode::getNumDependentGenCoords))
.def("getDependentGenCoordIndex", static_cast<std::size_t (dart::dynamics::JacobianNode::*)(std::size_t) const>(&dart::dynamics::JacobianNode::getDependentGenCoordIndex), (::boost::python::arg("_arrayIndex")))
.def("getDependentGenCoordIndices", static_cast<const std::vector<std::size_t> &(dart::dynamics::JacobianNode::*)() const>(&dart::dynamics::JacobianNode::getDependentGenCoordIndices), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getNumDependentDofs", static_cast<std::size_t (dart::dynamics::JacobianNode::*)() const>(&dart::dynamics::JacobianNode::getNumDependentDofs))
.def("getDependentDof", static_cast<dart::dynamics::DegreeOfFreedom *(dart::dynamics::JacobianNode::*)(std::size_t)>(&dart::dynamics::JacobianNode::getDependentDof), ::boost::python::return_value_policy<boost::python::return_by_smart_ptr<dart::dynamics::DegreeOfFreedomPtr> >(), (::boost::python::arg("_index")))
.def("getDependentDofs", static_cast<const std::vector<dart::dynamics::DegreeOfFreedom *> &(dart::dynamics::JacobianNode::*)()>(&dart::dynamics::JacobianNode::getDependentDofs), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getChainDofs", static_cast<const std::vector<const dart::dynamics::DegreeOfFreedom *> (dart::dynamics::JacobianNode::*)() const>(&dart::dynamics::JacobianNode::getChainDofs))
.def("getJacobian", static_cast<const dart::math::Jacobian &(dart::dynamics::JacobianNode::*)() const>(&dart::dynamics::JacobianNode::getJacobian), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::JacobianNode::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getJacobian), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::JacobianNode::*)(const Eigen::Vector3d &) const>(&dart::dynamics::JacobianNode::getJacobian), (::boost::python::arg("_offset")))
.def("getJacobian", static_cast<dart::math::Jacobian (dart::dynamics::JacobianNode::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getJacobian), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getWorldJacobian", static_cast<const dart::math::Jacobian &(dart::dynamics::JacobianNode::*)() const>(&dart::dynamics::JacobianNode::getWorldJacobian), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getWorldJacobian", static_cast<dart::math::Jacobian (dart::dynamics::JacobianNode::*)(const Eigen::Vector3d &) const>(&dart::dynamics::JacobianNode::getWorldJacobian), (::boost::python::arg("_offset")))
.def("getLinearJacobian", static_cast<dart::math::LinearJacobian (dart::dynamics::JacobianNode::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getLinearJacobian), (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobian", static_cast<dart::math::LinearJacobian (dart::dynamics::JacobianNode::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getLinearJacobian), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobian", static_cast<dart::math::AngularJacobian (dart::dynamics::JacobianNode::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getAngularJacobian), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", static_cast<const dart::math::Jacobian &(dart::dynamics::JacobianNode::*)() const>(&dart::dynamics::JacobianNode::getJacobianSpatialDeriv), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::JacobianNode::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getJacobianSpatialDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::JacobianNode::*)(const Eigen::Vector3d &) const>(&dart::dynamics::JacobianNode::getJacobianSpatialDeriv), (::boost::python::arg("_offset")))
.def("getJacobianSpatialDeriv", static_cast<dart::math::Jacobian (dart::dynamics::JacobianNode::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getJacobianSpatialDeriv), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", static_cast<const dart::math::Jacobian &(dart::dynamics::JacobianNode::*)() const>(&dart::dynamics::JacobianNode::getJacobianClassicDeriv), ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getJacobianClassicDeriv", static_cast<dart::math::Jacobian (dart::dynamics::JacobianNode::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getJacobianClassicDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("getJacobianClassicDeriv", static_cast<dart::math::Jacobian (dart::dynamics::JacobianNode::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getJacobianClassicDeriv), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", static_cast<dart::math::LinearJacobian (dart::dynamics::JacobianNode::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getLinearJacobianDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("getLinearJacobianDeriv", static_cast<dart::math::LinearJacobian (dart::dynamics::JacobianNode::*)(const Eigen::Vector3d &, const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getLinearJacobianDeriv), (::boost::python::arg("_offset"), ::boost::python::arg("_inCoordinatesOf")))
.def("getAngularJacobianDeriv", static_cast<dart::math::AngularJacobian (dart::dynamics::JacobianNode::*)(const dart::dynamics::Frame *) const>(&dart::dynamics::JacobianNode::getAngularJacobianDeriv), (::boost::python::arg("_inCoordinatesOf")))
.def("notifyJacobianUpdate", static_cast<void (dart::dynamics::JacobianNode::*)()>(&dart::dynamics::JacobianNode::notifyJacobianUpdate))
.def("notifyJacobianDerivUpdate", static_cast<void (dart::dynamics::JacobianNode::*)()>(&dart::dynamics::JacobianNode::notifyJacobianDerivUpdate))
;
}

/* footer */
