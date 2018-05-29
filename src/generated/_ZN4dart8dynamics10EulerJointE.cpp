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

void _ZN4dart8dynamics10EulerJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::EulerJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::EulerJoint, dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > > > >("EulerJoint", boost::python::no_init)
.def("hasEulerJointAspect", [](const dart::dynamics::EulerJoint *self) -> bool { return self->hasEulerJointAspect(); })
.def("getEulerJointAspect", [](dart::dynamics::EulerJoint *self) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::EulerJoint, dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >::Aspect * { return self->getEulerJointAspect(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("getEulerJointAspect", [](dart::dynamics::EulerJoint *self, const bool createIfNull) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::EulerJoint, dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >::Aspect * { return self->getEulerJointAspect(createIfNull); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setEulerJointAspect", [](dart::dynamics::EulerJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::EulerJoint, dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >::Aspect * aspect) -> void { return self->setEulerJointAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removeEulerJointAspect", [](dart::dynamics::EulerJoint *self) -> void { return self->removeEulerJointAspect(); })
.def("releaseEulerJointAspect", [](dart::dynamics::EulerJoint *self) -> std::unique_ptr<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::EulerJoint, dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >::Aspect> { return self->releaseEulerJointAspect(); })
.def("setProperties", [](dart::dynamics::EulerJoint *self, const dart::dynamics::EulerJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::EulerJoint *self, const dart::dynamics::EulerJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setAspectProperties", [](dart::dynamics::EulerJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::EulerJoint, dart::dynamics::detail::EulerJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getEulerJointProperties", [](const dart::dynamics::EulerJoint *self) -> dart::dynamics::EulerJoint::Properties { return self->getEulerJointProperties(); })
.def("copy", [](dart::dynamics::EulerJoint *self, const dart::dynamics::EulerJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::EulerJoint *self, const dart::dynamics::EulerJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::EulerJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("isCyclic", [](const dart::dynamics::EulerJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, (::boost::python::arg("_index")))
.def("setAxisOrder", [](dart::dynamics::EulerJoint *self, dart::dynamics::EulerJoint::AxisOrder _order) -> void { return self->setAxisOrder(_order); }, (::boost::python::arg("_order")))
.def("setAxisOrder", [](dart::dynamics::EulerJoint *self, dart::dynamics::EulerJoint::AxisOrder _order, bool _renameDofs) -> void { return self->setAxisOrder(_order, _renameDofs); }, (::boost::python::arg("_order"), ::boost::python::arg("_renameDofs")))
.def("getAxisOrder", [](const dart::dynamics::EulerJoint *self) -> dart::dynamics::EulerJoint::AxisOrder { return self->getAxisOrder(); })
.def("convertToTransform", [](const dart::dynamics::EulerJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Isometry3d { return self->convertToTransform(_positions); }, (::boost::python::arg("_positions")))
.def("convertToRotation", [](const dart::dynamics::EulerJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Matrix3d { return self->convertToRotation(_positions); }, (::boost::python::arg("_positions")))
.def("getRelativeJacobianStatic", [](const dart::dynamics::EulerJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Matrix<double, 6, 3> { return self->getRelativeJacobianStatic(_positions); }, (::boost::python::arg("_positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::EulerJoint::getStaticType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("convertToTransform", [](const Eigen::Vector3d & _positions, dart::dynamics::EulerJoint::AxisOrder _ordering) -> Eigen::Isometry3d { return dart::dynamics::EulerJoint::convertToTransform(_positions, _ordering); }, (::boost::python::arg("_positions"), ::boost::python::arg("_ordering")))
.def("convertToRotation", [](const Eigen::Vector3d & _positions, dart::dynamics::EulerJoint::AxisOrder _ordering) -> Eigen::Matrix3d { return dart::dynamics::EulerJoint::convertToRotation(_positions, _ordering); }, (::boost::python::arg("_positions"), ::boost::python::arg("_ordering")))
.staticmethod("getStaticType")
;
}

/* footer */
