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

void _ZN4dart8dynamics14UniversalJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::UniversalJoint, ::boost::noncopyable, ::boost::python::bases<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::UniversalJoint, dart::dynamics::detail::UniversalJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > > > >("UniversalJoint", boost::python::no_init)
.def("hasUniversalJointAspect", [](const dart::dynamics::UniversalJoint *self) -> bool { return self->hasUniversalJointAspect(); })
.def("getUniversalJointAspect", [](dart::dynamics::UniversalJoint *self) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::UniversalJoint, dart::dynamics::detail::UniversalJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >::Aspect * { return self->getUniversalJointAspect(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("getUniversalJointAspect", [](dart::dynamics::UniversalJoint *self, const bool createIfNull) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::UniversalJoint, dart::dynamics::detail::UniversalJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >::Aspect * { return self->getUniversalJointAspect(createIfNull); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setUniversalJointAspect", [](dart::dynamics::UniversalJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::UniversalJoint, dart::dynamics::detail::UniversalJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >::Aspect * aspect) -> void { return self->setUniversalJointAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removeUniversalJointAspect", [](dart::dynamics::UniversalJoint *self) -> void { return self->removeUniversalJointAspect(); })
.def("releaseUniversalJointAspect", [](dart::dynamics::UniversalJoint *self) -> std::unique_ptr<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::UniversalJoint, dart::dynamics::detail::UniversalJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >::Aspect> { return self->releaseUniversalJointAspect(); })
.def("setProperties", [](dart::dynamics::UniversalJoint *self, const dart::dynamics::UniversalJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::UniversalJoint *self, const dart::dynamics::UniversalJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setAspectProperties", [](dart::dynamics::UniversalJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::UniversalJoint, dart::dynamics::detail::UniversalJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getUniversalJointProperties", [](const dart::dynamics::UniversalJoint *self) -> dart::dynamics::UniversalJoint::Properties { return self->getUniversalJointProperties(); })
.def("copy", [](dart::dynamics::UniversalJoint *self, const dart::dynamics::UniversalJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::UniversalJoint *self, const dart::dynamics::UniversalJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::UniversalJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("isCyclic", [](const dart::dynamics::UniversalJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, (::boost::python::arg("_index")))
.def("setAxis1", [](dart::dynamics::UniversalJoint *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis1(_axis); }, (::boost::python::arg("_axis")))
.def("setAxis2", [](dart::dynamics::UniversalJoint *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis2(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis1", [](const dart::dynamics::UniversalJoint *self) -> const Eigen::Vector3d & { return self->getAxis1(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getAxis2", [](const dart::dynamics::UniversalJoint *self) -> const Eigen::Vector3d & { return self->getAxis2(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getRelativeJacobianStatic", [](const dart::dynamics::UniversalJoint *self, const Eigen::Vector2d & _positions) -> Eigen::Matrix<double, 6, 2> { return self->getRelativeJacobianStatic(_positions); }, (::boost::python::arg("_positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::UniversalJoint::getStaticType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
