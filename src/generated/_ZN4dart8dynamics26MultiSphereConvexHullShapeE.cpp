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

void _ZN4dart8dynamics26MultiSphereConvexHullShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::MultiSphereConvexHullShape, ::boost::python::bases<dart::dynamics::Shape > >("MultiSphereConvexHullShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](const dart::dynamics::MultiSphereConvexHullShape::Spheres & spheres) -> dart::dynamics::MultiSphereConvexHullShape * { return new dart::dynamics::MultiSphereConvexHullShape(spheres); }, ::boost::python::default_call_policies(), (::boost::python::arg("spheres"))))
.def("getType", [](const dart::dynamics::MultiSphereConvexHullShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("addSpheres", [](dart::dynamics::MultiSphereConvexHullShape *self, const dart::dynamics::MultiSphereConvexHullShape::Spheres & spheres) -> void { return self->addSpheres(spheres); }, (::boost::python::arg("spheres")))
.def("addSphere", [](dart::dynamics::MultiSphereConvexHullShape *self, const dart::dynamics::MultiSphereConvexHullShape::Sphere & sphere) -> void { return self->addSphere(sphere); }, (::boost::python::arg("sphere")))
.def("addSphere", [](dart::dynamics::MultiSphereConvexHullShape *self, double radius, const Eigen::Vector3d & position) -> void { return self->addSphere(radius, position); }, (::boost::python::arg("radius"), ::boost::python::arg("position")))
.def("removeAllSpheres", [](dart::dynamics::MultiSphereConvexHullShape *self) -> void { return self->removeAllSpheres(); })
.def("getNumSpheres", [](const dart::dynamics::MultiSphereConvexHullShape *self) -> std::size_t { return self->getNumSpheres(); })
.def("computeInertia", [](const dart::dynamics::MultiSphereConvexHullShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::MultiSphereConvexHullShape::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.staticmethod("getStaticType")
;
}

/* footer */
