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

void _ZN4dart8dynamics13RevoluteJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::RevoluteJoint, ::boost::noncopyable >("RevoluteJoint", boost::python::no_init)
.def("hasRevoluteJointAspect", [](const dart::dynamics::RevoluteJoint *self) -> bool { return self->hasRevoluteJointAspect(); })
.def("getRevoluteJointAspect", [](dart::dynamics::RevoluteJoint *self) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::RevoluteJoint, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect * { return self->getRevoluteJointAspect(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getRevoluteJointAspect", [](dart::dynamics::RevoluteJoint *self, const bool createIfNull) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::RevoluteJoint, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect * { return self->getRevoluteJointAspect(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setRevoluteJointAspect", [](dart::dynamics::RevoluteJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::RevoluteJoint, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect * aspect) -> void { return self->setRevoluteJointAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removeRevoluteJointAspect", [](dart::dynamics::RevoluteJoint *self) -> void { return self->removeRevoluteJointAspect(); })
.def("releaseRevoluteJointAspect", [](dart::dynamics::RevoluteJoint *self) -> std::unique_ptr<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::RevoluteJoint, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect> { return self->releaseRevoluteJointAspect(); })
.def("setProperties", [](dart::dynamics::RevoluteJoint *self, const dart::dynamics::RevoluteJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::RevoluteJoint *self, const dart::dynamics::RevoluteJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setAspectProperties", [](dart::dynamics::RevoluteJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::RevoluteJoint, dart::dynamics::detail::RevoluteJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getRevoluteJointProperties", [](const dart::dynamics::RevoluteJoint *self) -> dart::dynamics::RevoluteJoint::Properties { return self->getRevoluteJointProperties(); })
.def("copy", [](dart::dynamics::RevoluteJoint *self, const dart::dynamics::RevoluteJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::RevoluteJoint *self, const dart::dynamics::RevoluteJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::RevoluteJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", [](const dart::dynamics::RevoluteJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, (::boost::python::arg("_index")))
.def("setAxis", [](dart::dynamics::RevoluteJoint *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis", [](const dart::dynamics::RevoluteJoint *self) -> const Eigen::Vector3d & { return self->getAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeJacobianStatic", [](const dart::dynamics::RevoluteJoint *self, const dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> >::Vector & positions) -> dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> >::JacobianMatrix { return self->getRelativeJacobianStatic(positions); }, (::boost::python::arg("positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::RevoluteJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
