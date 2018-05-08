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

void _ZN4dart8dynamics13CylinderShapeE()
{
::boost::python::object parent_object(::boost::python::scope().attr("dynamics"));
::boost::python::scope parent_scope(parent_object);

::boost::python::class_<dart::dynamics::CylinderShape, std::shared_ptr<dart::dynamics::CylinderShape>, ::boost::python::bases<dart::dynamics::Shape > >("CylinderShape", boost::python::no_init)
.def("__init__", ::boost::python::make_constructor([](double _radius, double _height) -> dart::dynamics::CylinderShape * { return new dart::dynamics::CylinderShape(_radius, _height); }, ::boost::python::default_call_policies(), (::boost::python::arg("_radius"), ::boost::python::arg("_height"))))
.def("getType", [](const dart::dynamics::CylinderShape *self) -> const std::string & { return self->getType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("getRadius", [](const dart::dynamics::CylinderShape *self) -> double { return self->getRadius(); })
.def("setRadius", [](dart::dynamics::CylinderShape *self, double _radius) -> void { return self->setRadius(_radius); }, (::boost::python::arg("_radius")))
.def("getHeight", [](const dart::dynamics::CylinderShape *self) -> double { return self->getHeight(); })
.def("setHeight", [](dart::dynamics::CylinderShape *self, double _height) -> void { return self->setHeight(_height); }, (::boost::python::arg("_height")))
.def("computeInertia", [](const dart::dynamics::CylinderShape *self, double mass) -> Eigen::Matrix3d { return self->computeInertia(mass); }, (::boost::python::arg("mass")))
.def("getStaticType", []() -> const std::string & { return dart::dynamics::CylinderShape::getStaticType(); }, ::boost::python::return_value_policy<boost::python::copy_const_reference >())
.def("computeVolume", [](double radius, double height) -> double { return dart::dynamics::CylinderShape::computeVolume(radius, height); }, (::boost::python::arg("radius"), ::boost::python::arg("height")))
.def("computeInertia", [](double radius, double height, double mass) -> Eigen::Matrix3d { return dart::dynamics::CylinderShape::computeInertia(radius, height, mass); }, (::boost::python::arg("radius"), ::boost::python::arg("height"), ::boost::python::arg("mass")))
.staticmethod("computeVolume")
.staticmethod("getStaticType")
;
}

/* footer */
