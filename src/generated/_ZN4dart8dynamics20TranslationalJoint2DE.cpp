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

void _ZN4dart8dynamics20TranslationalJoint2DE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::TranslationalJoint2D, ::boost::noncopyable, ::boost::python::bases<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > > > >("TranslationalJoint2D", boost::python::no_init)
.def("hasTranslationalJoint2DAspect", [](const dart::dynamics::TranslationalJoint2D *self) -> bool { return self->hasTranslationalJoint2DAspect(); })
.def("getTranslationalJoint2DAspect", [](dart::dynamics::TranslationalJoint2D *self) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >::Aspect * { return self->getTranslationalJoint2DAspect(); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >())
.def("getTranslationalJoint2DAspect", [](dart::dynamics::TranslationalJoint2D *self, const bool createIfNull) -> dart::common::EmbedPropertiesOnTopOf<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >::Aspect * { return self->getTranslationalJoint2DAspect(createIfNull); }, ::boost::python::return_value_policy<::boost::python::reference_existing_object >(), (::boost::python::arg("createIfNull")))
.def("setTranslationalJoint2DAspect", [](dart::dynamics::TranslationalJoint2D *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >::Aspect * aspect) -> void { return self->setTranslationalJoint2DAspect(aspect); }, (::boost::python::arg("aspect")))
.def("removeTranslationalJoint2DAspect", [](dart::dynamics::TranslationalJoint2D *self) -> void { return self->removeTranslationalJoint2DAspect(); })
.def("releaseTranslationalJoint2DAspect", [](dart::dynamics::TranslationalJoint2D *self) -> std::unique_ptr<dart::common::EmbedPropertiesOnTopOf<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >::Aspect> { return self->releaseTranslationalJoint2DAspect(); })
.def("setProperties", [](dart::dynamics::TranslationalJoint2D *self, const dart::dynamics::TranslationalJoint2D::Properties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("setProperties", [](dart::dynamics::TranslationalJoint2D *self, const dart::dynamics::TranslationalJoint2D::UniqueProperties & properties) -> void { return self->setProperties(properties); }, (::boost::python::arg("properties")))
.def("setAspectProperties", [](dart::dynamics::TranslationalJoint2D *self, const dart::common::EmbedPropertiesOnTopOf<dart::dynamics::TranslationalJoint2D, dart::dynamics::detail::TranslationalJoint2DUniqueProperties, dart::dynamics::GenericJoint<dart::math::RealVectorSpace<2> > >::AspectProperties & properties) -> void { return self->setAspectProperties(properties); }, (::boost::python::arg("properties")))
.def("getTranslationalJoint2DProperties", [](const dart::dynamics::TranslationalJoint2D *self) -> dart::dynamics::TranslationalJoint2D::Properties { return self->getTranslationalJoint2DProperties(); })
.def("copy", [](dart::dynamics::TranslationalJoint2D *self, const dart::dynamics::TranslationalJoint2D & otherJoint) -> void { return self->copy(otherJoint); }, (::boost::python::arg("otherJoint")))
.def("copy", [](dart::dynamics::TranslationalJoint2D *self, const dart::dynamics::TranslationalJoint2D * otherJoint) -> void { return self->copy(otherJoint); }, (::boost::python::arg("otherJoint")))
.def("getType", [](const dart::dynamics::TranslationalJoint2D *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("isCyclic", [](const dart::dynamics::TranslationalJoint2D *self, std::size_t index) -> bool { return self->isCyclic(index); }, (::boost::python::arg("index")))
.def("setXYPlane", [](dart::dynamics::TranslationalJoint2D *self) -> void { return self->setXYPlane(); })
.def("setXYPlane", [](dart::dynamics::TranslationalJoint2D *self, bool renameDofs) -> void { return self->setXYPlane(renameDofs); }, (::boost::python::arg("renameDofs")))
.def("setYZPlane", [](dart::dynamics::TranslationalJoint2D *self) -> void { return self->setYZPlane(); })
.def("setYZPlane", [](dart::dynamics::TranslationalJoint2D *self, bool renameDofs) -> void { return self->setYZPlane(renameDofs); }, (::boost::python::arg("renameDofs")))
.def("setZXPlane", [](dart::dynamics::TranslationalJoint2D *self) -> void { return self->setZXPlane(); })
.def("setZXPlane", [](dart::dynamics::TranslationalJoint2D *self, bool renameDofs) -> void { return self->setZXPlane(renameDofs); }, (::boost::python::arg("renameDofs")))
.def("setArbitraryPlane", [](dart::dynamics::TranslationalJoint2D *self, const Eigen::Vector3d & transAxis1, const Eigen::Vector3d & transAxis2) -> void { return self->setArbitraryPlane(transAxis1, transAxis2); }, (::boost::python::arg("transAxis1"), ::boost::python::arg("transAxis2")))
.def("setArbitraryPlane", [](dart::dynamics::TranslationalJoint2D *self, const Eigen::Vector3d & transAxis1, const Eigen::Vector3d & transAxis2, bool renameDofs) -> void { return self->setArbitraryPlane(transAxis1, transAxis2, renameDofs); }, (::boost::python::arg("transAxis1"), ::boost::python::arg("transAxis2"), ::boost::python::arg("renameDofs")))
.def("getPlaneType", [](const dart::dynamics::TranslationalJoint2D *self) -> dart::dynamics::TranslationalJoint2D::PlaneType { return self->getPlaneType(); })
.def("getTranslationalAxis1", [](const dart::dynamics::TranslationalJoint2D *self) -> Eigen::Vector3d { return self->getTranslationalAxis1(); })
.def("getTranslationalAxis2", [](const dart::dynamics::TranslationalJoint2D *self) -> Eigen::Vector3d { return self->getTranslationalAxis2(); })
.def("getRelativeJacobianStatic", [](const dart::dynamics::TranslationalJoint2D *self, const Eigen::Vector2d & positions) -> Eigen::Matrix<double, 6, 2> { return self->getRelativeJacobianStatic(positions); }, (::boost::python::arg("positions")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::TranslationalJoint2D::getStaticType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
