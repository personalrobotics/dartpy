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

void _ZN4dart8dynamics9ConeShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::ConeShape, ::boost::python::bases<dart::dynamics::Shape > >("ConeShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](double radius, double height) -> dart::dynamics::ConeShape * { return new dart::dynamics::ConeShape(radius, height); }, ::boost::python::default_call_policies(), (::boost::python::arg("radius"), ::boost::python::arg("height"))))
.def("getType", [](const dart::dynamics::ConeShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("getRadius", [](const dart::dynamics::ConeShape *self) -> double { return self->getRadius(); })
.def("setRadius", [](dart::dynamics::ConeShape *self, double radius) -> void { return self->setRadius(radius); }, (::boost::python::arg("radius")))
.def("getHeight", [](const dart::dynamics::ConeShape *self) -> double { return self->getHeight(); })
.def("setHeight", [](dart::dynamics::ConeShape *self, double height) -> void { return self->setHeight(height); }, (::boost::python::arg("height")))
.def("computeInertia", [](const dart::dynamics::ConeShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::ConeShape::getStaticType(); }, ::boost::python::return_value_policy<::boost::python::copy_const_reference >())
.def("computeVolume", [](double radius, double height) -> double { return dart::dynamics::ConeShape::computeVolume(radius, height); }, (::boost::python::arg("radius"), ::boost::python::arg("height")))
.def("computeInertia", [](double radius, double height, double mass) -> Eigen::Matrix3d { return dart::dynamics::ConeShape::computeInertia(radius, height, mass); }, (::boost::python::arg("radius"), ::boost::python::arg("height"), ::boost::python::arg("mass")))
.staticmethod("computeVolume")
.staticmethod("getStaticType")
;
}

/* footer */
