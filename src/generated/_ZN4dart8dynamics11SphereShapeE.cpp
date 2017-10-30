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

void _ZN4dart8dynamics11SphereShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::SphereShape, ::boost::python::bases<dart::dynamics::Shape > >("SphereShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](double radius) -> dart::dynamics::SphereShape * { return new dart::dynamics::SphereShape(radius); }, ::boost::python::default_call_policies(), (::boost::python::arg("radius"))))
.def("getType", [](const dart::dynamics::SphereShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("setRadius", [](dart::dynamics::SphereShape *self, double radius) -> void { return self->setRadius(radius); }, (::boost::python::arg("radius")))
.def("getRadius", [](const dart::dynamics::SphereShape *self) -> double { return self->getRadius(); })
.def("computeInertia", [](const dart::dynamics::SphereShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::SphereShape::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("computeVolume", [](double radius) -> double { return dart::dynamics::SphereShape::computeVolume(radius); }, (::boost::python::arg("radius")))
.def("computeInertia", [](double radius, double mass) -> Eigen::Matrix3d { return dart::dynamics::SphereShape::computeInertia(radius, mass); }, (::boost::python::arg("radius"), ::boost::python::arg("mass")))
.staticmethod("computeVolume")
.staticmethod("getStaticType")
;
}

/* footer */
