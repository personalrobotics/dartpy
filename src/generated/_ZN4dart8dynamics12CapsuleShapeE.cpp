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

void _ZN4dart8dynamics12CapsuleShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::CapsuleShape, ::boost::python::bases<dart::dynamics::Shape > >("CapsuleShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](double radius, double height) -> dart::dynamics::CapsuleShape * { return new dart::dynamics::CapsuleShape(radius, height); }, ::boost::python::default_call_policies(), (::boost::python::arg("radius"), ::boost::python::arg("height"))))
.def("getType", [](const dart::dynamics::CapsuleShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getRadius", [](const dart::dynamics::CapsuleShape *self) -> double { return self->getRadius(); })
.def("setRadius", [](dart::dynamics::CapsuleShape *self, double radius) -> void { return self->setRadius(radius); }, (::boost::python::arg("radius")))
.def("getHeight", [](const dart::dynamics::CapsuleShape *self) -> double { return self->getHeight(); })
.def("setHeight", [](dart::dynamics::CapsuleShape *self, double height) -> void { return self->setHeight(height); }, (::boost::python::arg("height")))
.def("computeInertia", [](const dart::dynamics::CapsuleShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::CapsuleShape::getStaticType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("computeVolume", [](double radius, double height) -> double { return dart::dynamics::CapsuleShape::computeVolume(radius, height); }, (::boost::python::arg("radius"), ::boost::python::arg("height")))
.def("computeInertia", [](double radius, double height, double mass) -> Eigen::Matrix3d { return dart::dynamics::CapsuleShape::computeInertia(radius, height, mass); }, (::boost::python::arg("radius"), ::boost::python::arg("height"), ::boost::python::arg("mass")))
.staticmethod("computeVolume")
.staticmethod("getStaticType")
;
}

/* footer */
