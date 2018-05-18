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

void _ZN4dart8dynamics11PlanarJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PlanarJoint, ::boost::noncopyable >("PlanarJoint", boost::python::no_init)
.def("hasPlanarJointAspect", [](const dart::dynamics::PlanarJoint *self) -> bool { return self->hasPlanarJointAspect(); })
.def("getPlanarJointAspect", [](dart::dynamics::PlanarJoint *self) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::PlanarJoint, dart::dynamics::detail::PlanarJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >::Aspect * { return self->getPlanarJointAspect(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getPlanarJointAspect", [](dart::dynamics::PlanarJoint *self, const bool createIfNull) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::PlanarJoint, dart::dynamics::detail::PlanarJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >::Aspect * { return self->getPlanarJointAspect(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setPlanarJointAspect", [](dart::dynamics::PlanarJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::PlanarJoint, dart::dynamics::detail::PlanarJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >::Aspect * aspect) -> void { return self->setPlanarJointAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removePlanarJointAspect", [](dart::dynamics::PlanarJoint *self) -> void { return self->removePlanarJointAspect(); })
.def("releasePlanarJointAspect", [](dart::dynamics::PlanarJoint *self) -> std::unique_ptr<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::PlanarJoint, dart::dynamics::detail::PlanarJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >::Aspect> { return self->releasePlanarJointAspect(); })
.def("setProperties", [](dart::dynamics::PlanarJoint *self, const dart::dynamics::PlanarJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::PlanarJoint *self, const dart::dynamics::PlanarJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setAspectProperties", [](dart::dynamics::PlanarJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::PlanarJoint, dart::dynamics::detail::PlanarJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<3> > >::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getPlanarJointProperties", [](const dart::dynamics::PlanarJoint *self) -> dart::dynamics::PlanarJoint::Properties { return self->getPlanarJointProperties(); })
.def("copy", [](dart::dynamics::PlanarJoint *self, const dart::dynamics::PlanarJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::PlanarJoint *self, const dart::dynamics::PlanarJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::PlanarJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", [](const dart::dynamics::PlanarJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, (::boost::python::arg("_index")))
.def("setXYPlane", [](dart::dynamics::PlanarJoint *self) -> void { return self->setXYPlane(); })
.def("setXYPlane", [](dart::dynamics::PlanarJoint *self, bool _renameDofs) -> void { return self->setXYPlane(_renameDofs); }, (::boost::python::arg("_renameDofs")))
.def("setYZPlane", [](dart::dynamics::PlanarJoint *self) -> void { return self->setYZPlane(); })
.def("setYZPlane", [](dart::dynamics::PlanarJoint *self, bool _renameDofs) -> void { return self->setYZPlane(_renameDofs); }, (::boost::python::arg("_renameDofs")))
.def("setZXPlane", [](dart::dynamics::PlanarJoint *self) -> void { return self->setZXPlane(); })
.def("setZXPlane", [](dart::dynamics::PlanarJoint *self, bool _renameDofs) -> void { return self->setZXPlane(_renameDofs); }, (::boost::python::arg("_renameDofs")))
.def("setArbitraryPlane", [](dart::dynamics::PlanarJoint *self, const Eigen::Vector3d & _transAxis1, const Eigen::Vector3d & _transAxis2) -> void { return self->setArbitraryPlane(_transAxis1, _transAxis2); }, (::boost::python::arg("_transAxis1"), ::boost::python::arg("_transAxis2")))
.def("setArbitraryPlane", [](dart::dynamics::PlanarJoint *self, const Eigen::Vector3d & _transAxis1, const Eigen::Vector3d & _transAxis2, bool _renameDofs) -> void { return self->setArbitraryPlane(_transAxis1, _transAxis2, _renameDofs); }, (::boost::python::arg("_transAxis1"), ::boost::python::arg("_transAxis2"), ::boost::python::arg("_renameDofs")))
.def("getPlaneType", [](const dart::dynamics::PlanarJoint *self) -> dart::dynamics::PlanarJoint::PlaneType { return self->getPlaneType(); })
.def("getRotationalAxis", [](const dart::dynamics::PlanarJoint *self) -> const Eigen::Vector3d & { return self->getRotationalAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getTranslationalAxis1", [](const dart::dynamics::PlanarJoint *self) -> const Eigen::Vector3d & { return self->getTranslationalAxis1(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getTranslationalAxis2", [](const dart::dynamics::PlanarJoint *self) -> const Eigen::Vector3d & { return self->getTranslationalAxis2(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeJacobianStatic", [](const dart::dynamics::PlanarJoint *self, const Eigen::Vector3d & _positions) -> Eigen::Matrix<double, 6, 3> { return self->getRelativeJacobianStatic(_positions); }, (::boost::python::arg("_positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::PlanarJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
