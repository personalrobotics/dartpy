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

void _ZN4dart8dynamics10ScrewJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ScrewJoint, ::boost::noncopyable >("ScrewJoint", boost::python::no_init)
.def("hasScrewJointAspect", [](const dart::dynamics::ScrewJoint *self) -> bool { return self->hasScrewJointAspect(); })
.def("getScrewJointAspect", [](dart::dynamics::ScrewJoint *self) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::ScrewJoint, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect * { return self->getScrewJointAspect(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getScrewJointAspect", [](dart::dynamics::ScrewJoint *self, const bool createIfNull) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::ScrewJoint, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect * { return self->getScrewJointAspect(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setScrewJointAspect", [](dart::dynamics::ScrewJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::ScrewJoint, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect * aspect) -> void { return self->setScrewJointAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removeScrewJointAspect", [](dart::dynamics::ScrewJoint *self) -> void { return self->removeScrewJointAspect(); })
.def("releaseScrewJointAspect", [](dart::dynamics::ScrewJoint *self) -> std::unique_ptr<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::ScrewJoint, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect> { return self->releaseScrewJointAspect(); })
.def("setProperties", [](dart::dynamics::ScrewJoint *self, const dart::dynamics::ScrewJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::ScrewJoint *self, const dart::dynamics::ScrewJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setAspectProperties", [](dart::dynamics::ScrewJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::ScrewJoint, dart::dynamics::detail::ScrewJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getScrewJointProperties", [](const dart::dynamics::ScrewJoint *self) -> dart::dynamics::ScrewJoint::Properties { return self->getScrewJointProperties(); })
.def("copy", [](dart::dynamics::ScrewJoint *self, const dart::dynamics::ScrewJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::ScrewJoint *self, const dart::dynamics::ScrewJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::ScrewJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", [](const dart::dynamics::ScrewJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, (::boost::python::arg("_index")))
.def("setAxis", [](dart::dynamics::ScrewJoint *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis", [](const dart::dynamics::ScrewJoint *self) -> const Eigen::Vector3d & { return self->getAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setPitch", [](dart::dynamics::ScrewJoint *self, double _pitch) -> void { return self->setPitch(_pitch); }, (::boost::python::arg("_pitch")))
.def("getPitch", [](const dart::dynamics::ScrewJoint *self) -> double { return self->getPitch(); })
.def("getRelativeJacobianStatic", [](const dart::dynamics::ScrewJoint *self, const dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> >::Vector & positions) -> dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> >::JacobianMatrix { return self->getRelativeJacobianStatic(positions); }, (::boost::python::arg("positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::ScrewJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
