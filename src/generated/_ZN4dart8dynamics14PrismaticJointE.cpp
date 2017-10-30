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

void _ZN4dart8dynamics14PrismaticJointE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::PrismaticJoint, ::boost::noncopyable >("PrismaticJoint", boost::python::no_init)
.def("hasPrismaticJointAspect", [](const dart::dynamics::PrismaticJoint *self) -> bool { return self->hasPrismaticJointAspect(); })
.def("getPrismaticJointAspect", [](dart::dynamics::PrismaticJoint *self) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::PrismaticJoint, dart::dynamics::detail::PrismaticJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect * { return self->getPrismaticJointAspect(); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >())
.def("getPrismaticJointAspect", [](dart::dynamics::PrismaticJoint *self, const bool createIfNull) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::PrismaticJoint, dart::dynamics::detail::PrismaticJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect * { return self->getPrismaticJointAspect(createIfNull); }, ::boost::python::return_value_policy<boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setPrismaticJointAspect", [](dart::dynamics::PrismaticJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::PrismaticJoint, dart::dynamics::detail::PrismaticJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect * aspect) -> void { return self->setPrismaticJointAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removePrismaticJointAspect", [](dart::dynamics::PrismaticJoint *self) -> void { return self->removePrismaticJointAspect(); })
.def("releasePrismaticJointAspect", [](dart::dynamics::PrismaticJoint *self) -> std::unique_ptr<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::PrismaticJoint, dart::dynamics::detail::PrismaticJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::Aspect> { return self->releasePrismaticJointAspect(); })
.def("setProperties", [](dart::dynamics::PrismaticJoint *self, const dart::dynamics::PrismaticJoint::Properties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setProperties", [](dart::dynamics::PrismaticJoint *self, const dart::dynamics::PrismaticJoint::UniqueProperties & _properties) -> void { return self->setProperties(_properties); }, (::boost::python::arg("_properties")))
.def("setAspectProperties", [](dart::dynamics::PrismaticJoint *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::PrismaticJoint, dart::dynamics::detail::PrismaticJointUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> > >::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getPrismaticJointProperties", [](const dart::dynamics::PrismaticJoint *self) -> dart::dynamics::PrismaticJoint::Properties { return self->getPrismaticJointProperties(); })
.def("copy", [](dart::dynamics::PrismaticJoint *self, const dart::dynamics::PrismaticJoint & _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("copy", [](dart::dynamics::PrismaticJoint *self, const dart::dynamics::PrismaticJoint * _otherJoint) -> void { return self->copy(_otherJoint); }, (::boost::python::arg("_otherJoint")))
.def("getType", [](const dart::dynamics::PrismaticJoint *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("isCyclic", [](const dart::dynamics::PrismaticJoint *self, std::size_t _index) -> bool { return self->isCyclic(_index); }, (::boost::python::arg("_index")))
.def("setAxis", [](dart::dynamics::PrismaticJoint *self, const Eigen::Vector3d & _axis) -> void { return self->setAxis(_axis); }, (::boost::python::arg("_axis")))
.def("getAxis", [](const dart::dynamics::PrismaticJoint *self) -> const Eigen::Vector3d & { return self->getAxis(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRelativeJacobianStatic", [](const dart::dynamics::PrismaticJoint *self, const dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> >::Vector & positions) -> dart::dynamics::GenericJoint<dart::math::RealVectorSpace<1> >::JacobianMatrix { return self->getRelativeJacobianStatic(positions); }, (::boost::python::arg("positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::PrismaticJoint::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
